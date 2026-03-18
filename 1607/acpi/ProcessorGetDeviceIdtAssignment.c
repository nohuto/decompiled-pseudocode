/*
 * XREFs of ProcessorGetDeviceIdtAssignment @ 0x1C0089780
 * Callers:
 *     IrqArbpUnreferenceArbitrationList @ 0x1C0087020 (IrqArbpUnreferenceArbitrationList.c)
 *     IrqArbpSetDeviceProperties @ 0x1C0088E18 (IrqArbpSetDeviceProperties.c)
 *     ProcessorpFindIdtEntriesApic @ 0x1C0089060 (ProcessorpFindIdtEntriesApic.c)
 *     IrqTranslateResources @ 0x1C0089600 (IrqTranslateResources.c)
 *     IrqArbGetDeviceIrql @ 0x1C008B21C (IrqArbGetDeviceIrql.c)
 *     IrqLibFreeMessageTarget @ 0x1C00A1B80 (IrqLibFreeMessageTarget.c)
 *     IrqTransGetInterruptVector @ 0x1C00A1F00 (IrqTransGetInterruptVector.c)
 *     IrqArbBacktrackAllocation @ 0x1C00A2190 (IrqArbBacktrackAllocation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessorGetDeviceIdtAssignment(PVOID a1, int a2, int a3, _OWORD *a4)
{
  unsigned int v4; // r11d
  __int64 v5; // rdi
  struct _RTL_RANGE_LIST *v10; // rcx
  PRTL_RANGE v11; // rcx
  _DWORD *UserData; // rax
  __int64 result; // rax
  __int128 v14; // xmm1
  PRTL_RANGE Range; // [rsp+20h] [rbp-38h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+28h] [rbp-30h] BYREF

  v4 = ProcessorInstanceCount;
  v5 = 0LL;
  if ( !ProcessorInstanceCount )
    return 3221226021LL;
  while ( 1 )
  {
    v10 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + v5);
    if ( v10 )
      break;
LABEL_10:
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= v4 )
      return 3221226021LL;
  }
  if ( a3 )
    ++v10;
  RtlGetFirstRange(v10, &Iterator, &Range);
  v11 = Range;
  if ( !Range )
  {
LABEL_9:
    v4 = ProcessorInstanceCount;
    goto LABEL_10;
  }
  while ( 1 )
  {
    UserData = v11->UserData;
    if ( UserData )
    {
      if ( UserData[4] == a2 && (!a1 || v11->Owner == a1) )
        break;
    }
    RtlGetNextRange(&Iterator, &Range, 1u);
    v11 = Range;
    if ( !Range )
      goto LABEL_9;
  }
  *a4 = *(_OWORD *)UserData;
  v14 = *((_OWORD *)UserData + 1);
  result = 0LL;
  a4[1] = v14;
  return result;
}
