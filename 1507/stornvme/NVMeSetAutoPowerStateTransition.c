/*
 * XREFs of NVMeSetAutoPowerStateTransition @ 0x1C000BDA4
 * Callers:
 *     NVMePowerInitialize @ 0x1C0004FE0 (NVMePowerInitialize.c)
 * Callees:
 *     ProcessCommand @ 0x1C000C470 (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000CD2C (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C000EE00 (memset.c)
 */

__int64 __fastcall NVMeSetAutoPowerStateTransition(__int64 a1, unsigned __int8 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 563) = 0;
    memset(*(void **)(a1 + 648), 0, 0x10A8uLL);
    v4 = *(_QWORD *)(a1 + 648);
    *(_QWORD *)(a1 + 616) = v4;
    *(_DWORD *)(a1 + 552) = 1;
    *(_BYTE *)(v4 + 4166) = 1;
    *(_BYTE *)(*(_QWORD *)(a1 + 648) + 4167LL) = 0;
    *(_WORD *)(*(_QWORD *)(a1 + 648) + 4160LL) = 0;
    v5 = *(_QWORD *)(a1 + 648);
    LODWORD(v4) = (*(_DWORD *)(v5 + 4140) ^ a2) & 1;
    *(_BYTE *)(v5 + 4096) = 9;
    *(_DWORD *)(v5 + 4140) ^= v4;
    *(_BYTE *)(v5 + 4136) = 12;
    ProcessCommand(a1, a1 + 560);
    LOBYTE(v6) = 1;
    return WaitForCommandCompleteWithCustomTimeout(a1, a1 + 560, v6, 10000LL);
  }
  return result;
}
