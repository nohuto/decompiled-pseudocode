/*
 * XREFs of PspInitializeThunkContext @ 0x14044603C
 * Callers:
 *     PspUserThreadStartup @ 0x140445974 (PspUserThreadStartup.c)
 * Callees:
 *     KiDispatchException @ 0x140022BB4 (KiDispatchException.c)
 *     PspGetBaseTrapFrame @ 0x140028498 (PspGetBaseTrapFrame.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PspSetContextThreadInternal @ 0x1403EFC88 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1403EFE2C (PspGetContextThreadInternal.c)
 *     PspCallThreadNotifyRoutines @ 0x1403F6880 (PspCallThreadNotifyRoutines.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

int PspInitializeThunkContext()
{
  struct _KTHREAD *CurrentThread; // rsi
  NTSTATUS ContextThreadInternal; // edi
  ULONG64 v2; // rdx
  unsigned __int64 v3; // rcx
  unsigned __int64 InstrumentationCallback; // rcx
  _BYTE *v5; // rcx
  _OWORD *v6; // rax
  __int64 v7; // rcx
  int result; // eax
  __int64 v9; // rcx
  __int64 BaseTrapFrame; // rax
  __int64 v11; // r8
  EXCEPTION_RECORD ExceptionRecord; // [rsp+40h] [rbp-A58h] BYREF
  _QWORD v13[154]; // [rsp+E0h] [rbp-9B8h] BYREF
  CONTEXT v14; // [rsp+5B0h] [rbp-4E8h] BYREF

  CurrentThread = KeGetCurrentThread();
  memset(v13, 0, sizeof(v13));
  memset(&v14, 0, sizeof(v14));
  LODWORD(v13[6]) = 1048603;
  --CurrentThread->SpecialApcDisable;
  PspCallThreadNotifyRoutines((__int64)CurrentThread, 1u, 1);
  ContextThreadInternal = PspGetContextThreadInternal((__int64)CurrentThread, (__int64)v13, 0, 1, 0);
  if ( ContextThreadInternal >= 0 )
  {
    v2 = (v13[19] - 1232LL) & 0xFFFFFFFFFFFFFFF0uLL;
    v14.Rsp = v2 - 40;
    v3 = *((_QWORD *)PspSystemDlls + 5);
    v14.ContextFlags = 1048587;
    v14.Rip = PspLoaderInitRoutine;
    v14.Rcx = v2;
    v14.Rdx = v3;
    *(_DWORD *)&v14.SegDs = 2818091;
    *(_DWORD *)&v14.SegFs = 2818131;
    v14.SegSs = 43;
    v14.SegCs = 51;
    v14.MxCsr = 8064;
    v14.FltSave.ControlWord = 639;
    v14.FltSave.MxCsr = 8064;
    InstrumentationCallback = (unsigned __int64)CurrentThread->ApcState.Process->InstrumentationCallback;
    if ( InstrumentationCallback )
    {
      v14.R10 = PspLoaderInitRoutine;
      v14.Rip = InstrumentationCallback;
    }
    if ( (v2 & 0xF) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = (_BYTE *)((v13[19] - 1232LL) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v2 >= MmUserProbeAddress )
      v5 = (_BYTE *)MmUserProbeAddress;
    *v5 = *v5;
    v5[1231] = v5[1231];
    v6 = v13;
    v7 = 9LL;
    do
    {
      *(_OWORD *)v2 = *v6;
      *(_OWORD *)(v2 + 16) = v6[1];
      *(_OWORD *)(v2 + 32) = v6[2];
      *(_OWORD *)(v2 + 48) = v6[3];
      *(_OWORD *)(v2 + 64) = v6[4];
      *(_OWORD *)(v2 + 80) = v6[5];
      *(_OWORD *)(v2 + 96) = v6[6];
      v2 += 128LL;
      *(_OWORD *)(v2 - 16) = v6[7];
      v6 += 8;
      --v7;
    }
    while ( v7 );
    *(_OWORD *)v2 = *v6;
    *(_OWORD *)(v2 + 16) = v6[1];
    *(_OWORD *)(v2 + 32) = v6[2];
    *(_OWORD *)(v2 + 48) = v6[3];
    *(_OWORD *)(v2 + 64) = v6[4];
    ContextThreadInternal = PspSetContextThreadInternal((__int64)CurrentThread, &v14, 0, 1, 0);
  }
  result = KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( ContextThreadInternal < 0 )
  {
    ExceptionRecord.ExceptionFlags = 0;
    ExceptionRecord.ExceptionAddress = (void *)PspLoaderInitRoutine;
    ExceptionRecord.ExceptionCode = ContextThreadInternal;
    ExceptionRecord.NumberParameters = 0;
    ExceptionRecord.ExceptionRecord = 0LL;
    PspGetBaseTrapFrame((__int64)CurrentThread);
    BaseTrapFrame = PspGetBaseTrapFrame(v9);
    return KiDispatchException(&ExceptionRecord, BaseTrapFrame - 320, v11, 1, 0);
  }
  return result;
}
