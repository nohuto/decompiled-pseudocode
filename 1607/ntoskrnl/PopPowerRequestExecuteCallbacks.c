/*
 * XREFs of PopPowerRequestExecuteCallbacks @ 0x1400F9CAC
 * Callers:
 *     PopPowerRequestCleanUp @ 0x1400F8F40 (PopPowerRequestCleanUp.c)
 *     PopPowerRequestCallbackWorker @ 0x1400F9BB0 (PopPowerRequestCallbackWorker.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall **__fastcall PopPowerRequestExecuteCallbacks(
        __int64 a1,
        int a2,
        unsigned int a3))(int, int, int, int, int, int, __int64)
{
  __int64 v3; // rbp
  __int64 (__fastcall **v4)(); // rdi
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rbx
  char v8; // al
  __int64 (__fastcall **result)(int, int, int, int, int, int, __int64); // rax
  __int64 v10; // rdx

  v3 = a3;
  v4 = &off_1402F26A8;
  v5 = a2;
  v6 = a1;
  v7 = 0LL;
  do
  {
    v8 = *(_BYTE *)(v7 + v6);
    if ( v8 )
    {
      v10 = v3;
      if ( ((v7 - 1) & 0xFFFFFFFFFFFFFFFDuLL) == 0 )
        v10 = v5;
      LOBYTE(a1) = v8 > 0;
      ((void (__fastcall *)(__int64, __int64))*v4)(a1, v10);
    }
    ++v7;
    result = &off_1402F2708;
    v4 += 2;
  }
  while ( (__int64)v4 < (__int64)&off_1402F2708 );
  return result;
}
