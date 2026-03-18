/*
 * XREFs of PspModifyAncestorBits @ 0x1406C46B4
 * Callers:
 *     PspRemoveRateControl @ 0x1406C4960 (PspRemoveRateControl.c)
 *     PspSetJobRateControl @ 0x1406C4C78 (PspSetJobRateControl.c)
 *     PspSetNetRateControl @ 0x1406C4E6C (PspSetNetRateControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspModifyAncestorBits(__int64 a1, unsigned int a2, char a3)
{
  __int64 i; // r9
  __int64 result; // rax

  for ( i = *(_QWORD *)(a1 + 1064); i; i = *(_QWORD *)(i + 1064) )
  {
    if ( a3 )
    {
      _InterlockedOr((volatile signed __int32 *)(i + 1296), a2);
    }
    else
    {
      result = ~a2;
      _InterlockedAnd((volatile signed __int32 *)(i + 1296), result);
    }
  }
  return result;
}
