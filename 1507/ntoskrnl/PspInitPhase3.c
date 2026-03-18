/*
 * XREFs of PspInitPhase3 @ 0x1407E8FD8
 * Callers:
 *     Phase1InitializationIoReady @ 0x1407D05E0 (Phase1InitializationIoReady.c)
 *     PsInitSystem @ 0x1407D07C8 (PsInitSystem.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14004E3E0 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x14004E430 (ObFastReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObFastReferenceObjectLocked @ 0x140085588 (ObFastReferenceObjectLocked.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     strcpy_s @ 0x140177924 (strcpy_s.c)
 *     HvlRegisterSecureSystemProcess @ 0x1401EDE94 (HvlRegisterSecureSystemProcess.c)
 *     PspMapSystemDll @ 0x140466740 (PspMapSystemDll.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     MmGetSectionStrongImageReference @ 0x1406AA510 (MmGetSectionStrongImageReference.c)
 *     PspCreateMinimalProcess @ 0x1406C58D4 (PspCreateMinimalProcess.c)
 */

bool PspInitPhase3()
{
  char v0; // bl
  NTSTATUS v2; // eax
  _QWORD *v3; // r14
  void *v4; // rbx
  __int64 v5; // r9
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v7; // rbx
  __int64 v8; // r9
  __int16 v9; // ax
  NTSTATUS SectionStrongImageReference; // edi
  int v11; // ebx
  HANDLE Handle[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v15[48]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v16[16]; // [rsp+80h] [rbp-80h] BYREF
  int v17; // [rsp+90h] [rbp-70h]
  unsigned __int8 v18[8]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v19; // [rsp+F8h] [rbp-8h]

  v0 = 0;
  if ( HvlpVsmVtlCallVa && HvlpEnterIumSecureMode(1u, 231, 0, v16) >= 0 )
  {
    v0 = 4;
    if ( (v17 & 1) != 0 )
      v0 = 6;
    if ( (v17 & 2) != 0 )
      v0 |= 0x20u;
    if ( (v17 & 4) == 0 )
      v0 |= 0x10u;
  }
  if ( (v0 & 4) == 0 )
    return 1;
  Handle[0] = 0LL;
  if ( (int)PspCreateMinimalProcess(
              PsInitialSystemProcess,
              BYTE2(PsInitialSystemProcess[2].ReadyListHead.Blink),
              0LL,
              0,
              0,
              Handle) < 0 )
    return 0;
  v2 = ObReferenceObjectByHandle(Handle[0], 0, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
  PsSecureSystemProcess = (ULONG_PTR)Object;
  if ( v2 < 0 )
    return 0;
  strcpy_s((char *)Object + 1096, 0xFuLL, "Secure System");
  if ( HvlRegisterSecureSystemProcess() < 0 )
    return 0;
  v3 = PspSystemDlls;
  v4 = (void *)ObFastReferenceObject((signed __int64 *)PspSystemDlls);
  if ( !v4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v7 = KeAbPreAcquire((ULONG_PTR)(v3 + 1), 0LL, 0LL, v5);
    if ( _InterlockedCompareExchange64(v3 + 1, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v3 + 1, v7, (ULONG_PTR)(v3 + 1), v8);
    if ( v7 )
      *(_BYTE *)(v7 + 26) |= 1u;
    v4 = (void *)ObFastReferenceObjectLocked(v3);
    if ( _InterlockedCompareExchange64(v3 + 1, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v3 + 1);
    KeAbPostRelease((ULONG_PTR)(v3 + 1));
    v9 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v9;
    if ( !v9
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  SectionStrongImageReference = MmGetSectionStrongImageReference(0LL, v4, &v13);
  if ( v4 )
    ObFastDereferenceObject((signed __int64 *)PspSystemDlls, (unsigned __int64)v4);
  if ( SectionStrongImageReference < 0 )
    return 0;
  KiStackAttachProcess((_KPROCESS *)PsSecureSystemProcess, 0, (__int64)v15);
  v11 = PspMapSystemDll((struct _KPROCESS *)PsSecureSystemProcess, PspSystemDlls, 0, 0);
  if ( v11 >= 0 )
  {
    v19 = v13;
    v11 = HvlpEnterIumSecureMode(1u, 3, 0, v18);
  }
  KiUnstackDetachProcess((struct _KTHREAD *)v15, 0);
  return v11 >= 0;
}
