/*
 * XREFs of PspInitializeThunkContext @ 0x14044FD4C
 * Callers:
 *     PspUserThreadStartup @ 0x14044F770 (PspUserThreadStartup.c)
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x1400100E0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140010130 (ExReferenceCallBackBlock.c)
 *     ExGetCallBackBlockRoutine @ 0x1400101E0 (ExGetCallBackBlockRoutine.c)
 *     ExGetCallBackBlockContext @ 0x1400101E8 (ExGetCallBackBlockContext.c)
 *     KiDispatchException @ 0x14001FAE0 (KiDispatchException.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PspSetContextThreadInternal @ 0x14044FFEC (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140450184 (PspGetContextThreadInternal.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

void PspInitializeThunkContext()
{
  struct _KTHREAD *CurrentThread; // rdi
  int v1; // r9d
  int ContextThreadInternal; // esi
  int v3; // r9d
  ULONG64 v4; // rdx
  __int64 v5; // rcx
  void *InstrumentationCallback; // rcx
  _BYTE *v7; // rcx
  _OWORD *v8; // rax
  __int64 v9; // rcx
  __int16 v10; // ax
  signed __int64 *v11; // rsi
  __int64 v12; // r15
  struct _EX_RUNDOWN_REF *v13; // rax
  struct _EX_RUNDOWN_REF *v14; // r14
  __int64 v15; // rcx
  void (__fastcall *v16)(struct _LIST_ENTRY *, void *, __int64); // rax
  __int64 v17; // r8
  _QWORD *InitialStack; // rdx
  _QWORD *v19; // r8
  EXCEPTION_RECORD ExceptionRecord; // [rsp+40h] [rbp-A58h] BYREF
  _QWORD v21[154]; // [rsp+E0h] [rbp-9B8h] BYREF
  _QWORD v22[154]; // [rsp+5B0h] [rbp-4E8h] BYREF

  CurrentThread = KeGetCurrentThread();
  memset(v21, 0, sizeof(v21));
  memset(v22, 0, sizeof(v22));
  LODWORD(v21[6]) = 1048603;
  --CurrentThread->SpecialApcDisable;
  if ( (PspNotifyEnableMask & 0x10) != 0 )
  {
    v11 = (signed __int64 *)&PspCreateThreadNotifyRoutine;
    v12 = 64LL;
    do
    {
      v13 = ExReferenceCallBackBlock(v11);
      v14 = v13;
      if ( v13 )
      {
        if ( ExGetCallBackBlockContext((__int64)v13) )
        {
          v16 = (void (__fastcall *)(struct _LIST_ENTRY *, void *, __int64))ExGetCallBackBlockRoutine(v15);
          LOBYTE(v17) = 1;
          v16(CurrentThread->Process[1].Header.WaitListHead.Blink, CurrentThread[1].KernelStack, v17);
        }
        ExDereferenceCallBackBlock(v11, v14);
      }
      ++v11;
      --v12;
    }
    while ( v12 );
  }
  LOBYTE(v1) = 1;
  ContextThreadInternal = PspGetContextThreadInternal((_DWORD)CurrentThread, (unsigned int)v21, 0, v1, 0);
  if ( ContextThreadInternal >= 0 )
  {
    v4 = (v21[19] - 1232LL) & 0xFFFFFFFFFFFFFFF0uLL;
    v22[19] = v4 - 40;
    v5 = *((_QWORD *)PspSystemDlls + 5);
    v22[6] = 0x1F800010000BLL;
    v22[31] = PspLoaderInitRoutine;
    v22[16] = v4;
    v22[17] = v5;
    *(_DWORD *)((char *)&v22[7] + 2) = 2818091;
    *(_DWORD *)((char *)&v22[7] + 6) = 2818131;
    WORD1(v22[8]) = 43;
    LOWORD(v22[7]) = 51;
    LOWORD(v22[32]) = 639;
    LODWORD(v22[35]) = 8064;
    InstrumentationCallback = CurrentThread->ApcState.Process->InstrumentationCallback;
    if ( InstrumentationCallback )
    {
      v22[25] = PspLoaderInitRoutine;
      v22[31] = InstrumentationCallback;
    }
    if ( (v4 & 0xF) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (_BYTE *)((v21[19] - 1232LL) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v4 >= MmUserProbeAddress )
      v7 = (_BYTE *)MmUserProbeAddress;
    *v7 = *v7;
    v7[1231] = v7[1231];
    v8 = v21;
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
    ContextThreadInternal = PspSetContextThreadInternal((_DWORD)CurrentThread, (unsigned int)v22, 0, v3, 0);
  }
  v10 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v10;
  if ( !v10 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( ContextThreadInternal < 0 )
  {
    ExceptionRecord.ExceptionFlags = 0;
    ExceptionRecord.ExceptionAddress = (void *)PspLoaderInitRoutine;
    ExceptionRecord.ExceptionCode = ContextThreadInternal;
    ExceptionRecord.NumberParameters = 0;
    ExceptionRecord.ExceptionRecord = 0LL;
    InitialStack = CurrentThread->InitialStack;
    v19 = InitialStack;
    if ( (InitialStack[1] & 1) != 0 )
    {
      do
        v19 = (_QWORD *)v19[5];
      while ( (v19[1] & 1) != 0 );
      while ( (InitialStack[1] & 1) != 0 )
        InitialStack = (_QWORD *)InitialStack[5];
    }
    KiDispatchException(&ExceptionRecord, (__int64)(InitialStack - 90), (__int64)(v19 - 50), 1, 0);
  }
}
