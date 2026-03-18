/*
 * XREFs of CcSetVacbIntoList @ 0x1401DE4C8
 * Callers:
 *     CcSetVacbInFreeList @ 0x140086BB4 (CcSetVacbInFreeList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcSetVacbIntoList(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 *v3; // rcx

  result = *a2;
  v3 = (__int64 *)(a1 + 16);
  *v3 = *a2;
  v3[1] = (__int64)a2;
  if ( *(__int64 **)(result + 8) != a2 )
    __fastfail(3u);
  *(_QWORD *)(result + 8) = v3;
  *a2 = (__int64)v3;
  return result;
}
