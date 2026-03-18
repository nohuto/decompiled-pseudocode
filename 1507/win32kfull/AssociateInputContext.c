/*
 * XREFs of AssociateInputContext @ 0x1C00F7584
 * Callers:
 *     AssociateInputContextEx @ 0x1C00F7494 (AssociateInputContextEx.c)
 *     DestroyInputContext @ 0x1C01E2EAC (DestroyInputContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AssociateInputContext(__int64 a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = *(_QWORD *)(a1 + 248);
  v3 = 0LL;
  if ( a2 )
    v3 = *a2;
  *(_QWORD *)(a1 + 248) = v3;
  return v2;
}
