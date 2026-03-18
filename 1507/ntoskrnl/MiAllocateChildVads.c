/*
 * XREFs of MiAllocateChildVads @ 0x140406234
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x140406774 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiUpControlAreaRefs @ 0x1400013E8 (MiUpControlAreaRefs.c)
 *     MiCloneReserveVadCommit @ 0x14000158C (MiCloneReserveVadCommit.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     MiGetWsAndInsertVad @ 0x14008A9F0 (MiGetWsAndInsertVad.c)
 *     MiIncludeSharedCommit @ 0x14008AF50 (MiIncludeSharedCommit.c)
 *     MiVadMapsLargeImage @ 0x14008D1A0 (MiVadMapsLargeImage.c)
 *     MiVadPureReserve @ 0x14008F840 (MiVadPureReserve.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiCloneNoChange @ 0x1404066D0 (MiCloneNoChange.c)
 *     MiInsertSharedCommitNode @ 0x1404B7640 (MiInsertSharedCommitNode.c)
 *     MiInsertVadCharges @ 0x1404B8410 (MiInsertVadCharges.c)
 *     MiCreateWriteWatchView @ 0x14051C444 (MiCreateWriteWatchView.c)
 *     MiCreatePerSessionProtos @ 0x1406A3478 (MiCreatePerSessionProtos.c)
 *     MiCopyLargeVad @ 0x1406A9BD0 (MiCopyLargeVad.c)
 *     MiCreateLargePageVad @ 0x1406A9CA4 (MiCreateLargePageVad.c)
 *     MiDeletePartialCloneVad @ 0x1406AA6A8 (MiDeletePartialCloneVad.c)
 */

