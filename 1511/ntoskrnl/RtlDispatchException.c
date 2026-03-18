/*
 * XREFs of RtlDispatchException @ 0x140024440
 * Callers:
 *     KiDispatchException @ 0x140022BB4 (KiDispatchException.c)
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     RtlRaiseException @ 0x1401F7A50 (RtlRaiseException.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     RtlpCopyContext @ 0x140025C60 (RtlpCopyContext.c)
 *     RtlLookupFunctionEntry @ 0x140025E10 (RtlLookupFunctionEntry.c)
 *     RtlpIsFrameInBounds @ 0x140026130 (RtlpIsFrameInBounds.c)
 *     RtlpGetStackLimits @ 0x140028310 (RtlpGetStackLimits.c)
 *     RtlVirtualUnwind @ 0x1400F0A68 (RtlVirtualUnwind.c)
 *     RtlpUnwindEpilogue @ 0x1400F34A4 (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x1400F3634 (RtlpUnwindOpSlots.c)
 *     RtlpSameFunction @ 0x1401348A0 (RtlpSameFunction.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     RtlpExecuteHandlerForException @ 0x14015C230 (RtlpExecuteHandlerForException.c)
 *     RtlpLogExceptionDispatch @ 0x1401F6C60 (RtlpLogExceptionDispatch.c)
 *     RtlpLogExceptionHandler @ 0x1401F6DF8 (RtlpLogExceptionHandler.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

BOOLEAN __stdcall RtlDispatchException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT Context)
{
  BOOLEAN v2; // si
  PEXCEPTION_RECORD v4; // r14
  int v5; // r12d
  DWORD64 Rip; // r15
  struct _UNWIND_HISTORY_TABLE *p_HistoryTable; // rdi
  PRUNTIME_FUNCTION v8; // rax
  PRUNTIME_FUNCTION v9; // r13
  unsigned __int64 v10; // rbx
  unsigned int v11; // edi
  unsigned int v12; // esi
  unsigned __int8 v13; // dl
  unsigned __int64 Rsp; // r9
  char v15; // cl
  int v16; // eax
  __int16 v17; // ax
  unsigned int v18; // r10d
  int v19; // r8d
  int v20; // ecx
  unsigned int j; // r9d
  __int16 v22; // ax
  int v23; // edx
  unsigned int v24; // edx
  _DWORD *p_BeginAddress; // r12
  unsigned int v26; // esi
  __int64 v27; // rbx
  char v28; // r14
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rdx
  __int64 v31; // r8
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // r10
  unsigned __int64 *v35; // rdx
  int v36; // edx
  unsigned int v37; // edx
  int v38; // ecx
  __int64 v39; // rbx
  int v40; // eax
  unsigned __int64 v41; // rbx
  unsigned int v42; // eax
  unsigned __int64 *v43; // rdx
  __int64 v44; // r8
  unsigned __int64 v45; // rdx
  _M128A *v46; // rcx
  char v47; // dl
  __int64 v48; // rsi
  _BYTE *v49; // rcx
  char v50; // al
  char v51; // dl
  DWORD64 v52; // r10
  int v54; // eax
  int v55; // eax
  __int64 i; // r14
  __int64 v57; // rcx
  unsigned int v58; // ecx
  char v59; // r8
  _BYTE *v60; // rdi
  int v61; // eax
  unsigned __int64 BeginAddress; // rcx
  unsigned __int64 v63; // rdi
  _DWORD *v64; // rax
  char *v65; // rdx
  char v66; // al
  char v67; // al
  char v68; // cl
  char v69; // r10
  unsigned __int64 v70; // rax
  unsigned __int64 *v71; // r9
  _M128A *v72; // rcx
  char v73; // [rsp+40h] [rbp-C0h]
  unsigned __int64 EstablisherFrame; // [rsp+48h] [rbp-B8h] BYREF
  int v75; // [rsp+50h] [rbp-B0h]
  unsigned __int64 ImageBase; // [rsp+58h] [rbp-A8h] BYREF
  PEXCEPTION_RECORD v77; // [rsp+60h] [rbp-A0h]
  unsigned int v78; // [rsp+68h] [rbp-98h]
  unsigned __int64 v79; // [rsp+70h] [rbp-90h]
  PVOID HandlerData; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v81; // [rsp+80h] [rbp-80h]
  struct _UNWIND_HISTORY_TABLE *v82; // [rsp+88h] [rbp-78h]
  unsigned __int64 v83; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v84; // [rsp+98h] [rbp-68h] BYREF
  DWORD64 ControlPc; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v86; // [rsp+A8h] [rbp-58h]
  PRUNTIME_FUNCTION FunctionEntry; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v88; // [rsp+B8h] [rbp-48h]
  struct _CONTEXT *p_ContextRecord; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v90; // [rsp+D0h] [rbp-30h]
  PVOID v91; // [rsp+D8h] [rbp-28h]
  struct _UNWIND_HISTORY_TABLE *v92; // [rsp+E0h] [rbp-20h]
  int v93; // [rsp+E8h] [rbp-18h]
  PCONTEXT v94; // [rsp+F0h] [rbp-10h]
  struct _CONTEXT ContextRecord; // [rsp+100h] [rbp+0h] BYREF
  struct _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+5D0h] [rbp+4D0h] BYREF

  v2 = 0;
  v94 = Context;
  v4 = ExceptionRecord;
  v77 = ExceptionRecord;
  v73 = 0;
  if ( (NtGlobalFlag & 0x800000) != 0 )
  {
    v73 = 1;
    RtlpLogExceptionDispatch();
  }
  v5 = v4->ExceptionFlags & 1;
  v75 = v5;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v83, &v84) )
  {
    v5 |= 8u;
    goto LABEL_122;
  }
  RtlpCopyContext(&ContextRecord, Context);
  Rip = Context->Rip;
  p_HistoryTable = &HistoryTable;
  v82 = &HistoryTable;
  v81 = 0LL;
  HistoryTable.Count = 0;
  HistoryTable.HighAddress = 0LL;
  *(_DWORD *)&HistoryTable.LocalHint = 0x1000000;
  HistoryTable.LowAddress = -1LL;
  while ( 1 )
  {
    v8 = RtlLookupFunctionEntry(Rip, &ImageBase, p_HistoryTable);
    v9 = v8;
    if ( v8 )
      break;
    if ( Rip != *(_QWORD *)ContextRecord.Rsp )
    {
      Rsp = ContextRecord.Rsp + 8;
      ContextRecord.Rip = *(_QWORD *)ContextRecord.Rsp;
      ContextRecord.Rsp += 8LL;
LABEL_49:
      Rip = ContextRecord.Rip;
      if ( (unsigned __int8)RtlpIsFrameInBounds(&v83, Rsp, &v84) == 1 )
        continue;
    }
    goto LABEL_224;
  }
  v10 = ImageBase + v8->UnwindData;
  v79 = 0LL;
  if ( Rip <= (unsigned __int64)MmHighestUserAddress && (v10 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v11 = Rip - v8->BeginAddress - ImageBase;
  v12 = *(_BYTE *)v10 & 7;
  v13 = *(_BYTE *)(v10 + 3);
  if ( (v13 & 0xF) != 0 )
  {
    if ( v11 >= *(unsigned __int8 *)(v10 + 1) || (*(_BYTE *)v10 & 0x20) != 0 )
    {
      Rsp = ContextRecord.Rsp;
      v15 = *(_BYTE *)(v10 + 3);
      v16 = v13;
LABEL_10:
      EstablisherFrame = *(&ContextRecord.Rax + (v15 & 0xF)) - (int)(v16 & 0xFFFFFFF0);
      goto LABEL_13;
    }
    for ( i = 0LL;
          (unsigned int)i < *(unsigned __int8 *)(v10 + 2);
          i = (unsigned int)RtlpUnwindOpSlots(v57) + (unsigned int)i )
    {
      v57 = *(unsigned __int16 *)(v10 + 2 * i + 4);
      if ( (BYTE1(v57) & 0xF) == 3 )
        break;
    }
    v58 = *(unsigned __int8 *)(v10 + 2 * i + 4);
    Rsp = ContextRecord.Rsp;
    v4 = v77;
    if ( v11 >= v58 )
    {
      v16 = *(unsigned __int8 *)(v10 + 3);
      v15 = *(_BYTE *)(v10 + 3);
      goto LABEL_10;
    }
  }
  else
  {
    Rsp = ContextRecord.Rsp;
  }
  EstablisherFrame = Rsp;
LABEL_13:
  if ( v12 >= 2 )
  {
    if ( !*(_BYTE *)(v10 + 2) )
      goto LABEL_22;
    v17 = *(_WORD *)(v10 + 4);
    if ( (HIBYTE(v17) & 0xF) == 6 )
    {
      v18 = (unsigned __int8)v17;
      v19 = Rip - ImageBase;
      if ( (v17 & 0x1000) != 0 )
      {
        v20 = v9->EndAddress - (unsigned __int8)v17;
        if ( v19 - v20 < (unsigned int)(unsigned __int8)v17 )
        {
LABEL_129:
          RtlpUnwindEpilogue(ImageBase, Rip, v19 - v20, (_DWORD)v9, (__int64)&ContextRecord, 0LL, 0LL, 0LL);
          Rsp = ContextRecord.Rsp;
          goto LABEL_44;
        }
      }
      for ( j = 1; j < *(unsigned __int8 *)(v10 + 2); ++j )
      {
        v22 = *(_WORD *)(v10 + 2LL * j + 4);
        if ( (HIBYTE(v22) & 0xF) != 6 )
          break;
        v23 = (unsigned __int8)v22 + (HIBYTE(v22) >> 4 << 8);
        if ( !v23 )
          break;
        v20 = v9->EndAddress - v23;
        if ( v19 - v20 < v18 )
          goto LABEL_129;
      }
    }
    goto LABEL_21;
  }
  v47 = *(_BYTE *)Rip;
  v48 = 0LL;
  v49 = (_BYTE *)Rip;
  if ( *(_BYTE *)Rip == 72 )
  {
    v50 = *(_BYTE *)(Rip + 1);
    if ( v50 == -125 && *(_BYTE *)(Rip + 2) == 0xC4 )
    {
      v49 = (_BYTE *)(Rip + 4);
      goto LABEL_89;
    }
    if ( v50 == -127 && *(_BYTE *)(Rip + 2) == 0xC4 )
      goto LABEL_157;
  }
  if ( (v47 & 0xFE) != 0x48 )
    goto LABEL_89;
  if ( *(_BYTE *)(Rip + 1) != 0x8D )
    goto LABEL_89;
  v54 = *(_BYTE *)(Rip + 2) & 7;
  v48 = v54 | (8 * (v47 & 1u));
  if ( !(v54 | (8 * (v47 & 1))) || (_DWORD)v48 != (*(_BYTE *)(v10 + 3) & 0xF) )
    goto LABEL_89;
  v59 = *(_BYTE *)(Rip + 2) & 0xF8;
  if ( v59 == 96 )
  {
    v49 = (_BYTE *)(Rip + 4);
    goto LABEL_89;
  }
  if ( v59 == -96 )
LABEL_157:
    v49 = (_BYTE *)(Rip + 7);
  while ( 1 )
  {
LABEL_89:
    while ( (*v49 & 0xF8) == 0x58 )
      ++v49;
    if ( (*v49 & 0xF0) != 0x40 || (v49[1] & 0xF8) != 0x58 )
      break;
    v49 += 2;
  }
  if ( *v49 == 0xF2 )
    ++v49;
  v51 = *v49;
  if ( (unsigned __int8)(*v49 + 62) <= 1u || v51 == -13 && v49[1] == 0xC3 )
    goto LABEL_175;
  if ( ((v51 + 23) & 0xFD) != 0 )
  {
    if ( v51 == -1 && v49[1] == 37 || (v51 & 0xF8) == 0x48 && v49[1] == 0xFF && (v49[2] & 0x38) == 0x20 )
      goto LABEL_175;
LABEL_22:
    v24 = 0;
    p_BeginAddress = &v9->BeginAddress;
    v78 = 0;
    while ( 1 )
    {
      v26 = Rip - ImageBase - *p_BeginAddress;
      v27 = 0LL;
      v28 = 0;
      v29 = ImageBase + (unsigned int)p_BeginAddress[2];
      if ( Rip <= (unsigned __int64)MmHighestUserAddress )
      {
        if ( (v29 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        Rsp = ContextRecord.Rsp;
      }
      if ( *(_BYTE *)(v29 + 2) )
      {
        do
        {
          v30 = v29 + 2 * v27;
          v31 = *(unsigned __int8 *)(v30 + 5) >> 4;
          if ( v26 < *(unsigned __int8 *)(v30 + 4) )
          {
            v55 = RtlpUnwindOpSlots(*(unsigned __int16 *)(v30 + 4));
            Rsp = ContextRecord.Rsp;
            v27 = (unsigned int)(v55 + v27);
          }
          else
          {
            if ( (*(_BYTE *)(v29 + 2 * v27 + 5) & 0xF) != 0 )
            {
              if ( (*(_BYTE *)(v29 + 2 * v27 + 5) & 0xF) != 4 )
              {
                switch ( *(_BYTE *)(v29 + 2 * v27 + 5) & 0xF )
                {
                  case 1:
                    v27 = (unsigned int)(v27 + 1);
                    v36 = *(unsigned __int16 *)(v29 + 2 * v27 + 4);
                    if ( (_DWORD)v31 )
                    {
                      v27 = (unsigned int)(v27 + 1);
                      v37 = (*(unsigned __int16 *)(v29 + 2 * v27 + 4) << 16) + v36;
                    }
                    else
                    {
                      v37 = 8 * v36;
                    }
                    Rsp += v37;
                    goto LABEL_32;
                  case 2:
                    Rsp += (unsigned int)(8 * v31 + 8);
                    goto LABEL_32;
                  case 3:
                    ContextRecord.Rsp = *(&ContextRecord.Rax + (*(_BYTE *)(v29 + 3) & 0xF));
                    Rsp = ContextRecord.Rsp - (*(_BYTE *)(v29 + 3) & 0xF0);
                    goto LABEL_32;
                  case 5:
                    v27 = (unsigned int)(v27 + 2);
                    if ( Rip <= (unsigned __int64)MmHighestUserAddress
                      && (((_BYTE)EstablisherFrame + (unsigned __int8)*(_WORD *)(v29 + 2LL * (unsigned int)(v27 - 1) + 4)) & 3) != 0 )
                    {
                      ExRaiseDatatypeMisalignment();
                    }
                    *(&ContextRecord.Rax + v31) = *(_QWORD *)(EstablisherFrame
                                                            + *(unsigned __int16 *)(v29
                                                                                  + 2LL * (unsigned int)(v27 - 1)
                                                                                  + 4)
                                                            + (*(unsigned __int16 *)(v29 + 2 * v27 + 4) << 16));
                    Rsp = ContextRecord.Rsp;
                    goto LABEL_33;
                  case 6:
                    LODWORD(v27) = v27 + 1;
                    goto LABEL_33;
                  case 7:
                    LODWORD(v27) = v27 + 2;
                    goto LABEL_33;
                  case 8:
                    v27 = (unsigned int)(v27 + 1);
                    v45 = EstablisherFrame + 16 * (unsigned int)*(unsigned __int16 *)(v29 + 2 * v27 + 4);
                    if ( Rip <= (unsigned __int64)MmHighestUserAddress && (v45 & 3) != 0 )
                      ExRaiseDatatypeMisalignment();
                    v46 = &ContextRecord.VectorRegister[(unsigned int)v31 - 22];
                    v46->Low = *(_QWORD *)v45;
                    v46->High = *(_QWORD *)(v45 + 8);
                    Rsp = ContextRecord.Rsp;
                    goto LABEL_33;
                  case 9:
                    v27 = (unsigned int)(v27 + 2);
                    v71 = (unsigned __int64 *)(EstablisherFrame
                                             + *(unsigned __int16 *)(v29 + 2LL * (unsigned int)(v27 - 1) + 4)
                                             + (*(unsigned __int16 *)(v29 + 2 * v27 + 4) << 16));
                    if ( Rip <= (unsigned __int64)MmHighestUserAddress
                      && (((_BYTE)EstablisherFrame + (unsigned __int8)*(_WORD *)(v29 + 2LL * (unsigned int)(v27 - 1) + 4)) & 3) != 0 )
                    {
                      ExRaiseDatatypeMisalignment();
                    }
                    v72 = &ContextRecord.VectorRegister[(unsigned int)v31 - 22];
                    v72->Low = *v71;
                    v72->High = v71[1];
                    Rsp = ContextRecord.Rsp;
                    goto LABEL_33;
                  case 0xA:
                    v43 = (unsigned __int64 *)(Rsp + 24);
                    v28 = 1;
                    if ( (_DWORD)v31 )
                    {
                      Rsp += 8LL;
                      ++v43;
                    }
                    if ( Rip <= (unsigned __int64)MmHighestUserAddress )
                    {
                      if ( (Rsp & 3) != 0 )
                        ExRaiseDatatypeMisalignment();
                      if ( Rip <= (unsigned __int64)MmHighestUserAddress && ((unsigned __int8)v43 & 3) != 0 )
                        ExRaiseDatatypeMisalignment();
                    }
                    ContextRecord.Rip = *(_QWORD *)Rsp;
                    Rsp = *v43;
                    goto LABEL_32;
                  default:
                    RtlRaiseStatus(-1073741569);
                }
              }
              v27 = (unsigned int)(v27 + 1);
              v35 = (unsigned __int64 *)(EstablisherFrame + 8 * (unsigned int)*(unsigned __int16 *)(v29 + 2 * v27 + 4));
              if ( Rip <= (unsigned __int64)MmHighestUserAddress && ((unsigned __int8)v35 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              *(&ContextRecord.Rax + v31) = *v35;
              Rsp = ContextRecord.Rsp;
            }
            else
            {
              if ( Rip <= (unsigned __int64)MmHighestUserAddress && (Rsp & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              *(&ContextRecord.Rax + v31) = *(_QWORD *)Rsp;
              Rsp = ContextRecord.Rsp + 8;
LABEL_32:
              ContextRecord.Rsp = Rsp;
            }
LABEL_33:
            v27 = (unsigned int)(v27 + 1);
          }
        }
        while ( (unsigned int)v27 < *(unsigned __int8 *)(v29 + 2) );
        v24 = v78;
      }
      if ( (*(_BYTE *)v29 & 0x20) == 0 )
        break;
      v42 = *(unsigned __int8 *)(v29 + 2);
      if ( (v42 & 1) != 0 )
        ++v42;
      p_BeginAddress = (_DWORD *)(v29 + 2 * (v42 + 2LL));
      if ( Rip <= (unsigned __int64)MmHighestUserAddress )
      {
        if ( ((unsigned __int8)p_BeginAddress & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        Rsp = ContextRecord.Rsp;
      }
      v78 = ++v24;
      if ( v24 > 0x20 )
        RtlRaiseStatus(-1073741569);
    }
    if ( !v28 )
    {
      if ( Rip <= (unsigned __int64)MmHighestUserAddress )
      {
        if ( (Rsp & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        Rsp = ContextRecord.Rsp;
      }
      v32 = *(_QWORD *)Rsp;
      Rsp += 8LL;
      ContextRecord.Rsp = Rsp;
      ContextRecord.Rip = v32;
    }
    v33 = ImageBase + (unsigned int)p_BeginAddress[2];
    if ( Rip <= (unsigned __int64)MmHighestUserAddress )
    {
      if ( (v33 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      Rsp = ContextRecord.Rsp;
    }
    if ( (int)Rip - (int)ImageBase - *p_BeginAddress < (unsigned int)*(unsigned __int8 *)(v33 + 1)
      || (*(_BYTE *)v33 & 8) == 0 )
    {
      v5 = v75;
      v4 = v77;
      goto LABEL_44;
    }
    v44 = *(unsigned __int8 *)(v33 + 2);
    if ( (v44 & 1) != 0 )
      v44 = (unsigned int)(v44 + 1);
    v34 = ImageBase + *(unsigned int *)(v33 + 2 * v44 + 4);
    v4 = v77;
    v5 = v75;
    HandlerData = (PVOID)(v33 + 2 * ((unsigned int)(v44 + 2) + 2LL));
    goto LABEL_45;
  }
  v60 = &v49[-ImageBase];
  if ( v51 == -21 )
    v61 = (char)v49[1] + 2;
  else
    v61 = *(_DWORD *)(v49 + 1) + 5;
  BeginAddress = v9->BeginAddress;
  v63 = (unsigned __int64)&v60[v61];
  if ( v63 < BeginAddress || v63 >= v9->EndAddress )
  {
    v64 = (_DWORD *)RtlpSameFunction(v9, ImageBase, v63 + ImageBase);
    if ( v64 && v63 != *v64 )
    {
LABEL_21:
      Rsp = ContextRecord.Rsp;
      goto LABEL_22;
    }
    Rsp = ContextRecord.Rsp;
    goto LABEL_175;
  }
  if ( v63 != BeginAddress || (*(_BYTE *)v10 & 0x20) != 0 )
    goto LABEL_22;
LABEL_175:
  v65 = (char *)Rip;
  if ( (*(_BYTE *)Rip & 0xF8) != 0x48 )
    goto LABEL_188;
  v66 = *(_BYTE *)(Rip + 1);
  switch ( v66 )
  {
    case -125:
      v65 = (char *)(Rip + 4);
      Rsp += *(char *)(Rip + 3);
      goto LABEL_187;
    case -127:
      Rsp += *(unsigned __int8 *)(Rip + 3) | ((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8);
LABEL_185:
      v65 = (char *)(Rip + 7);
      goto LABEL_187;
    case -115:
      v67 = *(_BYTE *)(Rip + 2) & 0xF8;
      if ( v67 == 96 )
      {
        v65 = (char *)(Rip + 4);
        ContextRecord.Rsp = *(&ContextRecord.Rax + v48);
        Rsp = *(char *)(Rip + 3) + ContextRecord.Rsp;
        goto LABEL_187;
      }
      if ( v67 == -96 )
      {
        Rsp = *(&ContextRecord.Rax + v48)
            + (*(unsigned __int8 *)(Rip + 3) | ((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8));
        goto LABEL_185;
      }
      break;
  }
  while ( 1 )
  {
LABEL_188:
    v68 = *v65;
    if ( (*v65 & 0xF8) == 0x58 )
    {
      if ( Rip <= (unsigned __int64)MmHighestUserAddress && (Rsp & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(&ContextRecord.Rax + (v68 & 7)) = *(_QWORD *)Rsp;
      Rsp = ContextRecord.Rsp + 8;
      ++v65;
      goto LABEL_187;
    }
    if ( (v68 & 0xF0) != 0x40 )
      break;
    v69 = v65[1];
    if ( (v69 & 0xF8) != 0x58 )
      break;
    if ( Rip <= (unsigned __int64)MmHighestUserAddress && (Rsp & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    *(&ContextRecord.Rax + (v69 & 7 | (8 * (v68 & 1u)))) = *(_QWORD *)Rsp;
    Rsp = ContextRecord.Rsp + 8;
    v65 += 2;
LABEL_187:
    ContextRecord.Rsp = Rsp;
  }
  if ( Rip <= (unsigned __int64)MmHighestUserAddress )
  {
    if ( (Rsp & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    Rsp = ContextRecord.Rsp;
  }
  v70 = *(_QWORD *)Rsp;
  Rsp += 8LL;
  ContextRecord.Rsp = Rsp;
  ContextRecord.Rip = v70;
LABEL_44:
  v34 = v79;
LABEL_45:
  if ( (EstablisherFrame & 7) != 0 || EstablisherFrame < v83 || EstablisherFrame >= v84 )
  {
    v5 |= 8u;
LABEL_224:
    v2 = 0;
LABEL_122:
    v4->ExceptionFlags = v5;
    return v2;
  }
  p_HistoryTable = v82;
  if ( !v34 )
    goto LABEL_49;
  v38 = 0;
  while ( 1 )
  {
    v39 = 0LL;
    v86 = ImageBase;
    v88 = EstablisherFrame;
    p_ContextRecord = &ContextRecord;
    v91 = HandlerData;
    v4->ExceptionFlags = v5;
    ControlPc = Rip;
    FunctionEntry = v9;
    v90 = v34;
    v92 = p_HistoryTable;
    v93 = v38;
    if ( v73 )
      v39 = RtlpLogExceptionHandler(v4, &ContextRecord, Rip, v34);
    v40 = RtlpExecuteHandlerForException(v4, EstablisherFrame, v94, &ControlPc);
    if ( v39 )
      *(_DWORD *)(v39 + 1396) = v40;
    v41 = v81;
    v5 |= v4->ExceptionFlags & 1;
    v75 = v5;
    if ( v81 == EstablisherFrame )
    {
      v5 &= ~0x10u;
      v41 = 0LL;
      v75 = v5;
      v81 = 0LL;
    }
    if ( v40 == 1 )
      goto LABEL_65;
    if ( !v40 )
      break;
    if ( v40 == 2 )
    {
      v5 |= 0x10u;
      v75 = v5;
      if ( v88 > v41 )
        v81 = v88;
LABEL_65:
      Rsp = ContextRecord.Rsp;
      goto LABEL_49;
    }
    if ( v40 != 3 )
      RtlRaiseStatus(-1073741786);
    Rip = ControlPc;
    v9 = FunctionEntry;
    ImageBase = v86;
    RtlpCopyContext(&ContextRecord, p_ContextRecord);
    RtlVirtualUnwind(0, v52, Rip, v9, &ContextRecord, &HandlerData, &EstablisherFrame, 0LL);
    p_HistoryTable = v92;
    v34 = v90;
    v38 = v93;
    EstablisherFrame = v88;
    HandlerData = v91;
    v82 = v92;
  }
  if ( (v5 & 1) != 0 )
    RtlRaiseStatus(-1073741787);
  return 1;
}
