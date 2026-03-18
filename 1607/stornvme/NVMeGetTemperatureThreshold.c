/*
 * XREFs of NVMeGetTemperatureThreshold @ 0x1C000D06C
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0006E84 (NVMeControllerInitPart2.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002690 (ProcessCommand.c)
 *     memset @ 0x1C0003180 (memset.c)
 *     BuildGetFeaturesTemperatureThresholdCommand @ 0x1C00087FC (BuildGetFeaturesTemperatureThresholdCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000ED04 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeGetTemperatureThreshold(__int64 a1, char a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 16) )
  {
    *(_WORD *)(a1 + 156) = -1;
    *(_BYTE *)(a1 + 571) = 0;
    memset(*(void **)(a1 + 656), 0, 0x1098uLL);
    v4 = *(_QWORD *)(a1 + 656);
    *(_QWORD *)(a1 + 624) = v4;
    *(_DWORD *)(a1 + 560) = 1;
    *(_BYTE *)(v4 + 4245) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 656) + 4245LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 656) + 4236LL) = 0;
    BuildGetFeaturesTemperatureThresholdCommand(*(_QWORD *)(a1 + 656) + 4096LL, 0, 0);
    *(_QWORD *)(*(_QWORD *)(a1 + 656) + 4216LL) = NVMeGetTemperatureThresholdCompletion;
    ProcessCommand(a1, a1 + 568);
    LOBYTE(v5) = a2;
    return WaitForCommandCompleteWithCustomTimeout(a1, a1 + 568, v5, 10000LL);
  }
  return result;
}
