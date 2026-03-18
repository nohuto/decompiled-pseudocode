/*
 * XREFs of ProcessorCopyData @ 0x1C008A5A0
 * Callers:
 *     IrqArbCommitAllocation @ 0x1C008A080 (IrqArbCommitAllocation.c)
 *     IrqArbBootAllocation @ 0x1C008A3F0 (IrqArbBootAllocation.c)
 *     IrqArbpPrepareForTestOrConflict @ 0x1C008BAC8 (IrqArbpPrepareForTestOrConflict.c)
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C008D1E8 (AcpiIrqLibSetupSciInterrupt.c)
 * Callees:
 *     ProcessorpClearData @ 0x1C008A8D0 (ProcessorpClearData.c)
 */

__int64 __fastcall ProcessorCopyData(__int64 a1)
{
  unsigned int v1; // r15d
  unsigned int v2; // r8d
  unsigned int i; // ebx
  struct _RTL_RANGE_LIST *v4; // rcx
  struct _RTL_RANGE_LIST *v5; // rdx
  NTSTATUS v6; // edi
  unsigned int j; // ebx
  struct _RTL_RANGE_LIST *v8; // rcx
  PRTL_RANGE k; // rax
  ULONG m; // r14d
  struct _RTL_RANGE_LIST *v11; // rbx
  struct _RTL_RANGE_LIST *v12; // rcx
  PRTL_RANGE n; // rax
  _WORD *UserData; // rbx
  __int64 v15; // rdi
  __int64 *PoolWithTag; // rax
  _DWORD *v18; // rbx
  unsigned __int8 v19; // si
  _OWORD *v20; // rcx
  __int64 v21; // rdi
  PVOID Owner; // r12
  ULONG ProcessorIndexFromNumber; // eax
  struct _RTL_RANGE_LIST *v24; // rcx
  PRTL_RANGE v25; // rcx
  unsigned __int8 v26; // al
  PRTL_RANGE Range; // [rsp+20h] [rbp-59h] BYREF
  PRTL_RANGE v28; // [rsp+28h] [rbp-51h] BYREF
  PRTL_RANGE v29; // [rsp+30h] [rbp-49h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+38h] [rbp-41h] BYREF
  struct _RANGE_LIST_ITERATOR v31; // [rsp+58h] [rbp-21h] BYREF
  struct _RANGE_LIST_ITERATOR v32; // [rsp+78h] [rbp-1h] BYREF
  struct _PROCESSOR_NUMBER v33; // [rsp+E8h] [rbp+6Fh]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+F0h] [rbp+77h] BYREF
  struct _PROCESSOR_NUMBER v35; // [rsp+F8h] [rbp+7Fh] BYREF

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
LABEL_48:
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
      RtlGetFirstRange(v12, &v32, &v28);
      RtlGetFirstRange(v11, &Iterator, &Range);
      for ( n = v28; v28; n = v28 )
      {
        UserData = n->UserData;
        if ( UserData )
        {
          v15 = *(_QWORD *)UserData;
          KeGetProcessorNumberFromIndex(m, &ProcNumber);
          if ( UserData[4] == ProcNumber.Group && ((1LL << ProcNumber.Number) & (v15 ^ (v15 - 1)) & v15) != 0 )
          {
            PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x49706341u);
            v18 = PoolWithTag;
            if ( !PoolWithTag )
            {
              v6 = -1073741670;
              goto LABEL_48;
            }
            v19 = 0;
            v33.Reserved = 0;
            v20 = v28->UserData;
            *(_OWORD *)PoolWithTag = *v20;
            *((_OWORD *)PoolWithTag + 1) = v20[1];
            v21 = *PoolWithTag;
            Owner = v28->Owner;
            for ( v33.Group = *((_WORD *)PoolWithTag + 4); v21; v21 &= ~(1LL << v26) )
            {
              if ( _bittest64(&v21, v19) )
              {
                v33.Number = v19;
                v35 = v33;
                ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&v35);
                if ( ProcessorIndexFromNumber == -1 || ProcessorIndexFromNumber >= ProcessorInstanceCount )
                  v24 = 0LL;
                else
                  v24 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + ProcessorIndexFromNumber);
                if ( v1 )
                  ++v24;
                RtlGetFirstRange(v24, &v31, &v29);
                v25 = v29;
                if ( v29 )
                {
                  while ( LODWORD(v25->Start) != v18[5] || v25->Owner != Owner )
                  {
                    RtlGetNextRange(&v31, &v29, 1u);
                    v25 = v29;
                    if ( !v29 )
                      goto LABEL_42;
                  }
                  v25->UserData = v18;
                }
              }
LABEL_42:
              v26 = v19++;
            }
          }
        }
        RtlGetNextRange(&v32, &v28, 1u);
        RtlGetNextRange(&Iterator, &Range, 1u);
      }
      v2 = ProcessorInstanceCount;
    }
  }
  return 0LL;
}
