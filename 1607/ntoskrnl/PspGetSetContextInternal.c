/*
 * XREFs of PspGetSetContextInternal @ 0x1404FB520
 * Callers:
 *     PspGetSetContextSpecialApc @ 0x1401671D0 (PspGetSetContextSpecialApc.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x14004EF10 (RtlpGetStackLimits.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x140050EE0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     IoThreadToProcess @ 0x14005F270 (IoThreadToProcess.c)
 *     PspGetBaseTrapFrame @ 0x1400F1130 (PspGetBaseTrapFrame.c)
 *     RtlpIsFrameInBoundsEx @ 0x1400F1148 (RtlpIsFrameInBoundsEx.c)
 *     RtlpVirtualUnwind @ 0x1400F125C (RtlpVirtualUnwind.c)
 *     RtlGetExtendedContextLength @ 0x1400F26A8 (RtlGetExtendedContextLength.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     RtlpCaptureContext @ 0x140167470 (RtlpCaptureContext.c)
 *     KeDoesTebMatchThread @ 0x1401DC838 (KeDoesTebMatchThread.c)
 *     KeGetCurrentUmsTeb @ 0x1401DC850 (KeGetCurrentUmsTeb.c)
 *     PspSetContext @ 0x1404FA330 (PspSetContext.c)
 *     PspGetContext @ 0x1404FAA60 (PspGetContext.c)
 *     VslGetSetSecureContext @ 0x140620AAC (VslGetSetSecureContext.c)
 *     KeClearUmsThreadKernelLock @ 0x140650580 (KeClearUmsThreadKernelLock.c)
 *     KeUpdateUmsThreadState @ 0x140650830 (KeUpdateUmsThreadState.c)
 *     KeBuildPrimaryThreadContext @ 0x140650F3C (KeBuildPrimaryThreadContext.c)
 *     KeCopyContextFromUch @ 0x140651230 (KeCopyContextFromUch.c)
 *     KeCopyContextFromUmsContext @ 0x1406514EC (KeCopyContextFromUmsContext.c)
 *     KeUpdatePrimaryThreadContext @ 0x140651B80 (KeUpdatePrimaryThreadContext.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1406827D8 (PspRundownUmsThreadForApcDelivery.c)
 *     PspSetUmsThreadContext @ 0x14068297C (PspSetUmsThreadContext.c)
 *     PspSetContextState @ 0x140682EC8 (PspSetContextState.c)
 *     RtlCopyContext @ 0x14068C258 (RtlCopyContext.c)
 */

