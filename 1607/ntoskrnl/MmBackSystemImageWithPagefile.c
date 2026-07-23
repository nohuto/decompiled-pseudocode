/*
 * XREFs of MmBackSystemImageWithPagefile @ 0x140550FC8
 * Callers:
 *     FsRtlSetDriverBacking @ 0x140550FA0 (FsRtlSetDriverBacking.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x1400145B0 (MiLookupDataTableEntry.c)
 *     MiReleaseResourceLite @ 0x140082D74 (MiReleaseResourceLite.c)
 *     MiAcquireResourceSharedLite @ 0x1400883F0 (MiAcquireResourceSharedLite.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MmReleaseLoadLock @ 0x140482154 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140482180 (MmAcquireLoadLock.c)
 *     MiBackSystemImageWithPagefile @ 0x140551060 (MiBackSystemImageWithPagefile.c)
 */

__int64 __fastcall MmBackSystemImageWithPagefile(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rbx
  PVOID *v3; // rdi
  struct _KTHREAD *Lock; // rsi
  int v5; // ebx

  CurrentThread = KeGetCurrentThread();
  MiAcquireResourceSharedLite((__int64)CurrentThread);
  v3 = MiLookupDataTableEntry(BugCheckParameter2, 1);
  MiReleaseResourceLite((__int64)CurrentThread);
  if ( !v3 )
    KeBugCheckEx(0x1Au, 0x1239uLL, BugCheckParameter2, 0LL, 0LL);
  Lock = MmAcquireLoadLock();
  if ( (*((_DWORD *)v3 + 49) & 3) != 0 )
  {
    v5 = 0;
  }
  else
  {
    v5 = MiBackSystemImageWithPagefile(v3, 0LL);
    if ( v5 >= 0 )
      *((_DWORD *)v3 + 49) = *((_DWORD *)v3 + 49) & 0xFFFFFFFC | 2;
  }
  MmReleaseLoadLock((__int64)Lock);
  return (unsigned int)v5;
}
