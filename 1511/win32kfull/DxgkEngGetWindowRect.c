/*
 * XREFs of DxgkEngGetWindowRect @ 0x1C0114D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall DxgkEngGetWindowRect(unsigned __int64 a1, _OWORD *a2)
{
  return UserGetWindowRect(a1, a2);
}
