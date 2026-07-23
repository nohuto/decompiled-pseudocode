/*
 * XREFs of RtlDispatchException @ 0x1400F2B50
 * Callers:
 *     KiDispatchException @ 0x1400F1BB0 (KiDispatchException.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     RtlRaiseException @ 0x140211C30 (RtlRaiseException.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x14004EF10 (RtlpGetStackLimits.c)
 *     RtlVirtualUnwind @ 0x1400B0FB8 (RtlVirtualUnwind.c)
 *     RtlpUnwindEpilogue @ 0x1400B1AE0 (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x1400B1C9C (RtlpUnwindOpSlots.c)
 *     RtlpCopyContext @ 0x1400F3EB8 (RtlpCopyContext.c)
 *     RtlLookupFunctionEntry @ 0x1400F4070 (RtlLookupFunctionEntry.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     RtlpSameFunction @ 0x140159958 (RtlpSameFunction.c)
 *     RtlpExecuteHandlerForException @ 0x140167C10 (RtlpExecuteHandlerForException.c)
 *     RtlpLogExceptionDispatch @ 0x140210CB8 (RtlpLogExceptionDispatch.c)
 *     RtlpLogExceptionHandler @ 0x140210E50 (RtlpLogExceptionHandler.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

BOOLEAN __stdcall RtlDispatchException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT Context)
{
  BOOLEAN v2; // si
  PEXCEPTION_RECORD v4; // r14
  int v5; // r12d
  DWORD64 Rip; // r15
  struct _UNWIND_HISTORY_TABLE *p_HistoryTable; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  PRUNTIME_FUNCTION v10; // rax
  PRUNTIME_FUNCTION v11; // r13
  unsigned __int64 v12; // rbx
  PEXCEPTION_ROUTINE v13; // r10
  unsigned int v14; // edi
  unsigned int v15; // esi
  unsigned __int8 v16; // dl
  unsigned __int64 Rsp; // r9
  char v18; // cl
  int v19; // eax
  __int16 v20; // ax
  unsigned int v21; // r9d
  int v22; // r8d
  int v23; // ecx
  unsigned int i; // r10d
  __int16 v25; // ax
  int v26; // edx
  struct _RUNTIME_FUNCTION *v27; // rdx
  unsigned int v28; // ecx
  __int64 v29; // rbx
  unsigned int v30; // esi
  char v31; // r14
  unsigned __int64 v32; // rdi
  unsigned __int64 v33; // rdx
  __int64 v34; // r8
  unsigned __int64 v35; // rax
  unsigned int v36; // ecx
  unsigned __int64 v37; // rdx
  __int64 v38; // rsi
  unsigned __int64 *v39; // rdx
  int v40; // edx
  unsigned int v41; // edx
  struct _UNWIND_HISTORY_TABLE *v42; // rdx
  int v43; // ecx
  int v44; // eax
  unsigned __int64 v45; // rsi
  unsigned __int64 v46; // rdx
  _M128A *v47; // rcx
  __int64 v48; // r8
  unsigned __int64 *v49; // rcx
  char v50; // cl
  __int64 v51; // rsi
  _BYTE *v52; // rdx
  char v53; // al
  char v54; // cl
  unsigned int v55; // eax
  DWORD64 v56; // r10
  int v57; // eax
  int v58; // eax
  __int64 v59; // r14
  unsigned __int16 v60; // cx
  unsigned int v61; // ecx
  char v62; // r8
  bool v63; // zf
  char *v64; // rdx
  char v65; // al
  int v66; // eax
  unsigned __int64 BeginAddress; // rcx
  unsigned __int64 v68; // rdi
  _DWORD *v69; // rax
  char v70; // al
  char v71; // cl
  char v72; // r8
  __int64 v73; // rcx
  unsigned __int64 v74; // rax
  unsigned __int64 *v75; // r9
  _M128A *v76; // rcx
  char v78; // [rsp+40h] [rbp-C0h]
  unsigned __int64 EstablisherFrame; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 ImageBase; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v81; // [rsp+58h] [rbp-A8h]
  PEXCEPTION_RECORD v82; // [rsp+60h] [rbp-A0h]
  EXCEPTION_DISPOSITION (__cdecl *v83)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+68h] [rbp-98h]
  PVOID HandlerData; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v85; // [rsp+78h] [rbp-88h]
  struct _UNWIND_HISTORY_TABLE *v86; // [rsp+80h] [rbp-80h]
  PRUNTIME_FUNCTION v87; // [rsp+88h] [rbp-78h]
  unsigned __int64 v88; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v89; // [rsp+98h] [rbp-68h] BYREF
  PCONTEXT v90; // [rsp+A0h] [rbp-60h]
  DWORD64 ControlPc; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v92; // [rsp+B8h] [rbp-48h]
  PRUNTIME_FUNCTION FunctionEntry; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v94; // [rsp+C8h] [rbp-38h]
  struct _CONTEXT *p_ContextRecord; // [rsp+D8h] [rbp-28h]
  EXCEPTION_DISPOSITION (__cdecl *v96)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+E0h] [rbp-20h]
  PVOID v97; // [rsp+E8h] [rbp-18h]
  struct _UNWIND_HISTORY_TABLE *v98; // [rsp+F0h] [rbp-10h]
  int v99; // [rsp+F8h] [rbp-8h]
  struct _CONTEXT ContextRecord; // [rsp+100h] [rbp+0h] BYREF
  struct _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+5D0h] [rbp+4D0h] BYREF

  v2 = 0;
  v90 = Context;
  v4 = ExceptionRecord;
  v82 = ExceptionRecord;
  v78 = 0;
  if ( (NtGlobalFlag & 0x800000) != 0 )
  {
    v78 = 1;
    RtlpLogExceptionDispatch();
  }
  v5 = v4->ExceptionFlags & 1;
  if ( !(unsigned __int8)RtlpGetStackLimits((__int64)&v88, (__int64)&v89) )
  {
    v5 |= 8u;
LABEL_228:
    v4->ExceptionFlags = v5;
    return v2;
  }
  RtlpCopyContext(&ContextRecord, Context);
  Rip = Context->Rip;
  p_HistoryTable = &HistoryTable;
  v8 = v89;
  v9 = v88;
  v85 = 0LL;
  v86 = &HistoryTable;
  HistoryTable.Count = 0;
  HistoryTable.HighAddress = 0LL;
  *(_DWORD *)&HistoryTable.LocalHint = 0x1000000;
  HistoryTable.LowAddress = -1LL;
  while ( 1 )
  {
    v10 = RtlLookupFunctionEntry(Rip, &ImageBase, p_HistoryTable);
    v11 = v10;
    if ( !v10 )
    {
      if ( Rip != *(_QWORD *)ContextRecord.Rsp )
      {
        Rsp = ContextRecord.Rsp + 8;
        ContextRecord.Rip = *(_QWORD *)ContextRecord.Rsp;
        ContextRecord.Rsp += 8LL;
        goto LABEL_50;
      }
LABEL_227:
      v2 = 0;
      goto LABEL_228;
    }
    v12 = ImageBase + v10->UnwindData;
    v13 = 0LL;
    v83 = 0LL;
    if ( Rip <= 0x7FFFFFFEFFFFLL && (v12 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v14 = Rip - v10->BeginAddress - ImageBase;
    v15 = *(_BYTE *)v12 & 7;
    v16 = *(_BYTE *)(v12 + 3);
    if ( (v16 & 0xF) != 0 )
    {
      if ( v14 >= *(unsigned __int8 *)(v12 + 1) || (*(_BYTE *)v12 & 0x20) != 0 )
      {
        Rsp = ContextRecord.Rsp;
        v18 = *(_BYTE *)(v12 + 3);
        v19 = v16;
LABEL_10:
        EstablisherFrame = *(&ContextRecord.Rax + (v18 & 0xF)) - (int)(v19 & 0xFFFFFFF0);
        goto LABEL_13;
      }
      v59 = 0LL;
      if ( *(_BYTE *)(v12 + 2) )
      {
        do
        {
          v60 = *(_WORD *)(v12 + 2 * v59 + 4);
          if ( (HIBYTE(v60) & 0xF) == 3 )
            break;
          v59 = (unsigned int)RtlpUnwindOpSlots(v60) + (unsigned int)v59;
        }
        while ( (unsigned int)v59 < *(unsigned __int8 *)(v12 + 2) );
        v13 = v83;
      }
      v61 = *(unsigned __int8 *)(v12 + 2 * v59 + 4);
      Rsp = ContextRecord.Rsp;
      v4 = v82;
      if ( v14 >= v61 )
      {
        v19 = *(unsigned __int8 *)(v12 + 3);
        v18 = *(_BYTE *)(v12 + 3);
        goto LABEL_10;
      }
    }
    else
    {
      Rsp = ContextRecord.Rsp;
    }
    EstablisherFrame = Rsp;
LABEL_13:
    if ( v15 >= 2 )
    {
      if ( *(_BYTE *)(v12 + 2) )
      {
        v20 = *(_WORD *)(v12 + 4);
        if ( (HIBYTE(v20) & 0xF) == 6 )
        {
          v21 = (unsigned __int8)v20;
          v22 = Rip - ImageBase;
          if ( (v20 & 0x1000) != 0 )
          {
            v23 = v11->EndAddress - (unsigned __int8)v20;
            if ( v22 - v23 < (unsigned int)(unsigned __int8)v20 )
            {
LABEL_127:
              v38 = 0LL;
              RtlpUnwindEpilogue(ImageBase, Rip, (unsigned int)(v22 - v23), v11, (__int64)&ContextRecord, 0LL, 0LL, 0LL);
              Rsp = ContextRecord.Rsp;
              v13 = v83;
              goto LABEL_46;
            }
          }
          for ( i = 1; i < *(unsigned __int8 *)(v12 + 2); ++i )
          {
            v25 = *(_WORD *)(v12 + 2LL * i + 4);
            if ( (HIBYTE(v25) & 0xF) != 6 )
              break;
            v26 = (unsigned __int8)v25 + (HIBYTE(v25) >> 4 << 8);
            if ( !v26 )
              break;
            v23 = v11->EndAddress - v26;
            if ( v22 - v23 < v21 )
              goto LABEL_127;
          }
        }
LABEL_21:
        Rsp = ContextRecord.Rsp;
      }
LABEL_22:
      v27 = v11;
      v28 = 0;
      v87 = v11;
      v81 = 0;
      while ( 1 )
      {
        v29 = 0LL;
        v30 = Rip - v27->BeginAddress - ImageBase;
        v31 = 0;
        v32 = ImageBase + v27->UnwindData;
        if ( Rip <= 0x7FFFFFFEFFFFLL )
        {
          if ( (v32 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          Rsp = ContextRecord.Rsp;
        }
        if ( *(_BYTE *)(v32 + 2) )
        {
          do
          {
            v33 = v32 + 2 * v29;
            v34 = *(unsigned __int8 *)(v33 + 5) >> 4;
            if ( v30 < *(unsigned __int8 *)(v33 + 4) )
            {
              v58 = RtlpUnwindOpSlots(*(_WORD *)(v33 + 4));
              Rsp = ContextRecord.Rsp;
              v29 = (unsigned int)(v58 + v29);
            }
            else
            {
              if ( (*(_BYTE *)(v32 + 2 * v29 + 5) & 0xF) != 0 )
              {
                if ( (*(_BYTE *)(v32 + 2 * v29 + 5) & 0xF) != 4 )
                {
                  switch ( *(_BYTE *)(v32 + 2 * v29 + 5) & 0xF )
                  {
                    case 1:
                      v29 = (unsigned int)(v29 + 1);
                      v40 = *(unsigned __int16 *)(v32 + 2 * v29 + 4);
                      if ( (_DWORD)v34 )
                      {
                        v29 = (unsigned int)(v29 + 1);
                        v41 = (*(unsigned __int16 *)(v32 + 2 * v29 + 4) << 16) + v40;
                      }
                      else
                      {
                        v41 = 8 * v40;
                      }
                      Rsp += v41;
                      goto LABEL_32;
                    case 2:
                      Rsp += (unsigned int)(8 * v34 + 8);
                      goto LABEL_32;
                    case 3:
                      ContextRecord.Rsp = *(&ContextRecord.Rax + (*(_BYTE *)(v32 + 3) & 0xF));
                      Rsp = ContextRecord.Rsp - (*(_BYTE *)(v32 + 3) & 0xF0);
                      goto LABEL_32;
                    case 5:
                      v29 = (unsigned int)(v29 + 2);
                      if ( Rip <= 0x7FFFFFFEFFFFLL
                        && (((_BYTE)EstablisherFrame
                           + (unsigned __int8)*(_WORD *)(v32 + 2LL * (unsigned int)(v29 - 1) + 4)) & 3) != 0 )
                      {
                        ExRaiseDatatypeMisalignment();
                      }
                      *(&ContextRecord.Rax + v34) = *(_QWORD *)(EstablisherFrame
                                                              + *(unsigned __int16 *)(v32
                                                                                    + 2LL * (unsigned int)(v29 - 1)
                                                                                    + 4)
                                                              + (*(unsigned __int16 *)(v32 + 2 * v29 + 4) << 16));
                      Rsp = ContextRecord.Rsp;
                      goto LABEL_33;
                    case 6:
                      LODWORD(v29) = v29 + 1;
                      goto LABEL_33;
                    case 7:
                      LODWORD(v29) = v29 + 2;
                      goto LABEL_33;
                    case 8:
                      v29 = (unsigned int)(v29 + 1);
                      v46 = EstablisherFrame + 16 * (unsigned int)*(unsigned __int16 *)(v32 + 2 * v29 + 4);
                      if ( Rip <= 0x7FFFFFFEFFFFLL && (v46 & 3) != 0 )
                        ExRaiseDatatypeMisalignment();
                      v47 = &ContextRecord.VectorRegister[(unsigned int)v34 - 22];
                      v47->Low = *(_QWORD *)v46;
                      v47->High = *(_QWORD *)(v46 + 8);
                      Rsp = ContextRecord.Rsp;
                      goto LABEL_33;
                    case 9:
                      v29 = (unsigned int)(v29 + 2);
                      v75 = (unsigned __int64 *)(EstablisherFrame
                                               + *(unsigned __int16 *)(v32 + 2LL * (unsigned int)(v29 - 1) + 4)
                                               + (*(unsigned __int16 *)(v32 + 2 * v29 + 4) << 16));
                      if ( Rip <= 0x7FFFFFFEFFFFLL
                        && (((_BYTE)EstablisherFrame
                           + (unsigned __int8)*(_WORD *)(v32 + 2LL * (unsigned int)(v29 - 1) + 4)) & 3) != 0 )
                      {
                        ExRaiseDatatypeMisalignment();
                      }
                      v76 = &ContextRecord.VectorRegister[(unsigned int)v34 - 22];
                      v76->Low = *v75;
                      v76->High = v75[1];
                      Rsp = ContextRecord.Rsp;
                      goto LABEL_33;
                    case 0xA:
                      v49 = (unsigned __int64 *)(Rsp + 24);
                      v31 = 1;
                      if ( (_DWORD)v34 )
                      {
                        Rsp += 8LL;
                        ++v49;
                      }
                      if ( Rip <= 0x7FFFFFFEFFFFLL )
                      {
                        if ( (Rsp & 3) != 0 )
                          ExRaiseDatatypeMisalignment();
                        if ( ((unsigned __int8)v49 & 3) != 0 )
                          ExRaiseDatatypeMisalignment();
                      }
                      ContextRecord.Rip = *(_QWORD *)Rsp;
                      Rsp = *v49;
                      goto LABEL_32;
                    default:
                      RtlRaiseStatus(-1073741569);
                  }
                }
                v29 = (unsigned int)(v29 + 1);
                v39 = (unsigned __int64 *)(EstablisherFrame + 8 * (unsigned int)*(unsigned __int16 *)(v32 + 2 * v29 + 4));
                if ( Rip <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v39 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                *(&ContextRecord.Rax + v34) = *v39;
                Rsp = ContextRecord.Rsp;
              }
              else
              {
                if ( Rip <= 0x7FFFFFFEFFFFLL && (Rsp & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                *(&ContextRecord.Rax + v34) = *(_QWORD *)Rsp;
                Rsp = ContextRecord.Rsp + 8;
LABEL_32:
                ContextRecord.Rsp = Rsp;
              }
LABEL_33:
              v29 = (unsigned int)(v29 + 1);
            }
          }
          while ( (unsigned int)v29 < *(unsigned __int8 *)(v32 + 2) );
          v27 = v87;
          v28 = v81;
        }
        if ( (*(_BYTE *)v32 & 0x20) == 0 )
          break;
        v55 = *(unsigned __int8 *)(v32 + 2);
        if ( (v55 & 1) != 0 )
          ++v55;
        v27 = (struct _RUNTIME_FUNCTION *)(v32 + 2 * (v55 + 2LL));
        v87 = v27;
        if ( Rip <= 0x7FFFFFFEFFFFLL )
        {
          if ( ((unsigned __int8)v27 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          Rsp = ContextRecord.Rsp;
        }
        v81 = ++v28;
        if ( v28 > 0x20 )
          RtlRaiseStatus(-1073741569);
      }
      if ( !v31 )
      {
        if ( Rip <= 0x7FFFFFFEFFFFLL )
        {
          if ( (Rsp & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          Rsp = ContextRecord.Rsp;
        }
        v35 = *(_QWORD *)Rsp;
        Rsp += 8LL;
        ContextRecord.Rsp = Rsp;
        ContextRecord.Rip = v35;
      }
      v36 = Rip - v27->BeginAddress - ImageBase;
      v37 = ImageBase + v27->UnwindData;
      if ( Rip <= 0x7FFFFFFEFFFFLL )
      {
        if ( (v37 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        Rsp = ContextRecord.Rsp;
      }
      if ( v36 >= *(unsigned __int8 *)(v37 + 1) && (*(_BYTE *)v37 & 8) != 0 )
      {
        v48 = *(unsigned __int8 *)(v37 + 2);
        if ( (v48 & 1) != 0 )
          v48 = (unsigned int)(v48 + 1);
        v13 = (PEXCEPTION_ROUTINE)(ImageBase + *(unsigned int *)(v37 + 2 * v48 + 4));
        HandlerData = (PVOID)(v37 + 2 * ((unsigned int)(v48 + 2) + 2LL));
      }
      else
      {
        v13 = v83;
      }
      v4 = v82;
      goto LABEL_45;
    }
    v50 = *(_BYTE *)Rip;
    v51 = 0LL;
    v52 = (_BYTE *)Rip;
    if ( *(_BYTE *)Rip == 72 )
    {
      v53 = *(_BYTE *)(Rip + 1);
      if ( v53 == -125 && *(_BYTE *)(Rip + 2) == 0xC4 )
      {
        v52 = (_BYTE *)(Rip + 4);
        goto LABEL_87;
      }
      if ( v53 == -127 && *(_BYTE *)(Rip + 2) == 0xC4 )
        goto LABEL_161;
    }
    if ( (v50 & 0xFE) != 0x48 )
      goto LABEL_87;
    if ( *(_BYTE *)(Rip + 1) != 0x8D )
      goto LABEL_87;
    v57 = *(_BYTE *)(Rip + 2) & 7;
    v51 = v57 | (8 * (v50 & 1u));
    if ( !(v57 | (8 * (v50 & 1))) || (_DWORD)v51 != (*(_BYTE *)(v12 + 3) & 0xF) )
      goto LABEL_87;
    v62 = *(_BYTE *)(Rip + 2) & 0xF8;
    if ( v62 == 96 )
    {
      v52 = (_BYTE *)(Rip + 4);
      goto LABEL_87;
    }
    if ( v62 == -96 )
LABEL_161:
      v52 = (_BYTE *)(Rip + 7);
    while ( 1 )
    {
LABEL_87:
      while ( (*v52 & 0xF8) == 0x58 )
        ++v52;
      if ( (*v52 & 0xF0) != 0x40 || (v52[1] & 0xF8) != 0x58 )
        break;
      v52 += 2;
    }
    if ( *v52 == 0xF2 )
      ++v52;
    v54 = *v52;
    if ( (unsigned __int8)(*v52 + 62) <= 1u || v54 == -13 && v52[1] == 0xC3 )
      goto LABEL_167;
    if ( ((v54 + 23) & 0xFD) == 0 )
    {
      if ( v54 == -21 )
        v66 = (char)v52[1] + 2;
      else
        v66 = *(_DWORD *)(v52 + 1) + 5;
      BeginAddress = v11->BeginAddress;
      v68 = (unsigned __int64)&v52[v66 - ImageBase];
      if ( v68 < BeginAddress || v68 >= v11->EndAddress )
      {
        v69 = (_DWORD *)RtlpSameFunction(v11, ImageBase, &v52[v66]);
        if ( v69 && v68 != *v69 )
          goto LABEL_21;
        Rsp = ContextRecord.Rsp;
        v13 = v83;
        goto LABEL_167;
      }
      if ( v68 != BeginAddress )
        goto LABEL_22;
      v63 = (*(_BYTE *)v12 & 0x20) == 0;
      goto LABEL_166;
    }
    if ( v54 != -1 || v52[1] != 37 )
    {
      if ( (v54 & 0xF8) != 0x48 || v52[1] != 0xFF )
        goto LABEL_22;
      v63 = (v52[2] & 0x38) == 32;
LABEL_166:
      if ( !v63 )
        goto LABEL_22;
    }
LABEL_167:
    v64 = (char *)Rip;
    if ( (*(_BYTE *)Rip & 0xF8) != 0x48 )
      goto LABEL_190;
    v65 = *(_BYTE *)(Rip + 1);
    switch ( v65 )
    {
      case -125:
        v64 = (char *)(Rip + 4);
        Rsp += *(char *)(Rip + 3);
        goto LABEL_189;
      case -127:
        Rsp += *(unsigned __int8 *)(Rip + 3) | ((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8);
LABEL_187:
        v64 = (char *)(Rip + 7);
        goto LABEL_189;
      case -115:
        v70 = *(_BYTE *)(Rip + 2) & 0xF8;
        if ( v70 == 96 )
        {
          v64 = (char *)(Rip + 4);
          ContextRecord.Rsp = *(&ContextRecord.Rax + v51);
          Rsp = *(char *)(Rip + 3) + ContextRecord.Rsp;
          goto LABEL_189;
        }
        if ( v70 == -96 )
        {
          Rsp = *(&ContextRecord.Rax + v51)
              + (*(unsigned __int8 *)(Rip + 3) | ((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8));
          goto LABEL_187;
        }
        break;
    }
    while ( 1 )
    {
LABEL_190:
      v71 = *v64;
      if ( (*v64 & 0xF8) == 0x58 )
      {
        if ( Rip <= 0x7FFFFFFEFFFFLL && (Rsp & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        *(&ContextRecord.Rax + (v71 & 7)) = *(_QWORD *)Rsp;
        Rsp = ContextRecord.Rsp + 8;
        ++v64;
        goto LABEL_189;
      }
      if ( (v71 & 0xF0) != 0x40 )
        break;
      v72 = v64[1];
      if ( (v72 & 0xF8) != 0x58 )
        break;
      v73 = v72 & 7 | (8 * (v71 & 1u));
      if ( Rip <= 0x7FFFFFFEFFFFLL && (Rsp & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(&ContextRecord.Rax + v73) = *(_QWORD *)Rsp;
      Rsp = ContextRecord.Rsp + 8;
      v64 += 2;
LABEL_189:
      ContextRecord.Rsp = Rsp;
    }
    if ( Rip <= 0x7FFFFFFEFFFFLL )
    {
      if ( (Rsp & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      Rsp = ContextRecord.Rsp;
    }
    v74 = *(_QWORD *)Rsp;
    Rsp += 8LL;
    ContextRecord.Rsp = Rsp;
    ContextRecord.Rip = v74;
LABEL_45:
    v38 = 0LL;
LABEL_46:
    if ( (EstablisherFrame & 7) != 0 || (v9 = v88, EstablisherFrame < v88) || (v8 = v89, EstablisherFrame >= v89) )
    {
      v5 |= 8u;
      goto LABEL_227;
    }
    if ( v13 )
      break;
LABEL_50:
    Rip = ContextRecord.Rip;
    if ( (Rsp & 7) != 0 || Rsp < v9 || Rsp >= v8 )
      goto LABEL_227;
    p_HistoryTable = v86;
  }
  v42 = v86;
  v43 = 0;
  while ( 1 )
  {
    v92 = ImageBase;
    v94 = EstablisherFrame;
    p_ContextRecord = &ContextRecord;
    v97 = HandlerData;
    v4->ExceptionFlags = v5;
    ControlPc = Rip;
    FunctionEntry = v11;
    v96 = v13;
    v98 = v42;
    v99 = v43;
    if ( v78 )
      v38 = RtlpLogExceptionHandler(v4, &ContextRecord, Rip, v13);
    v44 = RtlpExecuteHandlerForException(v4, EstablisherFrame, v90, &ControlPc);
    if ( v38 )
      *(_DWORD *)(v38 + 1396) = v44;
    v45 = v85;
    v5 |= v4->ExceptionFlags & 1;
    if ( v85 == EstablisherFrame )
    {
      v5 &= ~0x10u;
      v45 = 0LL;
      v85 = 0LL;
    }
    if ( v44 == 1 )
      goto LABEL_68;
    if ( !v44 )
      break;
    if ( v44 == 2 )
    {
      v5 |= 0x10u;
      if ( v94 > v45 )
        v85 = v94;
LABEL_68:
      Rsp = ContextRecord.Rsp;
      goto LABEL_50;
    }
    if ( v44 != 3 )
      RtlRaiseStatus(-1073741786);
    Rip = ControlPc;
    v11 = FunctionEntry;
    ImageBase = v92;
    RtlpCopyContext(&ContextRecord, p_ContextRecord);
    v38 = 0LL;
    v13 = RtlVirtualUnwind(1u, v56, Rip, v11, &ContextRecord, &HandlerData, &EstablisherFrame, 0LL);
    if ( v13 != v96 || EstablisherFrame != v94 || HandlerData != v97 )
      __fastfail(0x27u);
    v42 = v98;
    v43 = v99;
    v86 = v98;
  }
  if ( (v5 & 1) != 0 )
    RtlRaiseStatus(-1073741787);
  return 1;
}
