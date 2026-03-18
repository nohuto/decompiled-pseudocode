/*
 * XREFs of KeDoesTebMatchThread @ 0x14020C0F0
 * Callers:
 *     PspGetSetContextInternal @ 0x14044DC60 (PspGetSetContextInternal.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x1406C6604 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KeDoesTebMatchThread(__int64 a1, __int64 a2)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( a2 )
    return a2 == *(_QWORD *)(a1 + 240);
  return result;
}
