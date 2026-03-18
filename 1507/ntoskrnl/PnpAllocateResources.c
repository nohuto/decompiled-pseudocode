/*
 * XREFs of PnpAllocateResources @ 0x14045C42C
 * Callers:
 *     PnpAssignResourcesToDevices @ 0x14045C31C (PnpAssignResourcesToDevices.c)
 *     IopLegacyResourceAllocation @ 0x14067F1F4 (IopLegacyResourceAllocation.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x140048A40 (KeReleaseSemaphore.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     qsort @ 0x140172BB0 (qsort.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x14045C80C (PnpGetResourceRequirementsForAssignTable.c)
 *     PipSetDevNodeFlags @ 0x1404E3454 (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x1404E3CDC (PipClearDevNodeFlags.c)
 *     IopReleaseFilteredBootResources @ 0x14059B274 (IopReleaseFilteredBootResources.c)
 *     IopCommitConfiguration @ 0x14059C184 (IopCommitConfiguration.c)
 *     PnpBuildCmResourceLists @ 0x14059C214 (PnpBuildCmResourceLists.c)
 *     PnpFindBestConfiguration @ 0x14059C42C (PnpFindBestConfiguration.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x14059C7B4 (PnpFreeResourceRequirementsForAssignTable.c)
 *     PnpRebalance @ 0x140680EDC (PnpRebalance.c)
 */

__int64 __fastcall PnpAllocateResources(unsigned int a1, _DWORD *a2, int a3, _DWORD *a4)
{
  int v4; // r15d
  __int64 v5; // rbp
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v10; // rbx
  int ResourceRequirementsForAssignTable; // esi
  struct _KTHREAD *v12; // rcx
  __int16 v13; // ax
  int v15; // r14d
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r8
  _DWORD *v19; // rax
  _QWORD *v20; // rcx
  unsigned int v21; // esi
  int *v22; // rcx
  __int64 v23; // rax
  int v24; // eax
  _DWORD *v25; // r14
  __int64 v26; // rbp
  int BestConfiguration; // eax
  __int64 v28; // rdx
  unsigned int v29; // eax
  _DWORD *v30; // rcx
  _DWORD *v31; // rcx
  __int128 v32; // xmm2
  __int128 v33; // xmm3
  __int128 v34; // xmm4
  __int128 v35; // xmm5
  _DWORD *v36; // rcx
  unsigned __int64 v37; // rax
  _DWORD *i; // rbp
  int v39; // eax
  _DWORD *v40; // rcx
  unsigned __int64 v41; // rax
  _BYTE v42[16]; // [rsp+30h] [rbp-38h] BYREF
  size_t NumOfElements; // [rsp+70h] [rbp+8h] BYREF

  v4 = 0;
  v5 = a1;
  if ( a4 )
    *a4 = 0;
  if ( !a3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  }
  LODWORD(NumOfElements) = v5;
  v10 = (unsigned __int64)&a2[16 * v5];
  ResourceRequirementsForAssignTable = PnpGetResourceRequirementsForAssignTable(a2, v10, &NumOfElements);
  if ( ResourceRequirementsForAssignTable < 0 )
    goto LABEL_6;
  v15 = 1;
  v16 = 0LL;
  v17 = 3221226029LL;
  v18 = 64LL;
  if ( !IopBootConfigsReserved )
  {
    v19 = a2;
    if ( (unsigned __int64)a2 < v10 )
    {
      while ( (int)v19[14] < 0 || *((_QWORD *)v19 + 3) )
      {
        v19 += 16;
        if ( (unsigned __int64)v19 >= v10 )
          goto LABEL_14;
      }
      v16 = 1LL;
    }
LABEL_14:
    if ( v19 != (_DWORD *)v10 && (unsigned __int64)a2 < v10 )
    {
      v36 = a2 + 2;
      v37 = ((unsigned __int64)((v5 << 6) - 1) >> 6) + 1;
      do
      {
        if ( (int)v36[12] < 0 || *((_QWORD *)v36 + 2) )
        {
          *v36 |= 0x20u;
          v36[12] = -1073741267;
        }
        v36 += 16;
        --v37;
      }
      while ( v37 );
    }
    if ( (_DWORD)v16 )
      goto LABEL_48;
  }
  v20 = a2;
  if ( (unsigned __int64)a2 < v10 )
  {
    while ( 1 )
    {
      v16 = *v20 ? *(_QWORD *)(*(_QWORD *)(*v20 + 312LL) + 40LL) : 0LL;
      if ( (*(_DWORD *)(v16 + 396) & 0x40) != 0 && v20[3] )
        break;
      v20 += 8;
      if ( (unsigned __int64)v20 >= v10 )
        goto LABEL_24;
    }
    v15 = 0;
  }
LABEL_24:
  if ( v20 == (_QWORD *)v10 || (unsigned __int64)a2 >= v10 )
  {
    v21 = NumOfElements;
  }
  else
  {
    v21 = NumOfElements;
    v22 = a2 + 2;
    do
    {
      v23 = *((_QWORD *)v22 - 1);
      if ( v23 )
        v16 = *(_QWORD *)(*(_QWORD *)(v23 + 312) + 40LL);
      else
        v16 = 0LL;
      if ( (*(_DWORD *)(v16 + 396) & 0x40) == 0 || !*((_QWORD *)v22 + 2) )
      {
        v24 = *v22;
        if ( (*v22 & 0x20) == 0 )
        {
          v22[12] = -1073741267;
          *v22 = v24 | 0x20;
          --v21;
        }
      }
      v22 += 16;
    }
    while ( (unsigned __int64)(v22 - 2) < v10 );
  }
  if ( !v21 )
  {
    ResourceRequirementsForAssignTable = -1073741823;
    goto LABEL_48;
  }
  if ( v21 != (_DWORD)v5 )
  {
    v31 = a2;
    if ( (unsigned __int64)a2 < v10 )
    {
      v16 = v10 - 64;
      do
      {
        if ( (v31[2] & 0x20) != 0 )
        {
          v10 -= 64LL;
          v32 = *(_OWORD *)v31;
          v33 = *((_OWORD *)v31 + 1);
          v34 = *((_OWORD *)v31 + 2);
          v35 = *((_OWORD *)v31 + 3);
          *(_OWORD *)v31 = *(_OWORD *)v16;
          *((_OWORD *)v31 + 1) = *(_OWORD *)(v16 + 16);
          *((_OWORD *)v31 + 2) = *(_OWORD *)(v16 + 32);
          *((_OWORD *)v31 + 3) = *(_OWORD *)(v16 + 48);
          *(_OWORD *)v16 = v32;
          *(_OWORD *)(v16 + 16) = v33;
          *(_OWORD *)(v16 + 32) = v34;
          *(_OWORD *)(v16 + 48) = v35;
          v16 -= 64LL;
        }
        else
        {
          v31 += 16;
        }
      }
      while ( (unsigned __int64)v31 < v10 );
    }
  }
  if ( v21 > 1 )
  {
    v29 = 0;
    v30 = a2 + 5;
    do
    {
      *v30 = v29++;
      v30 += 16;
    }
    while ( v29 < v21 );
    qsort(a2, v21, 0x40uLL, PnpCompareResourceRequestPriority);
  }
  if ( v15 )
    ResourceRequirementsForAssignTable = PnpFindBestConfiguration(a2, v21, v42, v17);
  else
    ResourceRequirementsForAssignTable = -1073741823;
  if ( ResourceRequirementsForAssignTable >= 0 )
  {
    ResourceRequirementsForAssignTable = IopCommitConfiguration(v42, v16, v18, v17);
    for ( i = a2; (unsigned __int64)i < v10; i += 16 )
    {
      if ( ResourceRequirementsForAssignTable < 0 )
        i[14] = -1073741800;
      else
        PnpBuildCmResourceLists(i, i + 16, 0LL);
    }
    goto LABEL_47;
  }
  v25 = a2;
  if ( (unsigned __int64)a2 >= v10 )
    goto LABEL_47;
  while ( 1 )
  {
    if ( *(_QWORD *)v25 )
      v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v25 + 312LL) + 40LL);
    else
      v26 = 0LL;
    BestConfiguration = PnpFindBestConfiguration(v25, 1LL, v42, v17);
    ResourceRequirementsForAssignTable = BestConfiguration;
    if ( BestConfiguration >= 0 )
    {
      v4 = 1;
      ResourceRequirementsForAssignTable = IopCommitConfiguration(v42, v28, v18, v17);
      if ( ResourceRequirementsForAssignTable < 0 )
        v25[14] = -1073741800;
      else
        PnpBuildCmResourceLists(v25, v25 + 16, 0LL);
      goto LABEL_45;
    }
    if ( BestConfiguration == -1073741670 )
      goto LABEL_46;
    if ( !v4 && (a2[2] & 0x80u) == 0 )
      break;
    v25[2] |= 0x20u;
    v25[14] = -1073741267;
