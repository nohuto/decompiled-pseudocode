/*
 * XREFs of RtlDispatchException @ 0x180034C40
 * Callers:
 *     RtlRaiseException @ 0x180036970 (RtlRaiseException.c)
 *     RtlRaiseStatus @ 0x1800A4A80 (RtlRaiseStatus.c)
 *     KiUserExceptionDispatcher @ 0x1800A8BC0 (KiUserExceptionDispatcher.c)
 * Callees:
 *     RtlpUnwindOpSlots @ 0x180003788 (RtlpUnwindOpSlots.c)
 *     RtlpGetStackLimits @ 0x180032E40 (RtlpGetStackLimits.c)
 *     RtlpCopyContext @ 0x180036030 (RtlpCopyContext.c)
 *     RtlLookupFunctionEntry @ 0x1800361F0 (RtlLookupFunctionEntry.c)
 *     RtlVirtualUnwind @ 0x1800370C0 (RtlVirtualUnwind.c)
 *     RtlpCallVectoredHandlers @ 0x18006E65C (RtlpCallVectoredHandlers.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     RtlpSameFunction @ 0x1800A47C4 (RtlpSameFunction.c)
 *     RtlpUnwindEpilogue @ 0x1800A4880 (RtlpUnwindEpilogue.c)
 *     RtlRaiseStatus @ 0x1800A4A80 (RtlRaiseStatus.c)
 *     RtlpExecuteHandlerForException @ 0x1800A9AE0 (RtlpExecuteHandlerForException.c)
 *     RtlpLogExceptionDispatch @ 0x1800E8EA0 (RtlpLogExceptionDispatch.c)
 *     RtlpLogExceptionHandler @ 0x1800E9044 (RtlpLogExceptionHandler.c)
 */

