/*
 * XREFs of MiFreeSubsectionProtos @ 0x140662180
 * Callers:
 *     MiCreatePerSessionProtos @ 0x140661C44 (MiCreatePerSessionProtos.c)
 *     MiDereferencePerSessionProtos @ 0x140661DDC (MiDereferencePerSessionProtos.c)
 * Callees:
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiDeletePerSessionProtos @ 0x1401F4CF8 (MiDeletePerSessionProtos.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeSubsectionProtos(void **a1)
{
  void **v2; // rbx
  __int64 *v3; // rcx
  unsigned __int64 v4; // rax

  while ( 1 )
  {
    v2 = (void **)*a1;
    if ( !*a1 )
      break;
    v3 = (__int64 *)*a1;
    *a1 = *v2;
    v4 = MiDeletePerSessionProtos(v3);
    MiReturnCommit((__int64)MiSystemPartition, v4);
    ExFreePoolWithTag(v2[4], 0);
    ExFreePoolWithTag(v2, 0);
  }
}