LABEL_45:
    v25 += 16;
    if ( (unsigned __int64)v25 >= v10 )
      goto LABEL_46;
  }
  PipSetDevNodeFlags(v26, 0x40000LL);
  ResourceRequirementsForAssignTable = PnpRebalance(v26, v25, 1LL, 0LL);
  PipClearDevNodeFlags(v26, 0x40000LL);
  if ( ResourceRequirementsForAssignTable < 0 )
  {
    v39 = -1073741800;
    if ( ResourceRequirementsForAssignTable == -1073739512 )
      v39 = -1073739512;
    v25[14] = v39;
    goto LABEL_45;
  }
  if ( a4 )
    *a4 = 1;
  v25 += 16;
LABEL_46:
  if ( (unsigned __int64)v25 < v10 )
  {
    v40 = v25 + 2;
    v41 = ((v10 - (unsigned __int64)v25 - 1) >> 6) + 1;
    do
    {
      if ( ResourceRequirementsForAssignTable == -1073741670 )
      {
        v40[12] = -1073741670;
      }
      else
      {
        *v40 |= 0x20u;
        v40[12] = -1073741267;
      }
      v40 += 16;
      --v41;
    }
    while ( v41 );
  }
LABEL_47:
  IopReleaseFilteredBootResources(a2, v10, v18, v17);
LABEL_48:
  PnpFreeResourceRequirementsForAssignTable(a2, v10, v18, v17);
LABEL_6:
  if ( !a3 )
  {
    KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
    v12 = KeGetCurrentThread();
    v13 = v12->KernelApcDisable + 1;
    v12->KernelApcDisable = v13;
    if ( !v13
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152
      && !v12->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return (unsigned int)ResourceRequirementsForAssignTable;
}
