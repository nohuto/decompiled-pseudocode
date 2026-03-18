/*
 * XREFs of FreeNameSpaceObjects @ 0x1C0019DC0
 * Callers:
 *     AMLIEvalNameSpaceObject @ 0x1C0001210 (AMLIEvalNameSpaceObject.c)
 *     ACPIGet @ 0x1C00015D0 (ACPIGet.c)
 *     RunContext @ 0x1C0002440 (RunContext.c)
 *     CreateNativeNameSpaceObject @ 0x1C0005530 (CreateNativeNameSpaceObject.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C0014CB8 (AMLIGetNameSpaceObjectNoLock.c)
 *     ParseField @ 0x1C0015710 (ParseField.c)
 *     ParseTerm @ 0x1C0015B30 (ParseTerm.c)
 *     ParseSuperName @ 0x1C0017D40 (ParseSuperName.c)
 *     DereferenceObjectEx @ 0x1C0019F6C (DereferenceObjectEx.c)
 *     ParseCall @ 0x1C0019F80 (ParseCall.c)
 *     WriteFieldObj @ 0x1C001AB70 (WriteFieldObj.c)
 *     ReadFieldObj @ 0x1C001C410 (ReadFieldObj.c)
 *     ParseScope @ 0x1C001F120 (ParseScope.c)
 *     Simulator_RemoveNode @ 0x1C005A378 (Simulator_RemoveNode.c)
 *     FreeOwnedObjects @ 0x1C005C0F4 (FreeOwnedObjects.c)
 * Callees:
 *     FreeData @ 0x1C00036A4 (FreeData.c)
 *     HeapInsertFreeList @ 0x1C0019890 (HeapInsertFreeList.c)
 *     DereferenceObjectEx @ 0x1C0019F6C (DereferenceObjectEx.c)
 */

void __fastcall FreeNameSpaceObjects(_QWORD *a1)
{
  KIRQL v2; // al
  __int64 v3; // r14
  _QWORD *v4; // rdi
  KIRQL v5; // r12
  _QWORD *v6; // rcx
  _QWORD *v7; // rsi
  _QWORD *v8; // r15
  _QWORD *v9; // rcx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rdx

  v2 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
  v3 = a1[2];
  v4 = a1;
  v5 = v2;
  do
  {
    while ( 1 )
    {
      v6 = v4 + 3;
      if ( (_QWORD *)*v6 == v6 )
        break;
      v4 = (_QWORD *)*v6;
    }
    v7 = (_QWORD *)v4[2];
    if ( !v7 || (v8 = (_QWORD *)*v4, (_QWORD *)*v4 == v7 + 3) )
      v8 = 0LL;
    v9 = qword_1C00745C0;
    if ( qword_1C00745C0 )
    {
      while ( v4 != (_QWORD *)v9[3] )
      {
        v9 = (_QWORD *)v9[1];
        if ( !v9 )
          goto LABEL_9;
      }
      if ( *v9 )
        *(_QWORD *)(*v9 + 8LL) = v9[1];
      v16 = (_QWORD *)v9[1];
      if ( v16 )
        *v16 = *v9;
      if ( v9 == qword_1C00745C0 )
        qword_1C00745C0 = (PVOID)v9[1];
      ExFreePoolWithTag(v9, 0);
    }
LABEL_9:
    if ( *((_WORD *)v4 + 33) == 10 )
    {
      v15 = v4[12];
      if ( !*(_BYTE *)(v15 + 12) && (*(_BYTE *)(v15 + 13) & 1) != 0 )
        MmUnmapIoSpace(*(PVOID *)v15, *(unsigned int *)(v15 + 8));
    }
    if ( v7 )
    {
      v10 = *v4;
      v11 = (_QWORD *)v4[1];
      if ( *(_QWORD **)(*v4 + 8LL) != v4 || (_QWORD *)*v11 != v4 )
        __fastfail(3u);
      *v11 = v10;
      *(_QWORD *)(v10 + 8) = v11;
    }
    else if ( v4 == (_QWORD *)gpnsNameSpaceRoot )
    {
      gpnsNameSpaceRoot = 0LL;
    }
    v12 = v4[6];
    if ( v12 )
    {
      v13 = (_QWORD *)(v12 + 24);
      v14 = *(_QWORD **)(v12 + 24);
      if ( v14 )
      {
        while ( v14 != v4 )
        {
          v13 = v14 + 7;
          v14 = (_QWORD *)v14[7];
          if ( !v14 )
            goto LABEL_18;
        }
        *v13 = v4[7];
      }
LABEL_18:
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v4[6] + 32LL));
    }
    if ( (v4[8] & 0x40) == 0 )
    {
      FreeData(v4 + 8);
      *((_DWORD *)v4 - 4) = 0;
      byte_1C0074F58 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      HeapInsertFreeList(*(v4 - 1), (unsigned int *)v4 - 4);
      KeReleaseSpinLock(&gmutHeap, byte_1C0074F58);
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
    DereferenceObjectEx(v3, "Child Object");
}
