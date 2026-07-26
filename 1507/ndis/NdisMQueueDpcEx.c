/*
 * XREFs of NdisMQueueDpcEx @ 0x1C005C550
 * Callers:
 *     NdisMQueueDpc @ 0x1C005C520 (NdisMQueueDpc.c)
 * Callees:
 *     ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C00649F8 (-ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z.c)
 */

KAFFINITY __stdcall NdisMQueueDpcEx(
        NDIS_HANDLE NdisInterruptHandle,
        ULONG MessageId,
        PGROUP_AFFINITY TargetProcessors,
        PVOID MiniportDpcContext)
{
  __int64 v4; // r10
  unsigned int Number; // r12d
  void *v7; // r13
  __int64 v8; // r15
  unsigned __int64 v9; // rsi
  KAFFINITY v10; // r14
  unsigned __int16 Group; // ax
  unsigned __int64 Mask; // rdi
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v14; // r9
  struct NDIS_PCW_CONTEXT v16; // [rsp+20h] [rbp-20h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+80h] [rbp+40h] BYREF
  PVOID SystemArgument2; // [rsp+98h] [rbp+58h]

  SystemArgument2 = MiniportDpcContext;
  v4 = *((_QWORD *)NdisInterruptHandle + 12);
  v16.CurrentCpu = -1;
  Number = 0;
  v7 = (void *)MessageId;
  v8 = 1LL;
  v16.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v4 + 40);
  v16.DatapathEventsMask = *(_DWORD *)(v4 + 48);
  v16.DatapathCyclesMask = *(_DWORD *)(v4 + 80);
  if ( *((_BYTE *)NdisInterruptHandle + 193) )
    v9 = *((_QWORD *)NdisInterruptHandle + 28) + ((unsigned __int64)(MessageId * (ndisMaxNumberOfProcessors + 1)) << 6);
  else
    v9 = *((_QWORD *)NdisInterruptHandle + 14);
  v10 = 0LL;
  Group = TargetProcessors->Group;
  *(_WORD *)&ProcNumber.Number = 0;
  Mask = TargetProcessors->Mask;
  ProcNumber.Group = Group;
  if ( (v16.DatapathEventsMask & 0x1000000) != 0 )
    Number = KeGetPcr()->Prcb.Number;
  for ( ; Mask; Mask >>= 1 )
  {
    if ( (Mask & 1) != 0 )
    {
      ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
      v14 = ProcessorIndexFromNumber;
      if ( ProcessorIndexFromNumber != -1 )
      {
        if ( ProcessorIndexFromNumber != Number && (v16.DatapathEventsMask & 0x1000000) != 0 )
          ndisPcwAddEvent(&v16, 0xCuLL, 1uLL);
        _InterlockedIncrement((volatile signed __int32 *)NdisInterruptHandle + 26);
        if ( KeInsertQueueDpc((PRKDPC)(v9 + (v14 << 6)), v7, SystemArgument2) )
          v10 |= v8;
        else
          _InterlockedDecrement((volatile signed __int32 *)NdisInterruptHandle + 26);
      }
    }
    ++ProcNumber.Number;
    v8 *= 2LL;
  }
  return v10;
}
