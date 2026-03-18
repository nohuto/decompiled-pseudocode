/*
 * XREFs of ProcessorCopyData @ 0x1C006A2C0
 * Callers:
 *     IrqArbCommitAllocation @ 0x1C0069DA0 (IrqArbCommitAllocation.c)
 *     IrqArbBootAllocation @ 0x1C006A110 (IrqArbBootAllocation.c)
 *     IrqArbpPrepareForTestOrConflict @ 0x1C006B4C0 (IrqArbpPrepareForTestOrConflict.c)
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C006D578 (AcpiIrqLibSetupSciInterrupt.c)
 * Callees:
 *     ProcessorpInsertAssignment @ 0x1C006A550 (ProcessorpInsertAssignment.c)
 *     ProcessorpClearData @ 0x1C006A660 (ProcessorpClearData.c)
 */

__int64 __fastcall ProcessorCopyData(__int64 a1)
{
  unsigned int v1; // ebp
  unsigned int v2; // r8d
  unsigned int i; // ebx
  struct _RTL_RANGE_LIST *v4; // rcx
  struct _RTL_RANGE_LIST *v5; // rdx
  NTSTATUS v6; // edi
  unsigned int j; // ebx
  struct _RTL_RANGE_LIST *v8; // rcx
  PRTL_RANGE k; // rax
  ULONG m; // esi
  struct _RTL_RANGE_LIST *v11; // rbx
  struct _RTL_RANGE_LIST *v12; // rcx
  PRTL_RANGE n; // rax
  _WORD *UserData; // rbx
  __int64 v15; // rdi
  _OWORD *PoolWithTag; // rdx
  _OWORD *v18; // rcx
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+20h] [rbp-68h] BYREF
  struct _RANGE_LIST_ITERATOR v20; // [rsp+40h] [rbp-48h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+98h] [rbp+10h] BYREF
  PRTL_RANGE Range; // [rsp+A0h] [rbp+18h] BYREF
  PRTL_RANGE v23; // [rsp+A8h] [rbp+20h] BYREF

  v1 = a1;
  ProcessorpClearData(a1);
  v2 = ProcessorInstanceCount;
  for ( i = 0; i < v2; ++i )
  {
    v4 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + i);
    if ( v4 )
    {
      if ( v1 )
      {
        v5 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + i);
        ++v4;
      }
      else
      {
        v5 = v4 + 1;
      }
      v6 = RtlCopyRangeList(v4, v5);
      if ( v6 < 0 )
      {
LABEL_33:
        ProcessorpClearData(v1);
        return (unsigned int)v6;
      }
      v2 = ProcessorInstanceCount;
    }
  }
  for ( j = 0; j < v2; ++j )
  {
    v8 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + j);
    if ( v8 )
    {
      if ( v1 )
        ++v8;
      RtlGetFirstRange(v8, &Iterator, &Range);
      for ( k = Range; Range; k = Range )
      {
        k->UserData = 0LL;
        RtlGetNextRange(&Iterator, &Range, 1u);
      }
      v2 = ProcessorInstanceCount;
    }
  }
  for ( m = 0; m < v2; ++m )
  {
    v11 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + m);
    if ( v11 )
    {
      if ( v1 )
      {
        v12 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + m);
        ++v11;
      }
      else
      {
        v12 = v11 + 1;
      }
      RtlGetFirstRange(v12, &v20, &v23);
      RtlGetFirstRange(v11, &Iterator, &Range);
      for ( n = v23; v23; n = v23 )
      {
        UserData = n->UserData;
        if ( UserData )
        {
          v15 = *(_QWORD *)UserData;
          KeGetProcessorNumberFromIndex(m, &ProcNumber);
          if ( UserData[4] == ProcNumber.Group && ((1LL << ProcNumber.Number) & (v15 ^ (v15 - 1)) & v15) != 0 )
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x49706341u);
            if ( !PoolWithTag )
            {
              v6 = -1073741670;
              goto LABEL_33;
            }
            v18 = v23->UserData;
            *PoolWithTag = *v18;
            PoolWithTag[1] = v18[1];
            ProcessorpInsertAssignment(v23->Owner, PoolWithTag, v1);
          }
        }
        RtlGetNextRange(&v20, &v23, 1u);
        RtlGetNextRange(&Iterator, &Range, 1u);
      }
      v2 = ProcessorInstanceCount;
    }
  }
  return 0LL;
}
