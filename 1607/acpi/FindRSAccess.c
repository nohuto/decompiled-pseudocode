/*
 * XREFs of FindRSAccess @ 0x1C001E300
 * Callers:
 *     WriteField @ 0x1C001AFDC (WriteField.c)
 *     RegRSAccess @ 0x1C0022ADC (RegRSAccess.c)
 *     RawFieldAccess @ 0x1C005DA7C (RawFieldAccess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindRSAccess(int a1)
{
  __int64 result; // rax

  for ( result = gpRSAccessHead; result && *(_DWORD *)(result + 8) != a1; result = *(_QWORD *)result )
    ;
  return result;
}
