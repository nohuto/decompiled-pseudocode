/*
 * XREFs of UsbhLinkPdoDeviceHandle @ 0x1C0009738
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x1C0003774 (UsbhSyncResetDeviceInternal.c)
 *     UsbhCreateDevice @ 0x1C0009548 (UsbhCreateDevice.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbhLinkPdoDeviceHandle(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r15
  __int64 v7; // rdi
  KIRQL v8; // r12
  __int64 v9; // rax
  int v10; // ebx

  v6 = FdoExt(a1);
  v7 = PdoExt(a2);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 3720));
  Log(a1, 256, 1819168836, a3, a2);
  v9 = FdoExt(a1);
  if ( *(_QWORD *)(v9 + 4464) )
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(v9 + 4464))(
            *(_QWORD *)(v9 + 4232),
            a3,
            a2,
            1212441712LL);
  else
    v10 = -1073741822;
  Log(a1, 256, 1819168817, v10, a2);
  if ( v10 >= 0 )
  {
    *(_DWORD *)(v7 + 1144) = 2;
    *(_QWORD *)(v7 + 1152) = a3;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 3720), v8);
  return (unsigned int)v10;
}
