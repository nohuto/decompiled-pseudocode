/*
 * XREFs of MiRevertRelocatedImagePfn @ 0x140509AF8
 * Callers:
 *     MiValidateImagePfn @ 0x1405098BC (MiValidateImagePfn.c)
 * Callees:
 *     KeCopyPage @ 0x140162490 (KeCopyPage.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiPerformFixups @ 0x140509BC0 (MiPerformFixups.c)
 */

__int64 __fastcall MiRevertRelocatedImagePfn(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  _QWORD *v5; // rbx
  int v6; // edx
  __int64 result; // rax
  ULONG_PTR v8; // rdi

  v5 = **(_QWORD ***)(a2 + 96);
  if ( !v5 || (unsigned __int64)a3 >= v5[7] )
    return -1LL;
  v6 = 0;
  while ( !*(_QWORD *)(*v5 + 8LL * (v6 + a3)) )
  {
    if ( ++v6 )
      goto LABEL_6;
  }
  v6 = 5;
LABEL_6:
  if ( v6 != 5 )
    return -1LL;
  result = (__int64)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x68496D4Du);
  v8 = result;
  if ( result )
  {
    KeCopyPage(result, a1);
    MiPerformFixups(v8, a2, 0LL, 0);
    return v8;
  }
  return result;
}
