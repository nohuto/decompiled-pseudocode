/*
 * XREFs of HeapAlloc @ 0x1C0011E70
 * Callers:
 *     AsyncEvalObject @ 0x1C0002000 (AsyncEvalObject.c)
 *     NewNameSpaceObject @ 0x1C0005820 (NewNameSpaceObject.c)
 *     Processor @ 0x1C0005920 (Processor.c)
 *     PushScope @ 0x1C0005DD0 (PushScope.c)
 *     NewObjOwner @ 0x1C0005EB8 (NewObjOwner.c)
 *     InitMutex @ 0x1C00060F8 (InitMutex.c)
 *     ParseString @ 0x1C000CDDC (ParseString.c)
 *     Index @ 0x1C000DC80 (Index.c)
 *     CreateXField @ 0x1C000DF7C (CreateXField.c)
 *     Package @ 0x1C000E850 (Package.c)
 *     ParseTerm @ 0x1C000F430 (ParseTerm.c)
 *     IfElse @ 0x1C0011950 (IfElse.c)
 *     PushTerm @ 0x1C0011D74 (PushTerm.c)
 *     FindNSObj @ 0x1C0012060 (FindNSObj.c)
 *     PushCall @ 0x1C001308C (PushCall.c)
 *     PushAccFieldObj @ 0x1C00131C0 (PushAccFieldObj.c)
 *     ParseCall @ 0x1C0013900 (ParseCall.c)
 *     Method @ 0x1C0014540 (Method.c)
 *     WriteField @ 0x1C00147DC (WriteField.c)
 *     AcquireASLMutex @ 0x1C0014B54 (AcquireASLMutex.c)
 *     PushFrame @ 0x1C0014DD4 (PushFrame.c)
 *     NewObjData @ 0x1C0015090 (NewObjData.c)
 *     ReadField @ 0x1C0016EB0 (ReadField.c)
 *     OpRegion @ 0x1C001FC60 (OpRegion.c)
 *     Buffer @ 0x1C0020230 (Buffer.c)
 *     Field @ 0x1C0020510 (Field.c)
 *     ParseObjName @ 0x1C0020940 (ParseObjName.c)
 *     IndexField @ 0x1C0022AA0 (IndexField.c)
 *     InitEvent @ 0x1C0023928 (InitEvent.c)
 *     Simulator_Copy_Arguments @ 0x1C00424E4 (Simulator_Copy_Arguments.c)
 *     LoadFieldUnitDDB @ 0x1C0045510 (LoadFieldUnitDDB.c)
 *     BankField @ 0x1C0045710 (BankField.c)
 *     PowerRes @ 0x1C0045950 (PowerRes.c)
 *     RawFieldAccess @ 0x1C004635C (RawFieldAccess.c)
 *     Concat @ 0x1C0047120 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C0047370 (ConcatenateResTemplate.c)
 *     MidString @ 0x1C0048060 (MidString.c)
 *     ToDecStr @ 0x1C0048990 (ToDecStr.c)
 *     ToHexStr @ 0x1C0048D10 (ToHexStr.c)
 *     ConvertToBuffer @ 0x1C00492BC (ConvertToBuffer.c)
 *     ConvertToString @ 0x1C0049480 (ConvertToString.c)
 *     ParseFieldConnection @ 0x1C0049A00 (ParseFieldConnection.c)
 *     AMLIInitialize @ 0x1C0084CC0 (AMLIInitialize.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1C0088680 (Simulator_NotifyTablesAreLoaded.c)
 * Callees:
 *     NewGlobalHeap @ 0x1C0006190 (NewGlobalHeap.c)
 *     HeapInsertFreeList @ 0x1C0012D00 (HeapInsertFreeList.c)
 *     NewLocalHeap @ 0x1C0018C98 (NewLocalHeap.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

__int64 __fastcall HeapAlloc(__int64 a1, int a2, unsigned int a3)
{
  unsigned int v3; // eax
  __int64 v6; // rbx
  __int64 v7; // rbp
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r11
  __int64 v13; // rax
  __int64 v15; // rcx
  bool v16; // cc
  __int64 v17; // rdx
  __int64 v18; // rdx
  unsigned int v19; // eax
  int v20; // eax
  __int64 v21; // [rsp+58h] [rbp+20h] BYREF

  v3 = a3 + 16;
  v6 = 0LL;
  v7 = 0LL;
  if ( a3 + 16 < a3 )
    return 0LL;
  if ( v3 < 0x20 )
    v3 = 32;
  if ( v3 + 7 < v3 )
    return 0LL;
  v8 = (v3 + 7) & 0xFFFFFFF8;
  byte_1C005AAD8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  if ( v8 <= *(_DWORD *)(a1 + 8) - (int)a1 - 48 )
  {
    v12 = a1;
    v21 = a1;
    while ( 1 )
    {
      v13 = *(_QWORD *)(v12 + 40);
      v6 = 0LL;
      if ( v13 )
      {
        v15 = *(_QWORD *)(v12 + 40);
        while ( 1 )
        {
          v16 = v8 <= *(_DWORD *)(v15 - 12);
          v6 = v15 - 16;
          if ( v8 <= *(_DWORD *)(v15 - 12) )
            break;
          v15 = *(_QWORD *)(v15 + 8);
          if ( v15 == v13 )
          {
            v16 = v8 <= *(_DWORD *)(v6 + 4);
            break;
          }
        }
        if ( !v16 )
          v6 = 0LL;
      }
      if ( v6 )
        break;
      if ( v8 <= *(_DWORD *)(v12 + 8) - *(_DWORD *)(v12 + 32) )
      {
        v6 = *(_QWORD *)(v12 + 32);
        *(_QWORD *)(v12 + 32) = v6 + v8;
        *(_DWORD *)(v6 + 4) = v8;
        goto LABEL_11;
      }
      v7 = v12;
      v12 = *(_QWORD *)(v12 + 24);
      v21 = v12;
      if ( !v12 )
        goto LABEL_11;
    }
    v17 = v6 + 16;
    if ( *(_QWORD *)(v6 + 24) == v6 + 16 )
    {
      *(_QWORD *)(v12 + 40) = 0LL;
    }
    else
    {
      if ( v17 == v13 )
        *(_QWORD *)(v12 + 40) = *(_QWORD *)(v13 + 8);
      **(_QWORD **)(v6 + 24) = *(_QWORD *)(v6 + 16);
      *(_QWORD *)(*(_QWORD *)v17 + 8LL) = *(_QWORD *)(v6 + 24);
    }
    v9 = v8;
    if ( *(unsigned int *)(v6 + 4) >= (unsigned __int64)v8 + 32 )
    {
      v18 = v6 + v8;
      *(_DWORD *)v18 = 0;
      v19 = *(_DWORD *)(v6 + 4) - v8;
      *(_QWORD *)(v18 + 8) = v12;
      *(_DWORD *)(v18 + 4) = v19;
      *(_DWORD *)(v6 + 4) = v8;
      HeapInsertFreeList(v12);
    }
LABEL_11:
    if ( v6 )
      goto LABEL_12;
    if ( a1 == gpheapGlobal )
      v20 = NewGlobalHeap(&v21);
    else
      v20 = NewLocalHeap(&v21, v9, v10, v11);
    if ( !v20 )
    {
      v12 = v21;
      *(_QWORD *)(v21 + 16) = a1;
      *(_QWORD *)(v7 + 24) = v12;
      v6 = *(_QWORD *)(v12 + 32);
      *(_QWORD *)(v12 + 32) = v6 + v8;
      *(_DWORD *)(v6 + 4) = v8;
LABEL_12:
      *(_DWORD *)v6 = a2;
      *(_QWORD *)(v6 + 8) = v12;
      memset((void *)(v6 + 16), 0, v8 - 16LL);
    }
  }
  KeReleaseSpinLock(&gmutHeap, byte_1C005AAD8);
  if ( v6 )
    return v6 + 16;
  return 0LL;
}