BOOLEAN __cdecl RtlDispatchException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord)
{
  BOOLEAN v2; // bl
  PCONTEXT v3; // rdi
  PEXCEPTION_RECORD v4; // r15
  int v5; // r13d
  struct _UNWIND_HISTORY_TABLE *p_HistoryTable; // rcx
  ULONG64 Rip; // r14
  PRUNTIME_FUNCTION v8; // rax
  unsigned int *p_BeginAddress; // r10
  ULONG64 v10; // rdi
  unsigned int v11; // esi
  unsigned __int64 v12; // r15
  unsigned int v13; // r12d
  DWORD64 Rsp; // rdx
  _BYTE *i; // rcx
  unsigned int v16; // esi
  char v17; // r8
  unsigned __int64 v18; // r9
  _DWORD *v19; // r12
  unsigned int v20; // ecx
  _BYTE *v21; // rsi
  unsigned int v22; // r15d
  __int64 v23; // rdi
  char v24; // r13
  __int64 v25; // r9
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  DWORD64 v30; // rax
  DWORD64 v31; // rax
  _BYTE *v32; // r8
  __int64 v33; // r9
  _BYTE *v34; // r10
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rsi
  struct _UNWIND_HISTORY_TABLE *v37; // rdx
  int v38; // eax
  __int64 v39; // rdi
  int v40; // eax
  unsigned __int64 v41; // rdi
  unsigned __int8 v42; // cl
  int v43; // eax
  int v44; // r8d
  unsigned int v45; // r8d
  char v46; // r8
  char v47; // al
  _BYTE *v48; // rdi
  int v49; // eax
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rdi
  unsigned int v52; // ecx
  __int16 v53; // cx
  unsigned int v54; // r11d
  int v55; // r8d
  int v56; // ecx
  unsigned int v57; // edi
  unsigned int v58; // r10d
  __int16 v59; // r9
  int v60; // r9d
  unsigned int v61; // ecx
  unsigned int v62; // ecx
  ULONGLONG *v63; // rdx
  __int64 v64; // rcx
  LONGLONG v65; // rax
  int v66; // eax
  _BYTE *v67; // r8
  char v68; // al
  DWORD64 v69; // rax
  unsigned int v70; // ecx
  DWORD64 *v71; // rcx
  PRUNTIME_FUNCTION v73; // r8
  int v74; // eax
  unsigned int v75; // edi
  unsigned __int16 v76; // cx
  __int64 v77; // rax
  _DWORD *v78; // rax
  char v79; // al
  ULONGLONG *v80; // r8
  char v81; // [rsp+40h] [rbp-C0h]
  unsigned __int64 ImageBase; // [rsp+48h] [rbp-B8h] BYREF
  int v83; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v84; // [rsp+58h] [rbp-A8h]
  PVOID HandlerData; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE *v86; // [rsp+68h] [rbp-98h]
  PRUNTIME_FUNCTION v87; // [rsp+70h] [rbp-90h]
  unsigned __int64 EstablisherFrame; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v89; // [rsp+80h] [rbp-80h]
  PEXCEPTION_RECORD v90; // [rsp+88h] [rbp-78h]
  unsigned __int64 v91; // [rsp+90h] [rbp-70h]
  struct _UNWIND_HISTORY_TABLE *v92; // [rsp+98h] [rbp-68h]
  PCONTEXT v93; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v94; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v95; // [rsp+B0h] [rbp-50h] BYREF
  ULONG64 ControlPc; // [rsp+C0h] [rbp-40h] BYREF
  ULONG64 v97; // [rsp+C8h] [rbp-38h]
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v98; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v99; // [rsp+D8h] [rbp-28h]
  struct _CONTEXT *v100; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v101; // [rsp+F0h] [rbp-10h]
  _BYTE *v102; // [rsp+F8h] [rbp-8h]
  struct _UNWIND_HISTORY_TABLE *v103; // [rsp+100h] [rbp+0h]
  int v104; // [rsp+108h] [rbp+8h]
  struct _CONTEXT v105; // [rsp+110h] [rbp+10h] BYREF
  struct _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+5E0h] [rbp+4E0h] BYREF

  v2 = 0;
  v3 = ContextRecord;
  v93 = ContextRecord;
  v4 = ExceptionRecord;
  v90 = ExceptionRecord;
  v81 = 0;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x800000) != 0 )
  {
    v81 = 1;
    RtlpLogExceptionDispatch();
  }
  if ( (unsigned __int8)RtlpCallVectoredHandlers(v4, v3, 0LL) )
  {
    v2 = 1;
    goto LABEL_138;
  }
  v5 = v4->ExceptionFlags & 1;
  v83 = v5;
  if ( !RtlpGetStackLimits(&v94, (void **)&v95) )
  {
    v5 |= 8u;
    goto LABEL_155;
  }
  RtlpCopyContext(&v105, v3);
  p_HistoryTable = &HistoryTable;
  Rip = v3->Rip;
  HistoryTable.LowAddress = -1LL;
  v92 = &HistoryTable;
  v86 = HandlerData;
  v91 = 0LL;
  HistoryTable.Count = 0;
  *(_DWORD *)&HistoryTable.LocalHint = 0x1000000;
  HistoryTable.HighAddress = 0LL;
LABEL_6:
  v8 = RtlLookupFunctionEntry(Rip, &ImageBase, p_HistoryTable);
  v87 = v8;
  p_BeginAddress = &v8->BeginAddress;
  if ( !v8 )
  {
    if ( Rip != *(_QWORD *)v105.Rsp )
    {
      Rsp = v105.Rsp + 8;
      v105.Rip = *(_QWORD *)v105.Rsp;
      v105.Rsp += 8LL;
      goto LABEL_63;
    }
    goto LABEL_152;
  }
  v10 = ImageBase;
  v11 = Rip - v8->BeginAddress - ImageBase;
  v12 = ImageBase + v8->UnwindInfoAddress;
  v13 = *(_BYTE *)v12 & 7;
  if ( (*(_BYTE *)(v12 + 3) & 0xF) == 0 )
  {
    Rsp = v105.Rsp;
LABEL_9:
    v84 = Rsp;
    EstablisherFrame = Rsp;
    goto LABEL_10;
  }
  if ( v11 >= *(unsigned __int8 *)(v12 + 1) || (*(_BYTE *)v12 & 0x20) != 0 )
  {
    v42 = *(_BYTE *)(v12 + 3);
    v43 = v42;
    Rsp = v105.Rsp;
  }
  else
  {
    v75 = 0;
    if ( *(_BYTE *)(v12 + 2) )
    {
      do
      {
        v76 = *(_WORD *)(v12 + 2LL * v75 + 4);
        if ( (HIBYTE(v76) & 0xF) == 3 )
          break;
        v75 += RtlpUnwindOpSlots(v76);
      }
      while ( v75 < *(unsigned __int8 *)(v12 + 2) );
      p_BeginAddress = &v87->BeginAddress;
    }
    Rsp = v105.Rsp;
    v77 = v75;
    v10 = ImageBase;
    if ( v11 < *(unsigned __int8 *)(v12 + 2 * v77 + 4) )
      goto LABEL_9;
    v43 = *(unsigned __int8 *)(v12 + 3);
    v42 = *(_BYTE *)(v12 + 3);
  }
  EstablisherFrame = *(&v105.Rax + (v42 & 0xF)) - (int)(v43 & 0xFFFFFFF0);
  v84 = EstablisherFrame;
