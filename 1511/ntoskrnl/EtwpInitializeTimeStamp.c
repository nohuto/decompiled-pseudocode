/*
 * XREFs of EtwpInitializeTimeStamp @ 0x1404CAAAC
 * Callers:
 *     EtwpStartLogger @ 0x1404CB420 (EtwpStartLogger.c)
 * Callees:
 *     KeQuerySystemTimePrecise @ 0x14002D4D0 (KeQuerySystemTimePrecise.c)
 */

LARGE_INTEGER __fastcall EtwpInitializeTimeStamp(__int64 a1)
{
  int v2; // ecx
  void *v3; // rax
  _OWORD *v4; // rdi
  LARGE_INTEGER result; // rax
  int v6; // edx
  __int64 v7; // rcx

  v2 = *(_DWORD *)(a1 + 216) - 2;
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      v3 = EtwpGetCycleCount;
    }
    else
    {
      *(_DWORD *)(a1 + 216) = 1;
      v3 = PpmQueryTime;
    }
  }
  else
  {
    v3 = EtwpGetSystemTime;
  }
  *(_QWORD *)(a1 + 40) = v3;
  if ( (*(_DWORD *)(a1 + 832) & 2) != 0 )
  {
    result.QuadPart = EtwpRefTimeSystem;
    v4 = (_OWORD *)(a1 + 320);
    v6 = *(_DWORD *)(a1 + 216);
    *(_QWORD *)(a1 + 320) = EtwpRefTimeSystem;
    if ( v6 == 3 )
    {
      result.QuadPart = EtwpRefTimeCycle;
      *(_QWORD *)(a1 + 328) = EtwpRefTimeCycle;
    }
    else
    {
      v7 = EtwpRefTimePerfCounter;
      if ( v6 == 2 )
        v7 = EtwpRefTimeSystem;
      *(_QWORD *)(a1 + 328) = v7;
    }
  }
  else
  {
    v4 = (_OWORD *)(a1 + 320);
    *(_QWORD *)(a1 + 328) = (*(__int64 (**)(void))(a1 + 40))();
    result = KeQuerySystemTimePrecise((LARGE_INTEGER *)(a1 + 320));
  }
  *(_OWORD *)(a1 + 448) = *v4;
  return result;
}
