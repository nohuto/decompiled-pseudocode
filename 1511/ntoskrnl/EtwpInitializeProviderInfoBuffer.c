/*
 * XREFs of EtwpInitializeProviderInfoBuffer @ 0x1404CA100
 * Callers:
 *     EtwpRealtimeNotifyConsumers @ 0x1404C9F88 (EtwpRealtimeNotifyConsumers.c)
 *     EtwpSendDbgId @ 0x140664C10 (EtwpSendDbgId.c)
 * Callees:
 *     EtwpResetBufferHeader @ 0x1400F4998 (EtwpResetBufferHeader.c)
 *     EtwpInitializeBufferHeader @ 0x1400F49B0 (EtwpInitializeBufferHeader.c)
 */

__int64 __fastcall EtwpInitializeProviderInfoBuffer(__int64 a1, __int64 a2, int a3)
{
  int v6; // edx
  __int64 result; // rax
  __int64 v8; // rcx
  int v9; // edx

  EtwpInitializeBufferHeader((unsigned __int16 *)a1, (_DWORD *)a2);
  *(_DWORD *)a2 = a3;
  EtwpResetBufferHeader(a2, 7);
  result = (unsigned int)(v6 - 6);
  *(_DWORD *)(a2 + 44) = 3;
  *(_WORD *)(a2 + 52) = v6 - 6;
  *(_OWORD *)(a2 + 56) = *(_OWORD *)(a1 + 320);
  v8 = *(_QWORD *)(a2 + 32) ^ v6 & (unsigned int)(*(_DWORD *)(a2 + 32) ^ *(_DWORD *)(a1 + 216));
  *(_QWORD *)(a2 + 32) = v8;
  v9 = *(_DWORD *)(a1 + 216) - result;
  if ( v9 )
  {
    if ( v9 == 2 )
    {
      result = v8 & 7 | (8LL * (unsigned int)EtwCPUSpeedInMHz);
      *(_QWORD *)(a2 + 32) = result;
    }
  }
  else
  {
    result = 8 * EtwPerfFreq.QuadPart;
    *(_QWORD *)(a2 + 32) = (8 * EtwPerfFreq.QuadPart) | v8 & 7;
  }
  return result;
}
