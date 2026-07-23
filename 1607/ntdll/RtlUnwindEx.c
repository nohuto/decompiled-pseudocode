/*
 * XREFs of RtlUnwindEx @ 0x180035330
 * Callers:
 *     __C_specific_handler @ 0x180096E90 (__C_specific_handler.c)
 *     _local_unwind @ 0x180097800 (_local_unwind.c)
 *     KiUserCallbackDispatcherHandler @ 0x1800A9F20 (KiUserCallbackDispatcherHandler.c)
 *     __longjmp_internal @ 0x1800AC820 (__longjmp_internal.c)
 *     RtlUnwind @ 0x1800F2F70 (RtlUnwind.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x180032680 (RtlpGetStackLimits.c)
 *     RtlpCopyContext @ 0x180035DD4 (RtlpCopyContext.c)
 *     RtlLookupFunctionEntry @ 0x180035F90 (RtlLookupFunctionEntry.c)
 *     RtlGuardIsValidStackPointer @ 0x180036724 (RtlGuardIsValidStackPointer.c)
 *     RtlVirtualUnwind @ 0x180036EE0 (RtlVirtualUnwind.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180039AE0 (RtlGuardCheckLongJumpTarget.c)
 *     RtlpSameFunction @ 0x180078BD4 (RtlpSameFunction.c)
 *     RtlpUnwindOpSlots @ 0x180088E54 (RtlpUnwindOpSlots.c)
 *     LdrpValidateUserCallTarget @ 0x1800967F0 (LdrpValidateUserCallTarget.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     RtlpUnwindEpilogue @ 0x1800A5BD4 (RtlpUnwindEpilogue.c)
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 *     ZwRaiseException @ 0x1800A8E70 (ZwRaiseException.c)
 *     RtlCaptureContext @ 0x1800AA150 (RtlCaptureContext.c)
 *     RtlRestoreContext @ 0x1800AA210 (RtlRestoreContext.c)
 *     RtlpExecuteHandlerForUnwind @ 0x1800AAF40 (RtlpExecuteHandlerForUnwind.c)
 */

