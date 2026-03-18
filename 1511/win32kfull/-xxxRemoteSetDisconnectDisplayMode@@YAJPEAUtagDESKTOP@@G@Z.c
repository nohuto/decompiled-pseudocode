/*
 * XREFs of ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@G@Z @ 0x1C009F620
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C009DC30 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C014DAC0 (xxxRemoteReconnect.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall xxxRemoteSetDisconnectDisplayMode(struct tagDESKTOP *a1, unsigned __int16 a2)
{
  int v4; // ebx
  char v6; // [rsp+68h] [rbp+10h] BYREF

  v6 = 0;
  SetProtocolType(0xFFFFLL);
  v4 = xxxUserSetDisplayConfig(0LL, 0LL, 0LL, 0LL, 2191, 2, 0, a1, 0, &v6);
  if ( v4 < 0 )
  {
    v4 = v6 != 0 ? -1073741267 : -1073741823;
    SetProtocolType(a2);
  }
  else if ( !a2 && !gServiceSessionId )
  {
    MEMORY[0xFFFFF780000002D8] = -1;
  }
  return (unsigned int)v4;
}
