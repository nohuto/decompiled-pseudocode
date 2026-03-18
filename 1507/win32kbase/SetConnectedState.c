/*
 * XREFs of SetConnectedState @ 0x1C0079160
 * Callers:
 *     RemoteConnect @ 0x1C0078CF0 (RemoteConnect.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetConnectedState(int a1, int a2)
{
  __int64 result; // rax

  gbConnected = a1;
  if ( a2 != gbConnectCompleted )
  {
    gbConnectCompleted = a2;
    return PowerConnectionEvent();
  }
  return result;
}
