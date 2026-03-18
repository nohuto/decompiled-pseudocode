/*
 * XREFs of itrp_NPUSHW @ 0x1C0111FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_NPUSHW(unsigned __int8 *a1)
{
  __int64 result; // rax
  unsigned __int8 *v2; // rdx

  result = qword_1C0329538;
  if ( (unsigned __int64)a1 >= qword_1C0329540 )
  {
    v2 = a1 + 1;
    if ( (unsigned __int64)(a1 + 1) <= qword_1C0329538 && v2 >= a1 )
      return itrp_PushSomeWords(*a1, v2);
  }
  dword_1C0329530 = 4381;
  return result;
}
