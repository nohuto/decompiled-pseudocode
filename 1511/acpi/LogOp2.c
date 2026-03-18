/*
 * XREFs of LogOp2 @ 0x1C00117B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LogOp2(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0;
  if ( ghGetAcpiTableVersion
    && (ghGetAcpiTableVersion(1413763908LL, &v5), v5 >= 2)
    && (v3 = *(_QWORD *)(a2 + 80), *(_WORD *)(v3 + 2) == 1)
    && *(_WORD *)(v3 + 42) == 1 )
  {
    return LogOp2_64(a1, a2);
  }
  else
  {
    return LogOp2_32(a1, a2);
  }
}
