/*
 * XREFs of MiAllocateChildVads @ 0x140461278
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x14046100C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiVadPureReserve @ 0x140061050 (MiVadPureReserve.c)
 *     MiGetWsAndInsertVad @ 0x140062070 (MiGetWsAndInsertVad.c)
 *     MiVadMapsLargeImage @ 0x1400627D0 (MiVadMapsLargeImage.c)
 *     MiIncludeSharedCommit @ 0x14006DBC0 (MiIncludeSharedCommit.c)
 *     MiUpControlAreaRefs @ 0x14009A908 (MiUpControlAreaRefs.c)
 *     MiCloneReserveVadCommit @ 0x14009AA54 (MiCloneReserveVadCommit.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiInsertVadCharges @ 0x140415EF0 (MiInsertVadCharges.c)
 *     MiInsertSharedCommitNode @ 0x14041B4F0 (MiInsertSharedCommitNode.c)
 *     MiCloneNoChange @ 0x1404615D8 (MiCloneNoChange.c)
 *     MiCreateWriteWatchView @ 0x140482F1C (MiCreateWriteWatchView.c)
 *     MiCopyLargeVad @ 0x14062B30C (MiCopyLargeVad.c)
 *     MiCreateLargePageVad @ 0x14062B3E0 (MiCreateLargePageVad.c)
 *     MiCreatePerSessionProtos @ 0x14062BE88 (MiCreatePerSessionProtos.c)
 *     MiDeletePartialCloneVad @ 0x14062CC30 (MiDeletePartialCloneVad.c)
 */

