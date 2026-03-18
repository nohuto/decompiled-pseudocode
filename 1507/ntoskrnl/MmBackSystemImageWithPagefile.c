/*
 * XREFs of MmBackSystemImageWithPagefile @ 0x14058FE4C
 * Callers:
 *     FsRtlSetDriverBacking @ 0x14058FE24 (FsRtlSetDriverBacking.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x140010760 (MiLookupDataTableEntry.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MmReleaseLoadLock @ 0x1404523E8 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140452794 (MmAcquireLoadLock.c)
 *     MiBackSystemImageWithPagefile @ 0x14058FF34 (MiBackSystemImageWithPagefile.c)
 */

__int64 __fastcall MmBackSystemImageWithPagefile(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rdi
  PVOID *v3; // rbx
  __int16 v4; // cx
  struct _KTHREAD *Lock; // rsi
  int v6; // edi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v3 = MiLookupDataTableEntry(BugCheckParameter2, 1);
  ExReleaseResourceLite(&PsLoadedModuleResource);
  v4 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v4;
  if ( !v4
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( !v3 )
    KeBugCheckEx(0x1Au, 0x1239uLL, BugCheckParameter2, 0LL, 0LL);
  Lock = MmAcquireLoadLock();
  if ( (*((_DWORD *)v3 + 49) & 3) != 0 )
  {
    v6 = 0;
  }
  else
  {
    v6 = MiBackSystemImageWithPagefile(v3, 0LL);
    if ( v6 >= 0 )
      *((_DWORD *)v3 + 49) = *((_DWORD *)v3 + 49) & 0xFFFFFFFC | 2;
  }
  MmReleaseLoadLock((__int64)Lock);
  return (unsigned int)v6;
}
