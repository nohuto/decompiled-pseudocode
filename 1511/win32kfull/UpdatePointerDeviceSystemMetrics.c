/*
 * XREFs of UpdatePointerDeviceSystemMetrics @ 0x1C0095EA0
 * Callers:
 *     Win32kRIMDevChangeCallback @ 0x1C0094F50 (Win32kRIMDevChangeCallback.c)
 *     CreatePointerDeviceInfo @ 0x1C01C9610 (CreatePointerDeviceInfo.c)
 *     CreatePseudoDigitizerDevice @ 0x1C01DF17C (CreatePseudoDigitizerDevice.c)
 *     ProcessDeviceChanges @ 0x1C01E0120 (ProcessDeviceChanges.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C003C6C4 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C003C6F0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     AddRemovePointerDeviceSystemMetricKey @ 0x1C009601C (AddRemovePointerDeviceSystemMetricKey.c)
 *     ?GetPointerDeviceType@@YAXAEAKPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C0096114 (-GetPointerDeviceType@@YAXAEAKPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     AddRemovePointerDevicePresence @ 0x1C0096138 (AddRemovePointerDevicePresence.c)
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
  struct DEVICEINFO *v9; // r8
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
    if ( *((_DWORD *)a1 + 6) == 8 )
      return result;
    GetPointerDeviceType(&v13, a1);
    v6 = v13;
    if ( *(_DWORD *)(v5 + 720) > 1u )
    {
      v6 = v13 | 0x40;
      v3 = *(_DWORD *)(v5 + 720);
    }
    v2 = gdwHardwareTypes | v6;
  }
  else
  {
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v14, (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
    if ( LODWORD(aDeviceTemplate[154]) )
      v9 = gpRimDevBackedDeviceInfoList;
    else
      v9 = (struct DEVICEINFO *)gpDeviceInfoList;
    while ( v9 )
    {
      if ( *((_DWORD *)v9 + 77) )
      {
        if ( *((char *)v9 + 66) >= 0 && (*((_DWORD *)v9 + 44) & 0x100) == 0 )
        {
          v10 = *((_QWORD *)v9 + 52);
          if ( *(_DWORD *)(v10 + 24) != 8 )
          {
            GetPointerDeviceType(&v13, (struct tagHID_POINTER_DEVICE_INFO *)v10);
            v2 = v13;
            if ( *(_DWORD *)(v11 + 720) > v3 )
            {
              v2 = v13 | 0x40;
              v3 = *(_DWORD *)(v11 + 720);
              v13 |= 0x40u;
            }
          }
        }
      }
      v9 = (struct DEVICEINFO *)*((_QWORD *)v9 + 7);
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v14);
  }
  v7 = gCurrentMaxCount;
  if ( !a1 )
  {
    if ( gCurrentMaxCount == v3 )
      goto LABEL_8;
LABEL_29:
    v7 = v3;
    gCurrentMaxCount = v3;
    goto LABEL_8;
  }
  if ( gCurrentMaxCount < v3 )
    goto LABEL_29;
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
