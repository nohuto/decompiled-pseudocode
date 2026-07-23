/*
 * XREFs of MiAllocateChildVads @ 0x14050ABE0
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x14050A958 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     MiIncludeSharedCommit @ 0x140027730 (MiIncludeSharedCommit.c)
 *     MiVadPureReserve @ 0x14002B610 (MiVadPureReserve.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     MiVadMapsLargeImage @ 0x14002BF90 (MiVadMapsLargeImage.c)
 *     MiGetWsAndInsertVad @ 0x140030660 (MiGetWsAndInsertVad.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     MiUpControlAreaRefs @ 0x14010A768 (MiUpControlAreaRefs.c)
 *     MiCloneReserveVadCommit @ 0x14010A8B8 (MiCloneReserveVadCommit.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiInsertSharedCommitNode @ 0x14042D550 (MiInsertSharedCommitNode.c)
 *     MiInsertVadCharges @ 0x14042ED10 (MiInsertVadCharges.c)
 *     MiCreateWriteWatchView @ 0x1404A6424 (MiCreateWriteWatchView.c)
 *     MiCloneNoChange @ 0x14050AF6C (MiCloneNoChange.c)
 *     MiCreatePerSessionProtos @ 0x140661C44 (MiCreatePerSessionProtos.c)
 *     MiCreateLargePageVad @ 0x1406625E0 (MiCreateLargePageVad.c)
 *     MiDeletePartialCloneVad @ 0x140663220 (MiDeletePartialCloneVad.c)
 */

