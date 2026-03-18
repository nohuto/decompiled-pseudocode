/*
 * XREFs of SetLastInputWoken @ 0x1C00150B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SetLastInputWoken(__int64 a1, int a2)
{
  __int64 result; // rax

  qword_1C00FFD30 = a1;
  result = a1 & -(__int64)(a2 != 0);
  qword_1C00FFD38 = result;
  return result;
}