__int64 __fastcall MiAllocateChildVads(ULONG_PTR BugCheckParameter1, _QWORD *a2)
{
  _QWORD *v2; // r15
  _QWORD *v4; // rdi
  _QWORD *i; // rax
  _DWORD *v6; // r15
  int LargePageVad; // ebp
  unsigned int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // rsi
  _QWORD *v13; // rcx
  unsigned int v14; // r8d
  SIZE_T v15; // rax
  ULONG v16; // r9d
  int v17; // r12d
  _OWORD *PoolWithTag; // rax
  unsigned __int64 v19; // rbx
  bool v20; // zf
  int v21; // edx
  unsigned int v22; // r9d
  __int64 *v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v26; // rcx
  unsigned int SessionId; // eax
  struct _KTHREAD *CurrentThread; // r12
  __int64 v29; // rax
  __int64 v30; // r15
  __int64 v31; // rcx
  $D4FCF91253F76F57393CBFE908971F67 v33; // [rsp+28h] [rbp-70h] BYREF

  *a2 = 0LL;
  v2 = a2;
  v4 = 0LL;
  for ( i = (_QWORD *)KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[1]; i; i = (_QWORD *)*i )
    v4 = i;
  while ( 1 )
  {
    do
    {
      if ( !v4 )
        return 0LL;
      v11 = (_QWORD *)v4[1];
      v12 = (__int64)v4;
      v13 = v4;
      if ( v11 )
      {
        do
        {
          v4 = v11;
          v11 = (_QWORD *)*v11;
        }
        while ( v11 );
      }
      else
      {
        while ( 1 )
        {
          v4 = (_QWORD *)(v4[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v4 || (_QWORD *)*v4 == v13 )
            break;
          v13 = v4;
        }
      }
      v14 = *(_DWORD *)(v12 + 48);
    }
    while ( ((1 << (*(_BYTE *)(v12 + 48) & 7)) & 0x35) == 0
         || ((v14 >> 15) & 1) == 0 && (*(_DWORD *)(v12 + 64) & 0x4000000) == 0 );
    v15 = 136LL;
    v16 = 1818517846;
    if ( ((v14 >> 15) & 1) != 0 )
      v15 = 64LL;
    v17 = 0;
    if ( (*(_DWORD *)(v12 + 48) & 7) == 2 && (v14 & 0x10000) != 0 )
    {
      v17 = 1;
      v16 = 1231315286;
      v26 = *(unsigned int *)(***(_QWORD ***)(v12 + 72) + 8LL);
      v15 = 8 * (((v26 & 0x3F) != 0) + (v26 >> 6)) + 160;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v15, v16);
    v19 = (unsigned __int64)PoolWithTag;
    if ( !PoolWithTag )
      break;
    v20 = (*(_DWORD *)(v12 + 48) & 0x8000) == 0;
    *PoolWithTag = *(_OWORD *)v12;
    PoolWithTag[1] = *(_OWORD *)(v12 + 16);
    PoolWithTag[2] = *(_OWORD *)(v12 + 32);
    PoolWithTag[3] = *(_OWORD *)(v12 + 48);
    if ( v20 )
    {
      PoolWithTag[4] = *(_OWORD *)(v12 + 64);
      PoolWithTag[5] = *(_OWORD *)(v12 + 80);
      PoolWithTag[6] = *(_OWORD *)(v12 + 96);
      PoolWithTag[7] = *(_OWORD *)(v12 + 112);
      *((_QWORD *)PoolWithTag + 16) = *(_QWORD *)(v12 + 128);
      *((_QWORD *)PoolWithTag + 14) = BugCheckParameter1 | 1;
    }
    else
    {
      *((_DWORD *)PoolWithTag + 12) &= ~0x4000u;
    }
    *((_QWORD *)PoolWithTag + 7) = 0LL;
    v8 = 0;
    *((_DWORD *)PoolWithTag + 9) = 0;
    LargePageVad = 0;
    *((_QWORD *)PoolWithTag + 5) = 0LL;
    *((_QWORD *)PoolWithTag + 2) = -2LL;
    if ( (*(_DWORD *)(v12 + 48) & 7) == 4 )
    {
      LargePageVad = MiCreateWriteWatchView(
                       BugCheckParameter1,
                       PoolWithTag,
                       (*(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32))
                     - (*(unsigned int *)(v12 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 32) << 32))
                     + 1);
      if ( LargePageVad < 0 )
        goto LABEL_18;
      v8 = 1;
LABEL_9:
      if ( LargePageVad < 0 )
        goto LABEL_18;
      goto LABEL_10;
    }
    if ( MiVadMapsLargeImage(v12) || v21 == 5 )
    {
      LargePageVad = MiCreateLargePageVad(BugCheckParameter1, v19, (v22 >> 8) & 0x3F, (unsigned __int8)v22 >> 3);
      if ( LargePageVad < 0 )
        goto LABEL_18;
      v8 = 2;
      if ( (unsigned int)MiCopyLargeVad(v12, v19) == 1 )
        ++*v2;
      else
        LargePageVad = -1073741670;
      goto LABEL_9;
    }
    if ( v21 == 2 )
    {
      v6 = **(_DWORD ***)(v12 + 72);
      if ( v17 == 1 )
      {
        memmove(
          (void *)(v19 + 136),
          (const void *)(v12 + 136),
          8
        * (((*(_DWORD *)(*(_QWORD *)v6 + 8LL) & 0x3F) != 0)
         + ((unsigned __int64)*(unsigned int *)(*(_QWORD *)v6 + 8LL) >> 6))
        + 24);
        *(_QWORD *)(v19 + 152) = v19 + 160;
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)&v33);
        ++MEMORY[0xFFFFF580108042B8];
        KiUnstackDetachProcess(&v33, 0LL);
      }
      LargePageVad = MiInsertSharedCommitNode(**(_QWORD **)(v12 + 72), BugCheckParameter1, 0);
      if ( LargePageVad < 0 )
      {
LABEL_68:
        ExFreePoolWithTag((PVOID)v19, 0);
        return (unsigned int)LargePageVad;
      }
      v8 = 16;
      if ( (v6[14] & 0x4000000) != 0 )
      {
        SessionId = MmGetSessionIdEx((struct _KPROCESS *)BugCheckParameter1);
        LargePageVad = MiCreatePerSessionProtos(v6, SessionId);
        if ( LargePageVad < 0 )
          goto LABEL_18;
        v8 = 20;
      }
      goto LABEL_9;
    }
    if ( (v22 & 0x8000) == 0 )
    {
      if ( *(__int64 *)(v12 + 120) < 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->SpecialApcDisable;
        v29 = KeAbPreAcquire((ULONG_PTR)&qword_1402FE2A0, 0LL, 0LL);
        v30 = v29;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_1402FE2A0, 0LL) )
          ExfAcquirePushLockExclusiveEx(&qword_1402FE2A0, v29, (ULONG_PTR)&qword_1402FE2A0);
        if ( v30 )
          *(_BYTE *)(v30 + 26) |= 1u;
        v31 = *(_QWORD *)(***(_QWORD ***)(v19 + 72) + 32LL);
        ++*(_DWORD *)(v31 + 8);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1402FE2A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_1402FE2A0);
        KeAbPostRelease((ULONG_PTR)&qword_1402FE2A0);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      }
      else if ( v21 != 1 )
      {
        v23 = *(__int64 **)(v12 + 72);
        if ( v23 )
        {
          if ( MiIncludeSharedCommit(*v23) )
          {
            LargePageVad = MiInsertSharedCommitNode(v24, BugCheckParameter1, 0);
            if ( LargePageVad < 0 )
              goto LABEL_68;
            v8 = 16;
            goto LABEL_9;
          }
        }
      }
    }
LABEL_10:
    if ( (*(_DWORD *)(v12 + 48) & 0x8000) == 0 && *(_QWORD *)(v12 + 128) )
    {
      v8 |= 8u;
      ObfReferenceObject(*(PVOID *)(v19 + 128));
    }
    if ( (unsigned int)MiVadPureReserve(v19) )
    {
      *(_QWORD *)(v19 + 16) = 1LL;
      LargePageVad = MiCloneReserveVadCommit(v19, BugCheckParameter1);
      *(_QWORD *)(v19 + 16) = -2LL;
    }
    if ( LargePageVad >= 0 && (*(_DWORD *)(v12 + 48) & 0x4000) != 0 )
      LargePageVad = MiCloneNoChange(v12, v19);
LABEL_18:
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)&v33);
    if ( LargePageVad < 0
      || (LargePageVad = MiInsertVadCharges(v19, (struct _KPROCESS *)BugCheckParameter1), LargePageVad < 0) )
    {
      MiDeletePartialCloneVad(v19, v8);
      KiUnstackDetachProcess(&v33, 0LL);
      return (unsigned int)LargePageVad;
    }
    if ( (*(_DWORD *)(v19 + 48) & 0x8000) == 0 )
      MiUpControlAreaRefs(v19);
    *(_QWORD *)(v19 + 16) = -2LL;
    MiGetWsAndInsertVad(v19, v9, v10);
    KiUnstackDetachProcess(&v33, 0LL);
    v2 = a2;
  }
  return (unsigned int)-1073741670;
}
