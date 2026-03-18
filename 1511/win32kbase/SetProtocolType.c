/*
 * XREFs of SetProtocolType @ 0x1C0062ED0
 * Callers:
 *     RemoteConnect @ 0x1C00628B0 (RemoteConnect.c)
 * Callees:
 *     UpdateLastInput @ 0x1C000E9A0 (UpdateLastInput.c)
 *     SqmPowerState @ 0x1C0063030 (SqmPowerState.c)
 *     RetrieveCurrentDisplayState @ 0x1C006324C (RetrieveCurrentDisplayState.c)
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
    UpdateLastInput((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24, 7u);
    result = MEMORY[0xFFFFF78000000320];
    dword_1C010477C = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  }
  return result;
}
