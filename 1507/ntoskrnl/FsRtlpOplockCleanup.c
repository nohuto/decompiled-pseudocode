/*
 * XREFs of FsRtlpOplockCleanup @ 0x140070B48
 * Callers:
 *     FsRtlCheckOplockEx @ 0x140070120 (FsRtlCheckOplockEx.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x14006D71C (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x14006D8EC (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpOplockDequeueRH @ 0x14006DB24 (FsRtlpOplockDequeueRH.c)
 *     IoGetOplockFullFoExt @ 0x140070F68 (IoGetOplockFullFoExt.c)
 *     FsRtlpClearOwnerThread @ 0x1400725F8 (FsRtlpClearOwnerThread.c)
 *     FsRtlpModifyThreadPriorities @ 0x14007262C (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpComputeShareableOplockState @ 0x140073B18 (FsRtlpComputeShareableOplockState.c)
 *     IoAcquireCancelSpinLock @ 0x140073D60 (IoAcquireCancelSpinLock.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x140073E88 (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14016F33C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlpOplockCleanup(_DWORD *a1, __int64 a2, __int64 a3)
{
  char v4; // r15
  char v5; // di
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // r11
  __int64 OplockFullFoExt; // r13
  _QWORD *v11; // r14
  int v12; // r12d
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 v15; // rdi
  _QWORD *v16; // r8
  _QWORD *v17; // rcx
  char v18; // r14
  _QWORD *j; // rbx
  __int64 v20; // rcx
  __int64 v21; // rdx
  _QWORD *v22; // r10
  __int64 v23; // rcx
  _QWORD *v24; // rax
  _QWORD *i; // rbx
  _QWORD *v26; // rcx
  _QWORD *v27; // rcx
  __int64 v28; // rdx
  _QWORD *v29; // rax
  char v30; // [rsp+40h] [rbp-48h]

  v4 = 0;
  v5 = 0;
  v30 = 0;
  if ( a1[36] == 1 )
    goto LABEL_60;
  OplockFullFoExt = IoGetOplockFullFoExt(*(_QWORD *)(a2 + 48), a2, a3, a2);
  if ( (a1[36] & 0x1000000) != 0 )
  {
    for ( i = (_QWORD *)*((_QWORD *)a1 + 13); i != (_QWORD *)(a1 + 26); i = (_QWORD *)*i )
    {
      if ( *(_QWORD *)(v8 + 48) == i[2] )
      {
        while ( 1 )
        {
          v26 = a1 + 22;
          if ( (_QWORD *)*v26 == v26 )
            break;
          FsRtlpRemoveAndCompleteWaitingIrp(*v26);
        }
        v27 = *(_QWORD **)i[1];
        v28 = *v27;
        v29 = (_QWORD *)v27[1];
        if ( *(_QWORD **)(*v27 + 8LL) != v27 || (_QWORD *)*v29 != v27 )
          __fastfail(3u);
        *v29 = v28;
        *(_QWORD *)(v28 + 8) = v29;
        ObfDereferenceObjectWithTag((PVOID)i[2], 0x746C6644u);
        ExFreePoolWithTag(i, 0);
        v8 = a2;
        v9 = 1;
        break;
      }
    }
    a1[36] &= ~0x1000000u;
    v5 = 0;
    if ( *((_DWORD **)a1 + 13) != a1 + 26 )
      v5 = v9;
    v30 = v5;
  }
  v11 = a1 + 10;
  v12 = 534;
  if ( (_QWORD *)*v11 != v11 )
  {
    for ( j = (_QWORD *)*v11; j != v11; j = (_QWORD *)*j )
    {
      v20 = j[2];
      if ( *(_QWORD *)(v8 + 48) == *(_QWORD *)(v20 + 48) )
      {
        j = (_QWORD *)j[1];
        if ( *(_DWORD *)(v20 + 24) == 590400 )
        {
          v21 = 534LL;
          v4 = v9;
        }
        else
        {
          v21 = 0LL;
        }
        FsRtlpRemoveAndCompleteReadOnlyIrp(*j, v21, 0LL);
        if ( v4 )
          break;
        v8 = a2;
        v9 = 1;
      }
    }
    FsRtlpComputeShareableOplockState(a1);
    v9 = 1;
  }
  if ( OplockFullFoExt )
  {
    v13 = *(_QWORD *)(OplockFullFoExt + 40);
    if ( v13 )
    {
      v18 = 0;
      if ( (*(_DWORD *)(v13 + 48) & 0xF00000) != 0 )
      {
        FsRtlpOplockDequeueRH(*(_QWORD *)(OplockFullFoExt + 40), v6, v7);
        FsRtlpModifyThreadPriorities(a1, v13, 0LL);
        FsRtlpClearOwnerThread(a1, v13);
        if ( *((_DWORD **)a1 + 9) == a1 + 18 )
          *((_BYTE *)a1 + 32) = 0;
        ObfDereferenceObjectWithTag(*(PVOID *)(v13 + 24), 0x746C6644u);
      }
      else
      {
        if ( (a1[36] & 0x10000) == 0 || !*(_QWORD *)(v13 + 56) )
        {
          FsRtlpRemoveAndBreakRHIrp(v13, (__int64)a1, v9, 534, 0, 0, 0, 0);
          goto LABEL_21;
        }
        FsRtlpOplockDequeueRH(*(_QWORD *)(OplockFullFoExt + 40), v6, v7);
        v23 = *v22;
        v24 = (_QWORD *)v22[1];
        if ( *(_QWORD **)(*v22 + 8LL) != v22 || (_QWORD *)*v24 != v22 )
          __fastfail(3u);
        *v24 = v23;
        *(_QWORD *)(v23 + 8) = v24;
        if ( *((_DWORD **)a1 + 15) == a1 + 30 )
          a1[36] &= 0xFFFCFFFF;
        if ( *(_QWORD *)(v13 + 40) )
          FsRtlpClearOwnerThread(a1, v13);
      }
      ExFreePoolWithTag((PVOID)v13, 0);
      v18 = 1;
LABEL_21:
      FsRtlpComputeShareableOplockState(a1);
      if ( v18 )
        FsRtlpReleaseIrpsWaitingForRH((__int64)a1);
    }
  }
  if ( *(_QWORD *)(a2 + 48) == *((_QWORD *)a1 + 1) )
  {
    if ( (a1[36] & 0x1F00F80) == 0 )
    {
      v14 = *(_QWORD *)a1;
      v15 = *(_QWORD *)(*(_QWORD *)a1 + 184LL);
      IoAcquireCancelSpinLock((PKIRQL)(*(_QWORD *)a1 + 69LL));
      _InterlockedExchange64((volatile __int64 *)(v14 + 104), 0LL);
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v14 + 69));
      if ( *(_DWORD *)(v15 + 24) == 590400 )
      {
        v16 = *(_QWORD **)(v14 + 24);
        *v16 = 0LL;
        v16[1] = 0LL;
        v16[2] = 0LL;
        *(_DWORD *)v16 = 1572865;
        *(_QWORD *)((char *)v16 + 4) = (a1[36] >> 12) & 7;
        *(_QWORD *)(v14 + 56) = 24LL;
      }
      else
      {
        *(_QWORD *)(v14 + 56) = 8LL;
        v12 = 0;
      }
      *(_DWORD *)(*(_QWORD *)a1 + 48LL) = v12;
      pIofCompleteRequest(*(PIRP *)a1, 1);
      v5 = v30;
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
      v17 = a1 + 22;
      if ( (_QWORD *)*v17 == v17 )
        break;
      FsRtlpRemoveAndCompleteWaitingIrp(*v17);
    }
  }
LABEL_60:
  if ( v5 )
    a1[36] |= 0x1000000u;
}
