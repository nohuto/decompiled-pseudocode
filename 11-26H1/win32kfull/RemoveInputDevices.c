/*
 * XREFs of RemoveInputDevices @ 0x1401B4600
 * Callers:
 *     xxxRemoteDisconnect @ 0x1401B3938 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1402D3988 (xxxRemoteReconnect.c)
 * Callees:
 *     RemoveRimManagedInputDevices @ 0x1401B4688 (RemoveRimManagedInputDevices.c)
 */

__int64 __fastcall RemoveInputDevices(__int64 a1, __int64 a2)
{
  int v2; // ebx
  _QWORD *UserSessionState; // rax

  v2 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
      if ( v2 )
        break;
      CBaseInput::HandleTSRequest(UserSessionState[387], 3LL);
      v2 = 1;
    }
    if ( v2 == 2 )
      break;
    CBaseInput::HandleTSRequest(UserSessionState[1615], 3LL);
    if ( (unsigned int)++v2 > 2 )
      goto LABEL_5;
  }
  CBaseInput::HandleTSRequest(UserSessionState[2104], 3LL);
LABEL_5:
  RemoveRimManagedInputDevices();
  return ForceUpdatePointerDeviceSystemMetrics();
}
