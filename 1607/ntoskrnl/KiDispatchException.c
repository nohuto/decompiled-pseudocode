/*
 * XREFs of KiDispatchException @ 0x1400F1BB0
 * Callers:
 *     KiInitializeUserApc @ 0x1400A6214 (KiInitializeUserApc.c)
 *     KiRaiseException @ 0x140110604 (KiRaiseException.c)
 *     KiExceptionDispatch @ 0x140170180 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140170580 (KiFastFailDispatch.c)
 *     KiParkUmsThread @ 0x1401DC090 (KiParkUmsThread.c)
 *     PspInitializeThunkContext @ 0x140458654 (PspInitializeThunkContext.c)
 *     KiSwapToUmsThread @ 0x1406509DC (KiSwapToUmsThread.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140051224 (KeGetEffectiveIrql.c)
 *     KiSetupForInstrumentationReturn @ 0x1400AC51C (KiSetupForInstrumentationReturn.c)
 *     KdTrap @ 0x1400ACD48 (KdTrap.c)
 *     RtlpCopyExtendedContext @ 0x1400F1048 (RtlpCopyExtendedContext.c)
 *     KiPreprocessFault @ 0x1400F2138 (KiPreprocessFault.c)
 *     KeContextFromKframes @ 0x1400F22A0 (KeContextFromKframes.c)
 *     RtlGetExtendedContextLength @ 0x1400F26A8 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1400F275C (RtlInitializeExtendedContext.c)
 *     RtlDispatchException @ 0x1400F2B50 (RtlDispatchException.c)
 *     KdpStub @ 0x1400F45F4 (KdpStub.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x14015A770 (ZwTerminateProcess.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KeContextToKframes @ 0x14015DBA0 (KeContextToKframes.c)
 *     __chkstk @ 0x140167BC0 (__chkstk.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     KeCopyExceptionRecord @ 0x140171CB8 (KeCopyExceptionRecord.c)
 *     KiCopyInformation @ 0x1401D29AC (KiCopyInformation.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     DbgkForwardException @ 0x1404BF254 (DbgkForwardException.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 *     KdIsThisAKdTrap @ 0x1406F30DC (KdIsThisAKdTrap.c)
 *     KdpTrap @ 0x1406F312C (KdpTrap.c)
 */

