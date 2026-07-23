/*
 * XREFs of KiDispatchException @ 0x140022BB4
 * Callers:
 *     KiRaiseException @ 0x140022668 (KiRaiseException.c)
 *     KiInitializeUserApc @ 0x140022898 (KiInitializeUserApc.c)
 *     KiExceptionDispatch @ 0x140165BC0 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140165E80 (KiFastFailDispatch.c)
 *     KiParkUmsThread @ 0x1401CC5D8 (KiParkUmsThread.c)
 *     PspInitializeThunkContext @ 0x14044603C (PspInitializeThunkContext.c)
 *     KiSwapToUmsThread @ 0x14061B5DC (KiSwapToUmsThread.c)
 * Callees:
 *     KiSetupForInstrumentationReturn @ 0x140022644 (KiSetupForInstrumentationReturn.c)
 *     KiPreprocessFault @ 0x14002315C (KiPreprocessFault.c)
 *     KeContextFromKframes @ 0x140023314 (KeContextFromKframes.c)
 *     KdpStub @ 0x1400236C8 (KdpStub.c)
 *     RtlDispatchException @ 0x140024440 (RtlDispatchException.c)
 *     RtlpCopyExtendedContext @ 0x14002B260 (RtlpCopyExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x14002B348 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x14002B3FC (RtlInitializeExtendedContext.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x140150BA0 (ZwTerminateProcess.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KeContextToKframes @ 0x140153EF0 (KeContextToKframes.c)
 *     __chkstk @ 0x14015C1E0 (__chkstk.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     KeCopyExceptionRecord @ 0x140166E90 (KeCopyExceptionRecord.c)
 *     KiCopyInformation @ 0x1401C4068 (KiCopyInformation.c)
 *     DbgkForwardException @ 0x1403ED944 (DbgkForwardException.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 *     KdIsThisAKdTrap @ 0x1406AA000 (KdIsThisAKdTrap.c)
 */