void __stdcall RtlUnwindEx(
        PVOID TargetFrame,
        PVOID TargetIp,
        PEXCEPTION_RECORD ExceptionRecord,
        PVOID ReturnValue,
        PCONTEXT ContextRecord,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  PVOID v6; // rdi
  struct _UNWIND_HISTORY_TABLE *v7; // rbx
  PCONTEXT v9; // r13
  struct _CONTEXT *v10; // r15
  unsigned __int64 v11; // r14
  ULONG64 v12; // r12
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r11
  __int64 v16; // rsi
  unsigned __int64 v17; // r11
  __int64 v18; // rsi
  unsigned int v19; // ebx
  __int64 v20; // rdx
  unsigned int v21; // edi
  char v22; // cl
  __int64 v23; // rdi
  _BYTE *i; // rdx
  char v25; // cl
  _DWORD *p_BeginAddress; // r12
  unsigned int v27; // ecx
  ULONG64 v28; // r8
  _BYTE *v29; // rdi
  __int64 v30; // rbx
  char v31; // r13
  unsigned int v32; // esi
  _BYTE *v33; // rdx
  __int64 v34; // r9
  DWORD64 v35; // rcx
  _BYTE *v36; // rdx
  __int64 v37; // r8
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v38; // rsi
  unsigned __int64 v39; // rax
  int v40; // ebx
  unsigned int v41; // ecx
  struct _EXCEPTION_RECORD *v42; // r10
  DWORD64 v43; // rdx
  PVOID v44; // rax
  PUNWIND_HISTORY_TABLE v45; // rax
  int v46; // eax
  struct _CONTEXT *v47; // rax
  struct _EXCEPTION_RECORD *v48; // rsi
  char v49; // cl
  int v50; // eax
  int v51; // edx
  unsigned int v52; // edx
  struct _CONTEXT *v53; // rax
  char *v54; // r8
  char v55; // al
  char v56; // cl
  DWORD64 v57; // rcx
  int v58; // eax
  char v59; // r8
  char v60; // al
  int v61; // eax
  unsigned __int64 v62; // rbx
  PRUNTIME_FUNCTION v63; // rax
  unsigned __int64 BeginAddress; // rcx
  DWORD64 v65; // rcx
  unsigned __int8 v66; // r8
  unsigned __int16 v67; // ax
  int v68; // edx
  int v69; // r10d
  unsigned int v70; // r9d
  int v71; // ecx
  unsigned int j; // ebx
  __int16 v73; // ax
  unsigned __int64 v74; // rbx
  __int64 v75; // rdx
  __int64 v76; // rcx
  int v77; // eax
  _DWORD *v78; // rax
  DWORD64 Rip; // rax
  DWORD64 *v80; // rax
  DWORD64 *v81; // rcx
  struct _CONTEXT *v82; // r8
  ULONG64 v83; // r10
  char v84; // r9
  DWORD64 *Rsp; // rcx
  __int64 v86; // r14
  __int64 v87; // rcx
  char v88; // al
  DWORD64 v89; // rcx
  unsigned int v90; // [rsp+40h] [rbp-C0h]
  unsigned __int64 ImageBase; // [rsp+48h] [rbp-B8h] BYREF
  PRUNTIME_FUNCTION v92; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v93; // [rsp+58h] [rbp-A8h]
  PCONTEXT v94; // [rsp+60h] [rbp-A0h]
  unsigned int v95; // [rsp+68h] [rbp-98h]
  ULONG64 v96; // [rsp+70h] [rbp-90h]
  unsigned __int64 EstablisherFrame; // [rsp+78h] [rbp-88h] BYREF
  PUNWIND_HISTORY_TABLE v98; // [rsp+80h] [rbp-80h]
  PVOID HandlerData; // [rsp+88h] [rbp-78h] BYREF
  struct _EXCEPTION_RECORD *ExceptionRecorda; // [rsp+90h] [rbp-70h]
  unsigned __int64 v101; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v102; // [rsp+A0h] [rbp-60h] BYREF
  PVOID v103; // [rsp+A8h] [rbp-58h]
  PVOID v104; // [rsp+B0h] [rbp-50h]
  PVOID v105; // [rsp+B8h] [rbp-48h]
  PCONTEXT v106; // [rsp+C0h] [rbp-40h]
  ULONG64 ControlPc; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v108; // [rsp+D8h] [rbp-28h]
  PRUNTIME_FUNCTION FunctionEntry; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v110; // [rsp+E8h] [rbp-18h]
  PVOID v111; // [rsp+F0h] [rbp-10h]
  PCONTEXT v112; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v113; // [rsp+100h] [rbp+0h]
  void *v114; // [rsp+108h] [rbp+8h]
  struct _UNWIND_HISTORY_TABLE *v115; // [rsp+110h] [rbp+10h]
  int v116; // [rsp+118h] [rbp+18h]
  int v117; // [rsp+120h] [rbp+20h] BYREF
  __int64 v118; // [rsp+128h] [rbp+28h]
  DWORD64 v119; // [rsp+130h] [rbp+30h]
  int v120; // [rsp+138h] [rbp+38h]
  struct _CONTEXT v121; // [rsp+1C0h] [rbp+C0h] BYREF

  v6 = TargetFrame;
  v7 = HistoryTable;
  v104 = TargetIp;
  v105 = TargetFrame;
  v106 = ContextRecord;
  v98 = HistoryTable;
  v103 = ReturnValue;
  ExceptionRecorda = ExceptionRecord;
  if ( !RtlpGetStackLimits(&v101, (void **)&v102) )
    RtlRaiseStatus(-1073741784);
  v94 = ContextRecord;
  v9 = ContextRecord;
  v10 = &v121;
  RtlCaptureContext(ContextRecord);
  if ( HistoryTable )
    HistoryTable->Search = 1;
  if ( !ExceptionRecord )
  {
    Rip = ContextRecord->Rip;
    ExceptionRecorda = (struct _EXCEPTION_RECORD *)&v117;
    v119 = Rip;
    v117 = -1073741785;
    v118 = 0LL;
    v120 = 0;
  }
  v90 = 2;
  if ( !v6 )
    v90 = 6;
  v11 = 0LL;
  while ( 1 )
  {
    v12 = v9->Rip;
    v96 = v12;
    v92 = RtlLookupFunctionEntry(v12, &ImageBase, v7);
    if ( !v92 )
    {
      Rsp = (DWORD64 *)v9->Rsp;
      v9->Rip = *Rsp;
      v9->Rsp = (DWORD64)(Rsp + 1);
      goto LABEL_57;
    }
    RtlpCopyContext(v10, v9);
    v16 = *(unsigned int *)(v15 + 8);
    v17 = ImageBase;
    v18 = ImageBase + v16;
    v93 = 0LL;
    v19 = v12 - ImageBase - v92->BeginAddress;
    v20 = *(unsigned __int8 *)(v18 + 3);
    v21 = *(_BYTE *)v18 & 7;
    if ( (v20 & 0xF) == 0 )
    {
LABEL_11:
      v11 = v10->Rsp;
      goto LABEL_12;
    }
    if ( v19 >= *(unsigned __int8 *)(v18 + 1) || (*(_BYTE *)v18 & 0x20) != 0 )
    {
      v49 = *(_BYTE *)(v18 + 3);
      v50 = (unsigned __int8)v20;
    }
    else
    {
      v86 = 0LL;
      if ( *(_BYTE *)(v18 + 2) )
      {
        do
        {
          v87 = *(unsigned __int16 *)(v18 + 2 * v86 + 4);
          if ( (BYTE1(v87) & 0xF) == 3 )
            break;
          v86 = (unsigned int)RtlpUnwindOpSlots(v87, v20, v13, v14) + (unsigned int)v86;
        }
        while ( (unsigned int)v86 < *(unsigned __int8 *)(v18 + 2) );
        v17 = ImageBase;
      }
      if ( v19 < *(unsigned __int8 *)(v18 + 2 * v86 + 4) )
        goto LABEL_11;
      v50 = *(unsigned __int8 *)(v18 + 3);
      v49 = *(_BYTE *)(v18 + 3);
    }
    v11 = *(&v10->Rax + (v49 & 0xF)) - (int)(v50 & 0xFFFFFFF0);
LABEL_12:
    EstablisherFrame = v11;
    if ( v21 < 2 )
    {
      v22 = *(_BYTE *)v12;
      v23 = 0LL;
      i = (_BYTE *)v12;
      if ( *(_BYTE *)v12 == 72 )
      {
        v60 = *(_BYTE *)(v12 + 1);
        if ( v60 == -125 && *(_BYTE *)(v12 + 2) == 0xC4 )
        {
          i = (_BYTE *)(v12 + 4);
          goto LABEL_15;
        }
        if ( v60 == -127 && *(_BYTE *)(v12 + 2) == 0xC4 )
        {
LABEL_99:
          i = (_BYTE *)(v12 + 7);
          goto LABEL_15;
        }
      }
      if ( (v22 & 0xFE) != 0x48 )
        goto LABEL_15;
      if ( *(_BYTE *)(v12 + 1) != 0x8D )
        goto LABEL_15;
      v58 = *(_BYTE *)(v12 + 2) & 7;
      v23 = v58 | (8 * (v22 & 1u));
      if ( !(v58 | (8 * (v22 & 1))) || (_DWORD)v23 != (*(_BYTE *)(v18 + 3) & 0xF) )
        goto LABEL_15;
      v59 = *(_BYTE *)(v12 + 2) & 0xF8;
      if ( v59 != 96 )
      {
        if ( v59 != -96 )
          goto LABEL_15;
        goto LABEL_99;
      }
      for ( i = (_BYTE *)(v12 + 4); ; i += 2 )
      {
LABEL_15:
        while ( (*i & 0xF8) == 0x58 )
          ++i;
        if ( (*i & 0xF0) != 0x40 || (i[1] & 0xF8) != 0x58 )
          break;
      }
      if ( *i == 0xF2 )
        ++i;
      v25 = *i;
      if ( (unsigned __int8)(*i + 62) <= 1u || v25 == -13 && i[1] == 0xC3 )
      {
LABEL_84:
        v54 = (char *)v12;
        if ( (*(_BYTE *)v12 & 0xF8) == 0x48 )
        {
          v55 = *(_BYTE *)(v12 + 1);
          if ( v55 == -125 )
          {
            v54 = (char *)(v12 + 4);
            v10->Rsp += *(char *)(v12 + 3);
          }
          else
          {
            if ( v55 == -127 )
            {
              v10->Rsp += *(unsigned __int8 *)(v12 + 3) | (unsigned __int64)((*(unsigned __int8 *)(v12 + 4) | (*(unsigned __int16 *)(v12 + 5) << 8)) << 8);
            }
            else
            {
              if ( v55 != -115 )
                goto LABEL_87;
              v88 = *(_BYTE *)(v12 + 2) & 0xF8;
              if ( v88 == 96 )
              {
                v89 = *(&v10->Rax + v23);
                v54 = (char *)(v12 + 4);
                v10->Rsp = v89;
                v10->Rsp = v89 + *(char *)(v12 + 3);
                goto LABEL_87;
              }
              if ( v88 != -96 )
                goto LABEL_87;
              v10->Rsp = *(&v10->Rax + v23)
                       + (*(unsigned __int8 *)(v12 + 3) | ((*(unsigned __int8 *)(v12 + 4) | (*(unsigned __int16 *)(v12 + 5) << 8)) << 8));
            }
            v54 = (char *)(v12 + 7);
          }
        }
        while ( 1 )
        {
LABEL_87:
          while ( 1 )
          {
            v56 = *v54;
            if ( (*v54 & 0xF8) != 0x58 )
              break;
            *(&v10->Rax + (*v54 & 7)) = *(_QWORD *)v10->Rsp;
            v10->Rsp += 8LL;
            ++v54;
          }
          if ( (v56 & 0xF0) != 0x40 )
            break;
          v84 = v54[1];
          if ( (v84 & 0xF8) != 0x58 )
            break;
          *(&v10->Rax + (v84 & 7 | (unsigned __int64)(8 * (v56 & 1u)))) = *(_QWORD *)v10->Rsp;
          v10->Rsp += 8LL;
          v54 += 2;
        }
        v38 = v92;
        v57 = *(_QWORD *)v10->Rsp;
        v10->Rsp += 8LL;
        v39 = v93;
        v10->Rip = v57;
        goto LABEL_42;
      }
      if ( ((v25 + 23) & 0xFD) != 0 )
      {
        if ( v25 == -1 && i[1] == 37 || (v25 & 0xF8) == 0x48 && i[1] == 0xFF && (i[2] & 0x38) == 0x20 )
          goto LABEL_84;
        goto LABEL_24;
      }
      if ( v25 == -21 )
        v61 = (char)i[1] + 2;
      else
        v61 = *(_DWORD *)(i + 1) + 5;
      v62 = (unsigned __int64)&i[v61 - v17];
      v63 = v92;
      BeginAddress = v92->BeginAddress;
      if ( v62 >= BeginAddress )
      {
        if ( v62 < v92->EndAddress )
        {
          if ( v62 == BeginAddress && (*(_BYTE *)v18 & 0x20) == 0 )
            goto LABEL_84;
          goto LABEL_24;
        }
        v63 = v92;
      }
      v78 = (_DWORD *)RtlpSameFunction(v63, v17, v62 + v17);
      v17 = ImageBase;
      if ( !v78 || v62 == *v78 )
        goto LABEL_84;
      goto LABEL_24;
    }
    v66 = *(_BYTE *)(v18 + 2);
    if ( !v66 )
      goto LABEL_24;
    v67 = *(_WORD *)(v18 + 4);
    v68 = v67;
    LOWORD(v68) = HIBYTE(v67);
    if ( (HIBYTE(v67) & 0xF) != 6 )
      goto LABEL_24;
    v69 = v12 - v17;
    v70 = (unsigned __int8)v67;
    if ( (v67 & 0x1000) == 0
      || (v71 = v92->EndAddress - (unsigned __int8)v67, v69 - v71 >= (unsigned int)(unsigned __int8)v67) )
    {
      for ( j = 1; j < v66; ++j )
      {
        v73 = *(_WORD *)(v18 + 2LL * j + 4);
        if ( (HIBYTE(v73) & 0xF) != 6 )
          break;
        v68 = (unsigned __int8)v73 + (HIBYTE(v73) >> 4 << 8);
        if ( !v68 )
          break;
        v71 = v92->EndAddress - v68;
        if ( v69 - v71 < v70 )
        {
          LODWORD(v17) = ImageBase;
          goto LABEL_173;
        }
      }
      v17 = ImageBase;
LABEL_24:
      p_BeginAddress = &v92->BeginAddress;
      v27 = 0;
      v28 = v96;
      v95 = 0;
      while ( 1 )
      {
        v29 = (_BYTE *)(v17 + (unsigned int)p_BeginAddress[2]);
        v30 = 0LL;
        v31 = 0;
        v32 = v28 - *p_BeginAddress - v17;
        if ( v29[2] )
        {
          do
          {
            v33 = &v29[2 * v30];
            v34 = (unsigned __int8)v33[5] >> 4;
            if ( v32 < (unsigned __int8)v33[4] )
            {
              v30 = (unsigned int)RtlpUnwindOpSlots(*((unsigned __int16 *)v33 + 2), v33, v28, v34) + (unsigned int)v30;
            }
            else
            {
              if ( (v29[2 * v30 + 5] & 0xF) != 0 )
              {
                if ( (v29[2 * v30 + 5] & 0xF) == 4 )
                {
                  v30 = (unsigned int)(v30 + 1);
                  *(&v10->Rax + v34) = *(_QWORD *)(8 * (unsigned int)*(unsigned __int16 *)&v29[2 * v30 + 4] + v11);
                }
                else
                {
                  switch ( v29[2 * v30 + 5] & 0xF )
                  {
                    case 1:
                      v30 = (unsigned int)(v30 + 1);
                      v51 = *(unsigned __int16 *)&v29[2 * v30 + 4];
                      if ( (_DWORD)v34 )
                      {
                        v30 = (unsigned int)(v30 + 1);
                        v52 = (*(unsigned __int16 *)&v29[2 * v30 + 4] << 16) + v51;
                      }
                      else
                      {
                        v52 = 8 * v51;
                      }
                      v10->Rsp += v52;
                      break;
                    case 2:
                      v10->Rsp += (unsigned int)(8 * v34 + 8);
                      break;
                    case 3:
                      v65 = *(&v10->Rax + (v29[3] & 0xF));
                      v10->Rsp = v65;
                      v10->Rsp = v65 - (v29[3] & 0xF0);
                      break;
                    case 5:
                      v30 = (unsigned int)(v30 + 2);
                      *(&v10->Rax + v34) = *(_QWORD *)(*(unsigned __int16 *)&v29[2 * (unsigned int)(v30 - 1) + 4]
                                                     + (*(unsigned __int16 *)&v29[2 * v30 + 4] << 16)
                                                     + v11);
                      break;
                    case 6:
                      LODWORD(v30) = v30 + 1;
                      break;
                    case 7:
                      LODWORD(v30) = v30 + 2;
                      break;
                    case 8:
                      v30 = (unsigned int)(v30 + 1);
                      v75 = 16 * (unsigned int)*(unsigned __int16 *)&v29[2 * v30 + 4];
                      goto LABEL_121;
                    case 9:
                      v30 = (unsigned int)(v30 + 2);
                      v75 = *(unsigned __int16 *)&v29[2 * (unsigned int)(v30 - 1) + 4]
                          + (*(unsigned __int16 *)&v29[2 * v30 + 4] << 16);
LABEL_121:
                      v76 = (unsigned int)v34;
                      v10->FltSave.XmmRegisters[v76].Low = *(_QWORD *)(v75 + v11);
                      v10->FltSave.XmmRegisters[v76].High = *(_QWORD *)(v75 + v11 + 8);
                      break;
                    case 0xA:
                      v80 = (DWORD64 *)v10->Rsp;
                      v31 = 1;
                      v81 = v80 + 3;
                      if ( (_DWORD)v34 )
                      {
                        ++v80;
                        ++v81;
                      }
                      v10->Rip = *v80;
                      v10->Rsp = *v81;
                      break;
                    default:
                      RtlRaiseStatus(-1073741569);
                  }
                }
              }
              else
              {
                *(&v10->Rax + v34) = *(_QWORD *)v10->Rsp;
                v10->Rsp += 8LL;
              }
              v30 = (unsigned int)(v30 + 1);
            }
          }
          while ( (unsigned int)v30 < (unsigned __int8)v29[2] );
          v17 = ImageBase;
          v28 = v96;
          v27 = v95;
        }
        if ( (*v29 & 0x20) == 0 )
          break;
        v77 = (unsigned __int8)v29[2];
        if ( (v77 & 1) != 0 )
          ++v77;
        v95 = ++v27;
        p_BeginAddress = &v29[2 * v77 + 4];
        if ( v27 > 0x20 )
          RtlRaiseStatus(-1073741569);
      }
      if ( !v31 )
      {
        v35 = *(_QWORD *)v10->Rsp;
        v10->Rsp += 8LL;
        v10->Rip = v35;
      }
      v36 = (_BYTE *)(v17 + (unsigned int)p_BeginAddress[2]);
      if ( (int)v28 - *p_BeginAddress - (int)v17 >= (unsigned int)(unsigned __int8)v36[1] && (*v36 & 0x10) != 0 )
      {
        v37 = (unsigned __int8)v36[2];
        if ( (v37 & 1) != 0 )
          v37 = (unsigned int)(v37 + 1);
        v9 = v94;
        v12 = v96;
        v38 = v92;
        HandlerData = &v36[2 * (unsigned int)(v37 + 2) + 4];
        v39 = v17 + *(unsigned int *)&v36[2 * v37 + 4];
        v93 = v39;
        goto LABEL_42;
      }
      v12 = v96;
      v9 = v94;
      v38 = v92;
      goto LABEL_79;
    }
LABEL_173:
    v38 = v92;
    RtlpUnwindEpilogue(v17, v68, v69 - v71, (_DWORD)v92, (__int64)v10, 0LL, 0LL, 0LL);
    v17 = ImageBase;
LABEL_79:
    v39 = v93;
LABEL_42:
    if ( (v11 & 7) != 0 || v11 < v101 || v11 >= v102 || (v6 = v105) != 0LL && (unsigned __int64)v105 < v11 )
      RtlRaiseStatus(-1073741784);
    if ( v39 )
    {
      v40 = 0;
      v111 = v104;
      v41 = v90;
      do
      {
        if ( v6 == (PVOID)v11 )
          v41 |= 0x20u;
        v42 = ExceptionRecorda;
        v43 = (DWORD64)v103;
        v113 = v39;
        v44 = HandlerData;
        ExceptionRecorda->ExceptionFlags = v41;
        v114 = v44;
        v45 = v98;
        v90 = v41 & 0xFFFFFF9F;
        v9->Rax = v43;
        ControlPc = v12;
        v108 = v17;
        FunctionEntry = v38;
        v110 = v11;
        v112 = v9;
        v115 = v45;
        v116 = v40;
        v46 = RtlpExecuteHandlerForUnwind(v42, v11, v9, &ControlPc) - 1;
        if ( v46 )
        {
          if ( v46 != 2 )
            RtlRaiseStatus(-1073741786);
          v12 = ControlPc;
          v38 = FunctionEntry;
          ImageBase = v108;
          RtlpCopyContext(v106, v112);
          v94 = v82;
          v9 = v82;
          v10 = &v121;
          RtlpCopyContext(&v121, v82);
          RtlVirtualUnwind(2u, v83, v12, v38, &v121, &HandlerData, &EstablisherFrame, 0LL);
          v11 = v110;
          v39 = v113;
          v40 = v116;
          HandlerData = v114;
          v98 = v115;
          v41 = v90 | 0x40;
          EstablisherFrame = v110;
          v90 |= 0x40u;
          v93 = v113;
        }
        else
        {
          v41 = v90;
          if ( (PVOID)v11 != v6 )
          {
            v47 = v9;
            v94 = v10;
            v9 = v10;
            v10 = v47;
          }
          v39 = v93;
        }
        v17 = ImageBase;
      }
      while ( (v41 & 0x40) != 0 );
    }
    else if ( (PVOID)v11 != v105 )
    {
      v53 = v9;
      v94 = v10;
      v9 = v10;
      v10 = v53;
    }
    v7 = v98;
LABEL_57:
    if ( (v11 & 7) != 0 || v11 < v101 || v11 >= v102 )
      break;
    if ( (PVOID)v11 == v6 )
      goto LABEL_61;
  }
  if ( (PVOID)v11 == v6 )
  {
LABEL_61:
    v48 = ExceptionRecorda;
    v9->Rax = (DWORD64)v103;
    if ( v48->ExceptionCode != -2147483607 )
      v9->Rip = (DWORD64)v104;
    if ( v48->ExceptionCode == -2147483610 )
    {
      v74 = v48->ExceptionInformation[0];
      if ( LdrSystemDllInitBlock.Wow64SharedInformation[9]
        && !(unsigned int)RtlGuardIsValidStackPointer(*(_QWORD *)(v74 + 16)) )
      {
        __fastfail(0xDu);
      }
      RtlGuardCheckLongJumpTarget(*(PVOID *)(v74 + 80), 0, 0LL);
      goto LABEL_67;
    }
    if ( v48->ExceptionCode == -2147483607 && v48->NumberParameters )
    {
      if ( !LdrSystemDllInitBlock.Wow64SharedInformation[9] )
      {
LABEL_67:
        RtlRestoreContext(v9, v48);
        return;
      }
      LdrpValidateUserCallTarget(v48->ExceptionInformation[0]);
    }
    if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
    {
      if ( !(unsigned int)RtlGuardIsValidStackPointer(v9->Rsp) )
        __fastfail(0xDu);
    }
    goto LABEL_67;
  }
  if ( v12 == v9->Rip )
    RtlRaiseStatus(-1073741569);
  ZwRaiseException(ExceptionRecorda, v9, 0);
}
