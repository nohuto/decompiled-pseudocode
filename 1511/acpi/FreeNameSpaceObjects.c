/*
 * XREFs of FreeNameSpaceObjects @ 0x1C0013710
 * Callers:
 *     AMLIEvalNameSpaceObject @ 0x1C0001750 (AMLIEvalNameSpaceObject.c)
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     RunContext @ 0x1C00028F0 (RunContext.c)
 *     CreateNativeNameSpaceObject @ 0x1C00052C0 (CreateNativeNameSpaceObject.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C000E5B4 (AMLIGetNameSpaceObjectNoLock.c)
 *     ParseField @ 0x1C000EF50 (ParseField.c)
 *     ParseTerm @ 0x1C000F430 (ParseTerm.c)
 *     ParseSuperName @ 0x1C0011120 (ParseSuperName.c)
 *     ParseScope @ 0x1C0012370 (ParseScope.c)
 *     AccessFieldData @ 0x1C0013530 (AccessFieldData.c)
 *     DereferenceObjectEx @ 0x1C00138E4 (DereferenceObjectEx.c)
 *     ParseCall @ 0x1C0013900 (ParseCall.c)
 *     ReadFieldObj @ 0x1C0015970 (ReadFieldObj.c)
 *     Simulator_RemoveNode @ 0x1C0042CA8 (Simulator_RemoveNode.c)
 *     FreeOwnedObjects @ 0x1C0044974 (FreeOwnedObjects.c)
 * Callees:
 *     FreeData @ 0x1C0003B14 (FreeData.c)
 *     HeapInsertFreeList @ 0x1C0012D00 (HeapInsertFreeList.c)
 */

void __fastcall FreeNameSpaceObjects(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // r14
  __int64 v4; // rdi
  KIRQL v5; // r12
  __int64 i; // rdx
  __int64 v7; // rsi
  __int64 v8; // r15
  _QWORD *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rdx

  v2 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = a1;
  v5 = v2;
  do
  {
    for ( i = *(_QWORD *)(v4 + 24); i; i = *(_QWORD *)(i + 24) )
      v4 = i;
    v7 = *(_QWORD *)(v4 + 16);
    v8 = *(_QWORD *)(v4 + 8);
    if ( !v7 || v8 == *(_QWORD *)(v7 + 24) )
      v8 = 0LL;
    v9 = qword_1C005A150;
    if ( qword_1C005A150 )
    {
      while ( v4 != v9[3] )
      {
        v9 = (_QWORD *)v9[1];
        if ( !v9 )
          goto LABEL_9;
      }
      if ( *v9 )
        *(_QWORD *)(*v9 + 8LL) = v9[1];
      v15 = (_QWORD *)v9[1];
      if ( v15 )
        *v15 = *v9;
      if ( v9 == qword_1C005A150 )
        qword_1C005A150 = (PVOID)v9[1];
      ExFreePoolWithTag(v9, 0);
    }
LABEL_9:
    if ( *(_WORD *)(v4 + 58) == 10 )
    {
      v14 = *(_QWORD *)(v4 + 88);
      if ( !*(_BYTE *)(v14 + 12) && (*(_BYTE *)(v14 + 13) & 1) != 0 )
        MmUnmapIoSpace(*(PVOID *)v14, *(unsigned int *)(v14 + 8));
    }
    if ( v7 )
    {
      if ( *(_QWORD *)(v4 + 8) == v4 )
      {
        *(_QWORD *)(v7 + 24) = 0LL;
      }
      else
      {
        v10 = *(_QWORD *)(v7 + 24);
        if ( v4 == v10 )
          *(_QWORD *)(v7 + 24) = *(_QWORD *)(v10 + 8);
        **(_QWORD **)(v4 + 8) = *(_QWORD *)v4;
        *(_QWORD *)(*(_QWORD *)v4 + 8LL) = *(_QWORD *)(v4 + 8);
      }
    }
    else if ( v4 == gpnsNameSpaceRoot )
    {
      gpnsNameSpaceRoot = 0LL;
    }
    v11 = *(_QWORD *)(v4 + 40);
    if ( v11 )
    {
      v12 = (_QWORD *)(v11 + 24);
      v13 = *(_QWORD *)(v11 + 24);
      if ( v13 )
      {
        while ( v13 != v4 )
        {
          v12 = (_QWORD *)(v13 + 48);
          v13 = *(_QWORD *)(v13 + 48);
          if ( !v13 )
            goto LABEL_19;
        }
        *v12 = *(_QWORD *)(v4 + 48);
      }
LABEL_19:
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(v4 + 40) + 32LL));
    }
    if ( (*(_BYTE *)(v4 + 56) & 0x40) == 0 )
    {
      FreeData((_QWORD *)(v4 + 56));
      *(_DWORD *)(v4 - 16) = 0;
      byte_1C005AAD8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      HeapInsertFreeList(*(_QWORD *)(v4 - 8), v4 - 16);
      KeReleaseSpinLock(&gmutHeap, byte_1C005AAD8);
    }
    if ( v4 == a1 )
      break;
    v4 = v7;
    if ( v8 )
      v4 = v8;
  }
  while ( v4 );
  ExReleaseSpinLockExclusive(&ACPINamespaceLock, v5);
  if ( v3 )
    DereferenceObjectEx(v3);
}
