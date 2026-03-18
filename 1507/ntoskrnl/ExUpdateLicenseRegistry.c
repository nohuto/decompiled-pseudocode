/*
 * XREFs of ExUpdateLicenseRegistry @ 0x1404F3AA8
 * Callers:
 *     sub_1404F4090 @ 0x1404F4090 (sub_1404F4090.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     NtSetValueKey @ 0x140428350 (NtSetValueKey.c)
 */

__int64 __fastcall ExUpdateLicenseRegistry(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  HANDLE v5; // rsi
  unsigned int v6; // edi
  __int64 v7; // rbx
  __int64 v8; // r9
  struct _KTHREAD *v9; // rcx
  __int16 v10; // ax

  CurrentThread = KeGetCurrentThread();
  v5 = ExpProductTypeKey;
  v6 = 0;
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((ULONG_PTR)&qword_14077EA20, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14077EA20, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_14077EA20, v7, (ULONG_PTR)&qword_14077EA20, v8);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  if ( Data )
    v6 = NtSetValueKey(v5, (PUNICODE_STRING)&stru_140721EA0, 0, 3u, Data, *(_DWORD *)Data);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14077EA20, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_14077EA20);
  KeAbPostRelease((ULONG_PTR)&qword_14077EA20);
  v9 = KeGetCurrentThread();
  v10 = v9->KernelApcDisable + 1;
  v9->KernelApcDisable = v10;
  if ( !v10
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v9->ApcState.ApcListHead[0].Flink != &v9->152
    && !v9->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v6;
}
