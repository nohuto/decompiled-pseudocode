/*
 * XREFs of ExprOp2 @ 0x1C0012860
 * Callers:
 *     <none>
 * Callees:
 *     ExprOp2_64 @ 0x1C00128C0 (ExprOp2_64.c)
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 *     ExprOp2_32 @ 0x1C0047EFC (ExprOp2_32.c)
 */

__int64 __fastcall ExprOp2(__int64 a1, __int64 a2)
{
  unsigned int v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0;
  if ( ghGetAcpiTableVersion && (ghGetAcpiTableVersion(1413763908LL, &v5), v5 >= 2) )
    return ExprOp2_64(a1, a2);
  else
    return ExprOp2_32(a1, a2);
}
