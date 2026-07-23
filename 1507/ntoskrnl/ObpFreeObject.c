/*
 * XREFs of ObpFreeObject @ 0x14048AE10
 * Callers:
 *     ObpRemoveObjectRoutine @ 0x14048AD40 (ObpRemoveObjectRoutine.c)
 * Callees:
 *     PspReturnQuota @ 0x140045E50 (PspReturnQuota.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PspReturnResourceQuota @ 0x140125584 (PspReturnResourceQuota.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     SeReleaseSecurityDescriptor @ 0x1404C8F88 (SeReleaseSecurityDescriptor.c)
 *     PspDereferenceQuotaBlock @ 0x1404D0058 (PspDereferenceQuotaBlock.c)
 *     PspRemoveQuotaBlock @ 0x1406BEF4C (PspRemoveQuotaBlock.c)
 */

void __fastcall ObpFreeObject(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  _QWORD *v5; // rbx
  unsigned __int64 v7; // r12
  int *v8; // r14
  unsigned int *v9; // r8
  unsigned __int64 v10; // r15
  __int64 v11; // r13
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // rbp
  __int64 v18; // rcx
  _QWORD *v19; // rax
  signed __int64 v20; // rax
  signed __int64 v21; // rcx
  signed __int64 v22; // rtt
  struct _KTHREAD *v23; // rcx
  __int16 v24; // ax
  __int64 v25; // rax
  __int64 v26; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _SLIST_ENTRY *v28; // rdx
  _GENERAL_LOOKASIDE *P; // r8
  void *v30; // rbx
  unsigned int v31; // esi
  unsigned int v32; // ebp
  ULONG_PTR v33; // rbx
  __int64 v34; // rbp
  __int64 v35; // r9
  signed int v36; // esi
  char *v37; // r14
  volatile __int64 *v38; // rbx
  __int64 v39; // r8
  void *v40; // rcx
  ULONG v41; // edx
  PVOID *v42; // [rsp+60h] [rbp+8h]
  PVOID *v43; // [rsp+68h] [rbp+10h]
  void *v44; // [rsp+70h] [rbp+18h]

  v4 = *(unsigned __int8 *)(a1 + 26);
  v5 = (_QWORD *)(a1 - 32);
  if ( (v4 & 1) == 0 )
    v5 = 0LL;
  if ( (v4 & 2) != 0 )
    v7 = a1 - ObpInfoMaskToOffset[v4 & 3];
  else
    v7 = 0LL;
  if ( (v4 & 4) != 0 )
    v42 = (PVOID *)(a1 - ObpInfoMaskToOffset[v4 & 7]);
  else
    v42 = 0LL;
  if ( (v4 & 8) != 0 )
    v8 = (int *)(a1 - ObpInfoMaskToOffset[v4 & 0xF]);
  else
    v8 = 0LL;
  if ( (v4 & 0x20) != 0 )
    v43 = (PVOID *)(a1 - ObpInfoMaskToOffset[v4 & 0x3F]);
  else
    v43 = 0LL;
  v9 = (unsigned int *)(a1 - ObpInfoMaskToOffset[(unsigned __int8)v4]);
  v44 = v9;
  if ( (v4 & 0x80u) != 0LL )
  {
    v9 = (unsigned int *)((char *)v9 + 4LL - *v9);
    v44 = v9;
  }
  v10 = a1 >> 8;
  v11 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ BYTE1(a1) ^ (unsigned __int64)*(unsigned __int8 *)(a1 + 24)];
  if ( v5 && (_QWORD *)*v5 != v5 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v13 = (signed __int64 *)(v11 + 184);
    v14 = KeAbPreAcquire(v11 + 184, 0LL, 0LL, a4);
    v17 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 184), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v11 + 184), v14, v11 + 184, v16);
    if ( v17 )
      *(_BYTE *)(v17 + 26) |= 1u;
    v18 = *v5;
    v19 = (_QWORD *)v5[1];
    if ( *(_QWORD **)(*v5 + 8LL) != v5 || (_QWORD *)*v19 != v5 )
      __fastfail(3u);
    *v19 = v18;
    *(_QWORD *)(v18 + 8) = v19;
    _m_prefetchw(v13);
    v20 = *v13;
    if ( (*v13 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v21 = 0LL;
    else
      v21 = v20 - 16;
    if ( (v20 & 2) != 0 || (v22 = *v13, v22 != _InterlockedCompareExchange64(v13, v21, v20)) )
      ExfReleasePushLock((_QWORD *)(v11 + 184), v15);
    KeAbPostRelease(v11 + 184);
    v23 = KeGetCurrentThread();
    v24 = v23->SpecialApcDisable + 1;
    v23->SpecialApcDisable = v24;
    if ( !v24 && ($CD287064E7C9F7953DE243E927CFCB99 *)v23->ApcState.ApcListHead[0].Flink != &v23->152 )
      KiCheckForKernelApcDelivery();
  }
  _InterlockedDecrement((volatile signed __int32 *)(v11 + 44));
  if ( (*(_BYTE *)(a1 + 27) & 1) == 0 )
  {
    if ( !*(_QWORD *)(a1 + 32) )
      goto LABEL_70;
    if ( v8 )
    {
      v30 = (void *)*((_QWORD *)v8 + 2);
      v31 = *v8;
      v32 = v8[1];
      if ( (unsigned __int64)v30 >= 2 )
      {
        if ( v8[2] )
          PspReturnQuota(*((char **)v8 + 2), 0LL, 1u, (unsigned int)v8[2]);
        PspDereferenceQuotaBlock(v30);
      }
    }
    else
    {
      v31 = *(_DWORD *)(v11 + 104);
      v32 = *(_DWORD *)(v11 + 108);
    }
    v33 = v32;
    v34 = *(_QWORD *)(a1 + 32);
    v35 = v31;
    if ( v34 == 1 )
      goto LABEL_69;
    if ( v31 )
      PspReturnQuota(*(char **)(a1 + 32), 0LL, 1u, v31);
    if ( v33 )
      PspReturnQuota((char *)v34, 0LL, 0, v33);
    if ( _InterlockedDecrement((volatile signed __int32 *)(v34 + 512)) )
      goto LABEL_69;
    v36 = 0;
    v37 = PspResourceFlags;
    v38 = (volatile __int64 *)(v34 + 64);
    while ( 1 )
    {
      if ( (*v37 & 2) != 0 || (*v37 & 1) == 0 )
        goto LABEL_67;
      v9 = (unsigned int *)*v38;
      v35 = *((_QWORD *)v38 + 2) != 0LL;
      if ( *v38 + *((_QWORD *)v38 + 1) )
      {
        if ( *((_QWORD *)v38 + 2) )
        {
          v39 = _InterlockedExchange64(v38 + 1, 0LL);
          v9 = (unsigned int *)(_InterlockedExchange64(v38, 0LL) + v39);
        }
        if ( v9 )
        {
LABEL_66:
          PspReturnResourceQuota(v36, (__int64)(v38 - 8), (__int64)v9, v35);
          goto LABEL_67;
        }
      }
      else
      {
        v9 = 0LL;
      }
      if ( (_DWORD)v35 )
        goto LABEL_66;
LABEL_67:
      ++v36;
      v37 += 8;
      v38 += 16;
      if ( v36 >= 4 )
      {
        PspRemoveQuotaBlock(v34, v4, v9, v35);
        ExFreePoolWithTag((PVOID)v34, 0);
        goto LABEL_69;
      }
    }
  }
  v25 = *(_QWORD *)(a1 + 32);
  if ( v25 )
  {
    v26 = *(_QWORD *)(v25 + 32);
    if ( v26 )
    {
      LOBYTE(v9) = 1;
      SeReleaseSecurityDescriptor(v26, *(unsigned __int8 *)(v25 + 16), v9);
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) = 0LL;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v28 = *(_SLIST_ENTRY **)(a1 + 32);
    P = CurrentPrcb->PPLookasideList[4].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[4].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, v28);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *))P->FreeEx)(v28);
    }
LABEL_69:
    *(_QWORD *)(a1 + 32) = 0LL;
  }
LABEL_70:
  if ( v42 && (*(_BYTE *)(a1 + 27) & 0x40) == 0 )
  {
    ExFreePoolWithTag(*v42, 0);
    *v42 = 0LL;
  }
  if ( v7 )
  {
    v40 = *(void **)(v7 + 16);
    if ( v40 )
    {
      ExFreePoolWithTag(v40, 0);
      *(_QWORD *)(v7 + 16) = 0LL;
    }
  }
  if ( v43 && *v43 )
  {
    ExFreePoolWithTag(*v43, 0);
    *v43 = 0LL;
  }
  v41 = 1416258127;
  *(_BYTE *)(a1 + 24) = ObHeaderCookie ^ v10 ^ 1;
  if ( v11 )
    v41 = *(_DWORD *)(v11 + 192);
  ExFreePoolWithTag(v44, v41);
}
