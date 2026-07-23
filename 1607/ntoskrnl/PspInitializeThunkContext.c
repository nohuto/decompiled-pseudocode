/*
 * XREFs of PspInitializeThunkContext @ 0x140458654
 * Callers:
 *     PspUserThreadStartup @ 0x140457F30 (PspUserThreadStartup.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     PspGetBaseTrapFrame @ 0x1400F1130 (PspGetBaseTrapFrame.c)
 *     KiDispatchException @ 0x1400F1BB0 (KiDispatchException.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PspCallThreadNotifyRoutines @ 0x140427FE0 (PspCallThreadNotifyRoutines.c)
 *     PspSetContextThreadInternal @ 0x1404FA764 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1404FADF4 (PspGetContextThreadInternal.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

int PspInitializeThunkContext()
{
  struct _KTHREAD *CurrentThread; // rsi
  int v1; // r9d
  int ContextThreadInternal; // edi
  int v3; // r9d
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  void *InstrumentationCallback; // rcx
  unsigned __int64 v7; // rcx
  _OWORD *v8; // rax
  __int64 v9; // rcx
  int result; // eax
  __int64 v11; // rcx
  __int64 BaseTrapFrame; // rax
  __int64 v13; // r8
  EXCEPTION_RECORD ExceptionRecord; // [rsp+40h] [rbp-A58h] BYREF
  _QWORD v15[154]; // [rsp+E0h] [rbp-9B8h] BYREF
  _QWORD v16[154]; // [rsp+5B0h] [rbp-4E8h] BYREF

  CurrentThread = KeGetCurrentThread();
  memset(v15, 0, sizeof(v15));
  memset(v16, 0, sizeof(v16));
  LODWORD(v15[6]) = 1048603;
  --CurrentThread->SpecialApcDisable;
  PspCallThreadNotifyRoutines((__int64)CurrentThread, 1u, 1);
  LOBYTE(v1) = 1;
  ContextThreadInternal = PspGetContextThreadInternal((_DWORD)CurrentThread, (unsigned int)v15, 0, v1, 0);
  if ( ContextThreadInternal >= 0 )
  {
    v4 = (v15[19] - 1232LL) & 0xFFFFFFFFFFFFFFF0uLL;
    v16[19] = v4 - 40;
    v5 = *((_QWORD *)PspSystemDlls + 5);
    v16[6] = 0x1F800010000BLL;
    v16[31] = PspLoaderInitRoutine;
    v16[16] = v4;
    v16[17] = v5;
    *(_DWORD *)((char *)&v16[7] + 2) = 2818091;
    *(_DWORD *)((char *)&v16[7] + 6) = 2818131;
    WORD1(v16[8]) = 43;
    LOWORD(v16[7]) = 51;
    LOWORD(v16[32]) = 639;
    LODWORD(v16[35]) = 8064;
    InstrumentationCallback = CurrentThread->ApcState.Process->InstrumentationCallback;
    if ( InstrumentationCallback )
    {
      v16[25] = PspLoaderInitRoutine;
      v16[31] = InstrumentationCallback;
    }
    if ( (v4 & 0xF) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (v15[19] - 1232LL) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v4 >= 0x7FFFFFFF0000LL )
      v7 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v7 = *(_BYTE *)v7;
    *(_BYTE *)(v7 + 1231) = *(_BYTE *)(v7 + 1231);
    v8 = v15;
    v9 = 9LL;
    do
    {
      *(_OWORD *)v4 = *v8;
      *(_OWORD *)(v4 + 16) = v8[1];
      *(_OWORD *)(v4 + 32) = v8[2];
      *(_OWORD *)(v4 + 48) = v8[3];
      *(_OWORD *)(v4 + 64) = v8[4];
      *(_OWORD *)(v4 + 80) = v8[5];
      *(_OWORD *)(v4 + 96) = v8[6];
      v4 += 128LL;
      *(_OWORD *)(v4 - 16) = v8[7];
      v8 += 8;
      --v9;
    }
    while ( v9 );
    *(_OWORD *)v4 = *v8;
    *(_OWORD *)(v4 + 16) = v8[1];
    *(_OWORD *)(v4 + 32) = v8[2];
    *(_OWORD *)(v4 + 48) = v8[3];
    *(_OWORD *)(v4 + 64) = v8[4];
    LOBYTE(v3) = 1;
    ContextThreadInternal = PspSetContextThreadInternal((_DWORD)CurrentThread, (unsigned int)v16, 0, v3, 0);
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
    BaseTrapFrame = PspGetBaseTrapFrame(v11);
    return KiDispatchException(&ExceptionRecord, BaseTrapFrame - 320, v13, 1, 0);
  }
  return result;
}
