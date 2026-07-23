/*
 * XREFs of CmpSwapPointers @ 0x140581CA8
 * Callers:
 *     CmpPromoteKey @ 0x1401B3308 (CmpPromoteKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpSwapPointers(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *a1;
  result = *a2;
  *a1 = *a2;
  *a2 = v2;
  return result;
}
