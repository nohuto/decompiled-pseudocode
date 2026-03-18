/*
 * XREFs of FsRtlpOplockCleanup @ 0x140035F48
 * Callers:
 *     FsRtlCheckOplockEx @ 0x140037050 (FsRtlCheckOplockEx.c)
 * Callees:
 *     IoGetOplockFullFoExt @ 0x140036368 (IoGetOplockFullFoExt.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1400C9078 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpModifyThreadPriorities @ 0x1400C92DC (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1400C98A4 (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x1400C9A68 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpOplockDequeueRH @ 0x1400C9C04 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpComputeShareableOplockState @ 0x1400CAD98 (FsRtlpComputeShareableOplockState.c)
 *     IoAcquireCancelSpinLock @ 0x1400CAFE0 (IoAcquireCancelSpinLock.c)
 *     FsRtlpClearOwnerThread @ 0x1400CB038 (FsRtlpClearOwnerThread.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1400CC94C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlpOplockCleanup(_DWORD *a1, __int64 a2)
{
  char v3; // r15
  char v4; // di
  int v5; // r8d
  __int64 v6; // r9
  char v7; // r11
  __int64 OplockFullFoExt; // r13
  _QWORD *v9; // r14
  int v10; // r12d
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rdi
  __int64 v14; // rdx
  _QWORD *v15; // r8
  _QWORD *v16; // rcx
  char v17; // r14
  _QWORD *j; // rbx
  __int64 v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // r10
  __int64 v22; // rcx
  _QWORD *v23; // rax
  _QWORD *i; // rbx
  _QWORD *v25; // rcx
  _QWORD *v26; // rcx
  __int64 v27; // rdx
  _QWORD *v28; // rax
  char v29; // [rsp+40h] [rbp-48h]

  v3 = 0;
  v4 = 0;
  v29 = 0;
  if ( a1[36] == 1 )
    goto LABEL_60;
  OplockFullFoExt = IoGetOplockFullFoExt(*(_QWORD *)(a2 + 48));
  if ( (a1[36] & 0x1000000) != 0 )
  {
    for ( i = (_QWORD *)*((_QWORD *)a1 + 13); i != (_QWORD *)(a1 + 26); i = (_QWORD *)*i )
    {
      if ( *(_QWORD *)(v6 + 48) == i[2] )
      {
        while ( 1 )
        {
          v25 = a1 + 22;
          if ( (_QWORD *)*v25 == v25 )
            break;
          FsRtlpRemoveAndCompleteWaitingIrp(*v25);
        }
        v26 = *(_QWORD **)i[1];
        v27 = *v26;
        v28 = (_QWORD *)v26[1];
        if ( *(_QWORD **)(*v26 + 8LL) != v26 || (_QWORD *)*v28 != v26 )
          __fastfail(3u);
        *v28 = v27;
        *(_QWORD *)(v27 + 8) = v28;
        ObfDereferenceObjectWithTag((PVOID)i[2], 0x746C6644u);
        ExFreePoolWithTag(i, 0);
        v6 = a2;
        v7 = 1;
        break;
      }
    }
    a1[36] &= ~0x1000000u;
    v4 = 0;
    if ( *((_DWORD **)a1 + 13) != a1 + 26 )
      v4 = v7;
    v29 = v4;
  }
  v9 = a1 + 10;
  v10 = 534;
  if ( (_QWORD *)*v9 != v9 )
  {
    for ( j = (_QWORD *)*v9; j != v9; j = (_QWORD *)*j )
    {
      v19 = j[2];
      if ( *(_QWORD *)(v6 + 48) == *(_QWORD *)(v19 + 48) )
      {
        j = (_QWORD *)j[1];
        if ( *(_DWORD *)(v19 + 24) == 590400 )
        {
          v20 = 534LL;
          v3 = v7;
        }
        else
        {
          v20 = 0LL;
        }
        FsRtlpRemoveAndCompleteReadOnlyIrp(*j, v20, 0LL);
        if ( v3 )
          break;
        v6 = a2;
        v7 = 1;
      }
    }
    FsRtlpComputeShareableOplockState(a1);
    v7 = 1;
  }
  if ( OplockFullFoExt )
  {
    v11 = *(_QWORD *)(OplockFullFoExt + 40);
    if ( v11 )
    {
      v17 = 0;
      if ( (*(_DWORD *)(v11 + 48) & 0xF00000) != 0 )
      {
        FsRtlpOplockDequeueRH(*(_QWORD *)(OplockFullFoExt + 40));
        FsRtlpModifyThreadPriorities(a1, v11, 0LL);
        FsRtlpClearOwnerThread(a1, v11);
        if ( *((_DWORD **)a1 + 9) == a1 + 18 )
          *((_BYTE *)a1 + 32) = 0;
        ObfDereferenceObjectWithTag(*(PVOID *)(v11 + 24), 0x746C6644u);
      }
      else
      {
        if ( (a1[36] & 0x10000) == 0 || !*(_QWORD *)(v11 + 56) )
        {
          LOBYTE(v5) = v7;
          FsRtlpRemoveAndBreakRHIrp((PVOID)v11, (int)a1, v5, 534, 0);
          goto LABEL_21;
        }
        FsRtlpOplockDequeueRH(*(_QWORD *)(OplockFullFoExt + 40));
        v22 = *v21;
        v23 = (_QWORD *)v21[1];
        if ( *(_QWORD **)(*v21 + 8LL) != v21 || (_QWORD *)*v23 != v21 )
          __fastfail(3u);
        *v23 = v22;
        *(_QWORD *)(v22 + 8) = v23;
        if ( *((_DWORD **)a1 + 15) == a1 + 30 )
          a1[36] &= 0xFFFCFFFF;
        if ( *(_QWORD *)(v11 + 40) )
          FsRtlpClearOwnerThread(a1, v11);
      }
      ExFreePoolWithTag((PVOID)v11, 0);
      v17 = 1;
LABEL_21:
      FsRtlpComputeShareableOplockState(a1);
      if ( v17 )
        FsRtlpReleaseIrpsWaitingForRH(a1);
    }
  }
  if ( *(_QWORD *)(a2 + 48) == *((_QWORD *)a1 + 1) )
  {
    if ( (a1[36] & 0x1F00F80) == 0 )
    {
      v12 = *(_QWORD *)a1;
      v13 = *(_QWORD *)(*(_QWORD *)a1 + 184LL);
      IoAcquireCancelSpinLock((PKIRQL)(*(_QWORD *)a1 + 69LL));
      _InterlockedExchange64((volatile __int64 *)(v12 + 104), 0LL);
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v12 + 69));
      if ( *(_DWORD *)(v13 + 24) == 590400 )
      {
        v15 = *(_QWORD **)(v12 + 24);
        *v15 = 0LL;
        v15[1] = 0LL;
        v15[2] = 0LL;
        *(_DWORD *)v15 = 1572865;
        v14 = (a1[36] >> 12) & 7;
        *(_QWORD *)((char *)v15 + 4) = (unsigned int)v14;
        *(_QWORD *)(v12 + 56) = 24LL;
      }
      else
      {
        *(_QWORD *)(v12 + 56) = 8LL;
        v10 = 0;
      }
      *(_DWORD *)(*(_QWORD *)a1 + 48LL) = v10;
      LOBYTE(v14) = 1;
      pIofCompleteRequest(*(_QWORD *)a1, v14);
      v4 = v29;
    }
    if ( (a1[36] & 0x80u) == 0 )
      ObfDereferenceObjectWithTag(*((PVOID *)a1 + 1), 0x746C6644u);
    *((_QWORD *)a1 + 1) = 0LL;
    *(_QWORD *)a1 = 0LL;
    if ( *((_QWORD *)a1 + 3) )
    {
      FsRtlpModifyThreadPriorities(a1, 0LL, 0LL);
      FsRtlpClearOwnerThread(a1, 0LL);
      *((_BYTE *)a1 + 32) = 0;
    }
    a1[36] = a1[36] & 0x20 | 1;
    while ( 1 )
    {
      v16 = a1 + 22;
      if ( (_QWORD *)*v16 == v16 )
        break;
      FsRtlpRemoveAndCompleteWaitingIrp(*v16);
    }
  }
LABEL_60:
  if ( v4 )
    a1[36] |= 0x1000000u;
}
