/*
 * XREFs of CreateDeviceInfo @ 0x1C01DE948
 * Callers:
 *     AttachInputDevices @ 0x1C012EE0C (AttachInputDevices.c)
 *     RawInputThread @ 0x1C0143560 (RawInputThread.c)
 *     ?OpenMultiplePortDevice@@YAHK@Z @ 0x1C015A7C8 (-OpenMultiplePortDevice@@YAHK@Z.c)
 *     ?DeviceClassNotify@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@PEAX@Z @ 0x1C01DDC00 (-DeviceClassNotify@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@PEAX@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C0095484 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     IsLegacyTouchPadDevice @ 0x1C0155CF0 (IsLegacyTouchPadDevice.c)
 *     FreeHidDesc @ 0x1C01D359C (FreeHidDesc.c)
 *     HidCreateDeviceInfo @ 0x1C01D3794 (HidCreateDeviceInfo.c)
 *     ?RequestSyncDeviceChange@@YAPEAUDEVICEINFO@@PEAU1@GH@Z @ 0x1C01DE1C8 (-RequestSyncDeviceChange@@YAPEAUDEVICEINFO@@PEAU1@GH@Z.c)
 *     RequestDeviceChange @ 0x1C01E0174 (RequestDeviceChange.c)
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
  v8 = HMAllocObject(0LL, 0LL, v6, aDeviceTemplate[142 * v3]);
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
    v9 = Win32AllocPool(a2->Length, 1886417749LL);
    *(_QWORD *)(v8 + 216) = v9;
    if ( !v9 )
      goto LABEL_10;
    *(_WORD *)(v8 + 210) = a2->Length;
    RtlCopyUnicodeString((PUNICODE_STRING)(v8 + 208), a2);
  }
  *(_QWORD *)(v8 + 112) = v8 + 104;
  *(_QWORD *)(v8 + 104) = v8 + 104;
  *(_BYTE *)(v8 + 48) = v3;
  *(_WORD *)(v8 + 64) |= a3 & 0xDF;
  KernelEvent = CreateKernelEvent(1LL, 0LL);
  *(_QWORD *)(v8 + 72) = KernelEvent;
  if ( KernelEvent )
  {
    EnterDeviceInfoListCrit_(v11);
    if ( (aDeviceTemplate[142 * v3 + 22] & 1) != 0 )
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
      IsLegacyTouchPadDevice((struct _UNICODE_STRING *)v8);
      EtwTraceLegacyTouchPadDetectionStop();
    }
    v20 = 1;
    *(_QWORD *)(v8 + 56) = gpDeviceInfoList;
    gpDeviceInfoList = v8;
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v20);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( ThreadWin32Thread == gptiRit )
      *(_DWORD *)(v8 + 340) |= 1u;
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
  v14 = *(_QWORD *)(v8 + 216);
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
