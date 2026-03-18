/*
 * XREFs of UpdatePointerDeviceSystemMetrics @ 0x1C00E5930
 * Callers:
 *     Win32kRIMDevChangeCallback @ 0x1C00E2AC0 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0052A90 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0052ABC (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     AddRemovePointerDeviceSystemMetricKey @ 0x1C00E5A98 (AddRemovePointerDeviceSystemMetricKey.c)
 *     ?GetPointerDeviceType@@YAXAEAKPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C00E5B90 (-GetPointerDeviceType@@YAXAEAKPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     AddRemovePointerDevicePresence @ 0x1C00E5BB4 (AddRemovePointerDevicePresence.c)
 */

__int64 __fastcall UpdatePointerDeviceSystemMetrics(struct tagHID_POINTER_DEVICE_INFO *a1)
{
  __int64 result; // rax
  unsigned int v2; // ebx
  unsigned int v3; // edi
  __int64 v5; // rdx
  unsigned int v6; // ebx
  unsigned int v7; // eax
  unsigned int v8; // edi
  struct DEVICEINFO *i; // r8
  __int64 v10; // rdx
  __int64 v11; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF
  unsigned int v13; // [rsp+30h] [rbp+8h] BYREF
  char v14; // [rsp+38h] [rbp+10h] BYREF

  result = (__int64)&retaddr;
  v2 = 0;
  v3 = 0;
  v13 = 0;
  if ( a1 )
  {
    if ( *((_DWORD *)a1 + 6) == 7 )
      return result;
    GetPointerDeviceType(&v13, a1);
    v6 = v13;
    if ( *(_DWORD *)(v5 + 688) > 1u )
    {
      v6 = v13 | 0x40;
      v3 = *(_DWORD *)(v5 + 688);
    }
    v2 = gdwHardwareTypes | v6;
  }
  else
  {
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v14, (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
    for ( i = gpRimDevBackedDeviceInfoList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
    {
      if ( *((_DWORD *)i + 79) )
      {
        if ( *((char *)i + 66) >= 0 && (*((_DWORD *)i + 46) & 0x100) == 0 )
        {
          v10 = *((_QWORD *)i + 60);
          if ( *(_DWORD *)(v10 + 24) != 7 )
          {
            GetPointerDeviceType(&v13, (struct tagHID_POINTER_DEVICE_INFO *)v10);
            v2 = v13;
            if ( *(_DWORD *)(v11 + 688) > v3 )
            {
              v2 = v13 | 0x40;
              v3 = *(_DWORD *)(v11 + 688);
              v13 |= 0x40u;
            }
          }
        }
      }
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v14);
  }
  v7 = gCurrentMaxCount;
  if ( !a1 )
  {
    if ( gCurrentMaxCount == v3 )
      goto LABEL_8;
LABEL_28:
    v7 = v3;
    gCurrentMaxCount = v3;
    goto LABEL_8;
  }
  if ( gCurrentMaxCount < v3 )
    goto LABEL_28;
LABEL_8:
  if ( v2 )
    v2 |= 0x80u;
  if ( v7 > 0xFFFF )
    v7 = 0xFFFF;
  v8 = (v7 << 8) | v2 & 0xCF;
  result = gdwSystemMetrics;
  if ( v8 != gdwSystemMetrics )
  {
    if ( a1 )
      v8 |= (unsigned __int8)gdwSystemMetrics;
    AddRemovePointerDeviceSystemMetricKey(v8, 1LL);
    AddRemovePointerDeviceSystemMetricKey(v8, 0LL);
    return AddRemovePointerDevicePresence(v2);
  }
  return result;
}
