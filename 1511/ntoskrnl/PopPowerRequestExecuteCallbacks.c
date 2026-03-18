/*
 * XREFs of PopPowerRequestExecuteCallbacks @ 0x140098D50
 * Callers:
 *     PopPowerRequestCallbackWorker @ 0x1400989E8 (PopPowerRequestCallbackWorker.c)
 *     PopPowerRequestCleanUp @ 0x140098AE4 (PopPowerRequestCleanUp.c)
 * Callees:
 *     <none>
 */

char __fastcall PopPowerRequestExecuteCallbacks(__int64 a1, int a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 i; // rbx
  char result; // al
  __int64 v8; // rdx

  v3 = a3;
  v4 = a1;
  v5 = a2;
  for ( i = 0LL; i < 5; ++i )
  {
    result = *(_BYTE *)(i + v4);
    if ( result )
    {
      if ( i == 3 )
      {
        v8 = v5;
      }
      else
      {
        v8 = 1LL;
        if ( i != 1 )
          v8 = v3;
      }
      LOBYTE(a1) = result > 0;
      result = ((__int64 (__fastcall *)(__int64, __int64))*(&off_1402C72D8 + 2 * i))(a1, v8);
    }
  }
  return result;
}
