/*
 * XREFs of PnpAllocateResources @ 0x14050B1A0
 * Callers:
 *     PnpAssignResourcesToDevices @ 0x14050B090 (PnpAssignResourcesToDevices.c)
 *     IopLegacyResourceAllocation @ 0x140554EEC (IopLegacyResourceAllocation.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x140052530 (KeReleaseSemaphore.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     qsort @ 0x14014E520 (qsort.c)
 *     PipSetDevNodeFlags @ 0x1403F2264 (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x1403F22D8 (PipClearDevNodeFlags.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x14050D06C (PnpGetResourceRequirementsForAssignTable.c)
 *     IopCommitConfiguration @ 0x140555E7C (IopCommitConfiguration.c)
 *     PnpBuildCmResourceLists @ 0x140556118 (PnpBuildCmResourceLists.c)
 *     PnpFindBestConfiguration @ 0x1405562FC (PnpFindBestConfiguration.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x140556624 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopReleaseFilteredBootResources @ 0x14055B87C (IopReleaseFilteredBootResources.c)
 *     PnpRebalance @ 0x140630484 (PnpRebalance.c)
 */

__int64 __fastcall PnpAllocateResources(unsigned int a1, _DWORD *a2, int a3, _DWORD *a4)
{
  __int64 v4; // rbp
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v9; // rbx
  int ResourceRequirementsForAssignTable; // esi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // r14d
  _DWORD *v18; // rax
  _QWORD *v19; // rcx
  unsigned int v20; // esi
  int *v21; // rcx
  __int64 v22; // rax
  int v23; // r15d
  _DWORD *v24; // r14
  __int64 v25; // rbp
  int BestConfiguration; // eax
  __int64 v27; // rdx
  int v28; // eax
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

  v4 = a1;
  if ( a4 )
    *a4 = 0;
  if ( !a3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  }
  LODWORD(NumOfElements) = v4;
  v9 = (unsigned __int64)&a2[16 * v4];
  ResourceRequirementsForAssignTable = PnpGetResourceRequirementsForAssignTable(a2, v9, &NumOfElements);
  if ( ResourceRequirementsForAssignTable < 0 )
    goto LABEL_6;
  v15 = 0LL;
  v16 = 3221226029LL;
  v17 = 1;
  if ( !IopBootConfigsReserved )
  {
    v18 = a2;
    if ( (unsigned __int64)a2 < v9 )
    {
      while ( (int)v18[14] < 0 || *((_QWORD *)v18 + 3) )
      {
        v18 += 16;
        if ( (unsigned __int64)v18 >= v9 )
          goto LABEL_14;
      }
      v15 = 1LL;
    }
LABEL_14:
    if ( v18 != (_DWORD *)v9 && (unsigned __int64)a2 < v9 )
    {
      v36 = a2 + 2;
      v37 = ((unsigned __int64)((v4 << 6) - 1) >> 6) + 1;
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
    if ( (_DWORD)v15 )
      goto LABEL_45;
  }
  v19 = a2;
  if ( (unsigned __int64)a2 < v9 )
  {
    while ( 1 )
    {
      v15 = *v19 ? *(_QWORD *)(*(_QWORD *)(*v19 + 312LL) + 40LL) : 0LL;
      if ( (*(_DWORD *)(v15 + 396) & 0x40) != 0 && v19[3] )
        break;
      v19 += 8;
      if ( (unsigned __int64)v19 >= v9 )
        goto LABEL_22;
    }
    v17 = 0;
  }
LABEL_22:
  if ( v19 == (_QWORD *)v9 || (unsigned __int64)a2 >= v9 )
  {
    v20 = NumOfElements;
  }
  else
  {
    v20 = NumOfElements;
    v21 = a2 + 2;
    do
    {
      v22 = *((_QWORD *)v21 - 1);
      if ( v22 )
        v15 = *(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL);
      else
        v15 = 0LL;
      if ( (*(_DWORD *)(v15 + 396) & 0x40) == 0 || !*((_QWORD *)v21 + 2) )
      {
        v28 = *v21;
        if ( (*v21 & 0x20) == 0 )
        {
          v21[12] = -1073741267;
          *v21 = v28 | 0x20;
          --v20;
        }
      }
      v21 += 16;
    }
    while ( (unsigned __int64)(v21 - 2) < v9 );
  }
  if ( !v20 )
  {
    ResourceRequirementsForAssignTable = -1073741823;
    goto LABEL_45;
  }
  if ( v20 != (_DWORD)v4 )
  {
    v31 = a2;
    if ( (unsigned __int64)a2 < v9 )
    {
      v15 = v9 - 64;
      do
      {
        if ( (v31[2] & 0x20) != 0 )
        {
          v9 -= 64LL;
          v32 = *(_OWORD *)v31;
          v33 = *((_OWORD *)v31 + 1);
          v34 = *((_OWORD *)v31 + 2);
          v35 = *((_OWORD *)v31 + 3);
          *(_OWORD *)v31 = *(_OWORD *)v15;
          *((_OWORD *)v31 + 1) = *(_OWORD *)(v15 + 16);
          *((_OWORD *)v31 + 2) = *(_OWORD *)(v15 + 32);
          *((_OWORD *)v31 + 3) = *(_OWORD *)(v15 + 48);
          *(_OWORD *)v15 = v32;
          *(_OWORD *)(v15 + 16) = v33;
          *(_OWORD *)(v15 + 32) = v34;
          *(_OWORD *)(v15 + 48) = v35;
          v15 -= 64LL;
        }
        else
        {
          v31 += 16;
        }
      }
      while ( (unsigned __int64)v31 < v9 );
    }
  }
  if ( v20 > 1 )
  {
    v29 = 0;
    v30 = a2 + 5;
    do
    {
      *v30 = v29++;
      v30 += 16;
    }
    while ( v29 < v20 );
    qsort(a2, v20, 0x40uLL, PnpCompareResourceRequestPriority);
  }
  if ( v17 )
    ResourceRequirementsForAssignTable = PnpFindBestConfiguration(a2, v20, v42);
  else
    ResourceRequirementsForAssignTable = -1073741823;
  if ( ResourceRequirementsForAssignTable >= 0 )
  {
    ResourceRequirementsForAssignTable = IopCommitConfiguration(v42, v15, v16);
    for ( i = a2; (unsigned __int64)i < v9; i += 16 )
    {
      if ( ResourceRequirementsForAssignTable < 0 )
        i[14] = -1073741800;
      else
        PnpBuildCmResourceLists(i, i + 16, 0LL);
    }
    goto LABEL_44;
  }
  v23 = 0;
  v24 = a2;
  if ( (unsigned __int64)a2 >= v9 )
    goto LABEL_44;
  while ( 1 )
  {
    if ( *(_QWORD *)v24 )
      v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v24 + 312LL) + 40LL);
    else
      v25 = 0LL;
    BestConfiguration = PnpFindBestConfiguration(v24, 1LL, v42);
    ResourceRequirementsForAssignTable = BestConfiguration;
    if ( BestConfiguration >= 0 )
    {
      v23 = 1;
      ResourceRequirementsForAssignTable = IopCommitConfiguration(v42, v27, v16);
      if ( ResourceRequirementsForAssignTable < 0 )
        v24[14] = -1073741800;
      else
        PnpBuildCmResourceLists(v24, v24 + 16, 0LL);
      goto LABEL_42;
    }
    if ( BestConfiguration == -1073741670 )
      goto LABEL_43;
    if ( !v23 && (a2[2] & 0x80u) == 0 )
      break;
    v24[2] |= 0x20u;
    v24[14] = -1073741267;
LABEL_42:
    v24 += 16;
    if ( (unsigned __int64)v24 >= v9 )
      goto LABEL_43;
  }
  PipSetDevNodeFlags(v25, 0x40000);
  ResourceRequirementsForAssignTable = PnpRebalance(v25, v24, 1LL, 0LL);
  PipClearDevNodeFlags(v25, 0x40000);
  if ( ResourceRequirementsForAssignTable < 0 )
  {
    v39 = -1073741800;
    if ( ResourceRequirementsForAssignTable == -1073739512 )
      v39 = -1073739512;
    v24[14] = v39;
    goto LABEL_42;
  }
  if ( a4 )
    *a4 = 1;
  v24 += 16;
LABEL_43:
  if ( (unsigned __int64)v24 < v9 )
  {
    v40 = v24 + 2;
    v41 = ((v9 - (unsigned __int64)v24 - 1) >> 6) + 1;
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
LABEL_44:
  IopReleaseFilteredBootResources(a2, v9, v16);
LABEL_45:
  PnpFreeResourceRequirementsForAssignTable(a2, v9, v16);
LABEL_6:
  if ( !a3 )
  {
    KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v11, v12, v13);
  }
  return (unsigned int)ResourceRequirementsForAssignTable;
}
