/*
 * XREFs of SetLastInputWoken @ 0x1C007AC40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SetLastInputWoken(__int64 a1, int a2)
{
  __int64 result; // rax

  qword_1C011A500 = a1;
  result = a1 & -(__int64)(a2 != 0);
  qword_1C011A508 = result;
  return result;
}
