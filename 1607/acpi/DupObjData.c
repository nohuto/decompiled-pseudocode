/*
 * XREFs of DupObjData @ 0x1C0018AF0
 * Callers:
 *     AsyncEvalObject @ 0x1C0001AD0 (AsyncEvalObject.c)
 *     RunContext @ 0x1C0002440 (RunContext.c)
 *     Return @ 0x1C00189D0 (Return.c)
 *     DupObjData @ 0x1C0018AF0 (DupObjData.c)
 *     WriteObject @ 0x1C00191F0 (WriteObject.c)
 *     ParseCall @ 0x1C0019F80 (ParseCall.c)
 *     AMLIEvalPkgDataElement @ 0x1C0021FFC (AMLIEvalPkgDataElement.c)
 *     EvalPackageElement @ 0x1C0022CEC (EvalPackageElement.c)
 *     Simulator_Copy_Arguments @ 0x1C0059B84 (Simulator_Copy_Arguments.c)
 *     Simulator_DuplicateObjData @ 0x1C0059C4C (Simulator_DuplicateObjData.c)
 *     ParseDLMObjectInternal @ 0x1C005C5AC (ParseDLMObjectInternal.c)
 *     NestAsyncEvalObject @ 0x1C005DFF8 (NestAsyncEvalObject.c)
 *     CopyObject @ 0x1C005EE20 (CopyObject.c)
 *     ProcessLoadTable @ 0x1C005FDA0 (ProcessLoadTable.c)
 *     ParseNestedContext @ 0x1C0061780 (ParseNestedContext.c)
 * Callees:
 *     DupObjData @ 0x1C0018AF0 (DupObjData.c)
 *     NewObjData @ 0x1C0018C10 (NewObjData.c)
 *     ReferenceObjectEx @ 0x1C0020A34 (ReferenceObjectEx.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
 */

__int64 __fastcall DupObjData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  unsigned int v5; // ebp
  __int64 result; // rax
  void *v7; // rax
  __int64 v8; // rdx
  int v9; // ecx
  _DWORD *v10; // rcx
  int v11; // ebx
  _DWORD *v12; // rdx
  _DWORD *v13; // rsi
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // rdx
  _DWORD *v20; // [rsp+78h] [rbp+20h]

  v4 = a2;
  v5 = 0;
  if ( a2 == a3 )
    return 0LL;
  *(_OWORD *)a2 = *(_OWORD *)a3;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(a3 + 32);
  if ( !*(_QWORD *)(a3 + 32) )
    return 0LL;
  v7 = (void *)NewObjData(a1, a3);
  *(_QWORD *)(v4 + 32) = v7;
  if ( v7 )
  {
    memmove(v7, *(const void **)(a3 + 32), *(unsigned int *)(a3 + 24));
    v9 = *(unsigned __int16 *)(v4 + 2);
    if ( v9 == 4 )
    {
      v10 = *(_DWORD **)(a3 + 32);
      v11 = 0;
      v12 = *(_DWORD **)(v4 + 32);
      v20 = v12;
      *v12 = *v10;
      if ( (int)*v10 > 0 )
      {
        v13 = v10;
        do
        {
          v5 = DupObjData(a1, &v12[10 * v11 + 2], &v13[10 * v11 + 2]);
          if ( v5 )
            break;
          v12 = v20;
          ++v11;
        }
        while ( v11 < *v13 );
        v4 = a2;
      }
      goto LABEL_11;
    }
    v14 = v9 - 5;
    if ( v14 )
    {
      v15 = v14 - 125;
      if ( !v15 )
      {
        ReferenceObjectEx(**(_QWORD **)(v4 + 32), v8);
        ReferenceObjectEx(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 8LL), v17);
        goto LABEL_11;
      }
      v16 = v15 - 1;
      if ( v16 )
      {
        if ( v16 != 1 )
        {
LABEL_11:
          *(_WORD *)v4 &= ~1u;
          result = v5;
          _InterlockedExchange((volatile __int32 *)(v4 + 8), 0);
          return result;
        }
        ReferenceObjectEx(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 8LL), v8);
      }
    }
    ReferenceObjectEx(**(_QWORD **)(v4 + 32), v8);
    goto LABEL_11;
  }
  LogError(3221225626LL);
  AcpiDiagTraceAmlError(0LL, 3221225626LL);
  PrintDebugMessage(43, 0, 0, 0, 0LL);
  return 3221225626LL;
}
