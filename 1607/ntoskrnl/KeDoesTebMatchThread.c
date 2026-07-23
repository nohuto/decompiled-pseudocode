/*
 * XREFs of KeDoesTebMatchThread @ 0x1401DC838
 * Callers:
 *     PspGetSetContextInternal @ 0x1404FB520 (PspGetSetContextInternal.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x140682478 (PspDisassociateUmsThreadFromPrimary.c)
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
