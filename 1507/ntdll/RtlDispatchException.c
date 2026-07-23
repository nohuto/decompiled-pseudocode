/*
 * XREFs of RtlDispatchException @ 0x180013890
 * Callers:
 *     RtlRaiseException @ 0x180011EA0 (RtlRaiseException.c)
 *     RtlRaiseStatus @ 0x1800932C0 (RtlRaiseStatus.c)
 *     KiUserExceptionDispatcher @ 0x180095830 (KiUserExceptionDispatcher.c)
 * Callees:
 *     RtlpSameFunction @ 0x180011420 (RtlpSameFunction.c)
 *     RtlVirtualUnwind @ 0x180011740 (RtlVirtualUnwind.c)
 *     RtlpCopyContext @ 0x180014C80 (RtlpCopyContext.c)
 *     RtlLookupFunctionEntry @ 0x180014E40 (RtlLookupFunctionEntry.c)
 *     RtlpGetStackLimits @ 0x18001552C (RtlpGetStackLimits.c)
 *     RtlpCallVectoredHandlers @ 0x18005F7F4 (RtlpCallVectoredHandlers.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     RtlpUnwindEpilogue @ 0x18009306C (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x18009326C (RtlpUnwindOpSlots.c)
 *     RtlRaiseStatus @ 0x1800932C0 (RtlRaiseStatus.c)
 *     RtlpExecuteHandlerForException @ 0x180096700 (RtlpExecuteHandlerForException.c)
 *     RtlpLogExceptionDispatch @ 0x1800E4340 (RtlpLogExceptionDispatch.c)
 *     RtlpLogExceptionHandler @ 0x1800E44E4 (RtlpLogExceptionHandler.c)
 */

