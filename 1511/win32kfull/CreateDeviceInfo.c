/*
 * XREFs of CreateDeviceInfo @ 0x1C01DEF4C
 * Callers:
 *     RawInputThread @ 0x1C009B5A0 (RawInputThread.c)
 *     ?OpenMultiplePortDevice@@YAHK@Z @ 0x1C010AC90 (-OpenMultiplePortDevice@@YAHK@Z.c)
 *     AttachInputDevices @ 0x1C014E8A0 (AttachInputDevices.c)
 *     ?DeviceClassNotify@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@PEAX@Z @ 0x1C01DE200 (-DeviceClassNotify@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@PEAX@Z.c)
 * Callees:
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C004AA50 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsLegacyTouchPadDevice @ 0x1C0111110 (IsLegacyTouchPadDevice.c)
 *     FreeHidDesc @ 0x1C01D501C (FreeHidDesc.c)
 *     HidCreateDeviceInfo @ 0x1C01D5214 (HidCreateDeviceInfo.c)
 *     ?RequestSyncDeviceChange@@YAPEAUDEVICEINFO@@PEAU1@GH@Z @ 0x1C01DE7CC (-RequestSyncDeviceChange@@YAPEAUDEVICEINFO@@PEAU1@GH@Z.c)
 *     RequestDeviceChange @ 0x1C01E0784 (RequestDeviceChange.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct DEVICEINFO *__fastcall CreateDeviceInfo(unsigned int a1, const UNICODE_STRING *a2, char a3)
{
  __int64 v3; // rbp
  __int64 v6; // r8
  struct DEVICEINFO *v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 KernelEvent; // rax
  __int64 v11; // rcx
  struct tagHIDDESC *DeviceInfo; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // rcx
  __int64 ThreadWin32Thread; // rcx
  struct DEVICEINFO *v18; // rax
  __int64 v19; // rcx
  char v20; // [rsp+58h] [rbp+20h] BYREF

  v3 = a1;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v20);
  LOBYTE(v6) = 19;
  v7 = 0LL;
  v8 = HMAllocObject(0LL, 0LL, v6);
  if ( !v8 )
  {
    v20 = 1;
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v20);
LABEL_25:
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v20);
    return v7;
  }
  if ( a2->Buffer )
  {
    v9 = Win32AllocPool(a2->Length);
    *(_QWORD *)(v8 + 208) = v9;
    if ( !v9 )
      goto LABEL_10;
    *(_WORD *)(v8 + 202) = a2->Length;
    RtlCopyUnicodeString((PUNICODE_STRING)(v8 + 200), a2);
  }
  *(_QWORD *)(v8 + 104) = v8 + 96;
  *(_QWORD *)(v8 + 96) = v8 + 96;
  *(_BYTE *)(v8 + 48) = v3;
  *(_WORD *)(v8 + 64) |= a3 & 0xDF;
  KernelEvent = CreateKernelEvent(1LL, 0LL);
  *(_QWORD *)(v8 + 72) = KernelEvent;
  if ( KernelEvent )
  {
    EnterDeviceInfoListCrit_(v11);
    if ( (aDeviceTemplate[71 * v3 + 11] & 1) != 0 )
    {
      DeviceInfo = HidCreateDeviceInfo((struct DEVICEINFO *)v8);
      *(_QWORD *)(v8 + 400) = DeviceInfo;
      if ( !DeviceInfo )
      {
        LeaveDeviceInfoListCrit_(v13);
        goto LABEL_10;
      }
    }
    if ( !*(_BYTE *)(v8 + 48) )
    {
      EtwTraceLegacyTouchPadDetectionStart();
      IsLegacyTouchPadDevice((struct DEVICEINFO *)v8);
      EtwTraceLegacyTouchPadDetectionStop();
    }
    v20 = 1;
    *(_QWORD *)(v8 + 56) = gpDeviceInfoList;
    gpDeviceInfoList = v8;
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v20);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( ThreadWin32Thread == gptiRit )
      *(_DWORD *)(v8 + 332) |= 1u;
    if ( (_DWORD)v3 )
    {
      if ( ThreadWin32Thread != gptiRit )
      {
LABEL_23:
        v18 = (struct DEVICEINFO *)RequestDeviceChange((struct DEVICEINFO *)v8);
LABEL_24:
        v7 = v18;
        LeaveDeviceInfoListCrit_(v19);
        goto LABEL_25;
      }
    }
    else if ( ThreadWin32Thread != *((_QWORD *)&gTermIO + 2) )
    {
      goto LABEL_23;
    }
    v18 = RequestSyncDeviceChange((struct DEVICEINFO *)v8);
    goto LABEL_24;
  }
LABEL_10:
  v14 = *(_QWORD *)(v8 + 208);
  if ( v14 )
    Win32FreePool(v14);
  v15 = *(_QWORD **)(v8 + 400);
  if ( v15 )
    FreeHidDesc(v15);
  if ( *(_QWORD *)(v8 + 72) )
  {
    Win32FreePool(*(_QWORD *)(v8 + 72));
    *(_QWORD *)(v8 + 72) = 0LL;
  }
  HMFreeObject(v8);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v20);
  return 0LL;
}
