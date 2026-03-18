/*
 * XREFs of FreeObjData @ 0x1C001B600
 * Callers:
 *     RunContext @ 0x1C0002440 (RunContext.c)
 *     FreeData @ 0x1C00036A4 (FreeData.c)
 *     ExprOp2_64 @ 0x1C0018F80 (ExprOp2_64.c)
 *     ParseCall @ 0x1C0019F80 (ParseCall.c)
 *     FreeDataBuffs @ 0x1C001B580 (FreeDataBuffs.c)
 *     ACPIGetWorkerForInteger @ 0x1C001C030 (ACPIGetWorkerForInteger.c)
 *     ParseScope @ 0x1C001F120 (ParseScope.c)
 *     Simulator_DuplicateObjData @ 0x1C0059C4C (Simulator_DuplicateObjData.c)
 *     Simulator_Free_Arguments @ 0x1C0059D00 (Simulator_Free_Arguments.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C005A470 (AMLICreateNativeNamespaceObject.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C005B8AC (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLICreateOverrideObjectDep @ 0x1C005BBEC (AMLICreateOverrideObjectDep.c)
 *     ProcessLoadTable @ 0x1C005FDA0 (ProcessLoadTable.c)
 * Callees:
 *     PerformMutexDriverCallbacks @ 0x1C0007554 (PerformMutexDriverCallbacks.c)
 *     HeapInsertFreeList @ 0x1C0019890 (HeapInsertFreeList.c)
 *     DereferenceObjectEx @ 0x1C0019F6C (DereferenceObjectEx.c)
 *     HeapFree @ 0x1C001B8A0 (HeapFree.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     GetObjectTypeName @ 0x1C005C1C8 (GetObjectTypeName.c)
 */

void __fastcall FreeObjData(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rbx
  __int64 v4; // r10
  _QWORD *v5; // rax
  _QWORD *i; // rdx
  __int64 *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // r9
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rbx
  _QWORD *v16; // rbx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  int v20; // ecx
  _QWORD *v21; // r9
  __int64 v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rcx
  _QWORD *v25; // rcx
  int ObjectTypeName; // eax

  v1 = *(unsigned __int16 *)(a1 + 2);
  if ( v1 == 4 )
  {
    v3 = *(_QWORD *)(a1 + 32) - 16LL;
    *(_DWORD *)v3 = 0;
    byte_1C0074F58 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v4 = *(_QWORD *)(v3 + 8);
    v5 = *(_QWORD **)(v4 + 40);
    for ( i = (_QWORD *)(v4 + 40); v5 != i; v5 = (_QWORD *)*v5 )
    {
      if ( v3 + 16 < (unsigned __int64)v5 )
        break;
    }
    v7 = (__int64 *)v5[1];
    v8 = v3 + 16;
    if ( (_QWORD *)*v7 != v5 )
      __fastfail(3u);
    *(_QWORD *)v8 = v5;
    *(_QWORD *)(v3 + 24) = v7;
    *v7 = v8;
    v5[1] = v8;
    v9 = *(_QWORD *)v8 - 16LL;
    if ( *(_QWORD **)v8 != i )
    {
      v19 = *(unsigned int *)(v3 + 4);
      if ( v9 == v3 + v19 )
      {
        v20 = *(_DWORD *)(v9 + 4) + v19;
        v21 = *(_QWORD **)v8;
        *(_DWORD *)(v3 + 4) = v20;
        v22 = *v21;
        v23 = (_QWORD *)v21[1];
        if ( *(_QWORD **)(*v21 + 8LL) != v21 || (_QWORD *)*v23 != v21 )
          __fastfail(3u);
        *v23 = v22;
        *(_QWORD *)(v22 + 8) = v23;
      }
    }
    v10 = *(_QWORD **)(v3 + 24);
    v11 = (__int64)(v10 - 2);
    if ( v10 != i )
    {
      v12 = *(unsigned int *)(v11 + 4);
      if ( v3 == v11 + v12 )
      {
        *(_DWORD *)(v11 + 4) = *(_DWORD *)(v3 + 4) + v12;
        v13 = *(_QWORD **)v8;
        v14 = *(_QWORD **)(v3 + 24);
        if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 || *v14 != v8 )
          __fastfail(3u);
        *v14 = v13;
        v3 = v11;
        v13[1] = v14;
      }
    }
    if ( *(_QWORD *)(v4 + 32) <= v3 + (unsigned __int64)*(unsigned int *)(v3 + 4) )
    {
      *(_QWORD *)(v4 + 32) = v3;
      v16 = (_QWORD *)(v3 + 16);
      v17 = *v16;
      v18 = (_QWORD *)v16[1];
      if ( *(_QWORD **)(*v16 + 8LL) != v16 || (_QWORD *)*v18 != v16 )
        __fastfail(3u);
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
    }
    goto LABEL_13;
  }
  if ( v1 == 3 )
  {
    v15 = *(_QWORD *)(a1 + 32);
    *(_DWORD *)(v15 - 16) = 0;
    byte_1C0074F58 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    HeapInsertFreeList(*(_QWORD *)(v15 - 8), (unsigned int *)(v15 - 16));
LABEL_13:
    KeReleaseSpinLock(&gmutHeap, byte_1C0074F58);
    return;
  }
  switch ( *(_WORD *)(a1 + 2) )
  {
    case 2:
    case 7:
    case 8:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xE:
      HeapFree(*(_QWORD *)(a1 + 32));
      return;
    case 5:
    case 0x83:
      v24 = **(_QWORD ***)(a1 + 32);
      if ( !v24 )
        goto LABEL_27;
      goto LABEL_26;
    case 9:
      PerformMutexDriverCallbacks(1, *(_QWORD *)(a1 + 32), 0LL, 0LL, 0);
      HeapFree(*(_QWORD *)(a1 + 32));
      return;
    case 0x82:
      v25 = **(_QWORD ***)(a1 + 32);
      if ( v25 )
        goto LABEL_31;
      goto LABEL_32;
    case 0x84:
      v25 = **(_QWORD ***)(a1 + 32);
      if ( v25 )
LABEL_31:
        DereferenceObjectEx(v25);
LABEL_32:
      v24 = *(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL);
      if ( v24 )
LABEL_26:
        DereferenceObjectEx(v24);
LABEL_27:
      HeapFree(*(_QWORD *)(a1 + 32));
      break;
    default:
      LogError(3222536195LL);
      AcpiDiagTraceAmlError(0LL, 3222536195LL);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a1 + 2));
      PrintDebugMessage(54, ObjectTypeName, 0, 0, 0LL);
      break;
  }
}
