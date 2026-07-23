/*
 * XREFs of FsRtlpOplockCleanup @ 0x14007AAF4
 * Callers:
 *     FsRtlCheckOplockEx @ 0x14007A100 (FsRtlCheckOplockEx.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x140077824 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpComputeShareableOplockState @ 0x140078270 (FsRtlpComputeShareableOplockState.c)
 *     IoAcquireCancelSpinLock @ 0x1400784C0 (IoAcquireCancelSpinLock.c)
 *     FsRtlpOplockDequeueRH @ 0x140078518 (FsRtlpOplockDequeueRH.c)
 *     IoGetOplockFullFoExt @ 0x14007AFDC (IoGetOplockFullFoExt.c)
 *     FsRtlpClearOwner @ 0x14007B708 (FsRtlpClearOwner.c)
 *     FsRtlpModifyThreadPriorities @ 0x14007B748 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1400A0EB4 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1400A0FEC (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1400AAFF4 (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     EvaluateCurrentState @ 0x1401B8EC0 (EvaluateCurrentState.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1401B9874 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlpOplockCleanup(_DWORD *a1, __int64 a2, __int64 a3)
{
  char v4; // r12
  char v5; // r14
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // r10
  __int64 OplockFullFoExt; // r13
  _QWORD *i; // rbx
  _QWORD *v12; // rcx
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rax
  _QWORD *v16; // rdi
  int v17; // r15d
  _QWORD *j; // rbx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rbx
  char v22; // di
  _QWORD *v23; // r10
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r14
  __int64 v28; // rdi
  _QWORD *v29; // r8
  _QWORD *v30; // rcx
  char v31; // [rsp+40h] [rbp-48h]

  v4 = 0;
  v5 = 0;
  v31 = 0;
  if ( a1[36] == 1 )
    goto LABEL_61;
  OplockFullFoExt = IoGetOplockFullFoExt(*(_QWORD *)(a2 + 48), a2, a3, a2);
  if ( (a1[36] & 0x1000000) != 0 )
  {
    for ( i = (_QWORD *)*((_QWORD *)a1 + 13); i != (_QWORD *)(a1 + 26); i = (_QWORD *)*i )
    {
      if ( *(_QWORD *)(v8 + 48) == i[2] )
      {
        while ( 1 )
        {
          v12 = a1 + 22;
          if ( (_QWORD *)*v12 == v12 )
            break;
          FsRtlpRemoveAndCompleteWaitingIrp(*v12);
        }
        v13 = *(_QWORD **)i[1];
        v14 = *v13;
        v15 = (_QWORD *)v13[1];
        if ( *(_QWORD **)(*v13 + 8LL) != v13 || (_QWORD *)*v15 != v13 )
          __fastfail(3u);
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
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
    v31 = v5;
  }
  v16 = a1 + 10;
  v17 = 534;
  if ( (_QWORD *)*v16 != v16 )
  {
    for ( j = (_QWORD *)*v16; j != v16; j = (_QWORD *)*j )
    {
      v19 = j[2];
      if ( *(_QWORD *)(v8 + 48) == *(_QWORD *)(v19 + 48) )
      {
        j = (_QWORD *)j[1];
        if ( *(_DWORD *)(v19 + 24) == 590400 )
        {
          v20 = 534LL;
          v4 = v9;
        }
        else
        {
          v20 = 0LL;
        }
        FsRtlpRemoveAndCompleteReadOnlyIrp(*j, v20, 0LL);
        if ( v4 )
          break;
        v8 = a2;
        v9 = 1;
      }
    }
    FsRtlpComputeShareableOplockState((__int64)a1);
  }
  if ( OplockFullFoExt )
  {
    v21 = *(_QWORD *)(OplockFullFoExt + 40);
    if ( v21 )
    {
      v22 = 0;
      if ( (*(_DWORD *)(v21 + 48) & 0xF00000) != 0 )
      {
        FsRtlpOplockDequeueRH(v21, v6, v7);
        FsRtlpModifyThreadPriorities(a1, v21, 0LL);
        FsRtlpClearOwner(a1, v21);
        if ( *((_DWORD **)a1 + 9) == a1 + 18 )
          *((_BYTE *)a1 + 32) = 0;
        ObfDereferenceObjectWithTag(*(PVOID *)(v21 + 24), 0x746C6644u);
      }
      else
      {
        if ( (a1[36] & 0x10000) == 0 || !*(_QWORD *)(v21 + 56) )
        {
          if ( (unsigned int)EvaluateCurrentState(&g_Feature_Servicing_37708835_37708835_FeatureDescriptorDetails) )
            FsRtlpRemoveAndCompleteRHIrp((PVOID)v21, 0, 0, 0);
          else
            FsRtlpRemoveAndBreakRHIrp((PVOID)v21, (__int64)a1, 1, 534, 0, 0, 0, 0);
LABEL_46:
          FsRtlpComputeShareableOplockState((__int64)a1);
          if ( v22 )
            FsRtlpReleaseIrpsWaitingForRH(v26);
          goto LABEL_48;
        }
        FsRtlpOplockDequeueRH(v21, v6, v7);
        v24 = *v23;
        v25 = (_QWORD *)v23[1];
        if ( *(_QWORD **)(*v23 + 8LL) != v23 || (_QWORD *)*v25 != v23 )
          __fastfail(3u);
        *v25 = v24;
        *(_QWORD *)(v24 + 8) = v25;
        if ( *((_DWORD **)a1 + 15) == a1 + 30 )
          a1[36] &= 0xFFFCFFFF;
        if ( *(_QWORD *)(v21 + 40) )
          FsRtlpClearOwner(a1, v21);
      }
      ExFreePoolWithTag((PVOID)v21, 0);
      v22 = 1;
      goto LABEL_46;
    }
  }
LABEL_48:
  if ( *(_QWORD *)(a2 + 48) == *((_QWORD *)a1 + 1) )
  {
    if ( (a1[36] & 0x1F00F80) == 0 )
    {
      v27 = *(_QWORD *)a1;
      v28 = *(_QWORD *)(*(_QWORD *)a1 + 184LL);
      IoAcquireCancelSpinLock((PKIRQL)(*(_QWORD *)a1 + 69LL));
      _InterlockedExchange64((volatile __int64 *)(v27 + 104), 0LL);
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v27 + 69));
      if ( *(_DWORD *)(v28 + 24) == 590400 )
      {
        v29 = *(_QWORD **)(v27 + 24);
        *v29 = 0LL;
        v29[1] = 0LL;
        v29[2] = 0LL;
        *(_DWORD *)v29 = 1572865;
        *(_QWORD *)((char *)v29 + 4) = (a1[36] >> 12) & 7;
        *(_QWORD *)(v27 + 56) = 24LL;
      }
      else
      {
        *(_QWORD *)(v27 + 56) = 8LL;
        v17 = 0;
      }
      *(_DWORD *)(*(_QWORD *)a1 + 48LL) = v17;
      pIofCompleteRequest(*(PIRP *)a1, 1);
      v5 = v31;
    }
    if ( (a1[36] & 0x80u) == 0 )
      ObfDereferenceObjectWithTag(*((PVOID *)a1 + 1), 0x746C6644u);
    *((_QWORD *)a1 + 1) = 0LL;
    *(_QWORD *)a1 = 0LL;
    if ( *((_QWORD *)a1 + 3) )
    {
      FsRtlpModifyThreadPriorities(a1, 0LL, 0LL);
      FsRtlpClearOwner(a1, 0LL);
      *((_BYTE *)a1 + 32) = 0;
    }
    a1[36] = a1[36] & 0x20 | 1;
    while ( 1 )
    {
      v30 = a1 + 22;
      if ( (_QWORD *)*v30 == v30 )
        break;
      FsRtlpRemoveAndCompleteWaitingIrp(*v30);
    }
  }
LABEL_61:
  if ( v5 )
    a1[36] |= 0x1000000u;
}
