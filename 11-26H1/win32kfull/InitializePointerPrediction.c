/*
 * XREFs of InitializePointerPrediction @ 0x140288DB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InitializePointerPrediction(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax

  *(_DWORD *)(W32GetUserSessionState(a1, a2) + 18968) = 0;
  *(_DWORD *)(W32GetUserSessionState(v3, v2) + 18972) = 0;
  result = W32GetUserSessionState(v5, v4);
  *(_DWORD *)(result + 18976) = 0;
  return result;
}
