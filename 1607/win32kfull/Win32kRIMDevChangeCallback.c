/*
 * XREFs of Win32kRIMDevChangeCallback @ 0x1C00E2AC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0052A90 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0052ABC (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C005EAEC (HMUnlockObject.c)
 *     PostDeviceNotification @ 0x1C00E24AC (PostDeviceNotification.c)
 *     IsPublicPointerDevice @ 0x1C00E2ED4 (IsPublicPointerDevice.c)
 *     ApplyRimDevBackedDeviceSummaryInfomation @ 0x1C00E2EF0 (ApplyRimDevBackedDeviceSummaryInfomation.c)
 *     UpdatePointerDeviceCount @ 0x1C00E4AB0 (UpdatePointerDeviceCount.c)
 *     ?TraceLoggingRimHidDeviceArrivedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0@Z @ 0x1C00E52C4 (-TraceLoggingRimHidDeviceArrivedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0@Z.c)
 *     ?TraceLoggingRimHidDeviceRemovedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0@Z @ 0x1C00E5754 (-TraceLoggingRimHidDeviceRemovedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0@Z.c)
 *     UpdatePointerDeviceSystemMetrics @ 0x1C00E5930 (UpdatePointerDeviceSystemMetrics.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0123D24 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C023B484 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C023B6F8 (-OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 */

