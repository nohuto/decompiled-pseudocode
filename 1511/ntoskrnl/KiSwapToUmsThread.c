/*
 * XREFs of KiSwapToUmsThread @ 0x14061B5DC
 * Callers:
 *     KiUmsTrapEntry @ 0x1401663C0 (KiUmsTrapEntry.c)
 *     KiUmsCallEntry @ 0x1401665C0 (KiUmsCallEntry.c)
 *     KiUmsExceptionEntry @ 0x140166780 (KiUmsExceptionEntry.c)
 * Callees:
 *     RtlXSave @ 0x140022854 (RtlXSave.c)
 *     KiDispatchException @ 0x140022BB4 (KiDispatchException.c)
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     ObReferenceObjectSafe @ 0x1400C8410 (ObReferenceObjectSafe.c)
 *     PsGetThreadId @ 0x1400E3450 (PsGetThreadId.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x140150BA0 (ZwTerminateProcess.c)
 *     ZwTerminateThread @ 0x140151080 (ZwTerminateThread.c)
 *     KeResetLegacyFloatingPointState @ 0x140154410 (KeResetLegacyFloatingPointState.c)
 *     KeSaveLegacyFloatingPointControlWord @ 0x140154420 (KeSaveLegacyFloatingPointControlWord.c)
 *     __chkstk @ 0x14015C1E0 (__chkstk.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     KiBlockAndActivateUmsThread @ 0x1401CC49C (KiBlockAndActivateUmsThread.c)
 *     KeSetCurrentUmsTeb @ 0x1401CCDE0 (KeSetCurrentUmsTeb.c)
 *     KeBuildPrimaryThreadContext @ 0x14061BB3C (KeBuildPrimaryThreadContext.c)
 *     KeFixUserSwitchContext @ 0x14061C6EC (KeFixUserSwitchContext.c)
 *     PspFindThreadForTeb @ 0x14064116C (PspFindThreadForTeb.c)
 */

