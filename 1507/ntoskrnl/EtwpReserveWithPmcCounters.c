/*
 * XREFs of EtwpReserveWithPmcCounters @ 0x14025E260
 * Callers:
 *     EtwTraceContextSwap @ 0x140017470 (EtwTraceContextSwap.c)
 *     EtwpLogKernelEvent @ 0x1400A57F0 (EtwpLogKernelEvent.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x140017190 (EtwpReserveTraceBuffer.c)
 *     memset @ 0x140195A80 (memset.c)
 *     AlpcMessageDeleteProcedure @ 0x14055E308 (AlpcMessageDeleteProcedure.c)
 */

unsigned __int64 __fastcall EtwpReserveWithPmcCounters(__int64 a1, __int16 a2, int a3, __int64 a4, _QWORD *a5, int a6)
{
  __int64 v6; // r13
  int v7; // r15d
  unsigned int v8; // r14d
  unsigned int v9; // ebp
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdi
  PVOID *v14; // rcx

  v6 = *(_QWORD *)(a1 + 864);
  v7 = *(_DWORD *)(v6 + 28);
  v8 = 8 * (unsigned __int8)v7 + 16;
  v9 = v8 + a3;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
    __writecr8(2uLL);
  v11 = EtwpReserveTraceBuffer((unsigned int *)a1, v9, a4, a5, a6);
  v12 = v11;
  if ( v11 )
  {
    *(_QWORD *)(v11 + 8) = *a5;
    *(_WORD *)(v11 + 4) = v9;
    *(_DWORD *)v11 = (unsigned __int8)a6 | ((unsigned __int8)v7 << 8) | 0xC0110000;
    *(_WORD *)(v11 + 6) = a2;
    v14 = *(PVOID **)(v6 + 8LL * KeGetPcr()->Prcb.Number + 32);
    if ( v14 )
      off_140321998(v14);
    else
      memset((void *)(v11 + 16), 0, 8LL * (unsigned __int8)v7);
    if ( CurrentIrql < 2u )
      __writecr8(CurrentIrql);
    return v12 + v8;
  }
  else
  {
    if ( CurrentIrql < 2u )
      __writecr8(CurrentIrql);
    return 0LL;
  }
}
