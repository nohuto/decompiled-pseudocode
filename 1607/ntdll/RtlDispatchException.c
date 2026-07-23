/*
 * XREFs of RtlDispatchException @ 0x1800349B0
 * Callers:
 *     RtlRaiseException @ 0x180036760 (RtlRaiseException.c)
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 *     KiUserExceptionDispatcher @ 0x1800AA000 (KiUserExceptionDispatcher.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x180032680 (RtlpGetStackLimits.c)
 *     RtlpCopyContext @ 0x180035DD4 (RtlpCopyContext.c)
 *     RtlLookupFunctionEntry @ 0x180035F90 (RtlLookupFunctionEntry.c)
 *     RtlVirtualUnwind @ 0x180036EE0 (RtlVirtualUnwind.c)
 *     RtlpCallVectoredHandlers @ 0x18006700C (RtlpCallVectoredHandlers.c)
 *     RtlpSameFunction @ 0x180078BD4 (RtlpSameFunction.c)
 *     RtlpUnwindOpSlots @ 0x180088E54 (RtlpUnwindOpSlots.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     RtlpUnwindEpilogue @ 0x1800A5BD4 (RtlpUnwindEpilogue.c)
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 *     RtlpExecuteHandlerForException @ 0x1800AAEC0 (RtlpExecuteHandlerForException.c)
 *     RtlpLogExceptionDispatch @ 0x1800F21AC (RtlpLogExceptionDispatch.c)
 *     RtlpLogExceptionHandler @ 0x1800F2350 (RtlpLogExceptionHandler.c)
 */

