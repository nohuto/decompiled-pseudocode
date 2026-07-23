/*
 * XREFs of EtwpInitializeTimeStamp @ 0x1404BEEFC
 * Callers:
 *     EtwpStartLogger @ 0x14048F924 (EtwpStartLogger.c)
 * Callees:
 *     KeQuerySystemTimePrecise @ 0x1400EFF50 (KeQuerySystemTimePrecise.c)
 */

LARGE_INTEGER __fastcall EtwpInitializeTimeStamp(__int64 a1)
{
  int v2; // ecx
  void *v3; // rax
  _OWORD *v4; // rdi
  LARGE_INTEGER result; // rax
  int v6; // edx
  __int64 v7; // rcx

  v2 = *(_DWORD *)(a1 + 200) - 2;
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      v3 = EtwpGetCycleCount;
    }
    else
    {
      *(_DWORD *)(a1 + 200) = 1;
      v3 = PpmQueryTime;
    }
  }
  else
  {
    v3 = EtwpGetSystemTime;
  }
  *(_QWORD *)(a1 + 40) = v3;
  if ( (*(_DWORD *)(a1 + 816) & 2) != 0 )
  {
    result.QuadPart = EtwpRefTimeSystem;
    v4 = (_OWORD *)(a1 + 304);
    v6 = *(_DWORD *)(a1 + 200);
    *(_QWORD *)(a1 + 304) = EtwpRefTimeSystem;
    if ( v6 == 3 )
    {
      result.QuadPart = EtwpRefTimeCycle;
      *(_QWORD *)(a1 + 312) = EtwpRefTimeCycle;
    }
    else
    {
      v7 = EtwpRefTimePerfCounter;
      if ( v6 == 2 )
        v7 = EtwpRefTimeSystem;
      *(_QWORD *)(a1 + 312) = v7;
    }
  }
  else
  {
    v4 = (_OWORD *)(a1 + 304);
    *(_QWORD *)(a1 + 312) = (*(__int64 (**)(void))(a1 + 40))();
    result = KeQuerySystemTimePrecise((LARGE_INTEGER *)(a1 + 304));
  }
  *(_OWORD *)(a1 + 432) = *v4;
  return result;
}
