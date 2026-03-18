/*
 * XREFs of MiCreatePerSessionProtos @ 0x1406A3478
 * Callers:
 *     MiInsertInSystemSpace @ 0x1400F8C80 (MiInsertInSystemSpace.c)
 *     MiAllocateChildVads @ 0x140406234 (MiAllocateChildVads.c)
 *     MiMapViewOfImageSection @ 0x140421990 (MiMapViewOfImageSection.c)
 *     MiCreateSection @ 0x1404B3940 (MiCreateSection.c)
 *     MiValidateSectionCreate @ 0x14051B38C (MiValidateSectionCreate.c)
 *     MiMapSystemImage @ 0x140575D34 (MiMapSystemImage.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     MiLocateSessionProtosInSubsection @ 0x14021C63C (MiLocateSessionProtosInSubsection.c)
 *     MiUpdatePerSessionProto @ 0x14021CBD0 (MiUpdatePerSessionProto.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     MiAllocatePerSessionProtos @ 0x1406A30B8 (MiAllocatePerSessionProtos.c)
 */

__int64 __fastcall MiCreatePerSessionProtos(__int64 *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v8; // rdi
  unsigned __int64 *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rsi
  PVOID *SessionProtosInSubsection; // rax
  unsigned int v16; // r15d
  unsigned __int64 v17; // r8
  __int16 v18; // ax
  PVOID *v19; // rax
  PVOID *v20; // r15
  __int16 v22; // ax
  int v23; // [rsp+78h] [rbp+10h]
  PVOID *v24; // [rsp+80h] [rbp+18h] BYREF

  if ( a2 - 0x7FFFF <= 0xFFF7FFFF )
    return 3221225678LL;
  CurrentThread = KeGetCurrentThread();
  v8 = *a1;
  --CurrentThread->SpecialApcDisable;
  v9 = (unsigned __int64 *)(v8 + 40);
  v10 = KeAbPreAcquire((ULONG_PTR)v9, 0LL, 0LL, a4);
  v12 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
    ExfAcquirePushLockExclusiveEx(v9, v10, (ULONG_PTR)v9, v11);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  v13 = (__int64)(a1 + 15);
  v14 = (__int64)(a1 + 15);
  if ( a1 == (__int64 *)-120LL )
  {
LABEL_14:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v9);
    KeAbPostRelease((ULONG_PTR)v9);
    v18 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v18;
    if ( !v18
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
    return 0LL;
  }
  while ( (*(_BYTE *)(v14 + 34) & 2) == 0 )
  {
LABEL_13:
    v14 = *(_QWORD *)(v14 + 16);
    if ( !v14 )
      goto LABEL_14;
  }
  SessionProtosInSubsection = (PVOID *)MiLocateSessionProtosInSubsection(v14, a2);
  v24 = SessionProtosInSubsection;
  if ( SessionProtosInSubsection )
  {
    ++*((_DWORD *)SessionProtosInSubsection + 10);
    goto LABEL_13;
  }
  v23 = MiAllocatePerSessionProtos(v14, 0LL, 0, 0LL, &v24);
  v16 = v23;
  if ( v23 >= 0 )
  {
    v17 = (unsigned __int64)v24;
    *((_DWORD *)v24 + 6) = a2;
    MiUpdatePerSessionProto((__int64)a1, v14, v17, 1);
    goto LABEL_13;
  }
  if ( v13 != v14 )
  {
    do
    {
      if ( (*(_BYTE *)(v13 + 34) & 2) != 0 )
      {
        v19 = (PVOID *)MiLocateSessionProtosInSubsection(v13, a2);
        v20 = v19;
        v24 = v19;
        if ( (*((_DWORD *)v19 + 10))-- == 1 )
        {
          MiUpdatePerSessionProto((__int64)a1, v13, (unsigned __int64)v19, 0);
          MiReturnCommit((__int64)MiSystemPartition, *(unsigned int *)(v13 + 44));
          ExFreePoolWithTag(v20[4], 0);
          ExFreePoolWithTag(v20, 0);
        }
      }
      v13 = *(_QWORD *)(v13 + 16);
    }
    while ( v13 != v14 );
    v16 = v23;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v9);
  KeAbPostRelease((ULONG_PTR)v9);
  v22 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v22;
  if ( !v22 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v16;
}
