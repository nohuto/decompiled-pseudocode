/*
 * XREFs of MmBackSystemImageWithPagefile @ 0x140522E38
 * Callers:
 *     FsRtlSetDriverBacking @ 0x140522E10 (FsRtlSetDriverBacking.c)
 * Callees:
 *     MiReleaseResourceLite @ 0x14001A338 (MiReleaseResourceLite.c)
 *     MiLookupDataTableEntry @ 0x140035B30 (MiLookupDataTableEntry.c)
 *     MiAcquireResourceSharedLite @ 0x1400EF804 (MiAcquireResourceSharedLite.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MmReleaseLoadLock @ 0x1403CF8C4 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1403CF8F0 (MmAcquireLoadLock.c)
 *     MiBackSystemImageWithPagefile @ 0x140522ED0 (MiBackSystemImageWithPagefile.c)
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
