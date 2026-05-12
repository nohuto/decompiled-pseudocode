/*
 * XREFs of RaidInitializePerfOptsPassive @ 0x1C000DC5C
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1C000DA54 (RaidAdapterStartMiniport.c)
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C0002CE0 (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C0019FB4 (RaidAdapterAcquireStartIoLock.c)
 *     memset @ 0x1C001AD80 (memset.c)
 */

__int64 __fastcall RaidInitializePerfOptsPassive(__int64 a1)
{
  unsigned __int16 v1; // bx
  USHORT v2; // r13
  unsigned int v3; // edi
  __int64 v4; // rsi
  unsigned int v5; // ebp
  void *v6; // rcx
  KIRQL v8; // r12
  USHORT ActiveGroupCount; // ax
  unsigned int v10; // r15d
  unsigned __int16 v11; // r14
  __int64 v12; // r12
  ULONG ActiveProcessorCount; // r13d
  unsigned __int8 v14; // bp
  char *v15; // rcx
  int v16; // eax
  __int64 v17; // rdi
  unsigned int v18; // r14d
  unsigned int v19; // eax
  size_t v20; // r15
  _WORD *v21; // rdi
  int v22; // r14d
  unsigned __int16 v23; // dx
  char *v24; // rbx
  unsigned __int16 v25; // r8
  unsigned int v26; // r10d
  char *v27; // rcx
  __int64 v28; // r15
  __int64 v29; // r14
  char v30; // r12
  struct _GROUP_AFFINITY *v31; // rbx
  unsigned __int64 Mask; // rdx
  unsigned __int16 v33; // r9
  int v34; // r12d
  unsigned __int16 i; // r8
  __int64 v36; // rax
  unsigned int v37; // edx
  char v38; // r8
  __int64 v39; // r14
  char v40; // r15
  unsigned int v41; // ecx
  unsigned int v42; // r11d
  int v43; // r9d
  unsigned int v44; // r8d
  __int64 v45; // r10
  __int64 v46; // rdx
  __int64 v47; // r13
  USHORT v48; // r12
  int v49; // ebx
  char *v50; // rbp
  int v51; // r14d
  char *v52; // r15
  unsigned int v53; // edi
  ULONG v54; // eax
  __int64 v55; // r14
  int v56; // edi
  int v57; // r8d
  __int64 v58; // r11
  __int64 v59; // r9
  unsigned __int16 v60; // r9
  char v61; // r14
  __int64 v62; // r10
  unsigned __int16 v63; // cx
  struct _SLIST_ENTRY *PoolWithTag; // r15
  __int64 v65; // r12
  __int64 v66; // r13
  PVOID v67; // rax
  __int64 v68; // r14
  unsigned int v69; // r14d
  unsigned int *v70; // r13
  int v71; // edi
  ULONG v72; // eax
  char *v73; // r12
  unsigned __int16 v74; // r8
  int v75; // r9d
  char *v76; // rdx
  __int64 v77; // r14
  unsigned int v78; // ebp
  __int64 v79; // r11
  int v80; // ecx
  int v81; // edx
  signed __int32 v82[8]; // [rsp+0h] [rbp-98h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v84; // [rsp+24h] [rbp-74h]
  unsigned int v85; // [rsp+28h] [rbp-70h]
  PVOID P; // [rsp+30h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-60h] BYREF
  size_t Sizea; // [rsp+A0h] [rbp+8h]
  USHORT Sizeb; // [rsp+A0h] [rbp+8h]
  KIRQL v91; // [rsp+A8h] [rbp+10h]
  int v92; // [rsp+A8h] [rbp+10h]
  unsigned __int16 v93; // [rsp+B0h] [rbp+18h]

  v1 = *(_WORD *)(a1 + 4740);
  v2 = 0;
  v3 = *(_DWORD *)(a1 + 4744);
  v4 = a1;
  v5 = 0;
  v93 = v1;
  *(_WORD *)(a1 + 4740) = 0;
  if ( (int)v3 < 1 )
    v3 = -v3;
  *(_DWORD *)(a1 + 4744) = 1;
  if ( v3 > 1 )
  {
    PoolWithTag = (struct _SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 32LL * v3, 0x54436152u);
    if ( !PoolWithTag )
      goto LABEL_91;
    v65 = (unsigned int)KeQueryHighestNodeNumber() + 1;
    v66 = v65;
    v67 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v65 << 6, 0x54436152u);
    *(_QWORD *)(v4 + 4752) = v67;
    if ( !v67 )
      goto LABEL_91;
    if ( (_DWORD)v65 )
    {
      v68 = 0LL;
      do
      {
        InitializeSListHead((PSLIST_HEADER)(v68 + *(_QWORD *)(v4 + 4752)));
        v68 += 64LL;
        --v66;
      }
      while ( v66 );
    }
    v69 = 0;
    v70 = (unsigned int *)&PoolWithTag[1].Next + 1;
    do
    {
      *v70 = v69;
      ExpInterlockedPushEntrySList(
        (PSLIST_HEADER)(*(_QWORD *)(v4 + 4752) + ((unsigned __int64)(v69 % (unsigned int)v65) << 6)),
        PoolWithTag);
      ++v69;
      v70 += 8;
      PoolWithTag += 2;
    }
    while ( v69 < v3 );
    v2 = 0;
    RaidAdapterAcquireStartIoLock(v4, &LockHandle);
    *(_DWORD *)(v4 + 4744) = v3;
    if ( *(_DWORD *)(v4 + 688) )
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    else
      RaidAdapterReleaseInterruptLock(v4, (KIRQL)LockHandle.LockQueue.Next);
  }
  if ( (v1 & 1) == 0 )
    goto LABEL_5;
  v8 = KeAcquireSpinLockRaiseToDpc(&g_RaidDPCRedirectionInitLock);
  v91 = v8;
  if ( _InterlockedIncrement(&g_RaidPerfRedirectRefCount) == 1 )
  {
    ActiveGroupCount = KeQueryActiveGroupCount();
    v10 = ActiveGroupCount;
    g_RaidPerProcessorState = ExAllocatePoolWithTag(
                                NonPagedPoolNx,
                                (unsigned __int64)ActiveGroupCount << 13,
                                0x72446152u);
    if ( !g_RaidPerProcessorState
      || (g_RaidDPCRedirectionProcessors = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * v10, 0x72446152u)) == 0LL )
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
      KeReleaseSpinLock(&g_RaidDPCRedirectionInitLock, v8);
      goto LABEL_5;
    }
    v11 = 0;
    if ( (_WORD)v10 )
    {
      v12 = 0LL;
      do
      {
        ProcNumber.Group = v11;
        ProcNumber.Reserved = 0;
        ActiveProcessorCount = KeQueryActiveProcessorCountEx(v11);
        v14 = 0;
        if ( ActiveProcessorCount )
        {
          v15 = (char *)g_RaidPerProcessorState;
          v16 = 0;
          do
          {
            ProcNumber.Number = v14;
            v17 = (__int64)((v11 << 6) + v16) << 7;
            KeInitializeDpc((PRKDPC)&v15[v17], RaidpAdapterRedirectDpcRoutine, &v15[v17]);
            KeSetImportanceDpc((PRKDPC)((char *)g_RaidPerProcessorState + v17), MediumHighImportance);
            KeSetTargetProcessorDpcEx((PKDPC)((char *)g_RaidPerProcessorState + v17), &ProcNumber);
            InitializeSListHead((PSLIST_HEADER)((char *)g_RaidPerProcessorState + v17 + 64));
            v15 = (char *)g_RaidPerProcessorState;
            v16 = ++v14;
            *(_DWORD *)((char *)g_RaidPerProcessorState + v17 + 80) = 0;
          }
          while ( v14 < ActiveProcessorCount );
        }
        ++v11;
        *(_DWORD *)((char *)g_RaidDPCRedirectionProcessors + v12) = ActiveProcessorCount;
        v12 += 4LL;
        v2 = 0;
      }
      while ( v11 < (unsigned __int16)v10 );
      v5 = 0;
      v4 = a1;
      v8 = v91;
    }
    _InterlockedOr(v82, 0);
    g_RaidPerfRedirectGroupCount = (unsigned __int16)v10;
  }
  *(_WORD *)(v4 + 4740) |= 1u;
  KeReleaseSpinLock(&g_RaidDPCRedirectionInitLock, v8);
  if ( (v1 & 2) == 0 || (v1 & 0x3FC) == 0 )
  {
LABEL_5:
    v6 = *(void **)(v4 + 4760);
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0x72446152u);
      *(_QWORD *)(v4 + 4760) = 0LL;
      *(_WORD *)(v4 + 4742) = 0;
    }
    return v5;
  }
  v18 = (unsigned __int8)(v1 >> 2);
  v85 = v18;
  v19 = v18 + 280;
  if ( (((_BYTE)v18 + 24) & 1) != 0 )
    v19 = v18 + 281;
  v20 = v19;
  Sizea = v19;
  v21 = ExAllocatePoolWithTag(NonPagedPoolNx, v19, 0x72446152u);
  if ( !v21 )
  {
LABEL_91:
    v5 = -1073741670;
    goto LABEL_5;
  }
  v22 = v18 + 4;
  v92 = v22;
  if ( (v22 & 1) != 0 )
    v92 = ++v22;
  P = ExAllocatePoolWithTag(NonPagedPoolNx, v22 * (unsigned int)*(unsigned __int16 *)(v4 + 4742), 0x72446152u);
  if ( !P )
  {
    ExFreePoolWithTag(v21, 0x72446152u);
    goto LABEL_91;
  }
  memset(P, 0, v22 * (unsigned int)*(unsigned __int16 *)(v4 + 4742));
  v23 = 0;
  if ( *(_WORD *)(v4 + 4742) )
  {
    v24 = (char *)P;
    do
    {
      v25 = 0;
      v26 = 0;
      v27 = &v24[v92 * v23];
      *(_WORD *)v27 = v23;
      do
      {
        v28 = *(_QWORD *)(v4 + 4760);
        v29 = (v23 << 6) + v26;
        v30 = *(_BYTE *)(v29 + v28);
        if ( v30 != -1 )
        {
          v60 = 0;
          if ( v25 )
          {
            v61 = *(_BYTE *)(v29 + v28);
            while ( v27[v60 + 4] != v61 )
            {
              if ( ++v60 >= v25 )
                goto LABEL_88;
            }
          }
          else
          {
LABEL_88:
            v27[v25 + 4] = v30;
            ++*((_WORD *)v27 + 1);
            ++v25;
          }
        }
        ++v26;
      }
      while ( v26 < 0x40 );
      ++v23;
    }
    while ( v23 < *(_WORD *)(v4 + 4742) );
    v1 = v93;
    v5 = 0;
    v20 = Sizea;
  }
  if ( KeQueryHighestNodeNumber() + 1 > 0 )
  {
    v31 = (struct _GROUP_AFFINITY *)(v21 + 132);
    v5 = 0;
    do
    {
      memset(v21, 0, v20);
      KeQueryNodeActiveAffinity(v2, v31, v21);
      if ( *v21 )
      {
        Mask = v31->Mask;
        v33 = 0;
        v34 = 0;
        for ( i = 0; Mask; Mask >>= 1 )
        {
          if ( (Mask & 1) != 0 )
          {
            v36 = v33++;
            *(_DWORD *)&v21[2 * v36 + 2] = i;
          }
          ++i;
        }
        v37 = 0;
        if ( *v21 )
        {
          do
          {
            v38 = 0;
            v39 = *(_QWORD *)(v4 + 4760);
            v40 = *(_BYTE *)(((unsigned __int16)v21[136] << 6) + *(_DWORD *)&v21[2 * v37 + 2] + v39);
            if ( v40 == -1 )
            {
              ++v34;
            }
            else
            {
              v62 = *((unsigned int *)v21 + 65);
              v63 = 0;
              if ( !(_DWORD)v62 )
                goto LABEL_89;
              do
              {
                if ( *(_BYTE *)(((unsigned __int16)v21[136] << 6) + *(_DWORD *)&v21[2 * v37 + 2] + v39) == *((_BYTE *)v21 + v63 + 280) )
                  v38 = 1;
                ++v63;
              }
              while ( v63 < (unsigned int)v62 );
              if ( !v38 )
              {
LABEL_89:
                *((_BYTE *)v21 + v62 + 280) = v40;
                ++*((_DWORD *)v21 + 65);
              }
            }
            ++v37;
          }
          while ( v37 < (unsigned __int16)*v21 );
          v20 = Sizea;
        }
        v41 = *((_DWORD *)v21 + 65);
        LOWORD(v42) = 0;
        if ( v41 )
        {
          if ( v34 )
          {
            v43 = 0;
            v44 = 0;
            if ( *v21 )
            {
              do
              {
                v45 = *(_QWORD *)(v4 + 4760);
                v46 = ((unsigned __int16)v21[136] << 6) + *(_DWORD *)&v21[2 * v44 + 2];
                if ( *(_BYTE *)(v46 + v45) == 0xFF )
                {
                  ++v43;
                  *(_BYTE *)(v46 + v45) = *((_BYTE *)v21 + (unsigned __int16)v42 + 280);
                  if ( v43 == (v41 + v34 - 1) / v41 )
                  {
                    v43 = 0;
                    v42 = ((unsigned int)(unsigned __int16)v42 + 1) % *((_DWORD *)v21 + 65);
                  }
                }
                ++v44;
              }
              while ( v44 < (unsigned __int16)*v21 );
              v31 = (struct _GROUP_AFFINITY *)(v21 + 132);
            }
          }
        }
      }
      ++v2;
    }
    while ( v2 < KeQueryHighestNodeNumber() + 1 );
    v1 = v93;
  }
  ExFreePoolWithTag(v21, 0x72446152u);
  LODWORD(v47) = 0;
  v48 = 0;
  Sizeb = 0;
  if ( *(_WORD *)(v4 + 4742) )
  {
    v49 = v92;
    v50 = (char *)P;
    do
    {
      v51 = v48;
      v52 = &v50[v49 * v48];
      if ( *((_WORD *)v52 + 1) <= (unsigned __int16)v47 )
      {
        LOWORD(v71) = v47;
        v72 = KeQueryActiveProcessorCountEx(v48);
        v73 = (char *)P;
        v74 = v47;
        v75 = v47;
        v76 = v50;
        v77 = (unsigned int)(v51 << 6);
        v84 = (v85 + v72 - 1) / v85;
        v78 = v84;
        v47 = 64LL;
        do
        {
          v79 = *(_QWORD *)(v4 + 4760);
          if ( *(_BYTE *)(v77 + v79) == 0xFF )
          {
            if ( !*((_WORD *)v76 + 1) )
            {
              v80 = (unsigned __int16)v71;
              do
              {
                v81 = (v80 + 1) % *(unsigned __int16 *)(v4 + 4742);
                v80 = (unsigned __int16)v81;
                LOWORD(v71) = v81;
                v76 = &v73[v49 * (unsigned __int16)v81];
              }
              while ( !*((_WORD *)v76 + 1) );
              v78 = v84;
            }
            ++v75;
            *(_BYTE *)(v77 + v79) = v76[v74 + 4];
            if ( v75 == v78 )
            {
              ++v74;
              v75 = 0;
              if ( v74 == *((_WORD *)v76 + 1) )
              {
                v74 = 0;
                v71 = (unsigned __int16)(((unsigned __int16)v71 + 1) % *(unsigned __int16 *)(v4 + 4742));
                v76 = &v73[v49 * v71];
              }
            }
          }
          v77 = (unsigned int)(v77 + 1);
          --v47;
        }
        while ( v47 );
        v48 = Sizeb;
        v50 = (char *)P;
      }
      else
      {
        v53 = *((unsigned __int16 *)v52 + 1);
        v54 = (v53 + KeQueryActiveProcessorCountEx(v48) - 1) / v53;
        if ( v54 != 1 )
        {
          v55 = v48 << 6;
          LOWORD(v56) = v47;
          v57 = v47;
          v58 = 64LL;
          do
          {
            v59 = *(_QWORD *)(v4 + 4760);
            if ( *(_BYTE *)(v55 + v59) == 0xFF )
            {
              ++v57;
              *(_BYTE *)(v55 + v59) = v52[(unsigned __int16)v56 + 4];
              if ( v57 == v54 - 1 )
              {
                v57 = v47;
                v56 = ((unsigned __int16)v56 + 1) % *((unsigned __int16 *)v52 + 1);
              }
            }
            v55 = (unsigned int)(v55 + 1);
            --v58;
          }
          while ( v58 );
          v49 = v92;
        }
      }
      Sizeb = ++v48;
    }
    while ( v48 < *(_WORD *)(v4 + 4742) );
    v1 = v93;
    v5 = 0;
  }
  ExFreePoolWithTag(P, 0x72446152u);
  *(_WORD *)(v4 + 4740) = *(_WORD *)(v4 + 4740) ^ (*(_WORD *)(v4 + 4740) ^ v1) & 0x3FC | 2;
  return v5;
}