__int64 __fastcall MiAllocateChildVads(ULONG_PTR BugCheckParameter1, _QWORD *a2)
{
  int LargePageVad; // esi
  _QWORD *v3; // r15
  _QWORD *v5; // r14
  _QWORD *i; // rax
  _QWORD *v7; // rax
  __int64 v8; // rdi
  _QWORD *v9; // rcx
  int v10; // edx
  int v11; // ecx
  SIZE_T v12; // r9
  ULONG v13; // r8d
  int v14; // r13d
  _OWORD *PoolWithTag; // rax
  __int64 v16; // rbx
  bool v17; // zf
  unsigned int v18; // ebp
  int v19; // edx
  __int64 v20; // r9
  _DWORD *v21; // r15
  unsigned __int64 v23; // rcx
  __int64 *v24; // rax
  __int64 v25; // rcx
  unsigned int SessionId; // eax
  struct _KTHREAD *CurrentThread; // r13
  __int64 v28; // rax
  __int64 v29; // r9
  __int64 v30; // r15
  __int64 v31; // rcx
  __int16 v32; // ax
  _BYTE v34[48]; // [rsp+28h] [rbp-70h] BYREF

  LargePageVad = 0;
  *a2 = 0LL;
  v3 = a2;
  v5 = 0LL;
  for ( i = (_QWORD *)KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0]; i; i = (_QWORD *)*i )
    v5 = i;
  if ( !v5 )
    return 0LL;
  while ( 1 )
  {
    v7 = (_QWORD *)v5[1];
    v8 = (__int64)v5;
    v9 = v5;
    if ( v7 )
    {
      do
      {
        v5 = v7;
        v7 = (_QWORD *)*v7;
      }
      while ( v7 );
    }
    else
    {
      while ( 1 )
      {
        v5 = (_QWORD *)(v5[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v5 || (_QWORD *)*v5 == v9 )
          break;
        v9 = v5;
      }
    }
    v10 = *(_DWORD *)(v8 + 48);
    if ( (v10 & 0x10000) != 0 && *(_QWORD *)(v8 + 80) )
      return (unsigned int)-1073741755;
    v11 = *(_DWORD *)(v8 + 48) & 7;
    if ( ((1 << v11) & 0x35) == 0 || (v10 & 0x8000) == 0 && (*(_DWORD *)(v8 + 64) & 0x4000000) == 0 )
      goto LABEL_41;
    v12 = 136LL;
    v13 = 1818517846;
    v14 = 0;
    if ( (v10 & 0x18000) == 0x8000 )
      v12 = 64LL;
    if ( v11 == 2 && (v10 & 0x20000) != 0 )
    {
      v14 = 1;
      v13 = 1231315286;
      v23 = *(unsigned int *)(***(_QWORD ***)(v8 + 72) + 8LL);
      v12 = 8 * (((v23 & 0x3F) != 0) + (v23 >> 6)) + 160;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v12, v13);
    v16 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      break;
    v17 = (*(_DWORD *)(v8 + 48) & 0x8000) == 0;
    *PoolWithTag = *(_OWORD *)v8;
    PoolWithTag[1] = *(_OWORD *)(v8 + 16);
    PoolWithTag[2] = *(_OWORD *)(v8 + 32);
    PoolWithTag[3] = *(_OWORD *)(v8 + 48);
    if ( v17 )
    {
      PoolWithTag[4] = *(_OWORD *)(v8 + 64);
      PoolWithTag[5] = *(_OWORD *)(v8 + 80);
      PoolWithTag[6] = *(_OWORD *)(v8 + 96);
      PoolWithTag[7] = *(_OWORD *)(v8 + 112);
      *((_QWORD *)PoolWithTag + 16) = *(_QWORD *)(v8 + 128);
      *((_QWORD *)PoolWithTag + 14) = BugCheckParameter1 | 1;
    }
    else
    {
      *((_DWORD *)PoolWithTag + 12) &= ~0x4000u;
      if ( (*(_BYTE *)(v8 + 50) & 1) != 0 )
      {
        *((_QWORD *)PoolWithTag + 10) = 0LL;
        *((_QWORD *)PoolWithTag + 9) = 0LL;
      }
    }
    *((_QWORD *)PoolWithTag + 7) = 0LL;
    v18 = 0;
    *((_DWORD *)PoolWithTag + 9) = 0;
    *((_QWORD *)PoolWithTag + 5) = 0LL;
    *((_QWORD *)PoolWithTag + 2) = -2LL;
    if ( (*(_DWORD *)(v8 + 48) & 7) == 4 )
    {
      LargePageVad = MiCreateWriteWatchView(
                       BugCheckParameter1,
                       PoolWithTag,
                       (*(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32))
                     - (*(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32))
                     + 1);
      if ( LargePageVad < 0 )
        goto LABEL_36;
      v18 = 1;
    }
    else if ( MiVadMapsLargeImage(v8) || v19 == 5 )
    {
      LargePageVad = MiCreateLargePageVad(
                       BugCheckParameter1,
                       v16,
                       ((unsigned int)v20 >> 8) & 0x3F,
                       (unsigned __int8)v20 >> 3);
      if ( LargePageVad < 0 )
        goto LABEL_36;
      v18 = 2;
      if ( (unsigned int)MiCopyLargeVad(v8, v16) == 1 )
        ++*v3;
      else
        LargePageVad = -1073741670;
    }
    else if ( v19 == 2 )
    {
      v21 = **(_DWORD ***)(v8 + 72);
      if ( v14 == 1 )
      {
        memmove(
          (void *)(v16 + 136),
          (const void *)(v8 + 136),
          8
        * (((*(_DWORD *)(*(_QWORD *)v21 + 8LL) & 0x3F) != 0)
         + ((unsigned __int64)*(unsigned int *)(*(_QWORD *)v21 + 8LL) >> 6))
        + 24);
        *(_QWORD *)(v16 + 152) = v16 + 160;
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v34);
        ++MEMORY[0xFFFFF58010804260];
        KiUnstackDetachProcess((struct _KTHREAD *)v34, 0);
      }
      LargePageVad = MiInsertSharedCommitNode(**(_QWORD **)(v8 + 72), BugCheckParameter1, 0LL);
      if ( LargePageVad < 0 )
      {
LABEL_75:
        ExFreePoolWithTag((PVOID)v16, 0);
        return (unsigned int)LargePageVad;
      }
      v18 = 16;
      if ( (v21[14] & 0x4000000) != 0 )
      {
        SessionId = MmGetSessionIdEx((struct _KPROCESS *)BugCheckParameter1);
        LargePageVad = MiCreatePerSessionProtos(v21, SessionId);
        if ( LargePageVad < 0 )
          goto LABEL_36;
        v18 = 20;
      }
    }
    else
    {
      if ( (v20 & 0x8000) != 0 )
        goto LABEL_28;
      if ( *(__int64 *)(v8 + 120) < 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->SpecialApcDisable;
        v28 = KeAbPreAcquire((ULONG_PTR)&qword_14034E7A0, 0LL, 0LL, v20);
        v30 = v28;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_14034E7A0, 0LL) )
          ExfAcquirePushLockExclusiveEx(&qword_14034E7A0, v28, (ULONG_PTR)&qword_14034E7A0, v29);
        if ( v30 )
          *(_BYTE *)(v30 + 26) |= 1u;
        v31 = *(_QWORD *)(***(_QWORD ***)(v16 + 72) + 32LL);
        ++*(_DWORD *)(v31 + 8);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14034E7A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_14034E7A0);
        KeAbPostRelease((ULONG_PTR)&qword_14034E7A0);
        v32 = CurrentThread->SpecialApcDisable + 1;
        CurrentThread->SpecialApcDisable = v32;
        if ( !v32
          && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
LABEL_28:
        if ( (*(_DWORD *)(v8 + 48) & 0x8000) == 0 && *(_QWORD *)(v8 + 128) )
        {
          v18 |= 8u;
          ObfReferenceObject(*(PVOID *)(v16 + 128));
        }
        if ( (unsigned int)MiVadPureReserve(v16) )
        {
          *(_QWORD *)(v16 + 16) = 1LL;
          LargePageVad = MiCloneReserveVadCommit(v16, BugCheckParameter1);
          *(_QWORD *)(v16 + 16) = -2LL;
        }
        if ( LargePageVad >= 0 && (*(_DWORD *)(v8 + 48) & 0x4000) != 0 )
          LargePageVad = MiCloneNoChange(v8, v16);
        goto LABEL_36;
      }
      if ( v19 == 1 )
        goto LABEL_28;
      v24 = *(__int64 **)(v8 + 72);
      if ( !v24 || !MiIncludeSharedCommit(*v24) )
        goto LABEL_28;
      LargePageVad = MiInsertSharedCommitNode(v25, BugCheckParameter1, 0LL);
      if ( LargePageVad < 0 )
        goto LABEL_75;
      v18 = 16;
    }
    if ( LargePageVad >= 0 )
      goto LABEL_28;
LABEL_36:
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v34);
    if ( LargePageVad < 0 || (LargePageVad = MiInsertVadCharges(v16, BugCheckParameter1), LargePageVad < 0) )
    {
      MiDeletePartialCloneVad(v16, v18);
      KiUnstackDetachProcess((struct _KTHREAD *)v34, 0);
      return (unsigned int)LargePageVad;
    }
    if ( (*(_DWORD *)(v16 + 48) & 0x8000) == 0 )
      MiUpControlAreaRefs(v16);
    *(_QWORD *)(v16 + 16) = -2LL;
    MiGetWsAndInsertVad(v16);
    KiUnstackDetachProcess((struct _KTHREAD *)v34, 0);
    v3 = a2;
    LargePageVad = 0;
LABEL_41:
    if ( !v5 )
      return 0LL;
  }
  return (unsigned int)-1073741670;
}