BOOLEAN __cdecl RtlDispatchException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord)
{
  BOOLEAN v2; // r14
  PCONTEXT v3; // rbx
  PEXCEPTION_RECORD v4; // r12
  int v5; // edi
  ULONG64 Rip; // r15
  struct _UNWIND_HISTORY_TABLE *p_HistoryTable; // rsi
  PRUNTIME_FUNCTION v8; // rax
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rsi
  unsigned int v12; // ebx
  unsigned __int8 v13; // dl
  unsigned int v14; // edi
  DWORD64 Rsp; // r8
  unsigned __int64 v16; // r14
  char v17; // cl
  __int64 v18; // rdi
  _BYTE *i; // rdx
  char v20; // cl
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v21; // rdi
  unsigned int v22; // ecx
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v23; // r12
  char v24; // r10
  _BYTE *v25; // rdi
  __int64 v26; // rbx
  unsigned int v27; // esi
  _BYTE *v28; // rdx
  __int64 v29; // r9
  DWORD64 v30; // rax
  _BYTE *v31; // rdx
  __int64 v32; // r9
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v33; // rbx
  int v34; // eax
  __int64 v35; // rbx
  int v36; // eax
  unsigned __int64 v37; // rbx
  char v39; // cl
  int v40; // eax
  int v41; // edx
  unsigned int v42; // edx
  char *v43; // rdx
  char v44; // al
  char v45; // cl
  DWORD64 v46; // rax
  int v47; // eax
  char v48; // r9
  char v49; // al
  int v50; // eax
  unsigned __int64 v51; // rbx
  __int64 v52; // rax
  unsigned __int64 BeginAddress; // rcx
  unsigned __int8 v54; // r9
  unsigned __int16 v55; // ax
  int v56; // edx
  unsigned int v57; // r11d
  int v58; // r10d
  int v59; // ecx
  unsigned int j; // ebx
  __int16 v61; // ax
  __int64 v62; // rdx
  M128A *v63; // rcx
  int v64; // eax
  DWORD64 *v65; // rcx
  _DWORD *v66; // rax
  char v67; // r9
  __int64 v68; // r14
  __int64 v69; // rcx
  char v70; // al
  int v71; // eax
  char v72; // [rsp+40h] [rbp-C0h]
  char v73; // [rsp+41h] [rbp-BFh]
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v74; // [rsp+48h] [rbp-B8h]
  int v75; // [rsp+50h] [rbp-B0h]
  PVOID HandlerData; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v78; // [rsp+68h] [rbp-98h]
  unsigned int v79; // [rsp+70h] [rbp-90h]
  PCONTEXT v80; // [rsp+78h] [rbp-88h]
  struct _UNWIND_HISTORY_TABLE *v81; // [rsp+80h] [rbp-80h]
  unsigned __int64 v82; // [rsp+88h] [rbp-78h]
  PEXCEPTION_RECORD v83; // [rsp+90h] [rbp-70h]
  unsigned __int64 v84; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 ImageBase; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v86; // [rsp+A8h] [rbp-58h] BYREF
  ULONG64 ControlPc; // [rsp+B0h] [rbp-50h] BYREF
  ULONG64 v88; // [rsp+B8h] [rbp-48h]
  PRUNTIME_FUNCTION FunctionEntry; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v90; // [rsp+C8h] [rbp-38h]
  struct _CONTEXT *v91; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v92; // [rsp+E0h] [rbp-20h]
  PVOID v93; // [rsp+E8h] [rbp-18h]
  struct _UNWIND_HISTORY_TABLE *v94; // [rsp+F0h] [rbp-10h]
  int v95; // [rsp+F8h] [rbp-8h]
  struct _CONTEXT v96; // [rsp+100h] [rbp+0h] BYREF
  struct _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+5D0h] [rbp+4D0h] BYREF

  v2 = 0;
  v3 = ContextRecord;
  v80 = ContextRecord;
  v4 = ExceptionRecord;
  v83 = ExceptionRecord;
  v72 = 0;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x800000) != 0 )
  {
    v72 = 1;
    RtlpLogExceptionDispatch();
  }
  if ( (unsigned __int8)RtlpCallVectoredHandlers(v4, v3, 0LL) )
  {
    v2 = 1;
    goto LABEL_62;
  }
  v5 = v4->ExceptionFlags & 1;
  v75 = v5;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v84, &v86) )
  {
    v5 |= 8u;
    goto LABEL_61;
  }
  RtlpCopyContext(&v96, v3);
  Rip = v3->Rip;
  p_HistoryTable = &HistoryTable;
  v82 = 0LL;
  HistoryTable.Count = 0;
  HistoryTable.HighAddress = 0LL;
  v81 = &HistoryTable;
  *(_DWORD *)&HistoryTable.LocalHint = 0x1000000;
  HistoryTable.LowAddress = -1LL;
  while ( 1 )
  {
    v8 = RtlLookupFunctionEntry(Rip, &ImageBase, p_HistoryTable);
    v74 = v8;
    if ( !v8 )
    {
      if ( Rip == *(_QWORD *)v96.Rsp )
        goto LABEL_60;
      Rsp = v96.Rsp + 8;
      v96.Rip = *(_QWORD *)v96.Rsp;
      v96.Rsp += 8LL;
      goto LABEL_57;
    }
    v9 = ImageBase;
    v10 = 0LL;
    v11 = ImageBase + v8->UnwindInfoAddress;
    v12 = Rip - v8->BeginAddress - ImageBase;
    v78 = 0LL;
    v13 = *(_BYTE *)(v11 + 3);
    v14 = *(_BYTE *)v11 & 7;
    if ( (v13 & 0xF) == 0 )
    {
      Rsp = v96.Rsp;
LABEL_9:
      v16 = Rsp;
      EstablisherFrame = Rsp;
      goto LABEL_10;
    }
    if ( v12 >= *(unsigned __int8 *)(v11 + 1) || (*(_BYTE *)v11 & 0x20) != 0 )
    {
      Rsp = v96.Rsp;
      v39 = *(_BYTE *)(v11 + 3);
      v40 = v13;
    }
    else
    {
      v68 = 0LL;
      if ( *(_BYTE *)(v11 + 2) )
      {
        do
        {
          v69 = *(unsigned __int16 *)(v11 + 2 * v68 + 4);
          if ( (BYTE1(v69) & 0xF) == 3 )
            break;
          v68 = (unsigned int)RtlpUnwindOpSlots(v69) + (unsigned int)v68;
        }
        while ( (unsigned int)v68 < *(unsigned __int8 *)(v11 + 2) );
        v10 = v78;
      }
      Rsp = v96.Rsp;
      if ( v12 < *(unsigned __int8 *)(v11 + 2 * v68 + 4) )
        goto LABEL_9;
      v40 = *(unsigned __int8 *)(v11 + 3);
      v39 = *(_BYTE *)(v11 + 3);
    }
    v16 = *(&v96.Rax + (v39 & 0xF)) - (int)(v40 & 0xFFFFFFF0);
    EstablisherFrame = v16;
LABEL_10:
    if ( v14 < 2 )
    {
      v17 = *(_BYTE *)Rip;
      v18 = 0LL;
      i = (_BYTE *)Rip;
      if ( *(_BYTE *)Rip == 72 )
      {
        v49 = *(_BYTE *)(Rip + 1);
        if ( v49 == -125 && *(_BYTE *)(Rip + 2) == 0xC4 )
        {
          i = (_BYTE *)(Rip + 4);
          goto LABEL_13;
        }
        if ( v49 == -127 && *(_BYTE *)(Rip + 2) == 0xC4 )
        {
LABEL_91:
          i = (_BYTE *)(Rip + 7);
          goto LABEL_13;
        }
      }
      if ( (v17 & 0xFE) != 0x48 )
        goto LABEL_13;
      if ( *(_BYTE *)(Rip + 1) != 0x8D )
        goto LABEL_13;
      v47 = *(_BYTE *)(Rip + 2) & 7;
      v18 = v47 | (8 * (v17 & 1u));
      if ( !(v47 | (8 * (v17 & 1))) || (_DWORD)v18 != (*(_BYTE *)(v11 + 3) & 0xF) )
        goto LABEL_13;
      v48 = *(_BYTE *)(Rip + 2) & 0xF8;
      if ( v48 != 96 )
      {
        if ( v48 != -96 )
          goto LABEL_13;
        goto LABEL_91;
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
      v20 = *i;
      if ( (unsigned __int8)(*i + 62) <= 1u || v20 == -13 && i[1] == 0xC3 )
        goto LABEL_75;
      if ( ((v20 + 23) & 0xFD) != 0 )
      {
        if ( v20 == -1 && i[1] == 37 || (v20 & 0xF8) == 0x48 && i[1] == 0xFF && (i[2] & 0x38) == 0x20 )
          goto LABEL_75;
        goto LABEL_22;
      }
      if ( v20 == -21 )
        v50 = (char)i[1] + 2;
      else
        v50 = *(_DWORD *)(i + 1) + 5;
      v51 = (unsigned __int64)&i[v50 - v9];
      v52 = (__int64)v74;
      BeginAddress = v74->BeginAddress;
      if ( v51 >= BeginAddress )
      {
        if ( v51 < v74->EndAddress )
        {
          if ( v51 == BeginAddress && (*(_BYTE *)v11 & 0x20) == 0 )
            goto LABEL_75;
LABEL_22:
          v21 = v74;
          goto LABEL_23;
        }
        v52 = (__int64)v74;
      }
      v66 = (_DWORD *)RtlpSameFunction(v52, v9, (void *)(v51 + v9));
      if ( !v66 || v51 == *v66 )
      {
        Rsp = v96.Rsp;
        v10 = v78;
LABEL_75:
        v43 = (char *)Rip;
        if ( (*(_BYTE *)Rip & 0xF8) != 0x48 )
          goto LABEL_79;
        v44 = *(_BYTE *)(Rip + 1);
        switch ( v44 )
        {
          case -125:
            v43 = (char *)(Rip + 4);
            Rsp += *(char *)(Rip + 3);
            goto LABEL_78;
          case -127:
            Rsp += *(unsigned __int8 *)(Rip + 3) | (unsigned __int64)((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8);
            break;
          case -115:
            v70 = *(_BYTE *)(Rip + 2) & 0xF8;
            if ( v70 == 96 )
            {
              v43 = (char *)(Rip + 4);
              v96.Rsp = *(&v96.Rax + v18);
              Rsp = *(char *)(Rip + 3) + v96.Rsp;
              goto LABEL_78;
            }
            if ( v70 != -96 )
            {
LABEL_179:
              while ( 1 )
              {
LABEL_79:
                v45 = *v43;
                if ( (*v43 & 0xF8) == 0x58 )
                {
                  *(&v96.Rax + (*v43 & 7)) = *(_QWORD *)Rsp;
                  Rsp = v96.Rsp + 8;
                  ++v43;
                }
                else
                {
                  if ( (v45 & 0xF0) != 0x40 || (v67 = v43[1], (v67 & 0xF8) != 0x58) )
                  {
                    v46 = *(_QWORD *)Rsp;
                    Rsp += 8LL;
                    v96.Rsp = Rsp;
                    v96.Rip = v46;
                    goto LABEL_43;
                  }
                  *(&v96.Rax + (v67 & 7 | (unsigned __int64)(8 * (v45 & 1u)))) = *(_QWORD *)Rsp;
                  Rsp = v96.Rsp + 8;
                  v43 += 2;
                }
LABEL_78:
                v96.Rsp = Rsp;
              }
            }
            Rsp = *(&v96.Rax + v18)
                + (*(unsigned __int8 *)(Rip + 3) | (unsigned __int64)((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8));
            break;
          default:
            goto LABEL_179;
        }
        v43 = (char *)(Rip + 7);
        goto LABEL_78;
      }
      Rsp = v96.Rsp;
      goto LABEL_22;
    }
    v54 = *(_BYTE *)(v11 + 2);
    if ( !v54 )
      goto LABEL_22;
    v55 = *(_WORD *)(v11 + 4);
    v56 = v55;
    LOWORD(v56) = HIBYTE(v55);
    if ( (HIBYTE(v55) & 0xF) != 6 )
      goto LABEL_22;
    v57 = (unsigned __int8)v55;
    v58 = Rip - v9;
    if ( (v55 & 0x1000) != 0 )
    {
      v33 = v74;
      v59 = v74->EndAddress - (unsigned __int8)v55;
      if ( v58 - v59 < (unsigned int)(unsigned __int8)v55 )
      {
LABEL_163:
        RtlpUnwindEpilogue(v9, v56, v58 - v59, (_DWORD)v33, (__int64)&v96, 0LL, 0LL, 0LL);
        Rsp = v96.Rsp;
        v10 = v78;
        goto LABEL_44;
      }
    }
    v21 = v74;
    for ( j = 1; j < v54; ++j )
    {
      v61 = *(_WORD *)(v11 + 2LL * j + 4);
      if ( (HIBYTE(v61) & 0xF) != 6 )
        break;
      v56 = (unsigned __int8)v61 + (HIBYTE(v61) >> 4 << 8);
      if ( !v56 )
        break;
      v59 = v74->EndAddress - v56;
      if ( v58 - v59 < v57 )
      {
        v33 = v74;
        goto LABEL_163;
      }
    }
LABEL_23:
    v22 = 0;
    v23 = v21;
    v79 = 0;
    while ( 1 )
    {
      v24 = 0;
      v73 = 0;
      v25 = (_BYTE *)(v9 + v23->UnwindInfoAddress);
      v26 = 0LL;
      v27 = Rip - v23->BeginAddress - v9;
      if ( v25[2] )
      {
        do
        {
          v28 = &v25[2 * v26];
          v29 = (unsigned __int8)v28[5] >> 4;
          if ( v27 < (unsigned __int8)v28[4] )
          {
            v71 = RtlpUnwindOpSlots(*((unsigned __int16 *)v28 + 2));
            Rsp = v96.Rsp;
            v26 = (unsigned int)(v71 + v26);
          }
          else
          {
            if ( (v25[2 * v26 + 5] & 0xF) != 0 )
            {
              if ( (v25[2 * v26 + 5] & 0xF) != 4 )
              {
                switch ( v25[2 * v26 + 5] & 0xF )
                {
                  case 1:
                    v26 = (unsigned int)(v26 + 1);
                    v41 = *(unsigned __int16 *)&v25[2 * v26 + 4];
                    if ( (_DWORD)v29 )
                    {
                      v26 = (unsigned int)(v26 + 1);
                      v42 = (*(unsigned __int16 *)&v25[2 * v26 + 4] << 16) + v41;
                    }
                    else
                    {
                      v42 = 8 * v41;
                    }
                    Rsp += v42;
                    goto LABEL_30;
                  case 2:
                    Rsp += (unsigned int)(8 * v29 + 8);
                    goto LABEL_30;
                  case 3:
                    v96.Rsp = *(&v96.Rax + (v25[3] & 0xF));
                    Rsp = v96.Rsp - (v25[3] & 0xF0);
                    goto LABEL_30;
                  case 5:
                    v26 = (unsigned int)(v26 + 2);
                    *(&v96.Rax + v29) = *(_QWORD *)(*(unsigned __int16 *)&v25[2 * (unsigned int)(v26 - 1) + 4]
                                                  + (*(unsigned __int16 *)&v25[2 * v26 + 4] << 16)
                                                  + v16);
                    Rsp = v96.Rsp;
                    goto LABEL_31;
                  case 6:
                    LODWORD(v26) = v26 + 1;
                    goto LABEL_31;
                  case 7:
                    LODWORD(v26) = v26 + 2;
                    goto LABEL_31;
                  case 8:
                    v26 = (unsigned int)(v26 + 1);
                    v62 = 16 * (unsigned int)*(unsigned __int16 *)&v25[2 * v26 + 4];
                    goto LABEL_113;
                  case 9:
                    v26 = (unsigned int)(v26 + 2);
                    v62 = *(unsigned __int16 *)&v25[2 * (unsigned int)(v26 - 1) + 4]
                        + (*(unsigned __int16 *)&v25[2 * v26 + 4] << 16);
LABEL_113:
                    v63 = &v96.Xmm0 + (unsigned int)v29;
                    v63->Low = *(_QWORD *)(v62 + v16);
                    v63->High = *(_QWORD *)(v62 + v16 + 8);
                    Rsp = v96.Rsp;
                    goto LABEL_31;
                  case 0xA:
                    v73 = 1;
                    v65 = (DWORD64 *)(Rsp + 24);
                    if ( (_DWORD)v29 )
                    {
                      Rsp += 8LL;
                      ++v65;
                    }
                    v96.Rip = *(_QWORD *)Rsp;
                    Rsp = *v65;
                    goto LABEL_30;
                  default:
                    RtlRaiseStatus(-1073741569);
                }
              }
              v26 = (unsigned int)(v26 + 1);
              *(&v96.Rax + v29) = *(_QWORD *)(8 * (unsigned int)*(unsigned __int16 *)&v25[2 * v26 + 4] + v16);
              Rsp = v96.Rsp;
            }
            else
            {
              *(&v96.Rax + v29) = *(_QWORD *)Rsp;
              Rsp = v96.Rsp + 8;
LABEL_30:
              v96.Rsp = Rsp;
            }
LABEL_31:
            v26 = (unsigned int)(v26 + 1);
          }
        }
        while ( (unsigned int)v26 < (unsigned __int8)v25[2] );
        v24 = v73;
        v22 = v79;
      }
      if ( (*v25 & 0x20) == 0 )
        break;
      v64 = (unsigned __int8)v25[2];
      if ( (v64 & 1) != 0 )
        ++v64;
      v79 = ++v22;
      v23 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)&v25[2 * v64 + 4];
      if ( v22 > 0x20 )
        RtlRaiseStatus(-1073741569);
    }
    if ( !v24 )
    {
      v30 = *(_QWORD *)Rsp;
      Rsp += 8LL;
      v96.Rsp = Rsp;
      v96.Rip = v30;
    }
    v31 = (_BYTE *)(v9 + v23->UnwindInfoAddress);
    if ( (int)Rip - v23->BeginAddress - (int)v9 >= (unsigned __int8)v31[1] && (*v31 & 8) != 0 )
    {
      v32 = (unsigned __int8)v31[2];
      if ( (v32 & 1) != 0 )
        v32 = (unsigned int)(v32 + 1);
      v10 = v9 + *(unsigned int *)&v31[2 * v32 + 4];
      HandlerData = &v31[2 * (unsigned int)(v32 + 2) + 4];
    }
    else
    {
      v10 = v78;
    }
    v4 = v83;
LABEL_43:
    v33 = v74;
LABEL_44:
    if ( (v16 & 7) != 0 || v16 < v84 || v16 >= v86 )
      break;
    v5 = v75;
    p_HistoryTable = v81;
    if ( v10 )
    {
      v34 = 0;
      while ( 1 )
      {
        FunctionEntry = v33;
        v91 = &v96;
        v35 = 0LL;
        v93 = HandlerData;
        v4->ExceptionFlags = v5;
        ControlPc = Rip;
        v88 = v9;
        v90 = v16;
        v92 = v10;
        v94 = p_HistoryTable;
        v95 = v34;
        if ( v72 )
          v35 = RtlpLogExceptionHandler(v4, &v96, Rip, v10);
        v36 = RtlpExecuteHandlerForException(v4, v16, v80, &ControlPc);
        if ( v35 )
          *(_DWORD *)(v35 + 1396) = v36;
        v37 = v82;
        v5 |= v4->ExceptionFlags & 1;
        v75 = v5;
        if ( v82 == v16 )
        {
          v5 &= ~0x10u;
          v37 = 0LL;
          v75 = v5;
          v82 = 0LL;
        }
        if ( v36 == 1 )
          goto LABEL_56;
        if ( !v36 )
          break;
        if ( v36 == 2 )
        {
          v5 |= 0x10u;
          v75 = v5;
          if ( v90 > v37 )
            v82 = v90;
LABEL_56:
          Rsp = v96.Rsp;
          goto LABEL_57;
        }
        if ( v36 != 3 )
          RtlRaiseStatus(-1073741786);
        v9 = v88;
        Rip = ControlPc;
        v33 = FunctionEntry;
        ImageBase = v88;
        RtlpCopyContext(&v96, v91);
        RtlVirtualUnwind(0, v9, Rip, v33, &v96, &HandlerData, &EstablisherFrame, 0LL);
        v16 = v90;
        p_HistoryTable = v94;
        v10 = v92;
        HandlerData = v93;
        v34 = v95;
        EstablisherFrame = v90;
        v81 = v94;
      }
      if ( (v5 & 1) != 0 )
        RtlRaiseStatus(-1073741787);
      v3 = v80;
      v2 = 1;
      goto LABEL_62;
    }
LABEL_57:
    Rip = v96.Rip;
    if ( (Rsp & 7) != 0 || Rsp < v84 || Rsp >= v86 )
      goto LABEL_60;
  }
  v5 = v75 | 8;
LABEL_60:
  v3 = v80;
  v2 = 0;
LABEL_61:
  v4->ExceptionFlags = v5;
LABEL_62:
  RtlpCallVectoredHandlers(v4, v3, 1LL);
  return v2;
}
