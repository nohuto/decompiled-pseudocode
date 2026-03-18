/*
 * XREFs of PnpGetResourceRequirementsForAssignTable @ 0x1404F189C
 * Callers:
 *     PnpAllocateResources @ 0x1404F213C (PnpAllocateResources.c)
 *     PnpQueryRebalanceWorker @ 0x140605F98 (PnpQueryRebalanceWorker.c)
 *     PnpReallocateResources @ 0x140617258 (PnpReallocateResources.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PipClearDevNodeFlags @ 0x1404574A4 (PipClearDevNodeFlags.c)
 *     IopQueryDeviceResources @ 0x1404EF3B0 (IopQueryDeviceResources.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x140529EB4 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopResourceRequirementsListToReqList @ 0x14052A814 (IopResourceRequirementsListToReqList.c)
 *     PnpFilterResourceRequirementsList @ 0x14052C73C (PnpFilterResourceRequirementsList.c)
 *     IopRearrangeReqList @ 0x140542274 (IopRearrangeReqList.c)
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
  int v12; // eax
  void *v14; // rcx
  int v15; // ebp
  __int64 v16; // rsi
  unsigned int v17; // eax
  void *v18; // rcx
  int v19; // [rsp+60h] [rbp+8h] BYREF
  __int64 v20; // [rsp+70h] [rbp+18h]

  v3 = 0;
  v20 = 0LL;
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
      v18 = *(void **)(v10 + 440);
      if ( v18 )
      {
        ExFreePoolWithTag(v18, 0);
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
        v12 = IopQueryDeviceResources(*(struct _DEVICE_OBJECT **)(v6 - 24), 1, (ULONG_PTR *)v6, &v19);
        if ( v12 < 0 || !*(_QWORD *)v6 )
        {
          *(_DWORD *)(v6 + 32) = v12;
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
      if ( (int)PnpFilterResourceRequirementsList(*(void **)v6) >= 0 && v20 )
        *(_QWORD *)v6 = v20;
      else
        *(_DWORD *)(v6 - 16) &= ~0x200u;
    }
    v15 = IopResourceRequirementsListToReqList(v6 - 24, v6 + 8);
    if ( v15 < 0 )
      goto LABEL_29;
    v16 = *v8;
    if ( !*v8 )
      goto LABEL_29;
    IopRearrangeReqList(*v8);
    if ( !*(_QWORD *)(v16 + 24) )
    {
      PnpFreeResourceRequirementsForAssignTable(v6 - 24, v6 + 40);
      v15 = -1073741438;
LABEL_29:
      *(_DWORD *)(v6 + 32) = v15;
LABEL_12:
      *(_DWORD *)(v6 - 16) |= 0x20u;
      goto LABEL_13;
    }
    v17 = *(_DWORD *)(v16 + 32);
    *(_DWORD *)(v6 + 32) = v15;
    if ( v17 < 3 )
      v17 = 0;
    ++*a3;
    *(_DWORD *)(v6 - 8) = v17;
LABEL_13:
    v6 += 64LL;
  }
  while ( v6 - 24 < a2 );
  if ( !*a3 )
    return (unsigned int)-1073741823;
  return v3;
}
