/*
 * XREFs of ?Read@PC_ENVIRONMENT@@SAJPEAX0K_K@Z @ 0x140575240
 * Callers:
 *     ?ReadSectors@PC_DISK@@QEAAJK_KPEAX@Z @ 0x140147AEC (-ReadSectors@PC_DISK@@QEAAJK_KPEAX@Z.c)
 * Callees:
 *     MmUnlockPages @ 0x140051600 (MmUnlockPages.c)
 *     IoFreeIrp @ 0x140055950 (IoFreeIrp.c)
 *     IoFreeMdl @ 0x140071DB0 (IoFreeMdl.c)
 *     IoSynchronousCallDriver @ 0x1400AAB98 (IoSynchronousCallDriver.c)
 *     IoBuildAsynchronousFsdRequest @ 0x14010AE94 (IoBuildAsynchronousFsdRequest.c)
 */

__int64 __fastcall PC_ENVIRONMENT::Read(PDEVICE_OBJECT DeviceObject, PVOID Buffer, ULONG Length, LARGE_INTEGER a4)
{
  PIRP v5; // rax
  IRP *v6; // rdi
  unsigned int v7; // ebx
  LARGE_INTEGER v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = a4;
  v5 = IoBuildAsynchronousFsdRequest(3u, DeviceObject, Buffer, Length, &v9, 0LL);
  v6 = v5;
  if ( v5 )
  {
    v5->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
    v7 = IoSynchronousCallDriver(DeviceObject, v5);
    MmUnlockPages(v6->MdlAddress);
    IoFreeMdl(v6->MdlAddress);
    IoFreeIrp(v6);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
