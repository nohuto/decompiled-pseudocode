/*
 * XREFs of NVMeSetPowerState @ 0x1C000BFA8
 * Callers:
 *     NVMePowerSetFState @ 0x1C0005A94 (NVMePowerSetFState.c)
 *     NVMePowerSetPerfState @ 0x1C0005D9C (NVMePowerSetPerfState.c)
 * Callees:
 *     ProcessCommand @ 0x1C000C5A0 (ProcessCommand.c)
 *     memset @ 0x1C000EF40 (memset.c)
 */

__int64 __fastcall NVMeSetPowerState(__int64 a1, unsigned __int8 a2)
{
  int v2; // ebx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8

  v2 = a2;
  *(_BYTE *)(a1 + 563) = 0;
  memset(*(void **)(a1 + 648), 0, 0x10A8uLL);
  v4 = *(_QWORD *)(a1 + 648);
  *(_QWORD *)(a1 + 616) = v4;
  *(_DWORD *)(a1 + 552) = 1;
  *(_BYTE *)(v4 + 4166) = 1;
  *(_BYTE *)(*(_QWORD *)(a1 + 648) + 4167LL) = 0;
  *(_WORD *)(*(_QWORD *)(a1 + 648) + 4160LL) = 0;
  v5 = *(_QWORD *)(a1 + 648);
  LODWORD(v4) = (*(_DWORD *)(v5 + 4140) ^ v2) & 0x1F;
  *(_BYTE *)(v5 + 4096) = 9;
  *(_DWORD *)(v5 + 4140) ^= v4;
  *(_BYTE *)(v5 + 4136) = 2;
  ProcessCommand(a1, a1 + 560);
  LOBYTE(v6) = 1;
  return WaitForCommandCompleteWithCustomTimeout(a1, a1 + 560, v6, 1000LL);
}
