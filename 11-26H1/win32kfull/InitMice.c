/*
 * XREFs of InitMice @ 0x14026B254
 * Callers:
 *     RawInputThread @ 0x140270B00 (RawInputThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitMice(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 result; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  *(_DWORD *)(UserSessionState + 66792) &= ~0x1000u;
  v5 = W32GetUserSessionState(v4, v3);
  *(_DWORD *)(v5 + 68440) &= ~1u;
  v8 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 19904);
  *(_DWORD *)(v8 + 1972) = 0;
  v10 = *(_QWORD *)(W32GetUserSessionState(v8, v9) + 19904);
  *(_DWORD *)(v10 + 2068) = 0;
  result = W32GetUserSessionState(v10, v11);
  *(_DWORD *)(*(_QWORD *)(result + 19904) + 2196LL) = 0;
  return result;
}
