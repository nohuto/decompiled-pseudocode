/*
 * XREFs of MmPrefetchPagesEx @ 0x14049D750
 * Callers:
 *     PfSnPrefetchSections @ 0x140420658 (PfSnPrefetchSections.c)
 *     PfpPrefetchFilesTrickle @ 0x14042DB8C (PfpPrefetchFilesTrickle.c)
 *     MmPrefetchPages @ 0x14053B49C (MmPrefetchPages.c)
 *     HvpViewMapPrefetchFile @ 0x140663578 (HvpViewMapPrefetchFile.c)
 *     PfpPrefetchFiles @ 0x1406AF06C (PfpPrefetchFiles.c)
 * Callees:
 *     MiFreeInPageSupportBlock @ 0x140033DF0 (MiFreeInPageSupportBlock.c)
 *     MiPfPutPagesInTransition @ 0x1400356F0 (MiPfPutPagesInTransition.c)
 *     MiPfCompletePrefetchIos @ 0x140086168 (MiPfCompletePrefetchIos.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiReleaseReadListResources @ 0x14049D640 (MiReleaseReadListResources.c)
 *     MiPfPrepareReadList @ 0x14049E0C0 (MiPfPrepareReadList.c)
 *     MiPfExecuteReadList @ 0x1404B2C24 (MiPfExecuteReadList.c)
 */

__int64 __fastcall MmPrefetchPagesEx(unsigned int a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rbp
  _QWORD *v4; // r14
  char *PoolWithTag; // rax
  char *v7; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v9; // r13d
  char v10; // bl
  _QWORD *v11; // r14
  char *v12; // r12
  __int64 v13; // r15
  __int64 v14; // rsi
  int List; // eax
  __int16 v16; // ax
  char v18; // bl
  int v19; // eax
  unsigned int v20; // r15d
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // rcx
  bool v24; // zf
  __int64 v25; // rbx
  __int64 *v26; // r14
  __int64 v27; // r15
  __int16 v28; // ax
  PVOID *v29; // rdi
  __int64 *v30; // r14
  char **v31; // rax
  char *v32; // rcx
  __int64 v33; // rdx
  unsigned int v34; // [rsp+60h] [rbp+8h]
  int v35; // [rsp+60h] [rbp+8h]
  char *v37; // [rsp+78h] [rbp+20h]

  v3 = a1;
  v4 = a3;
  if ( a1 > 0x1FFFFFFF )
    return 3221225711LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * a1, 0x6C526D4Du);
  v37 = PoolWithTag;
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  CurrentThread = KeGetCurrentThread();
  v9 = 0;
  v10 = 0;
  v34 = 0;
  --CurrentThread->KernelApcDisable;
  if ( (_DWORD)v3 )
  {
    v11 = PoolWithTag;
    v12 = PoolWithTag;
    v13 = a2 - (_QWORD)PoolWithTag;
    v14 = (unsigned int)v3;
    do
    {
      List = MiPfPrepareReadList(*(_QWORD *)((char *)v11 + v13), v12, a3);
      if ( List < 0 )
      {
        v34 = List;
      }
      else if ( *v11 )
      {
        v10 |= 1u;
      }
      v12 += 8;
      ++v11;
      --v14;
    }
    while ( v14 );
    v7 = v37;
    v9 = 0;
    v4 = a3;
  }
  if ( (v10 & 1) == 0 )
  {
    v16 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v16;
    if ( !v16
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    ExFreePoolWithTag(v7, 0);
    return v34;
  }
  ++BYTE2(CurrentThread[1].Teb);
  v18 = v10 & 0xFE;
  v19 = 0;
  v20 = 0;
  if ( !(_DWORD)v3 )
    goto LABEL_22;
  v21 = 0LL;
  while ( 1 )
  {
    v22 = *(_QWORD *)&v7[8 * v21];
    if ( v22 )
      break;
LABEL_20:
    ++v20;
    ++v21;
    if ( v20 >= (unsigned int)v3 )
    {
      v19 = 0;
      goto LABEL_22;
    }
  }
  *(_DWORD *)(v22 + 72) = 0;
  v19 = MiPfPutPagesInTransition(*(_QWORD *)&v7[8 * v21], v4);
  if ( v19 >= 0 )
  {
    v23 = *(_QWORD *)&v7[8 * v21];
    if ( *(_QWORD *)(v23 + 88) == v23 + 88 )
    {
      MiReleaseReadListResources(v23);
      ExFreePoolWithTag(*(PVOID *)&v7[8 * v21], 0);
      *(_QWORD *)&v7[8 * v21] = 0LL;
    }
    else
    {
      v18 |= 1u;
      MiPfExecuteReadList(v23, 0LL, 0xFFFFFFFFLL);
    }
    goto LABEL_20;
  }
  v35 = v19;
  if ( v20 < (unsigned int)v3 )
  {
    v30 = (__int64 *)&v7[8 * v21];
    do
    {
      if ( *v30 )
      {
        while ( 1 )
        {
          v31 = (char **)(*v30 + 88);
          if ( *v31 == (char *)v31 )
            break;
          v32 = *v31;
          v33 = *(_QWORD *)*v31;
          if ( *((char ***)*v31 + 1) != v31 || *(char **)(v33 + 8) != v32 )
            __fastfail(3u);
          *v31 = (char *)v33;
          *(_QWORD *)(v33 + 8) = v31;
          MiFreeInPageSupportBlock(v32);
        }
        MiReleaseReadListResources(*v30);
        ExFreePoolWithTag((PVOID)*v30, 0);
        *v30 = 0LL;
      }
      ++v20;
      ++v30;
    }
    while ( v20 < (unsigned int)v3 );
    v19 = v35;
  }
LABEL_22:
  v24 = (v18 & 1) == 0;
  v25 = v3;
  if ( v24 )
  {
    v9 = v19;
  }
  else if ( (_DWORD)v3 )
  {
    v26 = (__int64 *)v7;
    v27 = v3;
    do
    {
      if ( *v26 )
      {
        MiPfCompletePrefetchIos((_BYTE **)(*v26 + 88), 0LL, 0LL);
        MiReleaseReadListResources(*v26);
      }
      ++v26;
      --v27;
    }
    while ( v27 );
  }
  v28 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v28;
  if ( !v28
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  --BYTE2(CurrentThread[1].Teb);
  if ( (_DWORD)v3 )
  {
    v29 = (PVOID *)v7;
    do
    {
      if ( *v29 )
        ExFreePoolWithTag(*v29, 0);
      ++v29;
      --v25;
    }
    while ( v25 );
  }
  ExFreePoolWithTag(v7, 0);
  return v9;
}
