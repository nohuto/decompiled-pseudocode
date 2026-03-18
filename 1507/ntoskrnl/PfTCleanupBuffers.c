/*
 * XREFs of PfTCleanupBuffers @ 0x14058EB58
 * Callers:
 *     PfTCleanup @ 0x14058E034 (PfTCleanup.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall PfTCleanupBuffers(__int64 a1)
{
  __int64 **v2; // rbx
  _QWORD *v3; // rbx
  __int64 *v4; // rcx
  __int64 v5; // rax
  void *v6; // rcx

  v2 = (__int64 **)(a1 + 24);
  while ( *v2 != (__int64 *)v2 )
  {
    v4 = *v2;
    v5 = **v2;
    if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v5 + 8) != v4 )
      __fastfail(3u);
    *v2 = (__int64 *)v5;
    *(_QWORD *)(v5 + 8) = v2;
    ExFreePoolWithTag(v4, 0);
  }
  v3 = *(_QWORD **)(a1 + 16);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 16) = *v3;
    do
    {
      v6 = v3;
      v3 = *(_QWORD **)(a1 + 16);
      if ( v3 )
        *(_QWORD *)(a1 + 16) = *v3;
      ExFreePoolWithTag(v6, 0);
    }
    while ( v3 );
  }
  *(_WORD *)(a1 + 10) = 0;
}
