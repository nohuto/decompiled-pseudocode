/*
 * XREFs of IopLiveDumpProcessCorralStateChange @ 0x1403FFCB8
 * Callers:
 *     IopLiveDumpCorralDpc @ 0x1403FED6C (IopLiveDumpCorralDpc.c)
 *     IopLiveDumpInitiateCorralStateChange @ 0x1403FF47C (IopLiveDumpInitiateCorralStateChange.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeResumeClockTimerSafe @ 0x1401FEA88 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x1401FEAC8 (KeSuspendClockTimerSafe.c)
 *     IopLiveDumpBufferDumpData @ 0x1403FE6C8 (IopLiveDumpBufferDumpData.c)
 */

void __fastcall IopLiveDumpProcessCorralStateChange(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int16 v10; // [rsp+20h] [rbp-8h]

  v2 = 0;
  while ( *(_DWORD *)(a1 + 12) == *(_DWORD *)(a2 + 4) )
  {
    if ( (++v2 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      _mm_pause();
    else
      HvlNotifyLongSpinWait(v2);
  }
  v5 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a2 + 4) = v5;
  v6 = v5 - 2;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          if ( v9 == 1 && *(_BYTE *)(a2 + 8) )
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
    *(_BYTE *)(a2 + 8) = (v10 & 0x200) != 0;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
}