__int64 __fastcall PspGetSetContextInternal(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v3; // r12d
  _QWORD *v4; // r14
  struct _KTHREAD *CurrentThread; // rdi
  PEPROCESS v8; // rax
  __int64 v9; // rsi
  ULONG v10; // r13d
  __int64 BaseTrapFrame; // r15
  struct _KTHREAD *v12; // rax
  _DWORD *Object; // rsi
  __int64 v14; // rsi
  int v15; // eax
  __int64 v16; // rcx
  int v17; // r14d
  int v18; // eax
  __int64 v19; // r8
  int updated; // eax
  struct _KTHREAD *v21; // rax
  unsigned __int64 CurrentUmsTeb; // rax
  bool DoesTebMatchThread; // al
  __int64 v24; // rcx
  bool v25; // si
  int v26; // eax
  __int64 v27; // r8
  __int64 v28; // r12
  ULONG_PTR v29; // rsi
  unsigned __int64 v30; // rax
  unsigned int *v31; // rax
  int v32; // r13d
  CONTEXT *v33; // rsi
  char v35[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v36; // [rsp+64h] [rbp-9Ch] BYREF
  int v37; // [rsp+68h] [rbp-98h]
  ULONG ContextLength; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v39; // [rsp+70h] [rbp-90h]
  unsigned __int64 v40; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v41; // [rsp+80h] [rbp-80h] BYREF
  __int64 v42; // [rsp+88h] [rbp-78h] BYREF
  _QWORD *v43; // [rsp+90h] [rbp-70h]
  __int128 v44; // [rsp+98h] [rbp-68h] BYREF
  __int64 v45; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v46[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v47; // [rsp+D0h] [rbp-30h] BYREF
  char v48[144]; // [rsp+E0h] [rbp-20h] BYREF
  char v49; // [rsp+170h] [rbp+70h] BYREF
  ULONG_PTR *v50; // [rsp+178h] [rbp+78h] BYREF
  char v51; // [rsp+180h] [rbp+80h] BYREF
  char v52; // [rsp+188h] [rbp+88h] BYREF
  char v53; // [rsp+190h] [rbp+90h] BYREF
  char v54; // [rsp+1B8h] [rbp+B8h] BYREF
  char v55; // [rsp+1C0h] [rbp+C0h] BYREF
  char v56; // [rsp+1C8h] [rbp+C8h] BYREF
  char v57; // [rsp+1D0h] [rbp+D0h] BYREF
  ULONG_PTR v58; // [rsp+1D8h] [rbp+D8h]
  char v59; // [rsp+2E0h] [rbp+1E0h] BYREF
  char v60; // [rsp+2F0h] [rbp+1F0h] BYREF
  char v61; // [rsp+300h] [rbp+200h] BYREF
  char v62; // [rsp+310h] [rbp+210h] BYREF
  char v63; // [rsp+320h] [rbp+220h] BYREF
  char v64; // [rsp+330h] [rbp+230h] BYREF
  char v65; // [rsp+340h] [rbp+240h] BYREF
  char v66; // [rsp+350h] [rbp+250h] BYREF
  char v67; // [rsp+360h] [rbp+260h] BYREF
  char v68; // [rsp+370h] [rbp+270h] BYREF

  v36 = 0;
  v4 = (_QWORD *)(a1 + 128);
  CurrentThread = KeGetCurrentThread();
  LOBYTE(v3) = 0;
  v43 = a3;
  v39 = a2;
  v37 = v3;
  v8 = IoThreadToProcess(CurrentThread);
  v9 = *(_QWORD *)(a1 + 120);
  v10 = *(_DWORD *)(v9 + 48);
  if ( *(_BYTE *)(a1 + 88) )
  {
    if ( v8->SecurePid )
    {
      if ( RtlGetExtendedContextLength(v10, &ContextLength) >= 0 )
      {
        *(_DWORD *)(a1 + 92) = VslGetSetSecureContext(a2, v9, ContextLength);
        goto LABEL_69;
      }
      goto LABEL_68;
    }
    BaseTrapFrame = PspGetBaseTrapFrame((__int64)CurrentThread);
    v12 = CurrentThread;
    if ( !CurrentThread )
      v12 = KeGetCurrentThread();
    if ( (v12->Header.Reserved1 & 0x40) != 0 )
    {
      Object = CurrentThread->WaitBlock[3].Object;
      if ( (Object[20] & 4) != 0 )
      {
        v14 = *(_QWORD *)Object;
        v15 = PspRundownUmsThreadForApcDelivery(CurrentThread, &v36, v14, 0LL);
        *(_DWORD *)(a1 + 92) = v15;
        if ( v15 >= 0 )
        {
          if ( v39 )
          {
            *(_DWORD *)(a1 + 92) = PspSetUmsThreadContext(CurrentThread, *(_QWORD *)(a1 + 120), &v36);
          }
          else
          {
            v16 = *(_QWORD *)(a1 + 120);
            v17 = 0;
            if ( (v36 & 2) != 0 )
              v17 = KeCopyContextFromUmsContext(v16, *(_QWORD *)CurrentThread->WaitBlock[3].Object);
            else
              KeCopyContextFromUch(v16, CurrentThread->WaitBlock[3].SparePtr);
            *(_DWORD *)(a1 + 92) = v17;
          }
          v18 = KeClearUmsThreadKernelLock(v14);
          if ( v18 < 0 )
            *(_DWORD *)(a1 + 92) = v18;
          if ( (v36 & 8) != 0 )
          {
            LOBYTE(v19) = 1;
            updated = KeUpdateUmsThreadState(v14, 0LL, v19);
            if ( updated < 0 )
              *(_DWORD *)(a1 + 92) = updated;
          }
        }
        goto LABEL_69;
      }
    }
    v21 = CurrentThread;
    if ( !CurrentThread )
      v21 = KeGetCurrentThread();
    if ( (v21->Header.Reserved1 & 0x80u) != 0 )
    {
      CurrentUmsTeb = KeGetCurrentUmsTeb(CurrentThread);
      DoesTebMatchThread = KeDoesTebMatchThread((__int64)CurrentThread, CurrentUmsTeb);
      v25 = !DoesTebMatchThread;
      if ( v39 )
      {
        v26 = KeUpdatePrimaryThreadContext(v24, *(_QWORD *)(a1 + 120));
        *(_DWORD *)(a1 + 92) = v26;
        if ( v25 || v26 < 0 )
          goto LABEL_69;
      }
      else if ( !DoesTebMatchThread )
      {
        *(_DWORD *)(a1 + 92) = KeBuildPrimaryThreadContext(v24, 0, *(_QWORD *)(a1 + 120), 1, 0LL, 0LL);
        goto LABEL_69;
      }
    }
  }
  else
  {
    BaseTrapFrame = (__int64)CurrentThread->TrapFrame;
    if ( !BaseTrapFrame || *(_WORD *)(BaseTrapFrame + 368) != 16 )
    {
LABEL_68:
      *(_DWORD *)(a1 + 92) = -1073741823;
      goto LABEL_69;
    }
  }
  if ( (*(_BYTE *)(a1 + 89) & 2) != 0 )
  {
    if ( (unsigned __int8)RtlpGetStackLimits((__int64)&v41, (__int64)&v40) )
    {
      v28 = 0LL;
      memset(v46, 0, sizeof(v46));
      v42 = 0LL;
      v44 = *(_OWORD *)&xmmword_1402F6FB0;
      v45 = qword_1402F6FC0;
      RtlpCaptureContext();
      v29 = v58;
      v4[19] = &v49;
      v4[21] = &v51;
      v4[22] = &v52;
      v4[23] = &v53;
      v4[28] = &v54;
      v4[29] = &v55;
      v4[30] = &v56;
      v4[31] = &v57;
      v4[6] = &v59;
      v4[7] = &v60;
      v4[8] = &v61;
      v4[9] = &v62;
      v4[10] = &v63;
      v4[11] = &v64;
      v4[12] = &v65;
      v4[13] = &v66;
      v4[14] = &v67;
      v4[15] = &v68;
      v4[20] = &v50;
      v30 = (unsigned __int64)v50;
      v35[0] = 0;
      while ( v29 > 0xFFFF800000000000uLL && RtlpIsFrameInBoundsEx(&v41, v30, &v40, v46) )
      {
        v31 = RtlpLookupFunctionEntryForStackWalks(v29, (__int64)&v44);
        if ( v31 )
        {
          if ( (int)RtlpVirtualUnwind(
                      0,
                      *((__int64 *)&v44 + 1),
                      v29,
                      v31,
                      (__int64)v48,
                      v35,
                      &v47,
                      &v42,
                      (__int64)v4,
                      &v41,
                      &v40) < 0 )
            break;
          v28 = v42;
          v29 = v58;
          v30 = (unsigned __int64)v50;
        }
        else
        {
          if ( !*((_QWORD *)&v44 + 1) )
            goto LABEL_68;
          v29 = *v50;
          v30 = (unsigned __int64)++v50;
          v58 = v29;
        }
        if ( v28 == BaseTrapFrame )
        {
          LOBYTE(v3) = v37;
          goto LABEL_45;
        }
      }
      if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
        NT_ASSERT(
          "*** Ps:  Context unwind failure
    A stack frame did not unwind properly
    Perform a stack trace to find th"
          "e culprit
    Use gh to continue!!
");
    }
    goto LABEL_68;
  }
  v27 = PspGetBaseTrapFrame((__int64)CurrentThread) - 320;
  v4[19] = v27 + 256;
  v4[22] = v27 + 272;
  v4[23] = v27 + 264;
  v4[28] = v27 + 280;
  v4[29] = v27 + 288;
  v4[30] = v27 + 296;
  v4[31] = v27 + 304;
  v4[6] = v27 + 48;
  v4[7] = v27 + 64;
  v4[8] = v27 + 80;
  v4[9] = v27 + 96;
  v4[10] = v27 + 112;
  v4[11] = v27 + 128;
  v4[12] = v27 + 144;
  v4[13] = v27 + 160;
  v4[14] = v27 + 176;
  v4[15] = v27 + 192;
  v4[21] = BaseTrapFrame + 344;
LABEL_45:
  v32 = v10 & 0x100008;
  if ( v39 )
  {
    if ( v32 == 1048584 )
    {
      v3 = (unsigned __int8)v3;
      if ( *(_BYTE *)(a1 + 88) == 1 )
        v3 = 1;
      v37 = v3;
    }
    if ( CurrentThread[1].WaitBlock[3].Object
      && *(_BYTE *)(a1 + 88) == 1
      && ((*(_BYTE *)(a1 + 89) & 2) != 0 || (CurrentThread->Header.Reserved1 & 8) != 0) )
    {
      PspSetContextState(CurrentThread, *(_QWORD *)(a1 + 120));
      *(_DWORD *)(a1 + 92) = 0;
    }
    else
    {
      PspSetContext(BaseTrapFrame, (__int64)v4, *(_QWORD *)(a1 + 120), *(_BYTE *)(a1 + 88));
      *(_DWORD *)(a1 + 92) = 0;
    }
  }
  else
  {
    if ( v32 == 1048584 && *(_BYTE *)(a1 + 88) == 1 )
      _fxsave((void *)(*(_QWORD *)(a1 + 120) + 256LL));
    if ( CurrentThread[1].WaitBlock[3].Object && *(_BYTE *)(a1 + 88) == 1 )
    {
      v33 = *(CONTEXT **)(a1 + 120);
      PspGetContext(BaseTrapFrame, (__int64)v4, (__int64)v33);
      if ( (CurrentThread->Header.Reserved1 & 8) != 0 )
      {
        RtlCopyContext(v33, v33->ContextFlags, (PCONTEXT)CurrentThread[1].WaitBlock[3].Object);
        *(_DWORD *)(a1 + 92) = 0;
        goto LABEL_69;
      }
    }
    else
    {
      PspGetContext(BaseTrapFrame, (__int64)v4, *(_QWORD *)(a1 + 120));
    }
    *(_DWORD *)(a1 + 92) = 0;
  }
LABEL_69:
  if ( (*(_BYTE *)(a1 + 89) & 1) != 0 )
    *v43 = a1 + 96;
  else
    *v43 = 0LL;
  return (unsigned __int8)v37;
}