NTSTATUS __fastcall KiSwapToUmsThread(signed __int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v3; // rsi
  __int64 ThreadForTeb; // rax
  __int64 v5; // r8
  __int64 v6; // rdi
  signed __int64 v7; // rax
  int v8; // r12d
  __int64 v9; // r15
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  void *v12; // rsp
  unsigned __int64 v13; // rsi
  bool v14; // zf
  __int64 v15; // r8
  unsigned __int64 NpxState; // r13
  char *Object; // r15
  struct _KEVENT *v18; // rsi
  __int64 v19; // rcx
  struct _LIST_ENTRY *Blink; // rcx
  unsigned int CurrentRunTime; // eax
  int v22; // eax
  char v23; // al
  int v24; // ecx
  HANDLE ThreadId; // rax
  __int64 v27; // r8
  __int64 v28; // rdx
  unsigned __int64 v29; // [rsp+30h] [rbp+0h]
  EXCEPTION_RECORD ExitStatus; // [rsp+40h] [rbp+10h] BYREF
  _DWORD v31[4]; // [rsp+E0h] [rbp+B0h] BYREF
  _DWORD v32[4]; // [rsp+F0h] [rbp+C0h] BYREF
  _DWORD *v33; // [rsp+100h] [rbp+D0h] BYREF
  int v34; // [rsp+108h] [rbp+D8h]
  int v35; // [rsp+10Ch] [rbp+DCh]
  _DWORD *v36; // [rsp+110h] [rbp+E0h] BYREF
  int v37; // [rsp+118h] [rbp+E8h]
  int v38; // [rsp+11Ch] [rbp+ECh]

  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a1 + 96) = CurrentThread;
  v29 = *((_QWORD *)CurrentThread->WaitBlock[3].Object + 16);
  v3 = v29;
  ThreadForTeb = PspFindThreadForTeb(v29);
  v6 = ThreadForTeb;
  if ( ThreadForTeb )
  {
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(ThreadForTeb + 504), a1, 0LL);
    if ( v7 == -1 )
    {
      v8 = 1;
      v9 = 0LL;
      v10 = (*(_BYTE *)(a1 + 72) & 1) == 0;
      ObfDereferenceObject((PVOID)v6);
    }
    else
    {
      if ( v7 )
      {
        ObfDereferenceObject((PVOID)v6);
        goto LABEL_30;
      }
      v11 = (unsigned int)(MEMORY[0xFFFFF780000003E8] + 63) + 15LL;
      if ( v11 <= (unsigned int)(MEMORY[0xFFFFF780000003E8] + 63) )
        v11 = 0xFFFFFFFFFFFFFF0LL;
      v12 = alloca(v11 & 0xFFFFFFFFFFFFFFF0uLL);
      v13 = ((unsigned __int64)&ExitStatus.ExceptionInformation[1] + 7) & 0xFFFFFFFFFFFFFFC0uLL;
      v14 = (*(_BYTE *)(a1 + 72) & 1) == 0;
      *(_QWORD *)(a1 + 64) = ((unsigned __int64)&ExitStatus.ExceptionInformation[1] + 7) & 0xFFFFFFFFFFFFFFC0uLL;
      if ( v14 )
      {
        KeSaveLegacyFloatingPointControlWord();
      }
      else if ( MEMORY[0xFFFFF780000003D8] )
      {
        memset((void *)(v13 + 512), 0, 0x40uLL);
        RtlXSave(
          (_DWORD *)(((unsigned __int64)&ExitStatus.ExceptionInformation[1] + 7) & 0xFFFFFFFFFFFFFFC0uLL),
          MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFFFFFDuLL,
          v15);
      }
      else
      {
        _fxsave((void *)v13);
      }
      NpxState = CurrentThread->NpxState;
      CurrentThread->NpxState = NpxState & 0xFFFFFFFFFFFFFFFEuLL;
      if ( (*(_BYTE *)(a1 + 72) & 1) != 0 )
        KeFixUserSwitchContext(v6, **(_QWORD **)(v6 + 496), a1, 0LL);
      Object = (char *)CurrentThread->WaitBlock[3].Object;
      v18 = *(struct _KEVENT **)(v6 + 496);
      v19 = *((_QWORD *)Object + 2);
      if ( v18->Header.WaitListHead.Blink != (struct _LIST_ENTRY *)v19 )
      {
        ObReferenceObjectSafe(v19);
        Blink = v18->Header.WaitListHead.Blink;
        if ( Blink )
          ObfDereferenceObject(Blink);
        v18->Header.WaitListHead.Blink = (struct _LIST_ENTRY *)*((_QWORD *)Object + 2);
        v18->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)*((_QWORD *)Object + 1);
      }
      v18[1].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)(Object + 32);
      v18[1].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)(Object + 96);
      v18[1].Header.LockNV = *((_DWORD *)Object + 6);
      if ( SBYTE8(PerfGlobalGroupMask) < 0 )
      {
        CurrentRunTime = CurrentThread[1].CurrentRunTime;
        v38 = 0;
        v32[0] = CurrentRunTime;
        v32[2] = CurrentThread[1].KernelStack;
        v32[1] = *(_DWORD *)(v6 + 1584);
        v22 = *(_BYTE *)(a1 + 72) & 1;
        v37 = 16;
        v32[3] = v22;
        v36 = v32;
        EtwTraceKernelEvent((int)&v36, 1, 0x40000080u, 0x1920u, 4200450);
      }
      v23 = KiBlockAndActivateUmsThread((__int64)CurrentThread, (struct _KQUEUE *)(Object + 32), v5, v18);
      CurrentThread->MiscFlags &= ~0x100u;
      ++*((_DWORD *)Object + 6);
      if ( SBYTE8(PerfGlobalGroupMask) < 0 )
      {
        v31[0] = CurrentThread[1].CurrentRunTime;
        v31[2] = CurrentThread[1].KernelStack;
        v24 = *(_DWORD *)(v6 + 1584);
        v35 = 0;
        v31[3] = v23 != 0;
        v31[1] = v24;
        v33 = v31;
        v34 = 16;
        EtwTraceKernelEvent((int)&v33, 1, 0x40000080u, 0x1921u, 4200450);
      }
      v10 = *((_QWORD *)Object + 14);
      if ( v10 )
      {
        *((_QWORD *)Object + 14) = 0LL;
        v8 = 2;
        v9 = *((_QWORD *)Object + 15);
      }
      else
      {
        v8 = 1;
        v9 = 0LL;
        v10 = HIWORD(*(_DWORD *)(v6 + 116)) & 1;
      }
      ObfDereferenceObject((PVOID)v6);
      --CurrentThread->SpecialApcDisable;
      CurrentThread->NpxState = NpxState;
    }
    KeResetLegacyFloatingPointState();
    if ( (int)KeBuildPrimaryThreadContext((_DWORD)CurrentThread, a1, 0, v8, v10, v9) >= 0 )
    {
      KeSetCurrentUmsTeb(CurrentThread, (unsigned __int64)CurrentThread->Teb);
      return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    v3 = v29;
  }
LABEL_30:
  KeSetCurrentUmsTeb(CurrentThread, (unsigned __int64)CurrentThread->Teb);
  CurrentThread->MiscFlags &= ~0x100u;
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( v6 )
    ThreadId = PsGetThreadId((PETHREAD)v6);
  else
    ThreadId = 0LL;
  v27 = *(_QWORD *)(a1 + 80);
  v28 = *(_QWORD *)(a1 + 88);
  ExitStatus.ExceptionRecord = 0LL;
  ExitStatus.ExceptionAddress = 0LL;
  ExitStatus.NumberParameters = 2;
  ExitStatus.ExceptionInformation[0] = (unsigned __int64)ThreadId;
  ExitStatus.ExceptionInformation[1] = v3;
  ExitStatus.ExceptionCode = -1073740004;
  ExitStatus.ExceptionFlags = 1;
  KiDispatchException(&ExitStatus, v28, v27, 1, 0);
  ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExitStatus.ExceptionCode);
  return ZwTerminateThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ExitStatus.ExceptionCode);
}
