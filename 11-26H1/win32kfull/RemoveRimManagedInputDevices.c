/*
 * XREFs of RemoveRimManagedInputDevices @ 0x1401B4688
 * Callers:
 *     RemoveInputDevices @ 0x1401B4600 (RemoveInputDevices.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RemoveRimManagedInputDevices(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  CBaseInput::HandleTSRequest(*(_QWORD *)(UserSessionState + 3096), 1LL);
  v5 = W32GetUserSessionState(v4, v3);
  CBaseInput::HandleTSRequest(*(_QWORD *)(v5 + 12920), 1LL);
  v8 = W32GetUserSessionState(v7, v6);
  return CBaseInput::HandleTSRequest(*(_QWORD *)(v8 + 16832), 1LL);
}
