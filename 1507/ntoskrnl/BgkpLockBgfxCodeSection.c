/*
 * XREFs of BgkpLockBgfxCodeSection @ 0x14075C67C
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14014FED8 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkResumePrepare @ 0x1403F1608 (BgkResumePrepare.c)
 *     BgkInitialize @ 0x1407FD810 (BgkInitialize.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     MmLockPagableDataSection @ 0x14052F798 (MmLockPagableDataSection.c)
 */

void __fastcall BgkpLockBgfxCodeSection(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  __int64 v6; // r9
  signed __int8 v7; // cf
  __int64 v8; // rdi
  int v9; // eax
  struct _KTHREAD *v10; // rcx
  __int16 v11; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&qword_1403566F0, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1403566F0, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&qword_1403566F0, v5, (ULONG_PTR)&qword_1403566F0, v6);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v9 = dword_140353AF4;
  if ( !dword_140353AF4 )
  {
    ImageSectionHandle = MmLockPagableDataSection(BgkpLockBgfxCodeSection);
    v9 = dword_140353AF4;
  }
  dword_140353AF4 = v9 + 1;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403566F0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403566F0);
  KeAbPostRelease((ULONG_PTR)&qword_1403566F0);
  v10 = KeGetCurrentThread();
  v11 = v10->KernelApcDisable + 1;
  v10->KernelApcDisable = v11;
  if ( !v11
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v10->ApcState.ApcListHead[0].Flink != &v10->152
    && !v10->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
