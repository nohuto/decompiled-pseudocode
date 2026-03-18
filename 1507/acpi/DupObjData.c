/*
 * XREFs of DupObjData @ 0x1C0014040
 * Callers:
 *     AsyncEvalObject @ 0x1C0002000 (AsyncEvalObject.c)
 *     RunContext @ 0x1C0002900 (RunContext.c)
 *     ParseCall @ 0x1C0010E80 (ParseCall.c)
 *     WriteObject @ 0x1C0012B10 (WriteObject.c)
 *     Return @ 0x1C0013F20 (Return.c)
 *     DupObjData @ 0x1C0014040 (DupObjData.c)
 *     AMLIEvalPkgDataElement @ 0x1C001634C (AMLIEvalPkgDataElement.c)
 *     EvalPackageElement @ 0x1C001AE64 (EvalPackageElement.c)
 *     Simulator_Copy_Arguments @ 0x1C0042AC4 (Simulator_Copy_Arguments.c)
 *     Simulator_DuplicateObjData @ 0x1C0042B8C (Simulator_DuplicateObjData.c)
 *     ParseDLMObjectInternal @ 0x1C00453BC (ParseDLMObjectInternal.c)
 *     NestAsyncEvalObject @ 0x1C0046F48 (NestAsyncEvalObject.c)
 *     CopyObject @ 0x1C0047C40 (CopyObject.c)
 *     ProcessLoadTable @ 0x1C0048AC0 (ProcessLoadTable.c)
 *     ParseNestedContext @ 0x1C004A350 (ParseNestedContext.c)
 * Callees:
 *     ReferenceObjectEx @ 0x1C0005760 (ReferenceObjectEx.c)
 *     DupObjData @ 0x1C0014040 (DupObjData.c)
 *     NewObjData @ 0x1C0014160 (NewObjData.c)
 *     memmove @ 0x1C0023800 (memmove.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 __fastcall DupObjData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  unsigned int v5; // ebp
  __int64 result; // rax
  void *v7; // rax
  int v8; // ecx
  _DWORD *v9; // rcx
  int v10; // ebx
  _DWORD *v11; // rdx
  _DWORD *v12; // rsi
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  _DWORD *v18; // [rsp+78h] [rbp+20h]

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
    v8 = *(unsigned __int16 *)(v4 + 2);
    if ( v8 == 4 )
    {
      v9 = *(_DWORD **)(a3 + 32);
      v10 = 0;
      v11 = *(_DWORD **)(v4 + 32);
      v18 = v11;
      *v11 = *v9;
      if ( (int)*v9 > 0 )
      {
        v12 = v9;
        do
        {
          v5 = DupObjData(a1, &v11[10 * v10 + 2], &v12[10 * v10 + 2]);
          if ( v5 )
            break;
          v11 = v18;
          ++v10;
        }
        while ( v10 < *v12 );
        v4 = a2;
      }
      goto LABEL_11;
    }
    v13 = v8 - 5;
    if ( v13 )
    {
      v14 = v13 - 125;
      if ( !v14 )
      {
        ReferenceObjectEx(**(_QWORD **)(v4 + 32));
        ReferenceObjectEx(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 8LL));
        goto LABEL_11;
      }
      v15 = v14 - 1;
      if ( v15 )
      {
        if ( v15 != 1 )
        {
LABEL_11:
          *(_WORD *)v4 &= ~1u;
          result = v5;
          _InterlockedExchange((volatile __int32 *)(v4 + 8), 0);
          return result;
        }
        ReferenceObjectEx(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 8LL));
      }
    }
    ReferenceObjectEx(**(_QWORD **)(v4 + 32));
    goto LABEL_11;
  }
  LogError(3221225626LL);
  PrintDebugMessage(43, 0, 0, 0, 0LL);
  return 3221225626LL;
}
