/*
 * XREFs of ProcessorAddInstance @ 0x1C008DA08
 * Callers:
 *     ProcessorpAddInstanceCallback @ 0x1C0062000 (ProcessorpAddInstanceCallback.c)
 *     IrqLibpParseMadt @ 0x1C00A824C (IrqLibpParseMadt.c)
 * Callees:
 *     memset @ 0x1C002C1C0 (memset.c)
 *     ProcessorpIndexInstance @ 0x1C008DB54 (ProcessorpIndexInstance.c)
 *     ProcessorpReserveUnownedRanges @ 0x1C008DCC8 (ProcessorpReserveUnownedRanges.c)
 */

__int64 __fastcall ProcessorAddInstance(unsigned int a1, int a2)
{
  unsigned int v3; // r15d
  ULONG ProcessorIndexFromNumber; // eax
  ULONG v5; // edi
  __int64 v6; // r14
  char *PoolWithTag; // rax
  char *v8; // rbx
  int v9; // esi
  unsigned int v10; // edi
  bool v11; // cc
  void *v13; // rcx
  __int128 v14; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+30h] [rbp-10h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+70h] [rbp+30h] BYREF

  v3 = a1;
  v14 = 0uLL;
  v15 = 0LL;
  if ( IrqLibInterruptModel == 1 )
  {
    if ( (int)HalGetInterruptTargetInformation(0LL, a1, &v14) < 0 )
      return 0LL;
    ProcNumber = (struct _PROCESSOR_NUMBER)DWORD1(v14);
    ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
    v5 = ProcessorIndexFromNumber;
    if ( a2 != -1 && ProcessorIndexFromNumber != a2 )
      return 3221225496LL;
  }
  else
  {
    v3 = 0;
    ProcNumber = 0;
    v5 = 0;
  }
  v6 = v5;
  if ( *((_QWORD *)ProcessorByNtNumber + v5) )
    return 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x70uLL, 0x49706341u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x70uLL);
  *((struct _PROCESSOR_NUMBER *)v8 + 26) = ProcNumber;
  RtlInitializeRangeList((PRTL_RANGE_LIST)v8);
  RtlInitializeRangeList((PRTL_RANGE_LIST)v8 + 1);
  v9 = ProcessorpReserveUnownedRanges((PRTL_RANGE_LIST)v8);
  if ( v9 < 0 )
    goto LABEL_19;
  if ( IrqLibInterruptModel == 1 )
  {
    *((_DWORD *)v8 + 16) = v3;
    *(_OWORD *)(v8 + 68) = v14;
    *(_QWORD *)(v8 + 84) = v15;
  }
  v9 = ProcessorpIndexInstance(v5, &v14);
  if ( v9 < 0 )
  {
LABEL_19:
    v13 = (void *)*((_QWORD *)ProcessorByNtNumber + v5);
    if ( v13 )
    {
      ExFreePoolWithTag(v13, 0);
      *((_QWORD *)ProcessorByNtNumber + v5) = 0LL;
    }
    ExFreePoolWithTag(v8, 0);
  }
  else
  {
    v10 = v5 + 1;
    v11 = ProcessorInstanceCount <= v10;
    *((_QWORD *)ProcessorByNtNumber + v6) = v8;
    if ( v11 )
      ProcessorInstanceCount = v10;
    return 0;
  }
  return (unsigned int)v9;
}