void __fastcall Win32kRIMDevChangeCallback(__int64 a1)
{
  __int64 v1; // rsi
  int v2; // ebp
  int v3; // ebx
  unsigned int v4; // r12d
  int v5; // r13d
  struct DEVICEINFO *v7; // rdi
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rdx
  struct DEVICEINFO **v11; // rcx
  struct DEVICEINFO *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r11
  InteractiveControlManager *v16; // rax
  __int64 v17; // rdx
  struct DEVICEINFO *i; // r8
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 updated; // r8
  unsigned __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rbx
  InteractiveControlManager *v27; // rax
  BOOLEAN IsResourceAcquiredExclusiveLite; // [rsp+80h] [rbp+8h]
  char v29; // [rsp+88h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  v3 = gcPointerDevices;
  v4 = 0;
  v5 = 0;
  v7 = (struct DEVICEINFO *)(v1 + 64);
  v8 = *(_QWORD *)(v1 + 544);
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
      v24 = HMCreateHandleForObject(v1 + 64, v10);
      if ( v24 )
      {
        if ( *(_DWORD *)(a1 + 4) == 2 && *(_DWORD *)(v1 + 380) )
        {
          LOBYTE(v23) = 22;
          v25 = HMCreateHandleForObject(v8, v23);
          if ( v25 )
          {
            ++*(_DWORD *)(v25 + 8);
            *(_QWORD *)(v25 + 704) = *(_QWORD *)v24;
            if ( (*(_DWORD *)(v25 + 252) & 0x20) == 0 )
            {
              v26 = *(_QWORD *)(v1 + 544);
              TraceLoggingRimHidDeviceArrivedEvent(
                *(_WORD *)(*(_QWORD *)(v1 + 528) + 40LL),
                *(unsigned __int16 *)(*(_QWORD *)(v1 + 528) + 110LL),
                *(unsigned __int16 *)(*(_QWORD *)(v1 + 528) + 112LL),
                *(_DWORD *)(v26 + 24),
                *(_DWORD *)(v26 + 688),
                *(_DWORD *)(v26 + 24) == 6,
                (struct _UNICODE_STRING *)(v26 + 288),
                (struct _UNICODE_STRING *)(v26 + 1464));
            }
          }
          else
          {
            HMMarkObjectDestroy(v24);
            HMRemoveHandleForObject(v24);
            v24 = 0LL;
          }
        }
        if ( v24 )
        {
          CAutoPushLockEx::CAutoPushLockEx(
            (CAutoPushLockEx *)&v29,
            (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
          *(_QWORD *)(v24 + 56) = gpRimDevBackedDeviceInfoList;
          gpRimDevBackedDeviceInfoList = (struct DEVICEINFO *)v24;
          RawInputManagerDeviceObjectReference(v1);
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v29);
        }
      }
      if ( *(_DWORD *)(v1 + 384) )
      {
        v27 = InteractiveControlManager::Instance();
        InteractiveControlManager::OnDeviceAttach(v27, (struct RawInputManagerDeviceObject *)v1);
      }
      break;
    case 2:
      if ( (unsigned int)IsPublicPointerDevice(v1 + 64, (unsigned int)(*(_DWORD *)a1 - 2), 0LL) )
        updated = (unsigned int)UpdatePointerDeviceCount((unsigned int)v22);
      PostDeviceNotification(0LL, (struct DEVICEINFO *)(v1 + 64), updated, v22, updated);
      v2 = 1;
      break;
    case 3:
      CAutoPushLockEx::CAutoPushLockEx(
        (CAutoPushLockEx *)&v29,
        (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
      for ( i = gpRimDevBackedDeviceInfoList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
      {
        if ( (unsigned int)IsPublicPointerDevice(i, v17, i) )
          --v3;
        if ( i == v7 )
          break;
      }
      if ( (*(_DWORD *)(v1 + 248) & 0x800) != 0 )
      {
        UpdatePointerDeviceCount(2LL);
        PostDeviceNotification(0LL, (struct DEVICEINFO *)(v1 + 64), v19, 2uLL, v3 + 1);
      }
      else
      {
        if ( (unsigned int)IsPublicPointerDevice(v1 + 64, v17, i) )
        {
          v4 = v3 + 1;
          UpdatePointerDeviceCount(2LL);
        }
        PostDeviceNotification(0LL, (struct DEVICEINFO *)(v1 + 64), v20, 2uLL, v4);
      }
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v29);
      break;
    case 4:
      CAutoPushLockEx::CAutoPushLockEx(
        (CAutoPushLockEx *)&v29,
        (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
      v11 = &gpRimDevBackedDeviceInfoList;
      if ( !gpRimDevBackedDeviceInfoList )
      {
LABEL_25:
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v29);
        if ( v5 )
          UpdatePointerDeviceSystemMetrics(0LL);
        if ( *(_DWORD *)(v1 + 384) )
        {
          v16 = InteractiveControlManager::Instance();
          InteractiveControlManager::OnDeviceRemoval(v16, (struct RawInputManagerDeviceObject *)v1);
        }
        break;
      }
      while ( 1 )
      {
        v12 = *v11;
        if ( *v11 == v7 )
          break;
        v11 = (struct DEVICEINFO **)((char *)v12 + 56);
        if ( !*((_QWORD *)v12 + 7) )
          goto LABEL_25;
      }
      *v11 = *(struct DEVICEINFO **)(v1 + 120);
      *(_QWORD *)(v1 + 120) = 0LL;
      RawInputManagerDeviceObjectDereference(*(_QWORD *)(a1 + 16));
      if ( *(_DWORD *)(a1 + 4) == 2 && *(_DWORD *)(v1 + 380) )
      {
        if ( (*(_DWORD *)(v8 + 252) & 0x20) == 0 )
        {
          v15 = *(_QWORD *)(v1 + 544);
          TraceLoggingRimHidDeviceRemovedEvent(
            *(_WORD *)(*(_QWORD *)(v1 + 528) + 40LL),
            *(unsigned __int16 *)(*(_QWORD *)(v1 + 528) + 110LL),
            *(unsigned __int16 *)(*(_QWORD *)(v1 + 528) + 112LL),
            *(_DWORD *)(v15 + 24),
            *(_DWORD *)(v15 + 688),
            *(_DWORD *)(v15 + 24) == 6,
            (struct _UNICODE_STRING *)(v15 + 288),
            (struct _UNICODE_STRING *)(v15 + 1464));
        }
        if ( (*(_DWORD *)(v1 + 248) & 0x800) != 0 || (unsigned int)IsPublicPointerDevice(v1 + 64, v13, v14) )
          v5 = 1;
        HMUnlockObject(v8);
        if ( *(_DWORD *)(v8 + 8) || !(unsigned int)HMMarkObjectDestroy(v8) )
          goto LABEL_24;
        HMRemoveHandleForObject(v8);
      }
      if ( (unsigned int)HMMarkObjectDestroy(v1 + 64) )
        HMRemoveHandleForObject(v1 + 64);
LABEL_24:
      v2 = 1;
      goto LABEL_25;
  }
  if ( !IsResourceAcquiredExclusiveLite )
    LeaveDeviceInfoListCrit_();
  if ( v2 == 1 )
    ApplyRimDevBackedDeviceSummaryInfomation(*(unsigned int *)(a1 + 4));
}
