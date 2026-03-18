/*
 * XREFs of AssociateInputContext @ 0x1C0122608
 * Callers:
 *     AssociateInputContextEx @ 0x1C0122518 (AssociateInputContextEx.c)
 *     DestroyInputContext @ 0x1C01D9C00 (DestroyInputContext.c)
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
