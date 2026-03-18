/*
 * XREFs of itrp_NPUSHW @ 0x1C00DC430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_NPUSHW(unsigned __int8 *a1)
{
  __int64 result; // rax

  result = qword_1C0323E88;
  if ( (unsigned __int64)a1 >= qword_1C0323E90 && (unsigned __int64)(a1 + 1) <= qword_1C0323E88 && a1 + 1 >= a1 )
    return itrp_PushSomeWords(*a1);
  dword_1C0323E80 = 4381;
  return result;
}