__int64 __fastcall MiAllocateChildVads(ULONG_PTR BugCheckParameter1, _QWORD *a2)
{
  _QWORD *v2; // r15
  _QWORD *v4; // rdi
  _QWORD *i; // rax
  _QWORD *v6; // rax
  __int64 v7; // rbp
  _QWORD *v8; // rcx
  unsigned int v9; // r8d
  SIZE_T v10; // rax
  ULONG v11; // r9d
  int v12; // r12d
  _OWORD *PoolWithTag; // rax
  __int64 v14; // rbx
  bool v15; // zf
  unsigned int v16; // r14d
  int LargePageVad; // esi
  int v18; // edx
  __int16 v19; // r8
  int v20; // eax
  _DWORD *v21; // r15
  __int64 *v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v25; // rcx
  unsigned int SessionId; // eax
  int PerSessionProtos; // eax
  struct _KTHREAD *CurrentThread; // r12
  _BYTE *v29; // rax
  _BYTE *v30; // r15
  __int64 v31; // rcx
  _BYTE v33[48]; // [rsp+28h] [rbp-70h] BYREF

  v2 = a2;
  v4 = 0LL;
  for ( i = (_QWORD *)KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[3]; i; i = (_QWORD *)*i )
    v4 = i;
  while ( 1 )
  {
    do
    {
      if ( !v4 )
        return 0LL;
      v6 = (_QWORD *)v4[1];
      v7 = (__int64)v4;
      v8 = v4;
      if ( v6 )
      {
        do
        {
          v4 = v6;
          v6 = (_QWORD *)*v6;
        }
        while ( v6 );
      }
      else
      {
        while ( 1 )
        {
          v4 = (_QWORD *)(v4[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v4 || (_QWORD *)*v4 == v8 )
            break;
          v8 = v4;
        }
      }
      v9 = *(_DWORD *)(v7 + 48);
    }
    while ( ((1 << (*(_BYTE *)(v7 + 48) & 7)) & 0xB5) == 0
         || ((v9 >> 15) & 1) == 0 && (*(_DWORD *)(v7 + 64) & 0x4000000) == 0 );
    v10 = 136LL;
    v11 = 1818517846;
    if ( ((v9 >> 15) & 1) != 0 )
      v10 = 64LL;
    v12 = 0;
    if ( (*(_DWORD *)(v7 + 48) & 7) == 2 && (v9 & 0x10000) != 0 )
    {
      v12 = 1;
      v11 = 1231315286;
      v25 = *(unsigned int *)(***(_QWORD ***)(v7 + 72) + 8LL);
      v10 = 8 * (((v25 & 0x3F) != 0) + (v25 >> 6)) + 160;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v10, v11);
    v14 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      break;
    v15 = (*(_DWORD *)(v7 + 48) & 0x8000) == 0;
    *PoolWithTag = *(_OWORD *)v7;
    PoolWithTag[1] = *(_OWORD *)(v7 + 16);
    PoolWithTag[2] = *(_OWORD *)(v7 + 32);
    PoolWithTag[3] = *(_OWORD *)(v7 + 48);
    if ( v15 )
    {
      PoolWithTag[4] = *(_OWORD *)(v7 + 64);
      PoolWithTag[5] = *(_OWORD *)(v7 + 80);
      PoolWithTag[6] = *(_OWORD *)(v7 + 96);
      PoolWithTag[7] = *(_OWORD *)(v7 + 112);
      *((_QWORD *)PoolWithTag + 16) = *(_QWORD *)(v7 + 128);
      *((_QWORD *)PoolWithTag + 14) = BugCheckParameter1 | 1;
    }
    else
    {
      *((_DWORD *)PoolWithTag + 12) &= ~0x4000u;
    }
    *((_QWORD *)PoolWithTag + 7) = 0LL;
    v16 = 0;
    *((_DWORD *)PoolWithTag + 9) = 0;
    LargePageVad = 0;
    *((_QWORD *)PoolWithTag + 5) = 0LL;
    *((_QWORD *)PoolWithTag + 2) = -2LL;
    if ( (*(_DWORD *)(v7 + 48) & 7) == 4 )
    {
      LargePageVad = MiCreateWriteWatchView(
                       BugCheckParameter1,
                       (__int64)PoolWithTag,
                       (*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32))
                     - (*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32))
                     + 1);
      if ( LargePageVad < 0 )
        goto LABEL_30;
      v16 = 1;
    }
    else if ( MiVadMapsLargeImage(v7) || v18 == 5 )
    {
      LargePageVad = MiCreateLargePageVad(BugCheckParameter1, v14);
      if ( LargePageVad < 0 )
        goto LABEL_30;
      ++*v2;
      v16 = 2;
    }
    else if ( v18 == 2 )
    {
      v21 = **(_DWORD ***)(v7 + 72);
      if ( v12 == 1 )
      {
        memmove(
          (void *)(v14 + 136),
          (const void *)(v7 + 136),
          8
        * (((*(_DWORD *)(*(_QWORD *)v21 + 8LL) & 0x3F) != 0)
         + ((unsigned __int64)*(unsigned int *)(*(_QWORD *)v21 + 8LL) >> 6))
        + 24);
        *(_QWORD *)(v14 + 152) = v14 + 160;
      }
      LargePageVad = MiInsertSharedCommitNode(**(_QWORD **)(v7 + 72), BugCheckParameter1, 0);
      if ( LargePageVad < 0 )
      {
LABEL_72:
        ExFreePoolWithTag((PVOID)v14, 0);
        return (unsigned int)LargePageVad;
      }
      if ( v12 == 1 )
      {
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v33);
        ++*(_QWORD *)(qword_140327FD0 + 276840640);
        KiUnstackDetachProcess((struct _KTHREAD *)v33, 0);
      }
      v16 = 16;
      if ( (v21[14] & 0x4000000) != 0 )
      {
        SessionId = MmGetSessionIdEx((struct _KPROCESS *)BugCheckParameter1);
        PerSessionProtos = MiCreatePerSessionProtos(v21, SessionId);
        LargePageVad = PerSessionProtos;
        if ( PerSessionProtos < 0 )
          goto LABEL_30;
        v16 = 20;
      }
    }
    else if ( (v19 & 0x8000) == 0 )
    {
      if ( *(__int64 *)(v7 + 120) < 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->SpecialApcDisable;
        v29 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_1403265A0, 0LL, 0);
        v30 = v29;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_1403265A0, 0LL) )
          ExfAcquirePushLockExclusiveEx(&qword_1403265A0, v29, (ULONG_PTR)&qword_1403265A0);
        if ( v30 )
          v30[26] |= 1u;
        v31 = *(_QWORD *)(***(_QWORD ***)(v14 + 72) + 32LL);
        ++*(_DWORD *)(v31 + 8);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403265A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403265A0);
        KeAbPostRelease((ULONG_PTR)&qword_1403265A0);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      }
      else if ( v18 != 1 )
      {
        v22 = *(__int64 **)(v7 + 72);
        if ( v22 )
        {
          if ( MiIncludeSharedCommit(*v22) )
          {
            LargePageVad = MiInsertSharedCommitNode(v23, BugCheckParameter1, 0);
            if ( LargePageVad < 0 )
              goto LABEL_72;
            v16 = 16;
          }
        }
      }
    }
    if ( (*(_DWORD *)(v7 + 48) & 0x8000) == 0 && *(_QWORD *)(v7 + 128) )
    {
      v16 |= 8u;
      ObfReferenceObject(*(PVOID *)(v14 + 128));
    }
    if ( (unsigned int)MiVadPureReserve(v14) )
    {
      *(_QWORD *)(v14 + 16) = 1LL;
      LargePageVad = MiCloneReserveVadCommit(v14, BugCheckParameter1);
      *(_QWORD *)(v14 + 16) = -2LL;
    }
    if ( LargePageVad >= 0 && (*(_DWORD *)(v7 + 48) & 0x4000) != 0 )
      LargePageVad = MiCloneNoChange(v7, v14);
LABEL_30:
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v33);
    if ( LargePageVad < 0
      || (LargePageVad = MiInsertVadCharges(v14, (struct _KPROCESS *)BugCheckParameter1), LargePageVad < 0) )
    {
      MiDeletePartialCloneVad(v14, v16);
      KiUnstackDetachProcess((struct _KTHREAD *)v33, 0);
      return (unsigned int)LargePageVad;
    }
    v20 = *(_DWORD *)(v14 + 48);
    if ( (v20 & 0x100000) != 0 )
    {
      if ( (v20 & 0x8000) != 0 )
        ++*(_QWORD *)(qword_140327FD0 + 276840648);
      else
        ++*(_QWORD *)(qword_140327FD0 + 276840656);
    }
    if ( (*(_DWORD *)(v14 + 48) & 0x8000) == 0 )
      MiUpControlAreaRefs(v14);
    *(_QWORD *)(v14 + 16) = -2LL;
    MiGetWsAndInsertVad(v14);
    KiUnstackDetachProcess((struct _KTHREAD *)v33, 0);
    v2 = a2;
  }
  return (unsigned int)-1073741670;
}