LABEL_10:
  if ( v13 >= 2 )
  {
    if ( *(_BYTE *)(v12 + 2) )
    {
      v53 = HIBYTE(*(_WORD *)(v12 + 4));
      if ( (v53 & 0xF) == 6 )
      {
        v54 = *(unsigned __int8 *)(v12 + 4);
        v55 = Rip - v10;
        if ( (v53 & 0x10) != 0 )
        {
          v56 = p_BeginAddress[1] - v54;
          if ( v55 - v56 < v54 )
            goto LABEL_175;
        }
        v57 = *(unsigned __int8 *)(v12 + 2);
        v58 = 1;
        if ( v57 > 1 )
        {
          while ( 1 )
          {
            v59 = HIBYTE(*(_WORD *)(v12 + 2LL * v58 + 4));
            if ( (v59 & 0xF) != 6 )
              goto LABEL_22;
            v60 = *(unsigned __int8 *)(v12 + 2LL * v58 + 4) + ((unsigned __int8)v59 >> 4 << 8);
            if ( !v60 )
              goto LABEL_22;
            v56 = v87->EndAddress - v60;
            if ( v55 - v56 < v54 )
              break;
            if ( ++v58 >= v57 )
              goto LABEL_22;
          }
          v10 = ImageBase;
          LODWORD(p_BeginAddress) = (_DWORD)v87;
LABEL_175:
          RtlpUnwindEpilogue(v10, Rsp, v55 - v56, (_DWORD)p_BeginAddress, (__int64)&v105, 0LL, 0LL, 0LL);
          Rsp = v105.Rsp;
LABEL_77:
          v34 = v86;
          v35 = 0LL;
          goto LABEL_49;
        }
      }
    }
    goto LABEL_22;
  }
  i = (_BYTE *)Rip;
  v16 = 0;
  if ( *(_BYTE *)Rip == 72 )
  {
    v47 = *(_BYTE *)(Rip + 1);
    if ( v47 == -125 && *(_BYTE *)(Rip + 2) == 0xC4 )
      goto LABEL_128;
    if ( v47 == -127 && *(_BYTE *)(Rip + 2) == 0xC4 )
    {
LABEL_90:
      i = (_BYTE *)(Rip + 7);
      goto LABEL_13;
    }
  }
  if ( (*(_BYTE *)Rip & 0xFE) != 0x48 )
    goto LABEL_13;
  if ( *(_BYTE *)(Rip + 1) != 0x8D )
    goto LABEL_13;
  v16 = *(_BYTE *)(Rip + 2) & 7 | (8 * (*(_BYTE *)Rip & 1));
  if ( !v16 || v16 != (*(_BYTE *)(v12 + 3) & 0xF) )
    goto LABEL_13;
  v46 = *(_BYTE *)(Rip + 2) & 0xF8;
  if ( v46 != 96 )
  {
    if ( v46 != -96 )
      goto LABEL_13;
    goto LABEL_90;
  }
