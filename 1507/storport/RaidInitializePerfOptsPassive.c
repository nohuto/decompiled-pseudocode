/*
 * XREFs of RaidInitializePerfOptsPassive @ 0x1C0008230
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1C000802C (RaidAdapterStartMiniport.c)
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C00057D8 (RaidAdapterReleaseInterruptLock.c)
 *     memset @ 0x1C0013300 (memset.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C00210D8 (RaidAdapterAcquireStartIoLock.c)
 */

__int64 __fastcall RaidInitializePerfOptsPassive(__int64 a1)
{
  __int64 v1; // r14
  unsigned __int16 v2; // bx
  unsigned int v3; // edi
  __int64 v4; // rsi
  unsigned int v5; // ebp
  void *v6; // rcx
  struct _SLIST_ENTRY *PoolWithTag; // r15
  __int64 v9; // r12
  __int64 v10; // r13
  PVOID v11; // rax
  _DWORD *v12; // r13
  KIRQL v13; // r12
  USHORT ActiveGroupCount; // ax
  unsigned int v15; // r15d
  __int64 v16; // r12
  __int64 v17; // r13
  unsigned __int8 v18; // bl
  char *v19; // rcx
  unsigned int v20; // esi
  int v21; // eax
  __int64 v22; // rdi
  __int64 v23; // rax
  int v24; // r12d
  char *v25; // rax
  char *v26; // rdi
  unsigned __int16 v27; // dx
  unsigned __int16 v28; // r8
  unsigned int v29; // r10d
  char *v30; // rcx
  char v31; // r13
  unsigned __int16 v32; // r9
  USHORT v33; // r13
  char *v34; // r15
  unsigned int v35; // edi
  ULONG v36; // eax
  int v37; // r11d
  __int64 v38; // r14
  int v39; // r8d
  __int64 v40; // rdi
  __int64 v41; // r9
  int v42; // r15d
  ULONG ActiveProcessorCount; // eax
  __int64 v44; // r14
  __int64 v45; // rbp
  unsigned __int16 v46; // r8
  int v47; // r9d
  char *v48; // rdx
  __int64 v49; // r11
  int v50; // ecx
  int v51; // edx
  signed __int32 v52[8]; // [rsp+0h] [rbp-98h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v54; // [rsp+24h] [rbp-74h]
  __int64 v55; // [rsp+28h] [rbp-70h]
  char *v56; // [rsp+30h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-60h] BYREF
  USHORT v59; // [rsp+A0h] [rbp+8h]
  KIRQL v60; // [rsp+A8h] [rbp+10h]
  unsigned int v61; // [rsp+A8h] [rbp+10h]
  unsigned __int16 v62; // [rsp+B0h] [rbp+18h]
  USHORT v63; // [rsp+B8h] [rbp+20h]

  v1 = 0LL;
  v2 = *(_WORD *)(a1 + 4740);
  v3 = -*(_DWORD *)(a1 + 4744);
  v4 = a1;
  v54 = 0;
  v5 = 0;
  v62 = v2;
  *(_WORD *)(a1 + 4740) = 0;
  *(_DWORD *)(a1 + 4744) = 1;
  if ( v3 > 1 )
  {
    PoolWithTag = (struct _SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 32LL * v3, 0x54436152u);
    if ( !PoolWithTag )
      goto LABEL_15;
    v9 = (unsigned int)KeQueryHighestNodeNumber() + 1;
    v10 = v9;
    v11 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v9 << 6, 0x54436152u);
    *(_QWORD *)(v4 + 4752) = v11;
    if ( !v11 )
      goto LABEL_15;
    if ( (_DWORD)v9 )
    {
      do
      {
        InitializeSListHead((PSLIST_HEADER)(v1 + *(_QWORD *)(v4 + 4752)));
        v1 += 64LL;
        --v10;
      }
      while ( v10 );
      LODWORD(v1) = 0;
    }
    v12 = (_DWORD *)&PoolWithTag[1].Next + 1;
    do
    {
      *v12 = v1;
      ExpInterlockedPushEntrySList(
        (PSLIST_HEADER)(*(_QWORD *)(v4 + 4752) + ((unsigned __int64)((unsigned int)v1 % (unsigned int)v9) << 6)),
        PoolWithTag);
      LODWORD(v1) = v1 + 1;
      v12 += 8;
      PoolWithTag += 2;
    }
    while ( (unsigned int)v1 < v3 );
    RaidAdapterAcquireStartIoLock(v4, &LockHandle);
    LOWORD(v1) = 0;
    *(_DWORD *)(v4 + 4744) = v3;
    if ( *(_DWORD *)(v4 + 688) )
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    else
      RaidAdapterReleaseInterruptLock(v4, (KIRQL)LockHandle.LockQueue.Next);
  }
  if ( (v2 & 1) == 0 )
    goto LABEL_3;
  v13 = KeAcquireSpinLockRaiseToDpc(&g_RaidDPCRedirectionInitLock);
  v60 = v13;
  if ( _InterlockedIncrement(&g_RaidPerfRedirectRefCount) == 1 )
  {
    ActiveGroupCount = KeQueryActiveGroupCount();
    v15 = ActiveGroupCount;
    v63 = ActiveGroupCount;
    g_RaidPerProcessorState = ExAllocatePoolWithTag(
                                NonPagedPoolNx,
                                (unsigned __int64)ActiveGroupCount << 13,
                                0x72446152u);
    if ( !g_RaidPerProcessorState
      || (g_RaidDPCRedirectionProcessors = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * v15, 0x72446152u)) == 0LL )
    {
      v5 = -1073741670;
      if ( _InterlockedExchangeAdd(&g_RaidPerfRedirectRefCount, 0xFFFFFFFF) == 1 )
      {
        if ( g_RaidPerProcessorState )
        {
          ExFreePoolWithTag(g_RaidPerProcessorState, 0x72446152u);
          g_RaidPerProcessorState = 0LL;
        }
        if ( g_RaidDPCRedirectionProcessors )
        {
          ExFreePoolWithTag(g_RaidDPCRedirectionProcessors, 0x72446152u);
          g_RaidDPCRedirectionProcessors = 0LL;
        }
        g_RaidPerfRedirectGroupCount = 0;
      }
      KeReleaseSpinLock(&g_RaidDPCRedirectionInitLock, v13);
      goto LABEL_3;
    }
    if ( (_WORD)v15 )
    {
      v16 = 0LL;
      v17 = 0LL;
      do
      {
        ProcNumber.Group = v1;
        ProcNumber.Reserved = 0;
        LODWORD(v55) = KeQueryActiveProcessorCountEx(v1);
        v18 = 0;
        if ( (_DWORD)v55 )
        {
          v19 = (char *)g_RaidPerProcessorState;
          v20 = v55;
          v21 = 0;
          do
          {
            ProcNumber.Number = v18;
            v22 = (__int64)(((unsigned __int16)v1 << 6) + v21) << 7;
            KeInitializeDpc((PRKDPC)&v19[v22], RaidpAdapterRedirectDpcRoutine, &v19[v22]);
            KeSetImportanceDpc((PRKDPC)((char *)g_RaidPerProcessorState + v22), MediumHighImportance);
            KeSetTargetProcessorDpcEx((PKDPC)((char *)g_RaidPerProcessorState + v22), &ProcNumber);
            InitializeSListHead((PSLIST_HEADER)((char *)g_RaidPerProcessorState + v22 + 64));
            v19 = (char *)g_RaidPerProcessorState;
            v23 = v18++;
            *((_DWORD *)g_RaidPerProcessorState + 32 * v17 + 32 * v23 + 20) = 0;
            v21 = v18;
          }
          while ( v18 < v20 );
          LOWORD(v15) = v63;
        }
        else
        {
          v20 = 0;
        }
        LOWORD(v1) = v1 + 1;
        v17 += 64LL;
        *(_DWORD *)((char *)g_RaidDPCRedirectionProcessors + v16) = v20;
        v16 += 4LL;
      }
      while ( (unsigned __int16)v1 < (unsigned __int16)v15 );
      v2 = v62;
      v4 = a1;
      v5 = v54;
      v13 = v60;
    }
    _InterlockedOr(v52, 0);
    g_RaidPerfRedirectGroupCount = (unsigned __int16)v15;
  }
  *(_WORD *)(v4 + 4740) |= 1u;
  KeReleaseSpinLock(&g_RaidDPCRedirectionInitLock, v13);
  if ( (v2 & 2) == 0 || (v2 & 0x3FC) == 0 )
  {
LABEL_3:
    v6 = *(void **)(v4 + 4760);
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0x72446152u);
      *(_QWORD *)(v4 + 4760) = 0LL;
      *(_WORD *)(v4 + 4742) = 0;
    }
    return v5;
  }
  v61 = (unsigned __int8)(v2 >> 2);
  v24 = v61 + 4;
  if ( (((_BYTE)v61 + 4) & 1) != 0 )
    v24 = v61 + 5;
  v25 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v24 * (unsigned int)*(unsigned __int16 *)(v4 + 4742), 0x72446152u);
  v56 = v25;
  v26 = v25;
  if ( !v25 )
  {
LABEL_15:
    v5 = -1073741670;
    goto LABEL_3;
  }
  memset(v25, 0, v24 * (unsigned int)*(unsigned __int16 *)(v4 + 4742));
  v27 = 0;
  if ( *(_WORD *)(v4 + 4742) )
  {
    v5 = 0;
    do
    {
      v28 = 0;
      v29 = 0;
      v30 = &v26[v24 * v27];
      *(_WORD *)v30 = v27;
      do
      {
        v31 = *(_BYTE *)((v27 << 6) + v29 + *(_QWORD *)(v4 + 4760));
        if ( v31 != -1 )
        {
          v32 = 0;
          if ( v28 )
          {
            while ( v30[v32 + 4] != v31 )
            {
              if ( ++v32 >= v28 )
                goto LABEL_49;
            }
          }
          else
          {
LABEL_49:
            v30[v28 + 4] = v31;
            ++*((_WORD *)v30 + 1);
            ++v28;
          }
        }
        ++v29;
      }
      while ( v29 < 0x40 );
      ++v27;
    }
    while ( v27 < *(_WORD *)(v4 + 4742) );
    v2 = v62;
  }
  v33 = 0;
  v59 = 0;
  if ( *(_WORD *)(v4 + 4742) )
  {
    do
    {
      v34 = &v26[v24 * v33];
      if ( *((_WORD *)v34 + 1) )
      {
        v35 = *((unsigned __int16 *)v34 + 1);
        v36 = (v35 + KeQueryActiveProcessorCountEx(v33) - 1) / v35;
        if ( v36 != 1 )
        {
          LOWORD(v37) = 0;
          v38 = v33 << 6;
          v39 = 0;
          v40 = 64LL;
          do
          {
            v41 = *(_QWORD *)(v4 + 4760);
            if ( *(_BYTE *)(v38 + v41) == 0xFF )
            {
              ++v39;
              *(_BYTE *)(v38 + v41) = v34[(unsigned __int16)v37 + 4];
              if ( v39 == v36 - 1 )
              {
                v39 = 0;
                v37 = ((unsigned __int16)v37 + 1) % *((unsigned __int16 *)v34 + 1);
              }
            }
            v38 = (unsigned int)(v38 + 1);
            --v40;
          }
          while ( v40 );
        }
        v26 = v56;
      }
      else
      {
        LOWORD(v42) = 0;
        ActiveProcessorCount = KeQueryActiveProcessorCountEx(v33);
        v44 = v33 << 6;
        v45 = 64LL;
        v46 = 0;
        v47 = 0;
        v55 = 64LL;
        v48 = v26;
        do
        {
          v49 = *(_QWORD *)(v4 + 4760);
          if ( *(_BYTE *)(v44 + v49) == 0xFF )
          {
            if ( !*((_WORD *)v48 + 1) )
            {
              v50 = (unsigned __int16)v42;
              do
              {
                v51 = (v50 + 1) % *(unsigned __int16 *)(v4 + 4742);
                v50 = (unsigned __int16)v51;
                LOWORD(v42) = v51;
                v48 = &v26[v24 * (unsigned __int16)v51];
              }
              while ( !*((_WORD *)v48 + 1) );
              v45 = v55;
            }
            ++v47;
            *(_BYTE *)(v44 + v49) = v48[v46 + 4];
            if ( v47 == (v61 + ActiveProcessorCount - 1) / v61 )
            {
              ++v46;
              v47 = 0;
              if ( v46 == *((_WORD *)v48 + 1) )
              {
                v46 = 0;
                v42 = (unsigned __int16)(((unsigned __int16)v42 + 1) % *(unsigned __int16 *)(v4 + 4742));
                v48 = &v26[v24 * v42];
              }
            }
          }
          v44 = (unsigned int)(v44 + 1);
          v55 = --v45;
        }
        while ( v45 );
        v33 = v59;
      }
      v59 = ++v33;
    }
    while ( v33 < *(_WORD *)(v4 + 4742) );
    v2 = v62;
    v5 = v54;
  }
  ExFreePoolWithTag(v26, 0x72446152u);
  *(_WORD *)(v4 + 4740) = *(_WORD *)(v4 + 4740) ^ (*(_WORD *)(v4 + 4740) ^ v2) & 0x3FC | 2;
  return v5;
}
