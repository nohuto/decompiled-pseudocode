/*
 * XREFs of Win32kRIMDevChangeCallback @ 0x1C0094F50
 * Callers:
 *     <none>
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C003C6C4 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C003C6F0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     PostDeviceNotification @ 0x1C0089D90 (PostDeviceNotification.c)
 *     ?TraceLoggingRIMHIDDeviceArrivedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0@Z @ 0x1C00948AC (-TraceLoggingRIMHIDDeviceArrivedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0@Z.c)
 *     ApplyRimDevBackedDeviceSummaryInfomation @ 0x1C00952BC (ApplyRimDevBackedDeviceSummaryInfomation.c)
 *     IsPublicPointerDevice @ 0x1C0095E60 (IsPublicPointerDevice.c)
 *     UpdatePointerDeviceCount @ 0x1C0095E7C (UpdatePointerDeviceCount.c)
 *     UpdatePointerDeviceSystemMetrics @ 0x1C0095EA0 (UpdatePointerDeviceSystemMetrics.c)
 *     HMUnlockObject @ 0x1C009684C (HMUnlockObject.c)
 */

void __fastcall Win32kRIMDevChangeCallback(__int64 a1)
{
  __int64 v1; // rbp
  int v2; // esi
  int v3; // edi
  unsigned int v4; // r12d
  int v5; // r13d
  struct DEVICEINFO *v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rdx
  struct DEVICEINFO **v10; // rcx
  struct DEVICEINFO *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  struct DEVICEINFO *i; // r8
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 updated; // r8
  unsigned __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rbx
  BOOLEAN IsResourceAcquiredExclusiveLite; // [rsp+80h] [rbp+8h]
  char v25; // [rsp+88h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  v3 = gcPointerDevices;
  v4 = 0;
  v5 = 0;
  v7 = (struct DEVICEINFO *)(v1 + 64);
  v8 = *(_QWORD *)(v1 + 480);
  if ( (*(_DWORD *)(v1 + 240) & 0x2000) != 0 )
    return;
  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
  if ( !IsResourceAcquiredExclusiveLite )
    EnterDeviceInfoListCrit_();
  v9 = (unsigned int)(*(_DWORD *)a1 - 1);
  switch ( *(_DWORD *)a1 )
  {
    case 1:
      LOBYTE(v9) = 19;
      v21 = HMCreateHandleForObject(v1 + 64, v9);
      if ( !v21 )
        break;
      if ( *(_DWORD *)(a1 + 4) == 2 && *(_DWORD *)(v1 + 372) )
      {
        LOBYTE(v20) = 22;
        v22 = HMCreateHandleForObject(v8, v20);
        if ( v22 )
        {
          ++*(_DWORD *)(v22 + 8);
          *(_QWORD *)(v22 + 736) = *(_QWORD *)v21;
          if ( (*(_DWORD *)(v22 + 252) & 0x20) == 0 )
          {
            v23 = *(_QWORD *)(v1 + 480);
            TraceLoggingRIMHIDDeviceArrivedEvent(
              (const struct _TlgProvider_t *)*(unsigned __int16 *)(*(_QWORD *)(v1 + 464) + 40LL),
              *(unsigned __int16 *)(*(_QWORD *)(v1 + 464) + 110LL),
              *(unsigned __int16 *)(*(_QWORD *)(v1 + 464) + 112LL),
              *(_DWORD *)(v23 + 24),
              *(_DWORD *)(v23 + 720),
              *(_DWORD *)(v23 + 24) == 7,
              (struct _UNICODE_STRING *)(v23 + 288),
              (TraceLoggingHProvider)(v23 + 1504));
          }
        }
        else
        {
          HMMarkObjectDestroy(v21);
          HMRemoveHandleForObject(v21);
          v21 = 0LL;
        }
      }
      if ( !v21 )
        break;
      CAutoPushLockEx::CAutoPushLockEx(
        (CAutoPushLockEx *)&v25,
        (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
      *(_QWORD *)(v21 + 56) = gpRimDevBackedDeviceInfoList;
      gpRimDevBackedDeviceInfoList = (struct DEVICEINFO *)v21;
      RawInputManagerDeviceObjectReference(v1);
      goto LABEL_49;
    case 2:
      if ( (unsigned int)IsPublicPointerDevice(v1 + 64, (unsigned int)(*(_DWORD *)a1 - 2), 0LL) )
        updated = (unsigned int)UpdatePointerDeviceCount((unsigned int)v19);
      PostDeviceNotification(0LL, (struct DEVICEINFO *)(v1 + 64), updated, v19, updated);
      v2 = 1;
      break;
    case 3:
      CAutoPushLockEx::CAutoPushLockEx(
        (CAutoPushLockEx *)&v25,
        (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
      for ( i = gpRimDevBackedDeviceInfoList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
      {
        if ( (unsigned int)IsPublicPointerDevice(i, v14, i) )
          --v3;
        if ( i == v7 )
          break;
      }
      if ( (*(_DWORD *)(v1 + 240) & 0x800) != 0 )
      {
        UpdatePointerDeviceCount(2LL);
        PostDeviceNotification(0LL, (struct DEVICEINFO *)(v1 + 64), v16, 2uLL, v3 + 1);
      }
      else
      {
        if ( (unsigned int)IsPublicPointerDevice(v1 + 64, v14, i) )
        {
          v4 = v3 + 1;
          UpdatePointerDeviceCount(2LL);
        }
        PostDeviceNotification(0LL, (struct DEVICEINFO *)(v1 + 64), v17, 2uLL, v4);
      }
LABEL_49:
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v25);
      break;
    case 4:
      CAutoPushLockEx::CAutoPushLockEx(
        (CAutoPushLockEx *)&v25,
        (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
      v10 = &gpRimDevBackedDeviceInfoList;
      if ( !gpRimDevBackedDeviceInfoList )
        goto LABEL_23;
      while ( 1 )
      {
        v11 = *v10;
        if ( *v10 == v7 )
          break;
        v10 = (struct DEVICEINFO **)((char *)v11 + 56);
        if ( !*((_QWORD *)v11 + 7) )
          goto LABEL_23;
      }
      *v10 = *(struct DEVICEINFO **)(v1 + 120);
      *(_QWORD *)(v1 + 120) = 0LL;
      RawInputManagerDeviceObjectDereference(*(_QWORD *)(a1 + 16));
      if ( *(_DWORD *)(a1 + 4) == 2 && *(_DWORD *)(v1 + 372) )
      {
        if ( (*(_DWORD *)(v1 + 240) & 0x800) != 0 || (unsigned int)IsPublicPointerDevice(v1 + 64, v12, v13) )
          v5 = 1;
        HMUnlockObject(v8);
        if ( *(_DWORD *)(v8 + 8) || !(unsigned int)HMMarkObjectDestroy(v8) )
          goto LABEL_22;
        HMRemoveHandleForObject(v8);
      }
      if ( (unsigned int)HMMarkObjectDestroy(v1 + 64) )
        HMRemoveHandleForObject(v1 + 64);
LABEL_22:
      v2 = 1;
LABEL_23:
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v25);
      if ( v5 )
        UpdatePointerDeviceSystemMetrics(0LL);
      break;
  }
  if ( !IsResourceAcquiredExclusiveLite )
    LeaveDeviceInfoListCrit_();
  if ( v2 == 1 )
    ApplyRimDevBackedDeviceSummaryInfomation(*(unsigned int *)(a1 + 4));
}
