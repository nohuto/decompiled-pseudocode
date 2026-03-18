/*
 * XREFs of SetLastInputWoken @ 0x1C0077D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SetLastInputWoken(__int64 a1, int a2)
{
  __int64 result; // rax

  qword_1C01030F8 = a1;
  result = a1 & -(__int64)(a2 != 0);
  qword_1C0103100 = result;
  return result;
}
