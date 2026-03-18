/*
 * XREFs of MmPrefetchPagesEx @ 0x1404D9B80
 * Callers:
 *     PfpPrefetchFilesTrickle @ 0x1404D95B0 (PfpPrefetchFilesTrickle.c)
 *     MmPrefetchPages @ 0x1404D9B6C (MmPrefetchPages.c)
 *     PfSnPrefetchSections @ 0x1404DF6C8 (PfSnPrefetchSections.c)
 *     PfpPrefetchFiles @ 0x1404F3380 (PfpPrefetchFiles.c)
 *     HvpViewMapPrefetchFile @ 0x1405EB5D0 (HvpViewMapPrefetchFile.c)
 * Callees:
 *     MiPfCompletePrefetchIos @ 0x1400387EC (MiPfCompletePrefetchIos.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     MiPfPutPagesInTransition @ 0x1400FCDE0 (MiPfPutPagesInTransition.c)
 *     MiFreeInPageSupportBlock @ 0x1400FDE30 (MiFreeInPageSupportBlock.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiPfExecuteReadList @ 0x1403F70AC (MiPfExecuteReadList.c)
 *     MiPfPrepareReadList @ 0x14042D190 (MiPfPrepareReadList.c)
 *     MiReleaseReadListResources @ 0x14047B59C (MiReleaseReadListResources.c)
 */

__int64 __fastcall MmPrefetchPagesEx(unsigned int a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // edi
  _QWORD *v4; // r13
  __int64 v6; // r15
  _QWORD *PoolWithTag; // rsi
  char v8; // bl
  unsigned int v9; // ebp
  struct _KTHREAD *CurrentThread; // r14
  __int64 v11; // r14
  _QWORD *v12; // rbp
  unsigned __int64 **v13; // r13
  __int64 v14; // r12
  int List; // eax
  char v17; // bl
  __int64 v18; // rax
  unsigned int v19; // r12d
  __int64 v20; // rdx
  PVOID v21; // rcx
  __int64 *v22; // rbx
  __int64 v23; // r12
  PVOID *v24; // rbx
  __int64 *v25; // r13
  char **v26; // rax
  char *v27; // rcx
  __int64 v28; // rdx
  struct _KTHREAD *v29; // [rsp+20h] [rbp-48h]
  PVOID *v30; // [rsp+20h] [rbp-48h]
  int v32; // [rsp+70h] [rbp+8h]
  int v34; // [rsp+88h] [rbp+20h]
  __int64 v35; // [rsp+88h] [rbp+20h]

  v3 = a1;
  v4 = a3;
  if ( a1 > 0x1FFFFFFF )
    return 3221225711LL;
  v6 = a1;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * a1, 0x6C526D4Du);
  if ( !PoolWithTag )
    return 3221225626LL;
  v8 = 0;
  v9 = 0;
  CurrentThread = KeGetCurrentThread();
  v34 = 0;
  v29 = CurrentThread;
  --CurrentThread->KernelApcDisable;
  if ( v3 )
  {
    v11 = v3;
    v12 = PoolWithTag;
    v13 = (unsigned __int64 **)PoolWithTag;
    v14 = a2 - (_QWORD)PoolWithTag;
    do
    {
      List = MiPfPrepareReadList(*(_DWORD **)((char *)v12 + v14), v13, a3);
      if ( List < 0 )
      {
        v34 = List;
      }
      else if ( *v12 )
      {
        v8 |= 1u;
      }
      ++v13;
      ++v12;
      --v11;
    }
    while ( v11 );
    v3 = a1;
    CurrentThread = v29;
    v4 = a3;
    v9 = v34;
  }
  if ( (v8 & 1) == 0 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    ExFreePoolWithTag(PoolWithTag, 0);
    if ( v9 )
      return v9;
    return 0LL;
  }
  ++BYTE2(CurrentThread[1].Teb);
  v9 = 0;
  v17 = v8 & 0xFE;
  v18 = 0LL;
  v19 = 0;
  if ( !v3 )
    goto LABEL_23;
  v35 = 0LL;
  while ( 1 )
  {
    v20 = PoolWithTag[v18];
    v30 = (PVOID *)&PoolWithTag[v18];
    if ( v20 )
      break;
LABEL_21:
    ++v18;
    ++v19;
    v35 = v18;
    if ( v19 >= v3 )
    {
      LODWORD(v18) = 0;
      goto LABEL_23;
    }
  }
  *(_DWORD *)(v20 + 72) = 0;
  LODWORD(v18) = MiPfPutPagesInTransition(PoolWithTag[v18], v4);
  if ( (int)v18 >= 0 )
  {
    v21 = *v30;
    if ( *((PVOID *)*v30 + 11) == (char *)*v30 + 88 )
    {
      MiReleaseReadListResources((__int64)v21);
      ExFreePoolWithTag(*v30, 0);
      *v30 = 0LL;
    }
    else
    {
      v17 |= 1u;
      MiPfExecuteReadList((__int64)v21, 0, 0xFFFFFFFF);
    }
    v18 = v35;
    goto LABEL_21;
  }
  v32 = v18;
  if ( v19 < v3 )
  {
    v25 = &PoolWithTag[v35];
    do
    {
      if ( *v25 )
      {
        while ( 1 )
        {
          v26 = (char **)(*v25 + 88);
          if ( *v26 == (char *)v26 )
            break;
          v27 = *v26;
          v28 = *(_QWORD *)*v26;
          if ( *((char ***)*v26 + 1) != v26 || *(char **)(v28 + 8) != v27 )
            __fastfail(3u);
          *v26 = (char *)v28;
          *(_QWORD *)(v28 + 8) = v26;
          MiFreeInPageSupportBlock(v27);
        }
        MiReleaseReadListResources(*v25);
        ExFreePoolWithTag((PVOID)*v25, 0);
        *v25 = 0LL;
      }
      ++v19;
      ++v25;
    }
    while ( v19 < v3 );
    LODWORD(v18) = v32;
  }
LABEL_23:
  if ( (v17 & 1) != 0 )
  {
    if ( v3 )
    {
      v22 = PoolWithTag;
      v23 = v6;
      do
      {
        if ( *v22 )
        {
          MiPfCompletePrefetchIos((ULONG_PTR *)(*v22 + 88), 0LL, 0LL);
          MiReleaseReadListResources(*v22);
        }
        ++v22;
        --v23;
      }
      while ( v23 );
    }
  }
  else
  {
    v9 = v18;
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  --BYTE2(CurrentThread[1].Teb);
  if ( v3 )
  {
    v24 = (PVOID *)PoolWithTag;
    do
    {
      if ( *v24 )
        ExFreePoolWithTag(*v24, 0);
      ++v24;
      --v6;
    }
    while ( v6 );
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  return v9;
}
