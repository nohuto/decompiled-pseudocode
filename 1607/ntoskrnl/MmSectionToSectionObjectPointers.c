/*
 * XREFs of MmSectionToSectionObjectPointers @ 0x14065B930
 * Callers:
 *     IopIsFileOpenOrSection @ 0x140625694 (IopIsFileOpenOrSection.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x1400261C0 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140026210 (MiReferenceControlAreaFile.c)
 *     MiSectionControlArea @ 0x14002C050 (MiSectionControlArea.c)
 */

__int64 __fastcall MmSectionToSectionObjectPointers(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  ULONG_PTR v3; // rax
  __int64 v4; // rbx

  v1 = MiSectionControlArea(a1);
  v2 = v1;
  if ( !*(_QWORD *)(v1 + 64) )
    return 0LL;
  v3 = MiReferenceControlAreaFile(v1);
  v4 = *(_QWORD *)(v3 + 40);
  MiDereferenceControlAreaFile(v2, v3);
  return v4;
}
