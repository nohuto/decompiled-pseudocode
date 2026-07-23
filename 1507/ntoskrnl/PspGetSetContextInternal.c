/*
 * XREFs of PspGetSetContextInternal @ 0x14044DC60
 * Callers:
 *     PspGetSetContextSpecialApc @ 0x14018B2A0 (PspGetSetContextSpecialApc.c)
 * Callees:
 *     RtlpVirtualUnwind @ 0x14001B25C (RtlpVirtualUnwind.c)
 *     RtlpGetStackLimits @ 0x14001D5A0 (RtlpGetStackLimits.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x14001F200 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpIsFrameInBoundsEx @ 0x14001F5EC (RtlpIsFrameInBoundsEx.c)
 *     RtlGetExtendedContextLength @ 0x140020688 (RtlGetExtendedContextLength.c)
 *     IoThreadToProcess @ 0x1400507F0 (IoThreadToProcess.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlpCaptureContext @ 0x14018B540 (RtlpCaptureContext.c)
 *     KeDoesTebMatchThread @ 0x14020C0F0 (KeDoesTebMatchThread.c)
 *     KeGetCurrentUmsTeb @ 0x14020C108 (KeGetCurrentUmsTeb.c)
 *     PspGetContext @ 0x14044E260 (PspGetContext.c)
 *     PspSetContext @ 0x14044E5F4 (PspSetContext.c)
 *     HvlGetSetSecureContext @ 0x140670B1C (HvlGetSetSecureContext.c)
 *     KeClearUmsThreadKernelLock @ 0x140699C9C (KeClearUmsThreadKernelLock.c)
 *     KeUpdateUmsThreadState @ 0x140699F78 (KeUpdateUmsThreadState.c)
 *     KeBuildPrimaryThreadContext @ 0x14069A6C0 (KeBuildPrimaryThreadContext.c)
 *     KeCopyContextFromUch @ 0x14069A9D8 (KeCopyContextFromUch.c)
 *     KeCopyContextFromUmsContext @ 0x14069AC94 (KeCopyContextFromUmsContext.c)
 *     KeUpdatePrimaryThreadContext @ 0x14069B328 (KeUpdatePrimaryThreadContext.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1406C6990 (PspRundownUmsThreadForApcDelivery.c)
 *     PspSetUmsThreadContext @ 0x1406C6B54 (PspSetUmsThreadContext.c)
 */

