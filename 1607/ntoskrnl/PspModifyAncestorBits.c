/*
 * XREFs of PspModifyAncestorBits @ 0x140680688
 * Callers:
 *     PspRemoveRateControl @ 0x14068088C (PspRemoveRateControl.c)
 *     PspSetJobRateControl @ 0x140680B0C (PspSetJobRateControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspModifyAncestorBits(__int64 a1, unsigned int a2, char a3)
{
  __int64 i; // r9
  __int64 result; // rax

  for ( i = *(_QWORD *)(a1 + 1056); i; i = *(_QWORD *)(i + 1056) )
  {
    if ( a3 )
    {
      _InterlockedOr((volatile signed __int32 *)(i + 1304), a2);
    }
    else
    {
      result = ~a2;
      _InterlockedAnd((volatile signed __int32 *)(i + 1304), result);
    }
  }
  return result;
}
