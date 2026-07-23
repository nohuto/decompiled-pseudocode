/*
 * XREFs of KiDispatchException @ 0x14001FAE0
 * Callers:
 *     KiInitializeUserApc @ 0x14011E7C8 (KiInitializeUserApc.c)
 *     KiRaiseException @ 0x140124BE0 (KiRaiseException.c)
 *     KiExceptionDispatch @ 0x140194180 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140194580 (KiFastFailDispatch.c)
 *     KiParkUmsThread @ 0x14020B7B4 (KiParkUmsThread.c)
 *     PspInitializeThunkContext @ 0x14044FD4C (PspInitializeThunkContext.c)
 *     KiSwapToUmsThread @ 0x14069A118 (KiSwapToUmsThread.c)
 * Callees:
 *     RtlDispatchException @ 0x14001BBB0 (RtlDispatchException.c)
 *     KeContextFromKframes @ 0x14001F72C (KeContextFromKframes.c)
 *     KiPreprocessFault @ 0x1400200B4 (KiPreprocessFault.c)
 *     RtlpCopyExtendedContext @ 0x1400205A0 (RtlpCopyExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x140020688 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x14002073C (RtlInitializeExtendedContext.c)
 *     KdpStub @ 0x140127B74 (KdpStub.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x14017F570 (ZwTerminateProcess.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KeContextToKframes @ 0x140182880 (KeContextToKframes.c)
 *     __chkstk @ 0x14018BCC0 (__chkstk.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KeCopyExceptionRecord @ 0x140195C4C (KeCopyExceptionRecord.c)
 *     KiCopyInformation @ 0x1402001F4 (KiCopyInformation.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     DbgkForwardException @ 0x1405478A4 (DbgkForwardException.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 *     KdIsThisAKdTrap @ 0x14072A000 (KdIsThisAKdTrap.c)
 */