int __fastcall KiDispatchException(PEXCEPTION_RECORD ExceptionRecord, __int64 a2, __int64 a3, char a4, char a5)
{
  __int64 v7; // rdi
  _KPROCESS *Process; // rax
  char v10; // si
  int ExceptionCode; // esi
  struct _KTHREAD *CurrentThread; // rax
  ULONG v13; // r12d
  unsigned __int64 v14; // rax
  void *v15; // rsp
  __int64 v16; // r8
  char v17; // al
  unsigned __int64 v18; // rsi
  char IsThisAKdTrap; // al
  _KPROCESS *v20; // rdx
  unsigned __int64 v21; // rdx
  __int64 v22; // r13
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rcx
  _QWORD *v25; // rcx
  __int64 v26; // r8
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-10h]
  int v29[2]; // [rsp+30h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+38h] [rbp+8h] BYREF
  int v31; // [rsp+3Ch] [rbp+Ch]
  unsigned __int64 v32; // [rsp+40h] [rbp+10h]
  unsigned __int64 v33; // [rsp+48h] [rbp+18h]
  PCONTEXT_EX ContextEx; // [rsp+50h] [rbp+20h] BYREF
  unsigned __int64 v35; // [rsp+58h] [rbp+28h]
  PEXCEPTION_RECORD v36; // [rsp+60h] [rbp+30h]
  unsigned __int64 v37; // [rsp+68h] [rbp+38h]
  __int64 v38; // [rsp+70h] [rbp+40h]
  unsigned __int64 v39; // [rsp+78h] [rbp+48h]
  unsigned __int64 v40; // [rsp+80h] [rbp+50h]
  int *v41; // [rsp+88h] [rbp+58h]
  __int64 v42; // [rsp+90h] [rbp+60h]
  int v43; // [rsp+A0h] [rbp+70h]
  unsigned __int64 v44; // [rsp+C8h] [rbp+98h]
  __int64 v45; // [rsp+128h] [rbp+F8h]
  __int128 v46; // [rsp+140h] [rbp+110h] BYREF
  __int64 v47; // [rsp+150h] [rbp+120h]

  v7 = a2;
  *(_QWORD *)v29 = a2;
  v36 = ExceptionRecord;
  v42 = a3;
  Process = KeGetCurrentThread()->ApcState.Process;
  v32 = (unsigned __int64)Process;
  __incgsdword(0x5CB4u);
  v10 = a5;
  if ( a5 && Process[2].ActiveProcessors.Bitmap[9] )
  {
    ExceptionCode = ExceptionRecord->ExceptionCode;
    if ( ExceptionRecord->ExceptionCode == 268435460 )
      ExceptionRecord->ExceptionCode = -1073741819;
    if ( KeGetEffectiveIrql() < 2u )
    {
      if ( a4
        || ((unsigned int)(ExceptionRecord->ExceptionCode + 1073741819) <= 1
         || ExceptionRecord->ExceptionCode == -2147483647)
        && (v7 = *(_QWORD *)v29, ExceptionRecord->ExceptionInformation[1] <= 0x7FFFFFFF0000LL) )
      {
        LODWORD(CurrentThread) = xmmword_1403013C0(ExceptionRecord, v7, a3, 0LL, a4);
        if ( (_BYTE)CurrentThread )
          return (int)CurrentThread;
      }
    }
    ExceptionRecord->ExceptionCode = ExceptionCode;
    v10 = a5;
  }
  v13 = 1048607;
  v29[0] = 1048607;
  if ( a4 )
  {
    if ( (KeFeatureBits & 0x800000) != 0 )
      v13 = 1048671;
    v29[0] = v13;
  }
  RtlGetExtendedContextLength(v13, &ContextLength);
  v14 = ContextLength + 15LL;
  if ( v14 <= ContextLength )
    v14 = 0xFFFFFFFFFFFFFF0LL;
  v15 = alloca(v14 & 0xFFFFFFFFFFFFFFF0uLL);
  v41 = v29;
  if ( a4 )
    memset(v29, 0, ContextLength);
  v31 = RtlInitializeExtendedContext((PCONTEXT)v29, v13, &ContextEx);
  KeContextFromKframes(a3, v7, v29);
  if ( ExceptionRecord->ExceptionCode == -2147483645 )
    --v45;
  if ( (unsigned __int8)KiPreprocessFault((int)ExceptionRecord, (int)v29) )
    goto LABEL_62;
  if ( !a4 )
  {
    if ( !v10
      || (KdpDebugRoutineSelect
        ? (v17 = KdpTrap(a3, v7, (_DWORD)ExceptionRecord, (unsigned int)v29, a4, 0, *(_QWORD *)v29))
        : (v17 = KdpStub(a3, v7, (_DWORD)ExceptionRecord, (unsigned int)v29, a4, 0, *(_QWORD *)v29)),
          !v17 && !RtlDispatchException(ExceptionRecord, (PCONTEXT)v29)) )
    {
      if ( !(unsigned __int8)KdTrap(a3, v7, (int)ExceptionRecord, (int)v29, 0, 1) )
        KeBugCheckEx(
          0x1Eu,
          ExceptionRecord->ExceptionCode,
          (ULONG_PTR)ExceptionRecord->ExceptionAddress,
          ExceptionRecord->ExceptionInformation[0],
          ExceptionRecord->ExceptionInformation[1]);
    }
LABEL_62:
    LOBYTE(BugCheckParameter4) = a4;
    LODWORD(CurrentThread) = KeContextToKframes(a3, v7, (unsigned int)v29, (_DWORD)v36, BugCheckParameter4);
    return (int)CurrentThread;
  }
  v18 = v44;
  v35 = v44;
  if ( (*(_DWORD *)(v32 + 1740) & 1) == 0 )
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
    if ( (v37 & 0xFFF8) == 0x20 )
    {
      if ( ExceptionRecord->ExceptionCode == -2147483645 )
      {
        ExceptionRecord->ExceptionCode = 1073741855;
      }
      else if ( ExceptionRecord->ExceptionCode == -2147483644 )
      {
        ExceptionRecord->ExceptionCode = 1073741854;
      }
      v18 = (unsigned int)v18 & 0xFFFFFFF0;
      v35 = v18;
    }
  }
  if ( a5 )
  {
    IsThisAKdTrap = KdIsThisAKdTrap(ExceptionRecord);
    v20 = KeGetCurrentThread()->ApcState.Process;
    if ( (!v20[1].ActiveProcessors.Bitmap[6] && !KdIgnoreUmExceptions || IsThisAKdTrap)
      && (unsigned __int8)KdTrap(a3, v7, (int)ExceptionRecord, (int)v29, a4, 0) )
    {
      goto LABEL_62;
    }
    LOBYTE(v20) = 1;
    LODWORD(CurrentThread) = DbgkForwardException(ExceptionRecord, v20, 0LL);
    if ( !(_BYTE)CurrentThread )
    {
      _disable();
      *(_DWORD *)(a3 + 376) &= ~0x100u;
      _enable();
      v43 = -1073741819;
      v21 = v18;
      v33 = v18;
      if ( (v13 & 0x100040) == 0x100040 )
      {
        v21 = (v18 - ContextEx->XState.Length) & 0xFFFFFFFFFFFFFFC0uLL;
        v33 = v21;
      }
      v32 = (v21 - 40) & 0xFFFFFFFFFFFFFFF0uLL;
      v37 = v32;
      v40 = v32 - 160;
      v22 = v32 - 192;
      v38 = v32 - 192;
      v23 = v32 - 1424;
      v39 = v32 - 1424;
      LODWORD(v46) = -1232;
      v24 = v18 - (v32 - 1424);
      DWORD1(v46) = v18 - (v32 - 1424);
      *((_QWORD *)&v46 + 1) = 0x4D0FFFFFB30LL;
      LODWORD(v47) = v21 - (v32 - 192);
      HIDWORD(v47) = v18 - v21;
      if ( v24 - 1 > 0xFFE )
      {
        ProbeForWrite((volatile void *)(v32 - 1424), v18 - (v32 - 1424), 0x10u);
        v25 = (_QWORD *)v32;
      }
      else
      {
        if ( (((_BYTE)v32 + 112) & 0xF) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v23 >= 0x7FFFFFFF0000LL )
          v23 = 0x7FFFFFFF0000LL;
        *(_BYTE *)v23 = *(_BYTE *)v23;
        *(_BYTE *)(v23 + v24 - 1) = *(_BYTE *)(v23 + v24 - 1);
        v25 = (_QWORD *)v37;
        v22 = v38;
        v23 = v39;
      }
      v25[3] = v18;
      *v25 = v45;
      KeCopyExceptionRecord(v40, ExceptionRecord);
      v31 = RtlpCopyExtendedContext(1, v22, (__int64)&v46, v13, (__int64)ContextEx, 0LL);
      *(_OWORD *)v22 = v46;
      *(_QWORD *)(v22 + 16) = v47;
      _disable();
      *(_QWORD *)(a3 + 384) = v23;
      *(_WORD *)(a3 + 368) = 51;
      *(_QWORD *)(a3 + 360) = KeUserExceptionDispatcher;
      LODWORD(CurrentThread) = (unsigned int)KiSetupForInstrumentationReturn(a3);
      _enable();
    }
  }
  else
  {
    LOBYTE(v16) = 1;
    LODWORD(CurrentThread) = DbgkForwardException(ExceptionRecord, 1LL, v16);
    if ( !(_BYTE)CurrentThread )
    {
      LOBYTE(v26) = 1;
      LODWORD(CurrentThread) = DbgkForwardException(ExceptionRecord, 0LL, v26);
      if ( !(_BYTE)CurrentThread )
        LODWORD(CurrentThread) = ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExceptionRecord->ExceptionCode);
    }
  }
  return (int)CurrentThread;
}
