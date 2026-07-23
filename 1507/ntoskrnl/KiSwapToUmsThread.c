/*
 * XREFs of KiSwapToUmsThread @ 0x14069A118
 * Callers:
 *     KiUmsTrapEntry @ 0x140194D80 (KiUmsTrapEntry.c)
 *     KiUmsCallEntry @ 0x140194F80 (KiUmsCallEntry.c)
 *     KiUmsExceptionEntry @ 0x140195140 (KiUmsExceptionEntry.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     KiDispatchException @ 0x14001FAE0 (KiDispatchException.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObReferenceObjectSafe @ 0x140075130 (ObReferenceObjectSafe.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PsGetThreadId @ 0x1401191F0 (PsGetThreadId.c)
 *     RtlXSave @ 0x14012527C (RtlXSave.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x14017F570 (ZwTerminateProcess.c)
 *     ZwTerminateThread @ 0x14017FA50 (ZwTerminateThread.c)
 *     KeResetLegacyFloatingPointState @ 0x140182D90 (KeResetLegacyFloatingPointState.c)
 *     KeSaveLegacyFloatingPointControlWord @ 0x140182DA0 (KeSaveLegacyFloatingPointControlWord.c)
 *     __chkstk @ 0x14018BCC0 (__chkstk.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiBlockAndActivateUmsThread @ 0x14020B618 (KiBlockAndActivateUmsThread.c)
 *     KeSetCurrentUmsTeb @ 0x14020C144 (KeSetCurrentUmsTeb.c)
 *     KeBuildPrimaryThreadContext @ 0x14069A6C0 (KeBuildPrimaryThreadContext.c)
 *     KeFixUserSwitchContext @ 0x14069B270 (KeFixUserSwitchContext.c)
 *     PspFindThreadForTeb @ 0x1406C36DC (PspFindThreadForTeb.c)
 */

void __fastcall KiSwapToUmsThread(signed __int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v3; // rsi
  __int64 ThreadForTeb; // rax
  _LIST_ENTRY *v5; // r8
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
  bool v23; // al
  int v24; // ecx
  __int16 v25; // ax
  __int16 v26; // ax
  HANDLE ThreadId; // rax
  __int64 v28; // r8
  __int64 v29; // rdx
  unsigned __int64 v30; // [rsp+30h] [rbp+0h]
  EXCEPTION_RECORD ExitStatus; // [rsp+40h] [rbp+10h] BYREF
  _DWORD v32[4]; // [rsp+E0h] [rbp+B0h] BYREF
  _DWORD v33[4]; // [rsp+F0h] [rbp+C0h] BYREF
  _DWORD *v34; // [rsp+100h] [rbp+D0h] BYREF
  int v35; // [rsp+108h] [rbp+D8h]
  int v36; // [rsp+10Ch] [rbp+DCh]
  _DWORD *v37; // [rsp+110h] [rbp+E0h] BYREF
  int v38; // [rsp+118h] [rbp+E8h]
  int v39; // [rsp+11Ch] [rbp+ECh]

  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a1 + 96) = CurrentThread;
  v30 = *((_QWORD *)CurrentThread->WaitBlock[3].Object + 16);
  v3 = v30;
  ThreadForTeb = PspFindThreadForTeb(v30);
  v6 = ThreadForTeb;
  if ( !ThreadForTeb )
    goto LABEL_32;
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
      goto LABEL_32;
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
      v39 = 0;
      v33[0] = CurrentRunTime;
      v33[2] = CurrentThread[1].KernelStack;
      v33[1] = *(_DWORD *)(v6 + 1584);
      v22 = *(_BYTE *)(a1 + 72) & 1;
      v38 = 16;
      v33[3] = v22;
      v37 = v33;
      EtwTraceKernelEvent((int)&v37, 1, 0x40000080u, 0x1920u, 4200450);
    }
    v23 = KiBlockAndActivateUmsThread((__int64)CurrentThread, (struct _KQUEUE *)(Object + 32), v5, v18);
    CurrentThread->MiscFlags &= ~0x100u;
    ++*((_DWORD *)Object + 6);
    if ( SBYTE8(PerfGlobalGroupMask) < 0 )
    {
      v32[0] = CurrentThread[1].CurrentRunTime;
      v32[2] = CurrentThread[1].KernelStack;
      v24 = *(_DWORD *)(v6 + 1584);
      v36 = 0;
      v32[3] = v23;
      v32[1] = v24;
      v34 = v32;
      v35 = 16;
      EtwTraceKernelEvent((int)&v34, 1, 0x40000080u, 0x1921u, 4200450);
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
    v25 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v25;
    if ( !v25
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
    return;
  }
  v3 = v30;
LABEL_32:
  KeSetCurrentUmsTeb(CurrentThread, (unsigned __int64)CurrentThread->Teb);
  CurrentThread->MiscFlags &= ~0x100u;
  v26 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v26;
  if ( !v26 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v6 )
    ThreadId = PsGetThreadId((PETHREAD)v6);
  else
    ThreadId = 0LL;
  v28 = *(_QWORD *)(a1 + 80);
  v29 = *(_QWORD *)(a1 + 88);
  ExitStatus.ExceptionRecord = 0LL;
  ExitStatus.NumberParameters = 2;
  ExitStatus.ExceptionInformation[0] = (unsigned __int64)ThreadId;
  ExitStatus.ExceptionInformation[1] = v3;
  ExitStatus.ExceptionCode = -1073740004;
  ExitStatus.ExceptionFlags = 1;
  ExitStatus.ExceptionAddress = 0LL;
  KiDispatchException(&ExitStatus, v29, v28, 1, 0);
  ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExitStatus.ExceptionCode);
  ZwTerminateThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ExitStatus.ExceptionCode);
}
