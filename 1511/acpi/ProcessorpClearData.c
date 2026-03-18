/*
 * XREFs of ProcessorpClearData @ 0x1C006A660
 * Callers:
 *     IrqArbCommitAllocation @ 0x1C0069DA0 (IrqArbCommitAllocation.c)
 *     IrqArbBootAllocation @ 0x1C006A110 (IrqArbBootAllocation.c)
 *     ProcessorCopyData @ 0x1C006A2C0 (ProcessorCopyData.c)
 *     IrqArbpPrepareForTestOrConflict @ 0x1C006B4C0 (IrqArbpPrepareForTestOrConflict.c)
 *     IrqArbpQueryConflictIsa @ 0x1C0080BB8 (IrqArbpQueryConflictIsa.c)
 * Callees:
 *     <none>
 */

void __fastcall ProcessorpClearData(int a1)
{
  unsigned int v1; // r8d
  ULONG i; // edi
  struct _RTL_RANGE_LIST *v4; // rsi
  PRTL_RANGE j; // rax
  _QWORD *UserData; // rbx
  __int64 v7; // rcx
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+20h] [rbp-38h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+68h] [rbp+10h] BYREF
  PRTL_RANGE Range; // [rsp+70h] [rbp+18h] BYREF

  v1 = ProcessorInstanceCount;
  for ( i = 0; i < v1; ++i )
  {
    v4 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + i);
    if ( v4 )
    {
      if ( a1 )
        ++v4;
      RtlGetFirstRange(v4, &Iterator, &Range);
      for ( j = Range; Range; j = Range )
      {
        UserData = j->UserData;
        if ( UserData )
        {
          KeGetProcessorNumberFromIndex(i, &ProcNumber);
          v7 = *UserData & ~(1LL << ProcNumber.Number);
          *UserData = v7;
          if ( !v7 )
            ExFreePoolWithTag(UserData, 0);
          Range->UserData = 0LL;
        }
        RtlGetNextRange(&Iterator, &Range, 1u);
      }
      RtlFreeRangeList(v4);
      v1 = ProcessorInstanceCount;
    }
  }
}