_BOOL8 __fastcall PspGetSetContextInternal(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  bool v7; // r13
  PEPROCESS v8; // rax
  __int64 v9; // r14
  ULONG v10; // r12d
  _KTRAP_FRAME *TrapFrame; // r14
  _QWORD *j; // rcx
  char Reserved1; // cl
  _QWORD *Object; // rdx
  __int64 v15; // rsi
  int v16; // eax
  __int64 v17; // rcx
  int v18; // r14d
  int v19; // eax
  __int64 v20; // r8
  int updated; // eax
  ULONG64 CurrentUmsTeb; // rax
  bool DoesTebMatchThread; // al
  __int64 v24; // rcx
  bool v25; // r15
  int v26; // eax
  _QWORD *i; // rcx
  __int64 v28; // r15
  ULONG_PTR v29; // rdi
  unsigned __int64 v30; // rax
  unsigned int *v31; // rax
  int v32; // r12d
  char v34[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v35; // [rsp+64h] [rbp-9Ch] BYREF
  ULONG ContextLength; // [rsp+68h] [rbp-98h] BYREF
  __int64 v37; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v38; // [rsp+78h] [rbp-88h]
  unsigned __int64 v39; // [rsp+80h] [rbp-80h] BYREF
  __int64 v40; // [rsp+88h] [rbp-78h]
  unsigned __int64 v41; // [rsp+90h] [rbp-70h] BYREF
  __int128 v42; // [rsp+98h] [rbp-68h] BYREF
  __int64 v43; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v44[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v45; // [rsp+D0h] [rbp-30h] BYREF
  char v46[144]; // [rsp+E0h] [rbp-20h] BYREF
  char v47; // [rsp+170h] [rbp+70h] BYREF
  ULONG_PTR *v48; // [rsp+178h] [rbp+78h] BYREF
  char v49; // [rsp+180h] [rbp+80h] BYREF
  char v50; // [rsp+188h] [rbp+88h] BYREF
  char v51; // [rsp+190h] [rbp+90h] BYREF
  char v52; // [rsp+1B8h] [rbp+B8h] BYREF
  char v53; // [rsp+1C0h] [rbp+C0h] BYREF
  char v54; // [rsp+1C8h] [rbp+C8h] BYREF
  char v55; // [rsp+1D0h] [rbp+D0h] BYREF
  ULONG_PTR v56; // [rsp+1D8h] [rbp+D8h]
  char v57; // [rsp+2E0h] [rbp+1E0h] BYREF
  char v58; // [rsp+2F0h] [rbp+1F0h] BYREF
  char v59; // [rsp+300h] [rbp+200h] BYREF
  char v60; // [rsp+310h] [rbp+210h] BYREF
  char v61; // [rsp+320h] [rbp+220h] BYREF
  char v62; // [rsp+330h] [rbp+230h] BYREF
  char v63; // [rsp+340h] [rbp+240h] BYREF
  char v64; // [rsp+350h] [rbp+250h] BYREF
  char v65; // [rsp+360h] [rbp+260h] BYREF
  char v66; // [rsp+370h] [rbp+270h] BYREF

  v35 = 0;
  v3 = (_QWORD *)(a1 + 128);
  CurrentThread = KeGetCurrentThread();
  v38 = a3;
  v40 = a2;
  v7 = 0;
  v8 = IoThreadToProcess(CurrentThread);
  v9 = *(_QWORD *)(a1 + 120);
  v10 = *(_DWORD *)(v9 + 48);
  if ( !*(_BYTE *)(a1 + 88) )
  {
    TrapFrame = CurrentThread->TrapFrame;
    if ( !TrapFrame || TrapFrame->SegCs != 16 )
      goto LABEL_4;
LABEL_32:
    if ( (*(_BYTE *)(a1 + 89) & 2) != 0 )
    {
      if ( (unsigned __int8)RtlpGetStackLimits((__int64)&v39, (__int64)&v41) )
      {
        v28 = 0LL;
        memset(v44, 0, sizeof(v44));
        v37 = 0LL;
        v42 = *(_OWORD *)&xmmword_14031EF70;
        v43 = qword_14031EF80;
        RtlpCaptureContext();
        v29 = v56;
        v3[19] = &v47;
        v3[21] = &v49;
        v3[22] = &v50;
        v3[23] = &v51;
        v3[28] = &v52;
        v3[29] = &v53;
        v3[30] = &v54;
        v3[31] = &v55;
        v3[6] = &v57;
        v3[7] = &v58;
        v3[8] = &v59;
        v3[9] = &v60;
        v3[10] = &v61;
        v3[11] = &v62;
        v3[12] = &v63;
        v3[13] = &v64;
        v3[14] = &v65;
        v3[15] = &v66;
        v3[20] = &v48;
        v30 = (unsigned __int64)v48;
        v34[0] = 0;
        while ( v29 > (unsigned __int64)MmSystemRangeStart && RtlpIsFrameInBoundsEx(&v39, v30, &v41, v44) )
        {
          v31 = RtlpLookupFunctionEntryForStackWalks(v29, (__int64)&v42);
          if ( v31 )
          {
            if ( (int)RtlpVirtualUnwind(
                        0,
                        *((__int64 *)&v42 + 1),
                        v29,
                        v31,
                        (__int64)v46,
                        v34,
                        &v45,
                        &v37,
                        (__int64)v3,
                        &v39,
                        &v41) < 0 )
              goto LABEL_4;
            v28 = v37;
            v29 = v56;
            v30 = (unsigned __int64)v48;
          }
          else
          {
            if ( !*((_QWORD *)&v42 + 1) )
              goto LABEL_4;
            v29 = *v48;
            v30 = (unsigned __int64)++v48;
            v56 = v29;
          }
          if ( (_KTRAP_FRAME *)v28 == TrapFrame )
            goto LABEL_46;
        }
      }
      goto LABEL_4;
    }
    for ( i = CurrentThread->InitialStack; (i[1] & 1) != 0; i = (_QWORD *)i[5] )
      ;
    v3[19] = i - 58;
    v3[22] = i - 56;
    v3[23] = i - 57;
    v3[28] = i - 55;
    v3[29] = i - 54;
    v3[30] = i - 53;
    v3[31] = i - 52;
    v3[6] = i - 84;
    v3[7] = i - 82;
    v3[8] = i - 80;
    v3[9] = i - 78;
    v3[10] = i - 76;
    v3[11] = i - 74;
    v3[12] = i - 72;
    v3[13] = i - 70;
    v3[14] = i - 68;
    v3[15] = i - 66;
    v3[21] = &TrapFrame->Rbp;
LABEL_46:
    v32 = v10 & 0x100008;
    if ( v40 )
    {
      if ( v32 == 1048584 )
        v7 = *(_BYTE *)(a1 + 88) == 1;
      PspSetContext(TrapFrame, v3, *(_QWORD *)(a1 + 120), *(unsigned __int8 *)(a1 + 88));
      *(_DWORD *)(a1 + 92) = 0;
    }
    else
    {
      if ( v32 == 1048584 && *(_BYTE *)(a1 + 88) == 1 )
        _fxsave((void *)(*(_QWORD *)(a1 + 120) + 256LL));
      PspGetContext(TrapFrame, v3, *(_QWORD *)(a1 + 120));
      *(_DWORD *)(a1 + 92) = 0;
    }
    goto LABEL_5;
  }
  if ( !v8->SecurePid )
  {
    for ( j = CurrentThread->InitialStack; (j[1] & 1) != 0; j = (_QWORD *)j[5] )
      ;
    TrapFrame = (_KTRAP_FRAME *)(j - 50);
    Reserved1 = CurrentThread->Header.Reserved1;
    if ( (Reserved1 & 0x40) != 0 )
    {
      Object = CurrentThread->WaitBlock[3].Object;
      if ( (Object[10] & 4) != 0 )
      {
        v15 = *Object;
        v16 = PspRundownUmsThreadForApcDelivery(CurrentThread, &v35, *Object, 0LL);
        *(_DWORD *)(a1 + 92) = v16;
        if ( v16 >= 0 )
        {
          if ( a2 )
          {
            *(_DWORD *)(a1 + 92) = PspSetUmsThreadContext(CurrentThread, *(_QWORD *)(a1 + 120), &v35);
          }
          else
          {
            v17 = *(_QWORD *)(a1 + 120);
            v18 = 0;
            if ( (v35 & 2) != 0 )
              v18 = KeCopyContextFromUmsContext(v17, *(_QWORD *)CurrentThread->WaitBlock[3].Object);
            else
              KeCopyContextFromUch(v17, CurrentThread->WaitBlock[3].SparePtr);
            *(_DWORD *)(a1 + 92) = v18;
          }
          v19 = KeClearUmsThreadKernelLock(v15);
          if ( v19 < 0 )
            *(_DWORD *)(a1 + 92) = v19;
          if ( (v35 & 8) != 0 )
          {
            LOBYTE(v20) = 1;
            updated = KeUpdateUmsThreadState(v15, 0LL, v20);
            if ( updated < 0 )
              *(_DWORD *)(a1 + 92) = updated;
          }
        }
        goto LABEL_5;
      }
    }
    if ( Reserved1 < 0 )
    {
      CurrentUmsTeb = KeGetCurrentUmsTeb(CurrentThread);
      DoesTebMatchThread = KeDoesTebMatchThread((__int64)CurrentThread, CurrentUmsTeb);
      v25 = !DoesTebMatchThread;
      if ( v40 )
      {
        v26 = KeUpdatePrimaryThreadContext(v24, *(_QWORD *)(a1 + 120));
        *(_DWORD *)(a1 + 92) = v26;
        if ( v25 || v26 < 0 )
          goto LABEL_5;
      }
      else if ( !DoesTebMatchThread )
      {
        *(_DWORD *)(a1 + 92) = KeBuildPrimaryThreadContext(v24, 0, *(_QWORD *)(a1 + 120), 1, 0LL, 0LL);
        goto LABEL_5;
      }
    }
    goto LABEL_32;
  }
  if ( RtlGetExtendedContextLength(v10, &ContextLength) < 0 )
  {
LABEL_4:
    *(_DWORD *)(a1 + 92) = -1073741823;
    goto LABEL_5;
  }
  *(_DWORD *)(a1 + 92) = HvlGetSetSecureContext(a2, v9, ContextLength);
LABEL_5:
  if ( (*(_BYTE *)(a1 + 89) & 1) != 0 )
    *v38 = a1 + 96;
  else
    *v38 = 0LL;
  return v7;
}
