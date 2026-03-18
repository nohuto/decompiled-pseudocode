/*
 * XREFs of PnpProcessAssignResources @ 0x14045E340
 * Callers:
 *     PipProcessDevNodeTree @ 0x1404E16BC (PipProcessDevNodeTree.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PipSetDevNodeState @ 0x1400CFB9C (PipSetDevNodeState.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PnpAssignResourcesToDevices @ 0x14045C31C (PnpAssignResourcesToDevices.c)
 *     PnpProcessAssignResourcesWorker @ 0x14045E59C (PnpProcessAssignResourcesWorker.c)
 *     PipClearDevNodeUserFlags @ 0x1404615D0 (PipClearDevNodeUserFlags.c)
 *     PipSetDevNodeFlags @ 0x1404E3454 (PipSetDevNodeFlags.c)
 *     PipSetDevNodeProblem @ 0x140538A88 (PipSetDevNodeProblem.c)
 */

__int64 __fastcall PnpProcessAssignResources(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // ebp
  unsigned int v7; // ebx
  __int64 *PoolWithTag; // rax
  __int64 *v9; // r15
  __int64 v10; // rdi
  _DWORD *v12; // rax
  _DWORD *v13; // rbp
  _QWORD *v14; // rsi
  __int64 *v15; // r14
  __int64 v16; // r12
  __int64 v17; // rbx
  __int64 v18; // r9
  unsigned int *v19; // rsi
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rdi
  unsigned __int8 CurrentIrql; // r14
  unsigned __int8 v28; // di
  signed __int32 v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rdx
  int v32; // [rsp+68h] [rbp+20h]

  v3 = 0;
  v32 = 0;
  v7 = 8 * IopNumberDeviceNodes + 8;
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, v7, 0x35706E50u);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return v3;
  memset(PoolWithTag, 0, v7);
  *(_DWORD *)v9 = a2;
  PnpProcessAssignResourcesWorker(a1, v9);
  v10 = *((unsigned int *)v9 + 1);
  if ( !(_DWORD)v10 )
    goto LABEL_3;
  v12 = ExAllocatePoolWithTag(PagedPool, (unsigned int)((_DWORD)v10 << 6), 0x36706E50u);
  v13 = v12;
  if ( !v12 )
    goto LABEL_17;
  memset(v12, 0, (unsigned int)((_DWORD)v10 << 6));
  v14 = v13;
  v15 = v9 + 1;
  v16 = v10;
  do
  {
    v17 = *v15;
    memset(v14, 0, 0x40uLL);
    v14[3] = 0LL;
    ++v15;
    *v14 = v17;
    *((_DWORD *)v14 + 3) = 4;
    v14 += 8;
    --v16;
  }
  while ( v16 );
  PnpAssignResourcesToDevices(v10, v13, a3);
  v19 = v13 + 14;
  v20 = v10;
  do
  {
    v21 = *((_QWORD *)v19 - 7);
    if ( v21 )
      v22 = *(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL);
    else
      v22 = 0LL;
    v23 = *v19;
    if ( (int)v23 < 0 )
    {
      switch ( (_DWORD)v23 )
      {
        case 0xC000022D:
          goto LABEL_15;
        case 0xC000008A:
          v31 = 17LL;
          break;
        case 0xC0000182:
          v31 = 34LL;
          break;
        case 0xC0000908:
        case 0xC0040035:
          v31 = 35LL;
          break;
        case 0xC0040036:
          v31 = 33LL;
          break;
        default:
          v30 = v22;
          if ( (_DWORD)v23 == -1073479625 )
            v31 = 36LL;
          else
            v31 = 12LL;
          goto LABEL_41;
      }
      v30 = v22;
LABEL_41:
      PipSetDevNodeProblem(v30, v31, v23);
      goto LABEL_15;
    }
    v32 = 1;
    if ( *((_QWORD *)v19 - 2) )
    {
      v24 = KeAbPreAcquire((ULONG_PTR)&PiResourceListLock, 0LL, 0LL, v18);
      v25 = v24;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset((volatile signed __int32 *)&PiResourceListLock, 0) )
        ExpAcquireFastMutexContended((ULONG_PTR)&PiResourceListLock, v24);
      if ( v25 )
        *(_BYTE *)(v25 + 26) |= 1u;
      qword_14034AA48 = (__int64)KeGetCurrentThread();
      dword_14034AA70 = CurrentIrql;
      *(_QWORD *)(v22 + 416) = *((_QWORD *)v19 - 2);
      *(_QWORD *)(v22 + 424) = *((_QWORD *)v19 - 1);
      qword_14034AA48 = 0LL;
      v28 = dword_14034AA70;
      v29 = _InterlockedCompareExchange((volatile signed __int32 *)&PiResourceListLock, 1, 0);
      if ( v29 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&PiResourceListLock, v29);
      __writecr8(v28);
      KeAbPostRelease((ULONG_PTR)&PiResourceListLock);
    }
    else
    {
      PipSetDevNodeFlags(v22, 256LL);
    }
    PipSetDevNodeState(v22, 772);
    PipClearDevNodeUserFlags(v22, 4LL);
LABEL_15:
    v19 += 16;
    --v20;
  }
  while ( v20 );
  ExFreePoolWithTag(v13, 0x36706E50u);
LABEL_17:
  v3 = v32;
LABEL_3:
  ExFreePoolWithTag(v9, 0x35706E50u);
  return v3;
}
