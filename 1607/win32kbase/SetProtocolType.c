/*
 * XREFs of SetProtocolType @ 0x1C00705B0
 * Callers:
 *     xxxRemoteConnect @ 0x1C00B1960 (xxxRemoteConnect.c)
 * Callees:
 *     SqmPowerState @ 0x1C0070710 (SqmPowerState.c)
 *     UpdateLastInput @ 0x1C0071150 (UpdateLastInput.c)
 *     RetrieveCurrentDisplayState @ 0x1C00892BC (RetrieveCurrentDisplayState.c)
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
      7LL);
    result = MEMORY[0xFFFFF78000000320];
    dword_1C011BB7C = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  }
  return result;
}
