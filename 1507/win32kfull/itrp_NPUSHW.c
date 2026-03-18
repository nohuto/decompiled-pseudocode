/*
 * XREFs of itrp_NPUSHW @ 0x1C00D6C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_NPUSHW(unsigned __int8 *a1)
{
  __int64 result; // rax

  result = qword_1C03231B8;
  if ( (unsigned __int64)a1 >= qword_1C03231C0 && (unsigned __int64)(a1 + 1) <= qword_1C03231B8 && a1 + 1 >= a1 )
    return itrp_PushSomeWords(*a1);
  dword_1C03231B0 = 4381;
  return result;
}