LABEL_128:
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
  v17 = *i;
  if ( (unsigned __int8)(*i + 62) <= 1u || v17 == -13 && i[1] == 0xC3 )
    goto LABEL_120;
  if ( ((v17 + 23) & 0xFD) != 0 )
  {
    if ( v17 == -1 && i[1] == 37 || (v17 & 0xF8) == 0x48 && i[1] == 0xFF && (i[2] & 0x38) == 0x20 )
      goto LABEL_120;
    goto LABEL_22;
  }
  v18 = ImageBase;
  v48 = &i[-ImageBase];
  if ( v17 == -21 )
    v49 = (char)i[1] + 2;
  else
    v49 = *(_DWORD *)(i + 1) + 5;
  v50 = *p_BeginAddress;
  v51 = (unsigned __int64)&v48[v49];
  if ( v51 >= v50 && v51 < p_BeginAddress[1] )
  {
    if ( v51 == v50 && (*(_BYTE *)v12 & 0x20) == 0 )
      goto LABEL_120;
    goto LABEL_23;
  }
  v78 = (_DWORD *)RtlpSameFunction(p_BeginAddress, ImageBase, v51 + ImageBase);
  if ( !v78 || v51 == *v78 )
  {
    Rsp = v105.Rsp;
LABEL_120:
    v67 = (_BYTE *)Rip;
    if ( (*(_BYTE *)Rip & 0xF8) != 0x48 )
      goto LABEL_124;
    v68 = *(_BYTE *)(Rip + 1);
    switch ( v68 )
    {
      case -125:
LABEL_122:
        v67 = (_BYTE *)(Rip + 4);
        Rsp += *(char *)(Rip + 3);
        goto LABEL_123;
      case -127:
        Rsp += *(unsigned __int8 *)(Rip + 3) | (unsigned __int64)((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8);
        break;
      case -115:
        v79 = *(_BYTE *)(Rip + 2) & 0xF8;
        if ( v79 == 96 )
        {
          Rsp = *(&v105.Rax + v16);
          v105.Rsp = Rsp;
          goto LABEL_122;
        }
        if ( v79 != -96 )
        {
          while ( 1 )
          {
LABEL_124:
            if ( (*v67 & 0xF8) == 0x58 )
            {
              *(&v105.Rax + (*v67 & 7)) = *(_QWORD *)Rsp;
              Rsp = v105.Rsp + 8;
              ++v67;
            }
            else
            {
              if ( (*v67 & 0xF0) != 0x40 || (v67[1] & 0xF8) != 0x58 )
              {
                v69 = *(_QWORD *)Rsp;
                Rsp += 8LL;
                v10 = ImageBase;
                v105.Rsp = Rsp;
                v105.Rip = v69;
                goto LABEL_77;
              }
              *(&v105.Rax + (v67[1] & 7 | (unsigned __int64)(8 * (*v67 & 1u)))) = *(_QWORD *)Rsp;
              Rsp = v105.Rsp + 8;
              v67 += 2;
            }
LABEL_123:
            v105.Rsp = Rsp;
          }
        }
        Rsp = *(&v105.Rax + v16)
            + (*(unsigned __int8 *)(Rip + 3) | (unsigned __int64)((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8));
        break;
      default:
        goto LABEL_124;
    }
    v67 = (_BYTE *)(Rip + 7);
    goto LABEL_123;
  }
  Rsp = v105.Rsp;
LABEL_22:
  v18 = ImageBase;
LABEL_23:
  v19 = &v87->BeginAddress;
  v20 = 0;
  v89 = 0;
  while ( 2 )
  {
    v21 = (_BYTE *)(v18 + (unsigned int)v19[2]);
    v22 = Rip - *v19 - v18;
    LODWORD(v23) = 0;
    v24 = 0;
    if ( !v21[2] )
      goto LABEL_41;
    do
    {
      v25 = (unsigned __int8)v21[2 * (unsigned int)v23 + 5] >> 4;
      if ( v22 >= (unsigned __int8)v21[2 * (unsigned int)v23 + 4] )
      {
        v26 = v21[2 * (unsigned int)v23 + 5] & 0xF;
        if ( v26 <= 5 )
        {
          if ( v26 == 5 )
          {
            v23 = (unsigned int)(v23 + 2);
            v30 = *(_QWORD *)((*(unsigned __int16 *)&v21[2 * v23 + 4] << 16)
                            + (unsigned int)*(unsigned __int16 *)&v21[2 * (unsigned int)(v23 - 1) + 4]
                            + v84);
LABEL_34:
            *(&v105.Rax + v25) = v30;
LABEL_35:
            Rsp = v105.Rsp;
LABEL_38:
            LODWORD(v23) = v23 + 1;
            continue;
          }
          if ( (v21[2 * (unsigned int)v23 + 5] & 0xF) != 0 )
          {
            v27 = v26 - 1;
            if ( v27 )
            {
              v28 = v27 - 1;
              if ( v28 )
              {
                v29 = v28 - 1;
                if ( v29 )
                {
                  if ( v29 != 1 )
                    goto LABEL_182;
                  v23 = (unsigned int)(v23 + 1);
                  v30 = *(_QWORD *)(8 * (unsigned int)*(unsigned __int16 *)&v21[2 * v23 + 4] + v84);
                  goto LABEL_34;
                }
                v105.Rsp = *(&v105.Rax + (v21[3] & 0xF));
                Rsp = v105.Rsp - (v21[3] & 0xF0);
              }
              else
              {
                Rsp += (unsigned int)(8 * v25 + 8);
              }
            }
            else
            {
              v23 = (unsigned int)(v23 + 1);
              v44 = *(unsigned __int16 *)&v21[2 * v23 + 4];
              if ( (_DWORD)v25 )
              {
                v23 = (unsigned int)(v23 + 1);
                v45 = (*(unsigned __int16 *)&v21[2 * v23 + 4] << 16) + v44;
              }
              else
              {
                v45 = 8 * v44;
              }
              Rsp += v45;
            }
          }
          else
          {
            *(&v105.Rax + v25) = *(_QWORD *)Rsp;
            Rsp = v105.Rsp + 8;
          }
LABEL_37:
          v105.Rsp = Rsp;
          goto LABEL_38;
        }
        v52 = v26 - 6;
        if ( !v52 )
        {
          LODWORD(v23) = v23 + 1;
          goto LABEL_38;
        }
        v61 = v52 - 1;
        if ( !v61 )
        {
          LODWORD(v23) = v23 + 2;
          goto LABEL_38;
        }
        v62 = v61 - 1;
        if ( v62 )
        {
          v70 = v62 - 1;
          if ( v70 )
          {
            if ( v70 != 1 )
LABEL_182:
              RtlRaiseStatus(-1073741569);
            v24 = 1;
            v71 = (DWORD64 *)(Rsp + 24);
            if ( (_DWORD)v25 )
            {
              Rsp += 8LL;
              ++v71;
            }
            v105.Rip = *(_QWORD *)Rsp;
            Rsp = *v71;
            goto LABEL_37;
          }
          v23 = (unsigned int)(v23 + 2);
          v80 = (ULONGLONG *)(v84
                            + *(unsigned __int16 *)&v21[2 * (unsigned int)(v23 - 1) + 4]
                            + (*(unsigned __int16 *)&v21[2 * v23 + 4] << 16));
          v64 = 2LL * (unsigned int)v25;
          *(&v105.Xmm0.Low + 2 * (unsigned int)v25) = *v80;
          v65 = v80[1];
        }
        else
        {
          v23 = (unsigned int)(v23 + 1);
          v63 = (ULONGLONG *)(v84 + 16 * (unsigned int)*(unsigned __int16 *)&v21[2 * v23 + 4]);
          v64 = 2LL * (unsigned int)v25;
          *(&v105.Xmm0.Low + 2 * (unsigned int)v25) = *v63;
          v65 = v63[1];
        }
        *(&v105.Xmm0.High + v64) = v65;
        goto LABEL_35;
      }
      v74 = RtlpUnwindOpSlots(*(_WORD *)&v21[2 * (unsigned int)v23 + 4]);
      Rsp = v105.Rsp;
      LODWORD(v23) = v74 + v23;
    }
    while ( (unsigned int)v23 < (unsigned __int8)v21[2] );
    v20 = v89;
    v18 = ImageBase;
LABEL_41:
    if ( (*v21 & 0x20) != 0 )
    {
      v66 = (unsigned __int8)v21[2];
      if ( (v66 & 1) != 0 )
        ++v66;
      v89 = ++v20;
      v19 = &v21[2 * v66 + 4];
      if ( v20 > 0x20 )
        RtlRaiseStatus(-1073741569);
      continue;
    }
    break;
  }
  if ( !v24 )
  {
    v31 = *(_QWORD *)Rsp;
    Rsp += 8LL;
    v105.Rsp = Rsp;
    v105.Rip = v31;
  }
  v10 = ImageBase;
  v32 = (_BYTE *)(ImageBase + (unsigned int)v19[2]);
  if ( (int)Rip - *v19 - (int)ImageBase < (unsigned int)(unsigned __int8)v32[1] || (*v32 & 8) == 0 )
  {
    v5 = v83;
    goto LABEL_77;
  }
  v33 = (unsigned __int8)v32[2];
  if ( (v33 & 1) != 0 )
    v33 = (unsigned int)(v33 + 1);
  v5 = v83;
  v34 = &v32[2 * (unsigned int)(v33 + 2) + 4];
  v35 = ImageBase + *(unsigned int *)&v32[2 * v33 + 4];
  v86 = v34;
LABEL_49:
  v36 = v84;
  if ( (v84 & 7) != 0 || v84 < v94 || v84 >= v95 )
  {
    v4 = v90;
    v5 |= 8u;
LABEL_152:
    v3 = v93;
LABEL_155:
    v4->ExceptionFlags = v5;
    goto LABEL_138;
  }
  v4 = v90;
  if ( !v35 )
    goto LABEL_63;
  v37 = v92;
  v38 = 0;
  while ( 2 )
  {
    v97 = v10;
    v39 = 0LL;
    v98 = v87;
    v100 = &v105;
    v4->ExceptionFlags = v5;
    ControlPc = Rip;
    v99 = v36;
    v101 = v35;
    v102 = v34;
    v103 = v37;
    v104 = v38;
    if ( v81 )
      v39 = RtlpLogExceptionHandler(v4, &v105, Rip, v35);
    v40 = RtlpExecuteHandlerForException(v4, v36, v93, &ControlPc);
    if ( v39 )
      *(_DWORD *)(v39 + 1396) = v40;
    v41 = v91;
    v5 |= v4->ExceptionFlags & 1;
    v83 = v5;
    if ( v91 == v36 )
    {
      v5 &= ~0x10u;
      v91 = 0LL;
      v83 = v5;
      v41 = 0LL;
    }
    if ( v40 )
    {
      if ( v40 == 1 )
        goto LABEL_62;
      if ( v40 != 2 )
      {
        if ( v40 != 3 )
          RtlRaiseStatus(-1073741786);
        v10 = v97;
        Rip = ControlPc;
        ImageBase = v97;
        v87 = v98;
        RtlpCopyContext(&v105, v100);
        RtlVirtualUnwind(0, v10, Rip, v73, &v105, &HandlerData, &EstablisherFrame, 0LL);
        v34 = v102;
        v37 = v103;
        v36 = v99;
        v35 = v101;
        v38 = v104;
        v86 = v102;
        v92 = v103;
        EstablisherFrame = v99;
        continue;
      }
      v5 |= 0x10u;
      v83 = v5;
      if ( v99 > v41 )
        v91 = v99;
LABEL_62:
      Rsp = v105.Rsp;
LABEL_63:
      Rip = v105.Rip;
      if ( (Rsp & 7) != 0 || Rsp < v94 || Rsp >= v95 )
        goto LABEL_152;
      p_HistoryTable = v92;
      goto LABEL_6;
    }
    break;
  }
  if ( (v5 & 1) != 0 )
    RtlRaiseStatus(-1073741787);
  v3 = v93;
  v2 = 1;
LABEL_138:
  RtlpCallVectoredHandlers(v4, v3, 1LL);
  return v2;
}
