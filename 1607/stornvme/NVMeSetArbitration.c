/*
 * XREFs of NVMeSetArbitration @ 0x1C000DE10
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0006E84 (NVMeControllerInitPart2.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002690 (ProcessCommand.c)
 *     memset @ 0x1C0003180 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000ED04 (WaitForCommandCompleteWithCustomTimeout.c)
 */

void __fastcall NVMeSetArbitration(__int64 a1, char a2)
{
  __int64 v3; // rcx
  unsigned __int8 v5; // bl
  unsigned __int8 v6; // al
  void *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8

  v3 = *(_QWORD *)(a1 + 1080);
  v5 = 0;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    v6 = *(_BYTE *)(a1 + 42);
    if ( v6 == 0xFF )
      v6 = *(_BYTE *)(v3 + 72);
    if ( v6 > 1u )
    {
      do
      {
        v6 >>= 1;
        ++v5;
      }
      while ( v6 > 1u );
      if ( v5 >= 7u )
        v5 = 7;
    }
    v7 = *(void **)(a1 + 656);
    *(_BYTE *)(a1 + 571) = 0;
    memset(v7, 0, 0x1098uLL);
    v8 = *(_QWORD *)(a1 + 656);
    *(_QWORD *)(a1 + 624) = v8;
    *(_DWORD *)(a1 + 560) = 1;
    *(_BYTE *)(v8 + 4245) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 656) + 4245LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 656) + 4236LL) = 0;
    v9 = *(_QWORD *)(a1 + 656);
    LODWORD(v8) = (*(_DWORD *)(v9 + 4140) ^ v5) & 7;
    *(_BYTE *)(v9 + 4096) = 9;
    *(_DWORD *)(v9 + 4140) ^= v8;
    *(_BYTE *)(v9 + 4136) = 1;
    ProcessCommand(a1, a1 + 568);
    LOBYTE(v10) = a2;
    WaitForCommandCompleteWithCustomTimeout(a1, a1 + 568, v10, 10000LL);
  }
}
