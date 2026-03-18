/*
 * XREFs of NVMeSetArbitration @ 0x1C000B974
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0004400 (NVMeControllerInitPart2.c)
 * Callees:
 *     ProcessCommand @ 0x1C000C470 (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000CD2C (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C000EE00 (memset.c)
 */

void __fastcall NVMeSetArbitration(__int64 a1, char a2)
{
  unsigned __int8 v4; // cl
  unsigned __int8 v5; // al
  unsigned __int8 v6; // bl
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8

  v4 = 0;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    v5 = *(_BYTE *)(a1 + 42);
    if ( v5 == 0xFF )
      v5 = *(_BYTE *)(*(_QWORD *)(a1 + 1072) + 72LL);
    while ( v5 > 1u )
    {
      v5 >>= 1;
      ++v4;
    }
    v6 = 7;
    *(_BYTE *)(a1 + 563) = 0;
    if ( v4 < 7u )
      v6 = v4;
    memset(*(void **)(a1 + 648), 0, 0x10A8uLL);
    v7 = *(_QWORD *)(a1 + 648);
    *(_QWORD *)(a1 + 616) = v7;
    *(_DWORD *)(a1 + 552) = 1;
    *(_BYTE *)(v7 + 4166) = 1;
    *(_BYTE *)(*(_QWORD *)(a1 + 648) + 4167LL) = 0;
    *(_WORD *)(*(_QWORD *)(a1 + 648) + 4160LL) = 0;
    v8 = *(_QWORD *)(a1 + 648);
    LODWORD(v7) = (*(_DWORD *)(v8 + 4140) ^ v6) & 7;
    *(_BYTE *)(v8 + 4096) = 9;
    *(_DWORD *)(v8 + 4140) ^= v7;
    *(_BYTE *)(v8 + 4136) = 1;
    ProcessCommand(a1, a1 + 560);
    LOBYTE(v9) = a2;
    WaitForCommandCompleteWithCustomTimeout(a1, a1 + 560, v9, 10000LL);
  }
}