int __fastcall KiDispatchException(PEXCEPTION_RECORD ExceptionRecord, __int64 a2, __int64 a3, char a4, char a5)
{
  ULONG v9; // r12d
  unsigned __int64 v10; // rax
  void *v11; // rsp
  int v12; // r8d
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v14; // rdx
  char IsThisAKdTrap; // al
  _KPROCESS *v16; // rdx
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // rdx
  _BYTE *v19; // r15
  unsigned __int64 v20; // rcx
  _QWORD *v21; // rcx
  unsigned __int64 v22; // rbx
  int v23; // ecx
  _KPROCESS *v24; // r14
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-10h]
  __int64 v27; // [rsp+28h] [rbp-8h]
  __int64 v28; // [rsp+30h] [rbp+0h] BYREF
  __int64 v29; // [rsp+38h] [rbp+8h]
  unsigned __int64 v30; // [rsp+40h] [rbp+10h]
  _KPROCESS *Process; // [rsp+48h] [rbp+18h]
  ULONG ContextLength; // [rsp+50h] [rbp+20h] BYREF
  NTSTATUS v33; // [rsp+54h] [rbp+24h]
  __int64 v34; // [rsp+58h] [rbp+28h]
  unsigned __int64 v35; // [rsp+60h] [rbp+30h]
  PEXCEPTION_RECORD v36; // [rsp+68h] [rbp+38h]
  PCONTEXT_EX ContextEx; // [rsp+70h] [rbp+40h] BYREF
  unsigned __int64 v38; // [rsp+78h] [rbp+48h]
  unsigned __int64 v39; // [rsp+80h] [rbp+50h]
  _KPROCESS *v40; // [rsp+88h] [rbp+58h]
  _BYTE *v41; // [rsp+90h] [rbp+60h]
  __int64 v42; // [rsp+98h] [rbp+68h]
  unsigned __int64 v43; // [rsp+A0h] [rbp+70h]
  _QWORD *v44; // [rsp+A8h] [rbp+78h]
  __int64 *v45; // [rsp+B0h] [rbp+80h]
  int v46; // [rsp+C0h] [rbp+90h]
  unsigned __int64 v47; // [rsp+C8h] [rbp+98h]
  __int64 v48; // [rsp+128h] [rbp+F8h]
  __int128 v49; // [rsp+160h] [rbp+130h] BYREF
  __int64 v50; // [rsp+170h] [rbp+140h]

  v36 = ExceptionRecord;
  v42 = a2;
  v34 = a3;
  LOBYTE(v28) = a4;
  Process = KeGetCurrentThread()->ApcState.Process;
  v40 = Process;
  __incgsdword(0x5CB4u);
  v9 = 1048607;
  LODWORD(v29) = 1048607;
  if ( a4 )
  {
    if ( (KeFeatureBits & 0x800000) != 0 )
      v9 = 1048671;
    LODWORD(v29) = v9;
  }
  RtlGetExtendedContextLength(v9, &ContextLength);
  v10 = ContextLength + 15LL;
  if ( v10 <= ContextLength )
    v10 = 0xFFFFFFFFFFFFFF0LL;
  v11 = alloca(v10 & 0xFFFFFFFFFFFFFFF0uLL);
  v45 = &v28;
  if ( a4 )
    memset(&v28, 0, ContextLength);
  v33 = RtlInitializeExtendedContext((PCONTEXT)&v28, v9, &ContextEx);
  KeContextFromKframes(a3, a2, &v28);
  if ( ExceptionRecord->ExceptionCode == -2147483645 )
    --v48;
  if ( a4 && Process[2].ActiveProcessors.Bitmap[7] )
  {
    LODWORD(CurrentThread) = qword_1402DC040(ExceptionRecord, a2, a3, 0LL, a4);
    if ( (_BYTE)CurrentThread )
      return (int)CurrentThread;
  }
  else
  {
    LOBYTE(v12) = a4;
    if ( (unsigned __int8)KiPreprocessFault((int)ExceptionRecord, (int)&v28, v12) )
    {
LABEL_56:
      LOBYTE(BugCheckParameter4) = a4;
      LODWORD(CurrentThread) = KeContextToKframes(a3, a2, (unsigned int)&v28, v35, BugCheckParameter4);
      return (int)CurrentThread;
    }
  }
  if ( !a4 )
  {
    if ( !a5
      || !(unsigned __int8)KiDebugRoutine(a3, a2, (_DWORD)ExceptionRecord, (unsigned int)&v28, 0, 0, v28, v29)
      && !RtlDispatchException(ExceptionRecord, (PCONTEXT)&v28) )
    {
      LOBYTE(v27) = 1;
      if ( !(unsigned __int8)KiDebugRoutine(a3, a2, (_DWORD)ExceptionRecord, (unsigned int)&v28, 0, v27) )
        KeBugCheckEx(
          0x1Eu,
          ExceptionRecord->ExceptionCode,
          (ULONG_PTR)ExceptionRecord->ExceptionAddress,
          ExceptionRecord->ExceptionInformation[0],
          ExceptionRecord->ExceptionInformation[1]);
    }
    goto LABEL_56;
  }
  v14 = v47;
  v30 = v47;
  v35 = v47;
  if ( (HIDWORD(Process[2].SwapListEntry.Next) & 1) == 0 )
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
    if ( ((unsigned __int16)v36 & 0xFFF8) == 0x20 )
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
      v30 = v14;
      v35 = v14;
    }
  }
  if ( a5 )
  {
    IsThisAKdTrap = KdIsThisAKdTrap(ExceptionRecord);
    v16 = KeGetCurrentThread()->ApcState.Process;
    if ( (!v16[1].ActiveProcessors.Bitmap[6] && !KdIgnoreUmExceptions || IsThisAKdTrap)
      && (unsigned __int8)KiDebugRoutine(a3, a2, (_DWORD)ExceptionRecord, (unsigned int)&v28, a4, 0, v28, v29) )
    {
      goto LABEL_56;
    }
    LOBYTE(v16) = 1;
    LODWORD(CurrentThread) = DbgkForwardException(ExceptionRecord, v16);
    if ( !(_BYTE)CurrentThread )
    {
      if ( !Process[2].ActiveProcessors.Bitmap[7]
        || (LOBYTE(BugCheckParameter4) = a4,
            LODWORD(CurrentThread) = qword_1402DC040(ExceptionRecord, a2, a3, 1LL, BugCheckParameter4),
            !(_BYTE)CurrentThread) )
      {
        _disable();
        *(_DWORD *)(a3 + 376) &= ~0x100u;
        _enable();
        v46 = -1073741819;
        v17 = v30;
        v18 = v30;
        v38 = v30;
        if ( (v9 & 0x100040) == 0x100040 )
        {
          v18 = (v30 - ContextEx->XState.Length) & 0xFFFFFFFFFFFFFFC0uLL;
          v38 = v18;
        }
        v30 = (v18 - 40) & 0xFFFFFFFFFFFFFFF0uLL;
        v44 = (_QWORD *)v30;
        v39 = v30 - 160;
        v43 = v30 - 192;
        v19 = (_BYTE *)(v30 - 1424);
        v41 = (_BYTE *)(v30 - 1424);
        LODWORD(v49) = -1232;
        v20 = v17 - (v30 - 1424);
        DWORD1(v49) = v17 - (v30 - 1424);
        *((_QWORD *)&v49 + 1) = 0x4D0FFFFFB30LL;
        LODWORD(v50) = v18 - (v30 - 192);
        HIDWORD(v50) = v17 - v18;
        if ( v20 - 1 > 0xFFE )
        {
          ProbeForWrite((volatile void *)(v30 - 1424), v17 - (v30 - 1424), 0x10u);
          v21 = (_QWORD *)v30;
        }
        else
        {
          if ( (((_BYTE)v30 + 112) & 0xF) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)v19 >= MmUserProbeAddress )
            v19 = (_BYTE *)MmUserProbeAddress;
          *v19 = *v19;
          v19[v20 - 1] = v19[v20 - 1];
          v21 = v44;
          v19 = v41;
        }
        v21[3] = v17;
        *v21 = v48;
        KeCopyExceptionRecord(v39, ExceptionRecord);
        v22 = v43;
        LOBYTE(v23) = 1;
        v33 = RtlpCopyExtendedContext(v23, v43, (unsigned int)&v49, v9, (__int64)ContextEx, 0LL);
        *(_OWORD *)v22 = v49;
        *(_QWORD *)(v22 + 16) = v50;
        _disable();
        *(_QWORD *)(a3 + 384) = v19;
        *(_WORD *)(a3 + 368) = 51;
        *(_QWORD *)(a3 + 360) = KeUserExceptionDispatcher;
        LODWORD(CurrentThread) = (unsigned int)KiSetupForInstrumentationReturn(a3);
        _enable();
      }
    }
  }
  else
  {
    v24 = Process;
    LOBYTE(v14) = 1;
    LODWORD(CurrentThread) = DbgkForwardException(ExceptionRecord, v14);
    if ( !(_BYTE)CurrentThread )
    {
      if ( !v24[2].ActiveProcessors.Bitmap[7]
        || (LOBYTE(BugCheckParameter4) = a4,
            LODWORD(CurrentThread) = qword_1402DC040(ExceptionRecord, a2, a3, 2LL, BugCheckParameter4),
            !(_BYTE)CurrentThread) )
      {
        LODWORD(CurrentThread) = DbgkForwardException(ExceptionRecord, 0LL);
        if ( !(_BYTE)CurrentThread )
          LODWORD(CurrentThread) = ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExceptionRecord->ExceptionCode);
      }
    }
  }
  return (int)CurrentThread;
}
