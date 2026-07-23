/*
 * XREFs of PnpGetResourceRequirementsForAssignTable @ 0x14050D06C
 * Callers:
 *     PnpAllocateResources @ 0x14050B1A0 (PnpAllocateResources.c)
 *     PnpQueryRebalanceWorker @ 0x14063024C (PnpQueryRebalanceWorker.c)
 *     PnpReallocateResources @ 0x14064BD60 (PnpReallocateResources.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PipClearDevNodeFlags @ 0x1403F22D8 (PipClearDevNodeFlags.c)
 *     IopQueryDeviceResources @ 0x14050EDDC (IopQueryDeviceResources.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x140556624 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopResourceRequirementsListToReqList @ 0x140556FA0 (IopResourceRequirementsListToReqList.c)
 *     PnpFilterResourceRequirementsList @ 0x140558924 (PnpFilterResourceRequirementsList.c)
 *     IopRearrangeReqList @ 0x1405780EC (IopRearrangeReqList.c)
 */

__int64 __fastcall PnpGetResourceRequirementsForAssignTable(unsigned __int64 a1, unsigned __int64 a2, _DWORD *a3)
{
  unsigned int v3; // edi
  unsigned __int64 v6; // rbx
  int v7; // eax
  _QWORD *v8; // r12
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rcx
  int DeviceResources; // eax
  void *v14; // rcx
  int v15; // ebp
  __int64 v16; // rsi
  __int64 v17; // r8
  unsigned int v18; // eax
  void *v19; // rcx

  v3 = 0;
  *a3 = 0;
  if ( a1 >= a2 )
    return (unsigned int)-1073741823;
  v6 = a1 + 24;
  do
  {
    v7 = *(_DWORD *)(v6 - 16);
    v8 = (_QWORD *)(v6 + 8);
    *(_QWORD *)(v6 + 8) = 0LL;
    if ( (v7 & 0x20) != 0 )
      goto LABEL_13;
    *(_QWORD *)(v6 + 16) = 0LL;
    v9 = *(_QWORD *)(v6 - 24);
    *(_QWORD *)(v6 + 24) = 0LL;
    if ( v9 )
      v10 = *(_QWORD *)(*(_QWORD *)(v9 + 312) + 40LL);
    else
      v10 = 0LL;
    ExAcquireFastMutex(&PiResourceListLock);
    if ( (*(_DWORD *)(v10 + 396) & 0x400) != 0 )
    {
      v19 = *(void **)(v10 + 440);
      if ( v19 )
      {
        ExFreePoolWithTag(v19, 0);
        *(_QWORD *)(v10 + 440) = 0LL;
        PipClearDevNodeFlags(v10, 512);
        *(_DWORD *)(v6 - 16) |= 0x400u;
      }
    }
    KeReleaseGuardedMutex(&PiResourceListLock);
    if ( !*(_QWORD *)v6 )
    {
      v11 = *(_QWORD *)(v10 + 440);
      if ( !v11 || (*(_DWORD *)(v10 + 396) & 0x200) != 0 )
      {
        DeviceResources = IopQueryDeviceResources(*(_QWORD *)(v6 - 24));
        if ( DeviceResources < 0 || !*(_QWORD *)v6 )
        {
          *(_DWORD *)(v6 + 32) = DeviceResources;
          goto LABEL_12;
        }
        ExAcquireFastMutex(&PiResourceListLock);
        v14 = *(void **)(v10 + 440);
        if ( v14 )
        {
          ExFreePoolWithTag(v14, 0);
          PipClearDevNodeFlags(v10, 512);
        }
        *(_QWORD *)(v10 + 440) = *(_QWORD *)v6;
        KeReleaseGuardedMutex(&PiResourceListLock);
      }
      else
      {
        *(_QWORD *)v6 = v11;
        *(_DWORD *)(v6 - 12) = 4;
      }
    }
    if ( (*(_DWORD *)(v6 - 16) & 0x200) != 0 )
    {
      PnpFilterResourceRequirementsList(*(void **)v6);
      *(_DWORD *)(v6 - 16) &= ~0x200u;
    }
    v15 = IopResourceRequirementsListToReqList(v6 - 24, v6 + 8);
    if ( v15 < 0 )
      goto LABEL_30;
    v16 = *v8;
    if ( !*v8 )
      goto LABEL_30;
    IopRearrangeReqList(*v8);
    if ( !*(_QWORD *)(v16 + 24) )
    {
      PnpFreeResourceRequirementsForAssignTable(v6 - 24, v6 + 40, v17);
      v15 = -1073741438;
LABEL_30:
      *(_DWORD *)(v6 + 32) = v15;
LABEL_12:
      *(_DWORD *)(v6 - 16) |= 0x20u;
      goto LABEL_13;
    }
    v18 = *(_DWORD *)(v16 + 32);
    *(_DWORD *)(v6 + 32) = v15;
    if ( v18 < 3 )
      v18 = 0;
    ++*a3;
    *(_DWORD *)(v6 - 8) = v18;
LABEL_13:
    v6 += 64LL;
  }
  while ( v6 - 24 < a2 );
  if ( !*a3 )
    return (unsigned int)-1073741823;
  return v3;
}
