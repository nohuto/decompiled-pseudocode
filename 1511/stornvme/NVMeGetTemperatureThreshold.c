/*
 * XREFs of NVMeGetTemperatureThreshold @ 0x1C000BC08
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C00044F0 (NVMeControllerInitPart2.c)
 * Callees:
 *     ProcessCommand @ 0x1C000C5A0 (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000CE5C (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C000EF40 (memset.c)
 */

__int64 __fastcall NVMeGetTemperatureThreshold(__int64 a1, char a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 16) )
  {
    *(_WORD *)(a1 + 148) = -1;
    *(_BYTE *)(a1 + 563) = 0;
    memset(*(void **)(a1 + 648), 0, 0x10A8uLL);
    v4 = *(_QWORD *)(a1 + 648);
    *(_QWORD *)(a1 + 616) = v4;
    *(_DWORD *)(a1 + 552) = 1;
    *(_BYTE *)(v4 + 4166) = 1;
    *(_BYTE *)(*(_QWORD *)(a1 + 648) + 4167LL) = 0;
    *(_WORD *)(*(_QWORD *)(a1 + 648) + 4160LL) = 0;
    v5 = *(_QWORD *)(a1 + 648);
    *(_DWORD *)(v5 + 4140) &= 0xFFC0FFFF;
    *(_BYTE *)(v5 + 4096) = 10;
    *(_BYTE *)(v5 + 4136) = 4;
    *(_QWORD *)(*(_QWORD *)(a1 + 648) + 4216LL) = NVMeGetTemperatureThresholdCompletion;
    ProcessCommand(a1, a1 + 560);
    LOBYTE(v6) = a2;
    return WaitForCommandCompleteWithCustomTimeout(a1, a1 + 560, v6, 10000LL);
  }
  return result;
}
