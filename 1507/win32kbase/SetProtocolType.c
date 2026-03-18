/*
 * XREFs of SetProtocolType @ 0x1C0079380
 * Callers:
 *     RemoteConnect @ 0x1C0078CF0 (RemoteConnect.c)
 * Callees:
 *     UpdateLastInput @ 0x1C0007440 (UpdateLastInput.c)
 *     SqmPowerState @ 0x1C0079410 (SqmPowerState.c)
 *     RetrieveCurrentDisplayState @ 0x1C00794F0 (RetrieveCurrentDisplayState.c)
 */

__int64 __fastcall SetProtocolType(__int16 a1)
{
  __int64 result; // rax

  if ( !gProtocolType && gSqmIsOptedIn )
    result = SqmPowerState();
  gProtocolType = a1;
  if ( !a1 )
  {
    RetrieveCurrentDisplayState();
    UpdateLastInput(
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      7u);
    result = MEMORY[0xFFFFF78000000320];
    dword_1C00FFFD4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  }
  return result;
}
