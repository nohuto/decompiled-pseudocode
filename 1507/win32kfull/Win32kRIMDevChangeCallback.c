/*
 * XREFs of Win32kRIMDevChangeCallback @ 0x1C01453D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0012848 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0012874 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     PostDeviceNotification @ 0x1C00790B0 (PostDeviceNotification.c)
 *     HMUnlockObject @ 0x1C00DF9F0 (HMUnlockObject.c)
 *     ApplyRimDevBackedDeviceSummaryInfomation @ 0x1C014573C (ApplyRimDevBackedDeviceSummaryInfomation.c)
 *     IsPublicPointerDevice @ 0x1C0145C6C (IsPublicPointerDevice.c)
 *     ?TraceLoggingRIMHIDDeviceArrivedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0@Z @ 0x1C0145C88 (-TraceLoggingRIMHIDDeviceArrivedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0@Z.c)
 *     UpdatePointerDeviceCount @ 0x1C0145DC4 (UpdatePointerDeviceCount.c)
 *     UpdatePointerDeviceSystemMetrics @ 0x1C0145DF0 (UpdatePointerDeviceSystemMetrics.c)
 */

void __fastcall Win32kRIMDevChangeCallback(__int64 a1)
{
  __int64 v1; // rbp
  int v2; // esi
  int v3; // edi
  int v4; // r12d
  int v5; // r13d
  struct DEVICEINFO *v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rdx
  struct DEVICEINFO **v11; // rcx
  struct DEVICEINFO *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  struct DEVICEINFO *i; // r8
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 updated; // r8
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rbx
  BOOLEAN IsResourceAcquiredExclusiveLite; // [rsp+80h] [rbp+8h]
  char v26; // [rsp+88h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  v3 = gcPointerDevices;
  v4 = 0;
  v5 = 0;
  v7 = (struct DEVICEINFO *)(v1 + 64);
  v8 = *(_QWORD *)(v1 + 480);
  if ( (*(_DWORD *)(v1 + 248) & 0x2000) != 0 )
    return;
  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
  if ( !IsResourceAcquiredExclusiveLite )
    EnterDeviceInfoListCrit_(v9);
  v10 = (unsigned int)(*(_DWORD *)a1 - 1);
  switch ( *(_DWORD *)a1 )
  {
    case 1:
      LOBYTE(v10) = 19;
      v22 = HMCreateHandleForObject(v1 + 64, v10);
      if ( !v22 )
        break;
      if ( *(_DWORD *)(a1 + 4) == 2 && *(_DWORD *)(v1 + 380) )
      {
        LOBYTE(v21) = 22;
        v23 = HMCreateHandleForObject(v8, v21);
        if ( v23 )
        {
          ++*(_DWORD *)(v23 + 8);
          v9 = *(_QWORD *)v22;
          *(_QWORD *)(v23 + 720) = *(_QWORD *)v22;
          if ( (*(_DWORD *)(v23 + 236) & 8) == 0 )
          {
            v24 = *(_QWORD *)(v1 + 480);
            TraceLoggingRIMHIDDeviceArrivedEvent(
              *(_WORD *)(*(_QWORD *)(v1 + 464) + 40LL),
              *(unsigned __int16 *)(*(_QWORD *)(v1 + 464) + 110LL),
              *(unsigned __int16 *)(*(_QWORD *)(v1 + 464) + 112LL),
              *(_DWORD *)(v24 + 24),
              *(_DWORD *)(v24 + 704),
              *(_DWORD *)(v24 + 24) == 7,
              (struct _UNICODE_STRING *)(v24 + 272),
              (TraceLoggingHProvider)(v24 + 1488));
          }
        }
        else
        {
          HMMarkObjectDestroy(v22);
          HMRemoveHandleForObject(v22);
          v22 = 0LL;
        }
      }
      if ( !v22 )
        break;
      CAutoPushLockEx::CAutoPushLockEx(
        (CAutoPushLockEx *)&v26,
        (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
      *(_QWORD *)(v22 + 56) = gpRimDevBackedDeviceInfoList;
      gpRimDevBackedDeviceInfoList = (struct DEVICEINFO *)v22;
      RawInputManagerDeviceObjectReference(v1);
      goto LABEL_49;
    case 2:
      if ( (unsigned int)IsPublicPointerDevice(v1 + 64, (unsigned int)(*(_DWORD *)a1 - 2), 0LL) )
        updated = (unsigned int)UpdatePointerDeviceCount((unsigned int)v20);
      PostDeviceNotification(0LL, (struct DEVICEINFO *)(v1 + 64), updated, v20, updated);
      v2 = 1;
      break;
    case 3:
      CAutoPushLockEx::CAutoPushLockEx(
        (CAutoPushLockEx *)&v26,
        (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
      for ( i = gpRimDevBackedDeviceInfoList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
      {
        if ( (unsigned int)IsPublicPointerDevice(i, v15, i) )
          --v3;
        if ( i == v7 )
          break;
      }
      if ( (*(_DWORD *)(v1 + 248) & 0x800) != 0 )
      {
        UpdatePointerDeviceCount(2LL);
        PostDeviceNotification(0LL, (struct DEVICEINFO *)(v1 + 64), v17, 2uLL, v3 + 1);
      }
      else
      {
        if ( (unsigned int)IsPublicPointerDevice(v1 + 64, v15, i) )
        {
          v4 = v3 + 1;
          UpdatePointerDeviceCount(2LL);
        }
        PostDeviceNotification(0LL, (struct DEVICEINFO *)(v1 + 64), v18, 2uLL, v4);
      }
LABEL_49:
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v26);
      break;
    case 4:
      CAutoPushLockEx::CAutoPushLockEx(
        (CAutoPushLockEx *)&v26,
        (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
      v11 = &gpRimDevBackedDeviceInfoList;
      if ( !gpRimDevBackedDeviceInfoList )
        goto LABEL_23;
      while ( 1 )
      {
        v12 = *v11;
        if ( *v11 == v7 )
          break;
        v11 = (struct DEVICEINFO **)((char *)v12 + 56);
        if ( !*((_QWORD *)v12 + 7) )
          goto LABEL_23;
      }
      *v11 = *(struct DEVICEINFO **)(v1 + 120);
      *(_QWORD *)(v1 + 120) = 0LL;
      RawInputManagerDeviceObjectDereference(*(_QWORD *)(a1 + 16));
      if ( *(_DWORD *)(a1 + 4) == 2 && *(_DWORD *)(v1 + 380) )
      {
        if ( (*(_DWORD *)(v1 + 248) & 0x800) != 0 || (unsigned int)IsPublicPointerDevice(v1 + 64, v13, v14) )
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
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v26);
      if ( v5 )
        UpdatePointerDeviceSystemMetrics(0LL);
      break;
  }
  if ( !IsResourceAcquiredExclusiveLite )
    LeaveDeviceInfoListCrit_(v9);
  if ( v2 == 1 )
    ApplyRimDevBackedDeviceSummaryInfomation(*(unsigned int *)(a1 + 4));
}
