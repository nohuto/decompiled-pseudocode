/*
 * XREFs of DxgkEngGetDCEx @ 0x1C0264C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall DxgkEngGetDCEx(__int64 a1, __int64 a2, unsigned int a3)
{
  return NtUserGetDCEx(a1, a2, a3);
}
