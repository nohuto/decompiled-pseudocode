/*
 * XREFs of PfTCleanupBuffers @ 0x140669A00
 * Callers:
 *     PfTCleanup @ 0x140669854 (PfTCleanup.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall PfTCleanupBuffers(__int64 a1)
{
  __int64 **v2; // rbx
  __int64 *v3; // rcx
  __int64 v4; // rax
  _QWORD *v5; // rbx
  void *v6; // rcx

  v2 = (__int64 **)(a1 + 24);
  while ( *v2 != (__int64 *)v2 )
  {
    v3 = *v2;
    v4 = **v2;
    if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v4 + 8) != v3 )
      __fastfail(3u);
    *v2 = (__int64 *)v4;
    *(_QWORD *)(v4 + 8) = v2;
    ExFreePoolWithTag(v3, 0);
  }
  v5 = *(_QWORD **)(a1 + 16);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 16) = *v5;
    do
    {
      v6 = v5;
      v5 = *(_QWORD **)(a1 + 16);
      if ( v5 )
        *(_QWORD *)(a1 + 16) = *v5;
      ExFreePoolWithTag(v6, 0);
    }
    while ( v5 );
  }
  *(_WORD *)(a1 + 10) = 0;
}
