/*
 * XREFs of PopAllocatePages @ 0x14039FBAC
 * Callers:
 *     PopBuildMemoryImageHeader @ 0x14039F1FC (PopBuildMemoryImageHeader.c)
 *     PopAllocateHiberContext @ 0x1404F64C8 (PopAllocateHiberContext.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14004B6B0 (MmMapLockedPagesSpecifyCache.c)
 *     PopGenerateMdl @ 0x140118B28 (PopGenerateMdl.c)
 */

PVOID __fastcall PopAllocatePages(__int64 a1)
{
  PVOID v1; // rbx
  struct _MDL *Mdl; // rax
  ULONG_PTR v3; // rcx

  PopNumberOfPagesForHibernateProcess += a1;
  v1 = 0LL;
  Mdl = PopGenerateMdl(a1);
  if ( !Mdl || (v1 = MmMapLockedPagesSpecifyCache(Mdl, 0, MmCached, 0LL, 1u, 0x40000020u)) == 0LL )
  {
    v3 = qword_1402DE0C0;
    goto LABEL_6;
  }
  v3 = qword_1402DE0C0;
  if ( *(int *)(qword_1402DE0C0 + 188) < 0 )
LABEL_6:
    *(_DWORD *)(v3 + 188) = -1073741670;
  return v1;
}