int __fastcall KiDispatchException(PEXCEPTION_RECORD ExceptionRecord, __int64 a2, __int64 a3, char a4, char a5)
{
  ULONG v9; // r12d
  unsigned __int64 v10; // rax
  void *v11; // rsp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  char IsThisAKdTrap; // al
  _KPROCESS *v16; // rdx
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // rdx
  _BYTE *v19; // r15
  unsigned __int64 v20; // rcx
  _QWORD *v21; // rcx
  unsigned __int64 v22; // rdi
  int v23; // ecx
  void *InstrumentationCallback; // rdx
  _KPROCESS *v25; // r14
  __int64 v26; // r8
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-10h]
  __int64 v29; // [rsp+28h] [rbp-8h]
  __int64 v30; // [rsp+30h] [rbp+0h] BYREF
  __int64 v31; // [rsp+38h] [rbp+8h]
  unsigned __int64 v32; // [rsp+40h] [rbp+10h]
  _KPROCESS *Process; // [rsp+48h] [rbp+18h]
  ULONG ContextLength; // [rsp+50h] [rbp+20h] BYREF
  NTSTATUS v35; // [rsp+54h] [rbp+24h]
  __int64 v36; // [rsp+58h] [rbp+28h]
  unsigned __int64 v37; // [rsp+60h] [rbp+30h]
  PEXCEPTION_RECORD v38; // [rsp+68h] [rbp+38h]
  PCONTEXT_EX ContextEx; // [rsp+70h] [rbp+40h] BYREF
  unsigned __int64 v40; // [rsp+78h] [rbp+48h]
  unsigned __int64 v41; // [rsp+80h] [rbp+50h]
  _KPROCESS *v42; // [rsp+88h] [rbp+58h]
  _BYTE *v43; // [rsp+90h] [rbp+60h]
  __int64 v44; // [rsp+98h] [rbp+68h]
  unsigned __int64 v45; // [rsp+A0h] [rbp+70h]
  _QWORD *v46; // [rsp+A8h] [rbp+78h]
  __int64 *v47; // [rsp+B0h] [rbp+80h]
  int v48; // [rsp+C0h] [rbp+90h]
  unsigned __int64 v49; // [rsp+C8h] [rbp+98h]
  __int64 v50; // [rsp+128h] [rbp+F8h]
  __int128 v51; // [rsp+160h] [rbp+130h] BYREF
  __int64 v52; // [rsp+170h] [rbp+140h]

  v38 = ExceptionRecord;
  v44 = a2;
  v36 = a3;
  LOBYTE(v30) = a4;
  Process = KeGetCurrentThread()->ApcState.Process;
  v42 = Process;
  __incgsdword(0x5CB4u);
  v9 = 1048607;
  LODWORD(v31) = 1048607;
  if ( a4 )
  {
    if ( (KeFeatureBits & 0x800000) != 0 )
      v9 = 1048671;
    LODWORD(v31) = v9;
  }
  RtlGetExtendedContextLength(v9, &ContextLength);
  v10 = ContextLength + 15LL;
  if ( v10 <= ContextLength )
    v10 = 0xFFFFFFFFFFFFFF0LL;
  v11 = alloca(v10 & 0xFFFFFFFFFFFFFFF0uLL);
  v47 = &v30;
  if ( a4 )
    memset(&v30, 0, ContextLength);
  v35 = RtlInitializeExtendedContext((PCONTEXT)&v30, v9, &ContextEx);
  KeContextFromKframes(a3, a2, (__int64)&v30);
  if ( ExceptionRecord->ExceptionCode == -2147483645 )
    --v50;
  if ( a4 && Process[2].ActiveProcessors.Bitmap[6] )
  {
    LODWORD(CurrentThread) = xmmword_14032C3A0(ExceptionRecord, a2, a3, 0LL, a4);
    if ( (_BYTE)CurrentThread )
      return (int)CurrentThread;
  }
  else if ( (unsigned __int8)KiPreprocessFault((int)ExceptionRecord, (int)&v30) )
  {
LABEL_58:
    LOBYTE(BugCheckParameter4) = a4;
    LODWORD(CurrentThread) = KeContextToKframes(a3, a2, (unsigned int)&v30, v37, BugCheckParameter4);
    return (int)CurrentThread;
  }
  if ( !a4 )
  {
    if ( !a5
      || !(unsigned __int8)KiDebugRoutine(a3, a2, (_DWORD)ExceptionRecord, (unsigned int)&v30, 0, 0, v30, v31)
      && !RtlDispatchException(ExceptionRecord, (PCONTEXT)&v30) )
    {
      LOBYTE(v29) = 1;
      if ( !(unsigned __int8)KiDebugRoutine(a3, a2, (_DWORD)ExceptionRecord, (unsigned int)&v30, 0, v29) )
        KeBugCheckEx(
          0x1Eu,
          ExceptionRecord->ExceptionCode,
          (ULONG_PTR)ExceptionRecord->ExceptionAddress,
          ExceptionRecord->ExceptionInformation[0],
          ExceptionRecord->ExceptionInformation[1]);
    }
    goto LABEL_58;
  }
  v14 = v49;
  v32 = v49;
  v37 = v49;
  if ( (HIDWORD(Process[2].ReadyListHead.Blink) & 1) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[7]
      && ExceptionRecord->ExceptionCode == -2147483646
      && (*(_DWORD *)(a3 + 376) & 0x40000) != 0 )
    {
      _disable();
      *(_DWORD *)(a3 + 376) &= ~0x40000u;
      _enable();
      return (int)CurrentThread;
    }
    if ( ((unsigned __int16)v38 & 0xFFF8) == 0x20 )
    {
      if ( ExceptionRecord->ExceptionCode == -2147483645 )
      {
        ExceptionRecord->ExceptionCode = 1073741855;
      }
      else if ( ExceptionRecord->ExceptionCode == -2147483644 )
      {
        ExceptionRecord->ExceptionCode = 1073741854;
      }
      v14 = (unsigned int)v14 & 0xFFFFFFF0;
      v32 = v14;
      v37 = v14;
    }
  }
  if ( a5 )
  {
    IsThisAKdTrap = KdIsThisAKdTrap(ExceptionRecord);
    v16 = KeGetCurrentThread()->ApcState.Process;
    if ( (!v16[1].ActiveProcessors.Bitmap[6] && !KdIgnoreUmExceptions || IsThisAKdTrap)
      && (unsigned __int8)KiDebugRoutine(a3, a2, (_DWORD)ExceptionRecord, (unsigned int)&v30, a4, 0, v30, v31) )
    {
      goto LABEL_58;
    }
    LOBYTE(v16) = 1;
    LODWORD(CurrentThread) = DbgkForwardException(ExceptionRecord, v16, 0LL);
    if ( !(_BYTE)CurrentThread )
    {
      if ( !Process[2].ActiveProcessors.Bitmap[6]
        || (LOBYTE(BugCheckParameter4) = a4,
            LODWORD(CurrentThread) = xmmword_14032C3A0(ExceptionRecord, a2, a3, 1LL, BugCheckParameter4),
            !(_BYTE)CurrentThread) )
      {
        _disable();
        *(_DWORD *)(a3 + 376) &= ~0x100u;
        _enable();
        v48 = -1073741819;
        v17 = v32;
        v18 = v32;
        v40 = v32;
        if ( (v9 & 0x100040) == 0x100040 )
        {
          v18 = (v32 - ContextEx->XState.Length) & 0xFFFFFFFFFFFFFFC0uLL;
          v40 = v18;
        }
        v32 = (v18 - 40) & 0xFFFFFFFFFFFFFFF0uLL;
        v46 = (_QWORD *)v32;
        v41 = v32 - 160;
        v45 = v32 - 192;
        v19 = (_BYTE *)(v32 - 1424);
        v43 = (_BYTE *)(v32 - 1424);
        LODWORD(v51) = -1232;
        v20 = v17 - (v32 - 1424);
        DWORD1(v51) = v17 - (v32 - 1424);
        *((_QWORD *)&v51 + 1) = 0x4D0FFFFFB30LL;
        LODWORD(v52) = v18 - (v32 - 192);
        HIDWORD(v52) = v17 - v18;
        if ( v20 - 1 > 0xFFE )
        {
          ProbeForWrite((volatile void *)(v32 - 1424), v17 - (v32 - 1424), 0x10u);
          v21 = (_QWORD *)v32;
        }
        else
        {
          if ( (((_BYTE)v32 + 112) & 0xF) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)v19 >= MmUserProbeAddress )
            v19 = (_BYTE *)MmUserProbeAddress;
          *v19 = *v19;
          v19[v20 - 1] = v19[v20 - 1];
          v21 = v46;
          v19 = v43;
        }
        v21[3] = v17;
        *v21 = v50;
        KeCopyExceptionRecord(v41, ExceptionRecord);
        v22 = v45;
        LOBYTE(v23) = 1;
        v35 = RtlpCopyExtendedContext(v23, v45, (unsigned int)&v51, v9, (__int64)ContextEx, 0LL);
        *(_OWORD *)v22 = v51;
        *(_QWORD *)(v22 + 16) = v52;
        _disable();
        *(_QWORD *)(a3 + 384) = v19;
        *(_WORD *)(a3 + 368) = 51;
        *(_QWORD *)(a3 + 360) = KeUserExceptionDispatcher;
        CurrentThread = KeGetCurrentThread();
        InstrumentationCallback = CurrentThread->ApcState.Process->InstrumentationCallback;
        if ( InstrumentationCallback )
        {
          CurrentThread = *(struct _KTHREAD **)(a3 + 360);
          *(_QWORD *)(a3 + 88) = CurrentThread;
          *(_QWORD *)(a3 + 360) = InstrumentationCallback;
        }
        _enable();
      }
    }
  }
  else
  {
    v25 = Process;
    LOBYTE(v13) = 1;
    LOBYTE(v14) = 1;
    LODWORD(CurrentThread) = DbgkForwardException(ExceptionRecord, v14, v13);
    if ( !(_BYTE)CurrentThread )
    {
      if ( !v25[2].ActiveProcessors.Bitmap[6]
        || (LOBYTE(BugCheckParameter4) = a4,
            LODWORD(CurrentThread) = xmmword_14032C3A0(ExceptionRecord, a2, a3, 2LL, BugCheckParameter4),
            !(_BYTE)CurrentThread) )
      {
        LOBYTE(v26) = 1;
        LODWORD(CurrentThread) = DbgkForwardException(ExceptionRecord, 0LL, v26);
        if ( !(_BYTE)CurrentThread )
          LODWORD(CurrentThread) = ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExceptionRecord->ExceptionCode);
      }
    }
  }
  return (int)CurrentThread;
}
