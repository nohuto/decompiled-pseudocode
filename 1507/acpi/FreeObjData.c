/*
 * XREFs of FreeObjData @ 0x1C0010360
 * Callers:
 *     RunContext @ 0x1C0002900 (RunContext.c)
 *     FreeData @ 0x1C0003AE4 (FreeData.c)
 *     FreeDataBuffs @ 0x1C000E1D0 (FreeDataBuffs.c)
 *     ParseTerm @ 0x1C000E250 (ParseTerm.c)
 *     ParseCall @ 0x1C0010E80 (ParseCall.c)
 *     ParseScope @ 0x1C0017240 (ParseScope.c)
 *     ACPIGetWorkerForInteger @ 0x1C001C990 (ACPIGetWorkerForInteger.c)
 *     Simulator_DuplicateObjData @ 0x1C0042B8C (Simulator_DuplicateObjData.c)
 *     Simulator_Free_Arguments @ 0x1C0042C40 (Simulator_Free_Arguments.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C0043380 (AMLICreateNativeNamespaceObject.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C00446F4 (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLICreateOverrideObjectDep @ 0x1C0044A40 (AMLICreateOverrideObjectDep.c)
 *     ProcessLoadTable @ 0x1C0048AC0 (ProcessLoadTable.c)
 * Callees:
 *     PerformMutexDriverCallbacks @ 0x1C0005C1C (PerformMutexDriverCallbacks.c)
 *     ListRemoveEntry @ 0x1C0010770 (ListRemoveEntry.c)
 *     HeapFree @ 0x1C0010E2C (HeapFree.c)
 *     HeapInsertFreeList @ 0x1C0013620 (HeapInsertFreeList.c)
 *     DereferenceObjectEx @ 0x1C0013800 (DereferenceObjectEx.c)
 *     ListInsertTail @ 0x1C0017CB4 (ListInsertTail.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     GetObjectTypeName @ 0x1C0044FFC (GetObjectTypeName.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

void __fastcall FreeObjData(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rbx
  __int64 v4; // r8
  _QWORD **v5; // r9
  __int64 v6; // r11
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 *v16; // r9
  __int64 v17; // rdi
  __int64 *v18; // rax
  __int64 *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r11
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rcx
  _QWORD *v27; // rcx
  __int64 v28; // r11
  __int64 v29; // rcx
  int ObjectTypeName; // eax

  v1 = *(unsigned __int16 *)(a1 + 2);
  if ( v1 == 2 )
  {
    v14 = *(_QWORD *)(a1 + 32) - 16LL;
    *(_DWORD *)v14 = 0;
    byte_1C005AAF8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v16 = (__int64 *)(v14 + 16);
    v17 = *(_QWORD *)(v14 + 8);
    v18 = *(__int64 **)(v17 + 40);
    if ( v18 )
    {
      v19 = *(__int64 **)(v17 + 40);
      while ( v16 >= v19 )
      {
        v19 = (__int64 *)v19[1];
        if ( v19 == v18 )
        {
          if ( v16 >= v19 )
          {
            ListInsertTail(v14 + 16, v17 + 40);
            goto LABEL_24;
          }
          break;
        }
      }
      *(_QWORD *)(v14 + 24) = v19;
      v20 = *v19;
      *v16 = *v19;
      *(_QWORD *)(v20 + 8) = v16;
      **(_QWORD **)(v14 + 24) = v16;
      if ( *(__int64 **)(v17 + 40) != v19 )
        goto LABEL_24;
    }
    else
    {
      *(_QWORD *)(v17 + 40) = v16;
      *(_QWORD *)(v14 + 24) = v14 + 16;
      *v16 = (__int64)v16;
    }
    *(_QWORD *)(v17 + 40) = v16;
LABEL_24:
    v21 = *(unsigned int *)(v14 + 4);
    v22 = v21 + v14 + 16;
    if ( *(_QWORD *)(v14 + 24) == v22 )
    {
      *(_DWORD *)(v14 + 4) = *(_DWORD *)(v21 + v14 + 4) + v21;
      ListRemoveEntry(v22, v17 + 40, v15, v16);
    }
    v23 = *v16 - 16;
    v24 = *(unsigned int *)(v23 + 4);
    if ( v14 == v23 + v24 )
    {
      *(_DWORD *)(v23 + 4) = v24 + *(_DWORD *)(v14 + 4);
      ListRemoveEntry(v16, v17 + 40, v15, v16);
      v14 = v28;
    }
    if ( *(_QWORD *)(v17 + 32) <= v14 + (unsigned __int64)*(unsigned int *)(v14 + 4) )
    {
      *(_QWORD *)(v17 + 32) = v14;
      ListRemoveEntry(v14 + 16, v17 + 40, v15, v16);
    }
    goto LABEL_30;
  }
  if ( v1 == 4 )
  {
    v3 = *(_QWORD *)(a1 + 32) - 16LL;
    *(_DWORD *)v3 = 0;
    byte_1C005AAF8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v5 = (_QWORD **)(v3 + 16);
    v6 = *(_QWORD *)(v3 + 8);
    v7 = *(_QWORD **)(v6 + 40);
    if ( v7 )
    {
      v8 = *(_QWORD **)(v6 + 40);
      while ( v5 >= v8 )
      {
        v8 = (_QWORD *)v8[1];
        if ( v8 == v7 )
        {
          if ( v5 >= v8 )
          {
            *(_QWORD *)(v3 + 24) = v7;
            *v5 = **(_QWORD ***)(v6 + 40);
            *(_QWORD *)(**(_QWORD **)(v6 + 40) + 8LL) = v5;
            **(_QWORD **)(v6 + 40) = v5;
            goto LABEL_9;
          }
          break;
        }
      }
      *(_QWORD *)(v3 + 24) = v8;
      v27 = (_QWORD *)*v8;
      *v5 = (_QWORD *)*v8;
      v27[1] = v5;
      **(_QWORD **)(v3 + 24) = v5;
      if ( *(_QWORD **)(v6 + 40) == v8 )
        *(_QWORD *)(v6 + 40) = v5;
    }
    else
    {
      ListInsertTail(v3 + 16, v6 + 40);
      *(_QWORD *)(v6 + 40) = v5;
    }
LABEL_9:
    v9 = *(unsigned int *)(v3 + 4);
    v10 = v9 + v3 + 16;
    if ( *(_QWORD *)(v3 + 24) == v10 )
    {
      *(_DWORD *)(v3 + 4) = *(_DWORD *)(v9 + v3 + 4) + v9;
      ListRemoveEntry(v10, v6 + 40, v4, v5);
    }
    v11 = (__int64)(*v5 - 2);
    v12 = *(unsigned int *)(v11 + 4);
    if ( v3 == v11 + v12 )
    {
      *(_DWORD *)(v11 + 4) = *(_DWORD *)(v3 + 4) + v12;
      if ( v5[1] == v5 )
      {
        *(_QWORD *)(v6 + 40) = 0LL;
      }
      else
      {
        v13 = *(_QWORD *)(v6 + 40);
        if ( v5 == (_QWORD **)v13 )
          *(_QWORD *)(v6 + 40) = *(_QWORD *)(v13 + 8);
        *v5[1] = *v5;
        (*v5)[1] = v5[1];
      }
      v3 = v11;
    }
    if ( *(_QWORD *)(v6 + 32) <= v3 + (unsigned __int64)*(unsigned int *)(v3 + 4) )
    {
      *(_QWORD *)(v6 + 32) = v3;
      ListRemoveEntry(v3 + 16, v6 + 40, v4, v5);
    }
LABEL_30:
    KeReleaseSpinLock(&gmutHeap, byte_1C005AAF8);
    return;
  }
  switch ( *(_WORD *)(a1 + 2) )
  {
    case 3:
      v25 = *(_QWORD *)(a1 + 32);
      *(_DWORD *)(v25 - 16) = 0;
      byte_1C005AAF8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      HeapInsertFreeList(*(_QWORD *)(v25 - 8));
      goto LABEL_30;
    case 5:
    case 0x83:
      v26 = **(_QWORD **)(a1 + 32);
      if ( v26 )
        goto LABEL_35;
      goto LABEL_36;
    case 7:
    case 8:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xE:
      goto LABEL_36;
    case 9:
      PerformMutexDriverCallbacks(1, *(_QWORD *)(a1 + 32), 0LL, 0LL, 0);
      HeapFree(*(_QWORD *)(a1 + 32));
      return;
    case 0x82:
      v29 = **(_QWORD **)(a1 + 32);
      if ( v29 )
        goto LABEL_45;
      goto LABEL_46;
    case 0x84:
      v29 = **(_QWORD **)(a1 + 32);
      if ( v29 )
LABEL_45:
        DereferenceObjectEx(v29);
LABEL_46:
      v26 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
      if ( v26 )
LABEL_35:
        DereferenceObjectEx(v26);
LABEL_36:
      HeapFree(*(_QWORD *)(a1 + 32));
      break;
    default:
      LogError(3222536195LL);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a1 + 2));
      PrintDebugMessage(54, ObjectTypeName, 0, 0, 0LL);
      break;
  }
}
