/*
 * XREFs of FindRSAccess @ 0x1C0016940
 * Callers:
 *     RegRSAccess @ 0x1C000480C (RegRSAccess.c)
 *     WriteField @ 0x1C00138DC (WriteField.c)
 *     RawFieldAccess @ 0x1C0046A3C (RawFieldAccess.c)
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
