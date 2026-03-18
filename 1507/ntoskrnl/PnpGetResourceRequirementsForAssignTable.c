/*
 * XREFs of PnpGetResourceRequirementsForAssignTable @ 0x14045C80C
 * Callers:
 *     PnpAllocateResources @ 0x14045C42C (PnpAllocateResources.c)
 *     PnpQueryRebalanceWorker @ 0x140680CF0 (PnpQueryRebalanceWorker.c)
 *     PnpReallocateResources @ 0x140695AF8 (PnpReallocateResources.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     IopQueryDeviceResources @ 0x14045CCC0 (IopQueryDeviceResources.c)
 *     PipClearDevNodeFlags @ 0x1404E3CDC (PipClearDevNodeFlags.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x14059C7B4 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopResourceRequirementsListToReqList @ 0x14059D140 (IopResourceRequirementsListToReqList.c)
 *     PnpFilterResourceRequirementsList @ 0x14059F0BC (PnpFilterResourceRequirementsList.c)
 *     IopRearrangeReqList @ 0x1405B8994 (IopRearrangeReqList.c)
 */

__int64 __fastcall PnpGetResourceRequirementsForAssignTable(
        unsigned __int64 a1,
        unsigned __int64 a2,
        _DWORD *a3,
        __int64 a4)
{
  unsigned int v4; // edi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rcx
  int v8; // eax
  _QWORD *v9; // r13
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rbp
  unsigned __int8 CurrentIrql; // r15
  unsigned __int8 v15; // bp
  signed __int32 v16; // eax
  __int64 v17; // rcx
  int DeviceResources; // eax
  __int64 v20; // rax
  __int64 v21; // rbp
  unsigned __int8 v22; // r15
  void *v23; // rcx
  unsigned __int8 v24; // bp
  signed __int32 v25; // eax
  int v26; // ebp
  __int64 v27; // rsi
  __int64 v28; // r8
  unsigned int v29; // eax
  void *v30; // rcx

  v4 = 0;
  *a3 = 0;
  if ( a1 >= a2 )
    return (unsigned int)-1073741823;
  v6 = a1 + 24;
  v7 = a2;
  do
  {
    v8 = *(_DWORD *)(v6 - 16);
    v9 = (_QWORD *)(v6 + 8);
    *(_QWORD *)(v6 + 8) = 0LL;
    if ( (v8 & 0x20) != 0 )
      goto LABEL_20;
    *(_QWORD *)(v6 + 16) = 0LL;
    v10 = *(_QWORD *)(v6 - 24);
    *(_QWORD *)(v6 + 24) = 0LL;
    if ( v10 )
      v11 = *(_QWORD *)(*(_QWORD *)(v10 + 312) + 40LL);
    else
      v11 = 0LL;
    v12 = KeAbPreAcquire((ULONG_PTR)&PiResourceListLock, 0LL, 0LL, a4);
    v13 = v12;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&PiResourceListLock, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&PiResourceListLock, v12);
    if ( v13 )
      *(_BYTE *)(v13 + 26) |= 1u;
    qword_14034AA48 = (__int64)KeGetCurrentThread();
    dword_14034AA70 = CurrentIrql;
    if ( (*(_DWORD *)(v11 + 396) & 0x400) != 0 )
    {
      v30 = *(void **)(v11 + 440);
      if ( v30 )
      {
        ExFreePoolWithTag(v30, 0);
        *(_QWORD *)(v11 + 440) = 0LL;
        PipClearDevNodeFlags(v11, 512LL);
        *(_DWORD *)(v6 - 16) |= 0x400u;
      }
    }
    v15 = dword_14034AA70;
    qword_14034AA48 = 0LL;
    v16 = _InterlockedCompareExchange((volatile signed __int32 *)&PiResourceListLock, 1, 0);
    if ( v16 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&PiResourceListLock, v16);
    __writecr8(v15);
    KeAbPostRelease((ULONG_PTR)&PiResourceListLock);
    if ( !*(_QWORD *)v6 )
    {
      v17 = *(_QWORD *)(v11 + 440);
      if ( !v17 || (*(_DWORD *)(v11 + 396) & 0x200) != 0 )
      {
        DeviceResources = IopQueryDeviceResources(*(_QWORD *)(v6 - 24));
        if ( DeviceResources < 0 || !*(_QWORD *)v6 )
        {
          *(_DWORD *)(v6 + 32) = DeviceResources;
          goto LABEL_18;
        }
        v20 = KeAbPreAcquire((ULONG_PTR)&PiResourceListLock, 0LL, 0LL, a4);
        v21 = v20;
        v22 = KeGetCurrentIrql();
        __writecr8(1uLL);
        if ( !_interlockedbittestandreset((volatile signed __int32 *)&PiResourceListLock, 0) )
          ExpAcquireFastMutexContended((ULONG_PTR)&PiResourceListLock, v20);
        if ( v21 )
          *(_BYTE *)(v21 + 26) |= 1u;
        qword_14034AA48 = (__int64)KeGetCurrentThread();
        dword_14034AA70 = v22;
        v23 = *(void **)(v11 + 440);
        if ( v23 )
        {
          ExFreePoolWithTag(v23, 0);
          PipClearDevNodeFlags(v11, 512LL);
        }
        *(_QWORD *)(v11 + 440) = *(_QWORD *)v6;
        v24 = dword_14034AA70;
        qword_14034AA48 = 0LL;
        v25 = _InterlockedCompareExchange((volatile signed __int32 *)&PiResourceListLock, 1, 0);
        if ( v25 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)&PiResourceListLock, v25);
        __writecr8(v24);
        KeAbPostRelease((ULONG_PTR)&PiResourceListLock);
      }
      else
      {
        *(_QWORD *)v6 = v17;
        *(_DWORD *)(v6 - 12) = 4;
      }
    }
    if ( (*(_DWORD *)(v6 - 16) & 0x200) != 0 )
    {
      PnpFilterResourceRequirementsList(*(void **)v6);
      *(_DWORD *)(v6 - 16) &= ~0x200u;
    }
    v26 = IopResourceRequirementsListToReqList(v6 - 24, v6 + 8);
    if ( v26 >= 0 )
    {
      v27 = *v9;
      if ( *v9 )
      {
        IopRearrangeReqList(*v9);
        if ( *(_QWORD *)(v27 + 24) )
        {
          v29 = *(_DWORD *)(v27 + 32);
          *(_DWORD *)(v6 + 32) = v26;
          if ( v29 < 3 )
            v29 = 0;
          ++*a3;
          *(_DWORD *)(v6 - 8) = v29;
          goto LABEL_19;
        }
        PnpFreeResourceRequirementsForAssignTable(v6 - 24, v6 + 40, v28, a4);
        v26 = -1073741438;
      }
    }
    *(_DWORD *)(v6 + 32) = v26;
LABEL_18:
    *(_DWORD *)(v6 - 16) |= 0x20u;
LABEL_19:
    v7 = a2;
LABEL_20:
    v6 += 64LL;
  }
  while ( v6 - 24 < v7 );
  if ( !*a3 )
    return (unsigned int)-1073741823;
  return v4;
}
