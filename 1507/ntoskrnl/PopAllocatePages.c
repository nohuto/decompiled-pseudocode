/*
 * XREFs of PopAllocatePages @ 0x1403F26C8
 * Callers:
 *     PopBuildMemoryImageHeader @ 0x1403F1BF0 (PopBuildMemoryImageHeader.c)
 *     PopAllocateHiberContext @ 0x14056A188 (PopAllocateHiberContext.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x1400ABA30 (MmMapLockedPagesSpecifyCache.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     PopGenerateMdl @ 0x14014D604 (PopGenerateMdl.c)
 */

PVOID __fastcall PopAllocatePages(__int64 a1)
{
  PVOID v1; // rbx
  PMDL Mdl; // rdi
  ULONG_PTR v4; // rcx

  v1 = 0LL;
  if ( (PoDebug & 0x80u) != 0 )
    DbgPrint("PopAllocatePages: Enter, requesting %p pages.\r\n", (const void *)a1);
  PopNumberOfPagesForHibernateProcess += a1;
  Mdl = PopGenerateMdl(a1);
  if ( !Mdl )
    goto LABEL_11;
  if ( (PoDebug & 0x80u) != 0 )
    DbgPrint("    Mdl->ByteCount: 0x%x\r\n", Mdl->ByteCount);
  v1 = MmMapLockedPagesSpecifyCache(Mdl, 0, MmCached, 0LL, 1u, 0x40000020u);
  if ( v1 )
  {
    v4 = qword_14032E680;
    if ( *(int *)(qword_14032E680 + 188) >= 0 )
      goto LABEL_8;
  }
  else
  {
LABEL_11:
    v4 = qword_14032E680;
  }
  *(_DWORD *)(v4 + 188) = -1073741670;
LABEL_8:
  if ( (PoDebug & 0x80u) != 0 )
    DbgPrint("PopAllocatePages: Returning buffer pointer: %p\r\n", v1);
  return v1;
}
