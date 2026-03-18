/*
 * XREFs of NVMeGetAutoPowerStateTransition @ 0x1C000BD94
 * Callers:
 *     NVMePowerInitialize @ 0x1C00050D0 (NVMePowerInitialize.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C00023DC (NVMeAllocateDmaBuffer.c)
 *     ProcessCommand @ 0x1C000C5A0 (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000CE5C (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C000EF40 (memset.c)
 */

void __fastcall NVMeGetAutoPowerStateTransition(__int64 a1, char a2)
{
  __int64 v3; // rax
  char v4; // [rsp+38h] [rbp+10h]

  v4 = a2;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 563) = 0;
    memset(*(void **)(a1 + 648), 0, 0x10A8uLL);
    v3 = *(_QWORD *)(a1 + 648);
    *(_QWORD *)(a1 + 616) = v3;
    *(_DWORD *)(a1 + 552) = 1;
    *(_BYTE *)(v3 + 4166) = 1;
    *(_BYTE *)(*(_QWORD *)(a1 + 648) + 4167LL) = 0;
    *(_WORD *)(*(_QWORD *)(a1 + 648) + 4160LL) = 0;
    NVMeAllocateDmaBuffer(a1, 0x100u);
  }
}