BOOLEAN __cdecl RtlDispatchException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord)
{
  PCONTEXT v2; // rsi
  PEXCEPTION_RECORD v3; // r12
  int v4; // edi
  struct _UNWIND_HISTORY_TABLE *p_HistoryTable; // rax
  ULONG64 Rip; // r15
  PRUNTIME_FUNCTION v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  ULONG64 v10; // r13
  ULONG64 v11; // r10
  unsigned __int64 v12; // rsi
  unsigned int v13; // ebx
  __int64 v14; // rdx
  unsigned int v15; // edi
  DWORD64 Rsp; // r8
  unsigned __int64 v17; // r14
  char v18; // cl
  __int64 v19; // rdi
  _BYTE *i; // rdx
  char v21; // cl
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v22; // rdi
  unsigned int v23; // ecx
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v24; // r12
  char v25; // r10
  _BYTE *v26; // rdi
  __int64 v27; // rbx
  unsigned int v28; // esi
  _BYTE *v29; // rdx
  __int64 v30; // r9
  DWORD64 v31; // rax
  _BYTE *v32; // rdx
  __int64 v33; // r9
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v34; // rbx
  struct _UNWIND_HISTORY_TABLE *v35; // rcx
  int v36; // eax
  __int64 v37; // rbx
  int v38; // eax
  unsigned __int64 v39; // rbx
  char v40; // cl
  int v41; // eax
  int v42; // edx
  unsigned int v43; // edx
  char *v44; // rdx
  char v45; // al
  char v46; // cl
  DWORD64 v47; // rax
  int v48; // eax
  char v49; // r9
  char v50; // al
  int v51; // eax
  unsigned __int64 v52; // rbx
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v53; // rax
  unsigned __int64 BeginAddress; // rcx
  unsigned __int8 v55; // r9
  unsigned __int16 v56; // ax
  int v57; // edx
  unsigned int v58; // r11d
  int v59; // r10d
  int v60; // ecx
  unsigned int j; // ebx
  __int16 v62; // ax
  __int64 v63; // rdx
  M128A *v64; // rcx
  int v65; // eax
  _DWORD *v66; // rax
  DWORD64 *v67; // rcx
  BOOLEAN v68; // bl
  int v70; // eax
  char v71; // r9
  __int64 v72; // r14
  __int64 v73; // rcx
  char v74; // al
  char v75; // [rsp+40h] [rbp-C0h]
  char v76; // [rsp+41h] [rbp-BFh]
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v77; // [rsp+48h] [rbp-B8h]
  int v78; // [rsp+50h] [rbp-B0h]
  unsigned int v79; // [rsp+54h] [rbp-ACh]
  unsigned __int64 EstablisherFrame; // [rsp+60h] [rbp-A0h] BYREF
  PVOID HandlerData; // [rsp+68h] [rbp-98h] BYREF
  PEXCEPTION_RECORD v82; // [rsp+70h] [rbp-90h]
  unsigned __int64 v83; // [rsp+78h] [rbp-88h]
  struct _UNWIND_HISTORY_TABLE *v84; // [rsp+80h] [rbp-80h]
  PCONTEXT v85; // [rsp+88h] [rbp-78h]
  unsigned __int64 ImageBase; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v87; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v88; // [rsp+A0h] [rbp-60h] BYREF
  ULONG64 ControlPc; // [rsp+B0h] [rbp-50h] BYREF
  ULONG64 v90; // [rsp+B8h] [rbp-48h]
  PRUNTIME_FUNCTION FunctionEntry; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v92; // [rsp+C8h] [rbp-38h]
  struct _CONTEXT *v93; // [rsp+D8h] [rbp-28h]
  ULONG64 v94; // [rsp+E0h] [rbp-20h]
  PVOID v95; // [rsp+E8h] [rbp-18h]
  struct _UNWIND_HISTORY_TABLE *v96; // [rsp+F0h] [rbp-10h]
  int v97; // [rsp+F8h] [rbp-8h]
  struct _CONTEXT v98; // [rsp+100h] [rbp+0h] BYREF
  struct _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+5D0h] [rbp+4D0h] BYREF

  v2 = ContextRecord;
  v85 = ContextRecord;
  v3 = ExceptionRecord;
  v82 = ExceptionRecord;
  v76 = 0;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x800000) != 0 )
  {
    v76 = 1;
    RtlpLogExceptionDispatch();
  }
  if ( (unsigned __int8)RtlpCallVectoredHandlers(v3, v2, 0LL) )
    goto LABEL_132;
  v4 = v3->ExceptionFlags & 1;
  v78 = v4;
  if ( !RtlpGetStackLimits(&v87, (void **)&v88) )
  {
LABEL_174:
    v4 |= 8u;
LABEL_175:
    v68 = 0;
    v3->ExceptionFlags = v4;
    goto LABEL_133;
  }
  RtlpCopyContext(&v98, v2);
  p_HistoryTable = &HistoryTable;
  Rip = v2->Rip;
  v83 = 0LL;
  v84 = &HistoryTable;
  HistoryTable.Count = 0;
  HistoryTable.HighAddress = 0LL;
  *(_DWORD *)&HistoryTable.LocalHint = 0x1000000;
  HistoryTable.LowAddress = -1LL;
  while ( 1 )
  {
    v7 = RtlLookupFunctionEntry(Rip, &ImageBase, p_HistoryTable);
    v77 = v7;
    if ( !v7 )
    {
      if ( Rip == *(_QWORD *)v98.Rsp )
        goto LABEL_175;
      Rsp = v98.Rsp + 8;
      v98.Rip = *(_QWORD *)v98.Rsp;
      v98.Rsp += 8LL;
      goto LABEL_57;
    }
    v10 = ImageBase;
    v11 = 0LL;
    v12 = ImageBase + v7->UnwindInfoAddress;
    v13 = Rip - v7->BeginAddress - ImageBase;
    v14 = *(unsigned __int8 *)(v12 + 3);
    v15 = *(_BYTE *)v12 & 7;
    if ( (v14 & 0xF) == 0 )
    {
      Rsp = v98.Rsp;
LABEL_9:
      v17 = Rsp;
      EstablisherFrame = Rsp;
      goto LABEL_10;
    }
    if ( v13 >= *(unsigned __int8 *)(v12 + 1) || (*(_BYTE *)v12 & 0x20) != 0 )
    {
      Rsp = v98.Rsp;
      v40 = *(_BYTE *)(v12 + 3);
      v41 = (unsigned __int8)v14;
    }
    else
    {
      v72 = 0LL;
      if ( *(_BYTE *)(v12 + 2) )
      {
        do
        {
          v73 = *(unsigned __int16 *)(v12 + 2 * v72 + 4);
          if ( (BYTE1(v73) & 0xF) == 3 )
            break;
          v72 = (unsigned int)RtlpUnwindOpSlots(v73, v14, v8, v9) + (unsigned int)v72;
        }
        while ( (unsigned int)v72 < *(unsigned __int8 *)(v12 + 2) );
        v11 = 0LL;
      }
      Rsp = v98.Rsp;
      if ( v13 < *(unsigned __int8 *)(v12 + 2 * v72 + 4) )
        goto LABEL_9;
      v41 = *(unsigned __int8 *)(v12 + 3);
      v40 = *(_BYTE *)(v12 + 3);
    }
    v17 = *(&v98.Rax + (v40 & 0xF)) - (int)(v41 & 0xFFFFFFF0);
    EstablisherFrame = v17;
LABEL_10:
    if ( v15 < 2 )
    {
      v18 = *(_BYTE *)Rip;
      v19 = 0LL;
      i = (_BYTE *)Rip;
      if ( *(_BYTE *)Rip == 72 )
      {
        v50 = *(_BYTE *)(Rip + 1);
        if ( v50 == -125 && *(_BYTE *)(Rip + 2) == 0xC4 )
        {
          i = (_BYTE *)(Rip + 4);
          goto LABEL_13;
        }
        if ( v50 == -127 && *(_BYTE *)(Rip + 2) == 0xC4 )
        {
LABEL_90:
          i = (_BYTE *)(Rip + 7);
          goto LABEL_13;
        }
      }
      if ( (v18 & 0xFE) != 0x48 )
        goto LABEL_13;
      if ( *(_BYTE *)(Rip + 1) != 0x8D )
        goto LABEL_13;
      v48 = *(_BYTE *)(Rip + 2) & 7;
      v19 = v48 | (8 * (v18 & 1u));
      if ( !(v48 | (8 * (v18 & 1))) || (_DWORD)v19 != (*(_BYTE *)(v12 + 3) & 0xF) )
        goto LABEL_13;
      v49 = *(_BYTE *)(Rip + 2) & 0xF8;
      if ( v49 != 96 )
      {
        if ( v49 != -96 )
          goto LABEL_13;
        goto LABEL_90;
      }
      for ( i = (_BYTE *)(Rip + 4); ; i += 2 )
      {
LABEL_13:
        while ( (*i & 0xF8) == 0x58 )
          ++i;
        if ( (*i & 0xF0) != 0x40 || (i[1] & 0xF8) != 0x58 )
          break;
      }
      if ( *i == 0xF2 )
        ++i;
      v21 = *i;
      if ( (unsigned __int8)(*i + 62) <= 1u || v21 == -13 && i[1] == 0xC3 )
        goto LABEL_74;
      if ( ((v21 + 23) & 0xFD) != 0 )
      {
        if ( v21 == -1 && i[1] == 37 || (v21 & 0xF8) == 0x48 && i[1] == 0xFF && (i[2] & 0x38) == 0x20 )
          goto LABEL_74;
        goto LABEL_22;
      }
      if ( v21 == -21 )
        v51 = (char)i[1] + 2;
      else
        v51 = *(_DWORD *)(i + 1) + 5;
      v52 = (unsigned __int64)&i[v51 - v10];
      v53 = v77;
      BeginAddress = v77->BeginAddress;
      if ( v52 >= BeginAddress )
      {
        if ( v52 < v77->EndAddress )
        {
          if ( v52 == BeginAddress && (*(_BYTE *)v12 & 0x20) == 0 )
            goto LABEL_74;
LABEL_22:
          v22 = v77;
          goto LABEL_23;
        }
        v53 = v77;
      }
      v66 = (_DWORD *)RtlpSameFunction(v53, v10, v52 + v10);
      if ( !v66 || v52 == *v66 )
      {
        Rsp = v98.Rsp;
        v11 = 0LL;
LABEL_74:
        v44 = (char *)Rip;
        if ( (*(_BYTE *)Rip & 0xF8) != 0x48 )
          goto LABEL_78;
        v45 = *(_BYTE *)(Rip + 1);
        switch ( v45 )
        {
          case -125:
            v44 = (char *)(Rip + 4);
            Rsp += *(char *)(Rip + 3);
            goto LABEL_77;
          case -127:
            Rsp += *(unsigned __int8 *)(Rip + 3) | (unsigned __int64)((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8);
            break;
          case -115:
            v74 = *(_BYTE *)(Rip + 2) & 0xF8;
            if ( v74 == 96 )
            {
              v44 = (char *)(Rip + 4);
              v98.Rsp = *(&v98.Rax + v19);
              Rsp = *(char *)(Rip + 3) + v98.Rsp;
              goto LABEL_77;
            }
            if ( v74 != -96 )
            {
LABEL_178:
              while ( 1 )
              {
LABEL_78:
                v46 = *v44;
                if ( (*v44 & 0xF8) == 0x58 )
                {
                  *(&v98.Rax + (*v44 & 7)) = *(_QWORD *)Rsp;
                  Rsp = v98.Rsp + 8;
                  ++v44;
                }
                else
                {
                  if ( (v46 & 0xF0) != 0x40 || (v71 = v44[1], (v71 & 0xF8) != 0x58) )
                  {
                    v47 = *(_QWORD *)Rsp;
                    Rsp += 8LL;
                    v98.Rsp = Rsp;
                    v98.Rip = v47;
                    goto LABEL_43;
                  }
                  *(&v98.Rax + (v71 & 7 | (unsigned __int64)(8 * (v46 & 1u)))) = *(_QWORD *)Rsp;
                  Rsp = v98.Rsp + 8;
                  v44 += 2;
                }
LABEL_77:
                v98.Rsp = Rsp;
              }
            }
            Rsp = *(&v98.Rax + v19)
                + (*(unsigned __int8 *)(Rip + 3) | (unsigned __int64)((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8));
            break;
          default:
            goto LABEL_178;
        }
        v44 = (char *)(Rip + 7);
        goto LABEL_77;
      }
      Rsp = v98.Rsp;
      goto LABEL_22;
    }
    v55 = *(_BYTE *)(v12 + 2);
    if ( !v55 )
      goto LABEL_22;
    v56 = *(_WORD *)(v12 + 4);
    v57 = v56;
    LOWORD(v57) = HIBYTE(v56);
    if ( (HIBYTE(v56) & 0xF) != 6 )
      goto LABEL_22;
    v58 = (unsigned __int8)v56;
    v59 = Rip - v10;
    if ( (v56 & 0x1000) != 0 )
    {
      v34 = v77;
      v60 = v77->EndAddress - (unsigned __int8)v56;
      if ( v59 - v60 < (unsigned int)(unsigned __int8)v56 )
      {
LABEL_163:
        RtlpUnwindEpilogue(v10, v57, v59 - v60, (_DWORD)v34, (__int64)&v98, 0LL, 0LL, 0LL);
        Rsp = v98.Rsp;
        v11 = 0LL;
        goto LABEL_44;
      }
    }
    v22 = v77;
    for ( j = 1; j < v55; ++j )
    {
      v62 = *(_WORD *)(v12 + 2LL * j + 4);
      if ( (HIBYTE(v62) & 0xF) != 6 )
        break;
      v57 = (unsigned __int8)v62 + (HIBYTE(v62) >> 4 << 8);
      if ( !v57 )
        break;
      v60 = v77->EndAddress - v57;
      if ( v59 - v60 < v58 )
      {
        v34 = v77;
        goto LABEL_163;
      }
    }
LABEL_23:
    v23 = 0;
    v24 = v22;
    v79 = 0;
    while ( 1 )
    {
      v25 = 0;
      v75 = 0;
      v26 = (_BYTE *)(v10 + v24->UnwindInfoAddress);
      v27 = 0LL;
      v28 = Rip - v24->BeginAddress - v10;
      if ( v26[2] )
      {
        do
        {
          v29 = &v26[2 * v27];
          v30 = (unsigned __int8)v29[5] >> 4;
          if ( v28 < (unsigned __int8)v29[4] )
          {
            v70 = RtlpUnwindOpSlots(*((unsigned __int16 *)v29 + 2), v29, Rsp, v30);
            Rsp = v98.Rsp;
            v27 = (unsigned int)(v70 + v27);
          }
          else
          {
            if ( (v26[2 * v27 + 5] & 0xF) != 0 )
            {
              if ( (v26[2 * v27 + 5] & 0xF) != 4 )
              {
                switch ( v26[2 * v27 + 5] & 0xF )
                {
                  case 1:
                    v27 = (unsigned int)(v27 + 1);
                    v42 = *(unsigned __int16 *)&v26[2 * v27 + 4];
                    if ( (_DWORD)v30 )
                    {
                      v27 = (unsigned int)(v27 + 1);
                      v43 = (*(unsigned __int16 *)&v26[2 * v27 + 4] << 16) + v42;
                    }
                    else
                    {
                      v43 = 8 * v42;
                    }
                    Rsp += v43;
                    goto LABEL_30;
                  case 2:
                    Rsp += (unsigned int)(8 * v30 + 8);
                    goto LABEL_30;
                  case 3:
                    v98.Rsp = *(&v98.Rax + (v26[3] & 0xF));
                    Rsp = v98.Rsp - (v26[3] & 0xF0);
                    goto LABEL_30;
                  case 5:
                    v27 = (unsigned int)(v27 + 2);
                    *(&v98.Rax + v30) = *(_QWORD *)(*(unsigned __int16 *)&v26[2 * (unsigned int)(v27 - 1) + 4]
                                                  + (*(unsigned __int16 *)&v26[2 * v27 + 4] << 16)
                                                  + v17);
                    Rsp = v98.Rsp;
                    goto LABEL_31;
                  case 6:
                    LODWORD(v27) = v27 + 1;
                    goto LABEL_31;
                  case 7:
                    LODWORD(v27) = v27 + 2;
                    goto LABEL_31;
                  case 8:
                    v27 = (unsigned int)(v27 + 1);
                    v63 = 16 * (unsigned int)*(unsigned __int16 *)&v26[2 * v27 + 4];
                    goto LABEL_111;
                  case 9:
                    v27 = (unsigned int)(v27 + 2);
                    v63 = *(unsigned __int16 *)&v26[2 * (unsigned int)(v27 - 1) + 4]
                        + (*(unsigned __int16 *)&v26[2 * v27 + 4] << 16);
LABEL_111:
                    v64 = &v98.Xmm0 + (unsigned int)v30;
                    v64->Low = *(_QWORD *)(v63 + v17);
                    v64->High = *(_QWORD *)(v63 + v17 + 8);
                    Rsp = v98.Rsp;
                    goto LABEL_31;
                  case 0xA:
                    v75 = 1;
                    v67 = (DWORD64 *)(Rsp + 24);
                    if ( (_DWORD)v30 )
                    {
                      Rsp += 8LL;
                      ++v67;
                    }
                    v98.Rip = *(_QWORD *)Rsp;
                    Rsp = *v67;
                    goto LABEL_30;
                  default:
                    RtlRaiseStatus(-1073741569);
                }
              }
              v27 = (unsigned int)(v27 + 1);
              *(&v98.Rax + v30) = *(_QWORD *)(8 * (unsigned int)*(unsigned __int16 *)&v26[2 * v27 + 4] + v17);
              Rsp = v98.Rsp;
            }
            else
            {
              *(&v98.Rax + v30) = *(_QWORD *)Rsp;
              Rsp = v98.Rsp + 8;
LABEL_30:
              v98.Rsp = Rsp;
            }
LABEL_31:
            v27 = (unsigned int)(v27 + 1);
          }
        }
        while ( (unsigned int)v27 < (unsigned __int8)v26[2] );
        v25 = v75;
        v23 = v79;
      }
      if ( (*v26 & 0x20) == 0 )
        break;
      v65 = (unsigned __int8)v26[2];
      if ( (v65 & 1) != 0 )
        ++v65;
      v79 = ++v23;
      v24 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)&v26[2 * v65 + 4];
      if ( v23 > 0x20 )
        RtlRaiseStatus(-1073741569);
    }
    if ( !v25 )
    {
      v31 = *(_QWORD *)Rsp;
      Rsp += 8LL;
      v98.Rsp = Rsp;
      v98.Rip = v31;
    }
    v32 = (_BYTE *)(v10 + v24->UnwindInfoAddress);
    if ( (int)Rip - v24->BeginAddress - (int)v10 >= (unsigned __int8)v32[1] && (*v32 & 8) != 0 )
    {
      v33 = (unsigned __int8)v32[2];
      if ( (v33 & 1) != 0 )
        v33 = (unsigned int)(v33 + 1);
      v11 = v10 + *(unsigned int *)&v32[2 * v33 + 4];
      HandlerData = &v32[2 * (unsigned int)(v33 + 2) + 4];
    }
    else
    {
      v11 = 0LL;
    }
    v3 = v82;
LABEL_43:
    v34 = v77;
LABEL_44:
    if ( (v17 & 7) != 0 || v17 < v87 || v17 >= v88 )
    {
      v4 = v78;
      v2 = v85;
      goto LABEL_174;
    }
    v4 = v78;
    v2 = v85;
    if ( v11 )
      break;
LABEL_57:
    Rip = v98.Rip;
    if ( (Rsp & 7) != 0 || Rsp < v87 || Rsp >= v88 )
      goto LABEL_175;
    p_HistoryTable = v84;
  }
  v35 = v84;
  v36 = 0;
  while ( 1 )
  {
    FunctionEntry = v34;
    v93 = &v98;
    v37 = 0LL;
    v95 = HandlerData;
    v3->ExceptionFlags = v4;
    ControlPc = Rip;
    v90 = v10;
    v92 = v17;
    v94 = v11;
    v96 = v35;
    v97 = v36;
    if ( v76 )
      v37 = RtlpLogExceptionHandler(v3, &v98, Rip, v11);
    v38 = RtlpExecuteHandlerForException(v3, v17, v2, &ControlPc);
    if ( v37 )
      *(_DWORD *)(v37 + 1396) = v38;
    v39 = v83;
    v4 |= v3->ExceptionFlags & 1;
    v78 = v4;
    if ( v83 == v17 )
    {
      v4 &= ~0x10u;
      v39 = 0LL;
      v78 = v4;
      v83 = 0LL;
    }
    if ( v38 == 1 )
      goto LABEL_56;
    if ( !v38 )
      break;
    if ( v38 == 2 )
    {
      v4 |= 0x10u;
      v78 = v4;
      if ( v92 > v39 )
        v83 = v92;
LABEL_56:
      Rsp = v98.Rsp;
      goto LABEL_57;
    }
    if ( v38 != 3 )
      RtlRaiseStatus(-1073741786);
    v10 = v90;
    Rip = ControlPc;
    v34 = FunctionEntry;
    ImageBase = v90;
    RtlpCopyContext(&v98, v93);
    RtlVirtualUnwind(1u, v10, Rip, v34, &v98, &HandlerData, &EstablisherFrame, 0LL);
    v17 = v92;
    v35 = v96;
    v11 = v94;
    HandlerData = v95;
    v36 = v97;
    EstablisherFrame = v92;
    v84 = v96;
  }
  if ( (v4 & 1) != 0 )
    RtlRaiseStatus(-1073741787);
LABEL_132:
  v68 = 1;
LABEL_133:
  RtlpCallVectoredHandlers(v3, v2, 1LL);
  return v68;
}
