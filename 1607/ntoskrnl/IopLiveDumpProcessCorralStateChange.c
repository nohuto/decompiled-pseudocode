/*
 * XREFs of IopLiveDumpProcessCorralStateChange @ 0x1403DB824
 * Callers:
 *     IopLiveDumpCorralDpc @ 0x1403DAA24 (IopLiveDumpCorralDpc.c)
 *     IopLiveDumpInitiateCorralStateChange @ 0x1403DB0C0 (IopLiveDumpInitiateCorralStateChange.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KeResumeClockTimerSafe @ 0x1401D22E4 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x1401D231C (KeSuspendClockTimerSafe.c)
 *     IopLiveDumpBufferDumpData @ 0x1403DA328 (IopLiveDumpBufferDumpData.c)
 */

void __fastcall IopLiveDumpProcessCorralStateChange(__int64 a1, __int64 a2)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int16 v9; // [rsp+20h] [rbp-8h]
  int v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0;
  while ( *(_DWORD *)(a1 + 12) == *(_DWORD *)(a2 + 4) )
    KeYieldProcessorEx(&v10);
  v4 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a2 + 4) = v4;
  v5 = v4 - 2;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          if ( v8 == 1 && *(_BYTE *)(a2 + 8) )
            _enable();
        }
        else
        {
          KeResumeClockTimerSafe();
        }
      }
      else
      {
        IopLiveDumpBufferDumpData((__int64 *)a1, (unsigned int *)a2);
      }
    }
    else
    {
      KeSuspendClockTimerSafe();
    }
  }
  else
  {
    _disable();
    *(_BYTE *)(a2 + 8) = (v9 & 0x200) != 0;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
}
