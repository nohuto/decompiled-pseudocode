/*
 * XREFs of SmpSystemStoreCreate @ 0x1405C5828
 * Callers:
 *     MiCreatePagingFile @ 0x1405B4240 (MiCreatePagingFile.c)
 *     SmProcessConfigRequest @ 0x1405C5728 (SmProcessConfigRequest.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MmGetNumberOfPhysicalPages @ 0x1400757B0 (MmGetNumberOfPhysicalPages.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     SmpDirtyStoreCreate @ 0x1404F9E70 (SmpDirtyStoreCreate.c)
 */

__int64 __fastcall SmpSystemStoreCreate(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  __int64 v6; // r9
  signed __int8 v7; // cf
  __int64 v8; // rdi
  unsigned __int64 NumberOfPhysicalPages; // rax
  int v10; // edi
  struct _KTHREAD *v11; // rcx
  __int16 v12; // ax
  int v14; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&qword_140352D60, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140352D60, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&qword_140352D60, v5, (ULONG_PTR)&qword_140352D60, v6);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  if ( dword_140352D58 == -1 )
  {
    NumberOfPhysicalPages = MmGetNumberOfPhysicalPages(0);
    v10 = SmpDirtyStoreCreate((__int64)SmGlobals, (unsigned int)(NumberOfPhysicalPages >> 8) >> 1, 0, &v14);
    if ( v10 >= 0 )
      dword_140352D58 = v14;
  }
  else
  {
    v10 = -1073740008;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140352D60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140352D60);
  KeAbPostRelease((ULONG_PTR)&qword_140352D60);
  v11 = KeGetCurrentThread();
  v12 = v11->KernelApcDisable + 1;
  v11->KernelApcDisable = v12;
  if ( !v12
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152
    && !v11->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v10;
}
