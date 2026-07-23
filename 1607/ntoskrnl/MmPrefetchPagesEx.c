/*
 * XREFs of MmPrefetchPagesEx @ 0x14042AFAC
 * Callers:
 *     PfpPrefetchFilesTrickle @ 0x14042A684 (PfpPrefetchFilesTrickle.c)
 *     MmPrefetchPages @ 0x14042AFA4 (MmPrefetchPages.c)
 *     PfSnPrefetchSections @ 0x1404E9EA4 (PfSnPrefetchSections.c)
 *     HvpViewMapPrefetchFile @ 0x140610128 (HvpViewMapPrefetchFile.c)
 *     PfpPrefetchFiles @ 0x140668D84 (PfpPrefetchFiles.c)
 * Callees:
 *     MiPfCompletePrefetchIos @ 0x140023494 (MiPfCompletePrefetchIos.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     MiFreeInPageSupportBlock @ 0x1400C4240 (MiFreeInPageSupportBlock.c)
 *     MiPfPutPagesInTransition @ 0x1400E2FA0 (MiPfPutPagesInTransition.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiReleaseReadListResources @ 0x14042B620 (MiReleaseReadListResources.c)
 *     MiPfExecuteReadList @ 0x14042B724 (MiPfExecuteReadList.c)
 *     MiPfPrepareReadList @ 0x140444BC0 (MiPfPrepareReadList.c)
 */

__int64 __fastcall MmPrefetchPagesEx(unsigned int a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rsi
  _QWORD *PoolWithTag; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rdi
  struct _KTHREAD *CurrentThread; // r12
  char v11; // bl
  unsigned int v12; // r13d
  _QWORD *v13; // rbp
  char *v14; // r15
  __int64 v15; // r14
  __int64 v16; // r12
  int List; // eax
  char v19; // bl
  unsigned int v20; // r15d
  __int64 v21; // rbp
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r14
  _QWORD *v26; // rbx
  __int64 v27; // rbp
  PVOID *v28; // rbx
  PVOID *v29; // r14
  char **v30; // rax
  char *v31; // rcx
  __int64 v32; // rdx
  struct _KTHREAD *v33; // [rsp+20h] [rbp-48h]
  _QWORD *v35; // [rsp+88h] [rbp+20h]

  v3 = a1;
  if ( a1 > 0x1FFFFFFF )
    return 3221225711LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * a1, 0x6C526D4Du);
  v35 = PoolWithTag;
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  CurrentThread = KeGetCurrentThread();
  v11 = 0;
  v12 = 0;
  v33 = CurrentThread;
  --CurrentThread->KernelApcDisable;
  if ( (_DWORD)v3 )
  {
    v13 = PoolWithTag;
    v14 = (char *)PoolWithTag;
    v15 = a2 - (_QWORD)PoolWithTag;
    v16 = (unsigned int)v3;
    do
    {
      List = MiPfPrepareReadList(*(_QWORD *)((char *)v13 + v15), v14, a3);
      if ( List < 0 )
      {
        v12 = List;
      }
      else if ( *v13 )
      {
        v11 |= 1u;
      }
      v14 += 8;
      ++v13;
      --v16;
    }
    while ( v16 );
    v9 = v35;
    CurrentThread = v33;
  }
  if ( (v11 & 1) == 0 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v6, v7, v8);
    goto LABEL_12;
  }
  ++BYTE6(CurrentThread[1].Queue);
  v19 = v11 & 0xFE;
  v12 = 0;
  v20 = 0;
  if ( !(_DWORD)v3 )
    goto LABEL_20;
  v21 = 0LL;
  while ( 1 )
  {
    v22 = v9[v21];
    if ( v22 )
      break;
LABEL_19:
    ++v20;
    ++v21;
    if ( v20 >= (unsigned int)v3 )
      goto LABEL_20;
  }
  *(_DWORD *)(v22 + 72) = 0;
  v23 = MiPfPutPagesInTransition(v9[v21], a3);
  if ( v23 >= 0 )
  {
    v24 = v9[v21];
    if ( *(_QWORD *)(v24 + 88) == v24 + 88 )
    {
      MiReleaseReadListResources(v24);
      ExFreePoolWithTag((PVOID)v9[v21], 0);
      v9[v21] = 0LL;
    }
    else
    {
      v19 |= 1u;
      MiPfExecuteReadList(v24, 0LL, 0xFFFFFFFFLL, 0LL);
    }
    goto LABEL_19;
  }
  v12 = v23;
  if ( v20 < (unsigned int)v3 )
  {
    v29 = (PVOID *)&v9[v21];
    do
    {
      if ( *v29 )
      {
        while ( 1 )
        {
          v30 = (char **)((char *)*v29 + 88);
          if ( *v30 == (char *)v30 )
            break;
          v31 = *v30;
          v32 = *(_QWORD *)*v30;
          if ( *((char ***)*v30 + 1) != v30 || *(char **)(v32 + 8) != v31 )
            __fastfail(3u);
          *v30 = (char *)v32;
          *(_QWORD *)(v32 + 8) = v30;
          MiFreeInPageSupportBlock(v31);
        }
        MiReleaseReadListResources(*v29);
        ExFreePoolWithTag(*v29, 0);
        *v29 = 0LL;
      }
      ++v20;
      ++v29;
    }
    while ( v20 < (unsigned int)v3 );
  }
LABEL_20:
  v25 = v3;
  if ( (v19 & 1) != 0 )
  {
    v12 = 0;
    if ( (_DWORD)v3 )
    {
      v26 = v9;
      v27 = v3;
      do
      {
        if ( *v26 )
        {
          MiPfCompletePrefetchIos((ULONG_PTR *)(*v26 + 88LL), 0LL, 0LL);
          MiReleaseReadListResources(*v26);
        }
        ++v26;
        --v27;
      }
      while ( v27 );
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v6, v7, v8);
  --BYTE6(CurrentThread[1].Queue);
  if ( (_DWORD)v3 )
  {
    v28 = (PVOID *)v9;
    do
    {
      if ( *v28 )
        ExFreePoolWithTag(*v28, 0);
      ++v28;
      --v25;
    }
    while ( v25 );
  }
LABEL_12:
  ExFreePoolWithTag(v9, 0);
  return v12;
}
