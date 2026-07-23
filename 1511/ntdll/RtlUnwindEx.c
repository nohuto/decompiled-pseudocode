/*
 * XREFs of RtlUnwindEx @ 0x1800355D0
 * Callers:
 *     __C_specific_handler @ 0x180095A90 (__C_specific_handler.c)
 *     _local_unwind @ 0x180096400 (_local_unwind.c)
 *     KiUserCallbackDispatcherHandler @ 0x1800A8AE0 (KiUserCallbackDispatcherHandler.c)
 *     __longjmp_internal @ 0x1800AB460 (__longjmp_internal.c)
 *     RtlUnwind @ 0x1800E9C60 (RtlUnwind.c)
 * Callees:
 *     RtlpUnwindOpSlots @ 0x180003788 (RtlpUnwindOpSlots.c)
 *     RtlpGetStackLimits @ 0x180032E40 (RtlpGetStackLimits.c)
 *     RtlpCopyContext @ 0x180036030 (RtlpCopyContext.c)
 *     RtlLookupFunctionEntry @ 0x1800361F0 (RtlLookupFunctionEntry.c)
 *     RtlGuardIsValidStackPointer @ 0x180036938 (RtlGuardIsValidStackPointer.c)
 *     RtlVirtualUnwind @ 0x1800370C0 (RtlVirtualUnwind.c)
 *     LdrpValidateUserCallTarget @ 0x180095400 (LdrpValidateUserCallTarget.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     RtlpSameFunction @ 0x1800A47C4 (RtlpSameFunction.c)
 *     RtlpUnwindEpilogue @ 0x1800A4880 (RtlpUnwindEpilogue.c)
 *     RtlRaiseStatus @ 0x1800A4A80 (RtlRaiseStatus.c)
 *     ZwRaiseException @ 0x1800A7A90 (ZwRaiseException.c)
 *     RtlCaptureContext @ 0x1800A8D10 (RtlCaptureContext.c)
 *     RtlRestoreContext @ 0x1800A8DD0 (RtlRestoreContext.c)
 *     RtlpExecuteHandlerForUnwind @ 0x1800A9B60 (RtlpExecuteHandlerForUnwind.c)
 */

void __stdcall RtlUnwindEx(
        PVOID TargetFrame,
        PVOID TargetIp,
        PEXCEPTION_RECORD ExceptionRecord,
        PVOID ReturnValue,
        PCONTEXT ContextRecord,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  struct _UNWIND_HISTORY_TABLE *v7; // rsi
  PVOID v8; // rdi
  PCONTEXT v9; // r13
  struct _CONTEXT *v10; // r15
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rbx
  ULONG64 v13; // r12
  __int64 v14; // r11
  __int64 v15; // rsi
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // r11
  __int64 v18; // rsi
  unsigned int v19; // ebx
  unsigned __int8 v20; // dl
  unsigned int v21; // edi
  char v22; // cl
  __int64 v23; // rdi
  _BYTE *j; // rdx
  char v25; // cl
  _DWORD *p_BeginAddress; // r12
  unsigned int v27; // ecx
  int v28; // r8d
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
  unsigned int v41; // eax
  struct _EXCEPTION_RECORD *v42; // rcx
  DWORD64 v43; // rdx
  int v44; // eax
  struct _CONTEXT *v45; // rax
  struct _EXCEPTION_RECORD *v46; // rbx
  char v47; // cl
  int v48; // eax
  int v49; // edx
  unsigned int v50; // edx
  struct _CONTEXT *v51; // rax
  int v52; // eax
  char v53; // r8
  char v54; // al
  DWORD64 v55; // rcx
  int v56; // eax
  unsigned __int64 v57; // rbx
  PRUNTIME_FUNCTION v58; // rax
  unsigned __int64 BeginAddress; // rcx
  unsigned __int8 v60; // r8
  unsigned __int16 v61; // ax
  int v62; // edx
  int v63; // r10d
  unsigned int v64; // r9d
  int v65; // ecx
  unsigned int i; // ebx
  __int16 v67; // ax
  __int64 v68; // rdx
  __int64 v69; // rcx
  int v70; // eax
  char *v71; // r8
  char v72; // al
  char v73; // cl
  DWORD64 v74; // rcx
  DWORD64 Rip; // rax
  DWORD64 *v76; // rax
  DWORD64 *v77; // rcx
  char v78; // r9
  struct _CONTEXT *v79; // r8
  ULONG64 v80; // r10
  DWORD64 *Rsp; // rcx
  __int64 v82; // r14
  unsigned __int16 v83; // cx
  _DWORD *v84; // rax
  char v85; // al
  DWORD64 v86; // rcx
  unsigned int v87; // [rsp+40h] [rbp-C0h]
  unsigned __int64 ImageBase; // [rsp+48h] [rbp-B8h] BYREF
  PRUNTIME_FUNCTION v89; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v90; // [rsp+58h] [rbp-A8h]
  PCONTEXT v91; // [rsp+60h] [rbp-A0h]
  ULONG64 v92; // [rsp+68h] [rbp-98h]
  unsigned __int64 EstablisherFrame; // [rsp+70h] [rbp-90h] BYREF
  PUNWIND_HISTORY_TABLE v94; // [rsp+78h] [rbp-88h]
  PVOID HandlerData; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v96; // [rsp+88h] [rbp-78h]
  unsigned __int64 v97; // [rsp+90h] [rbp-70h] BYREF
  struct _EXCEPTION_RECORD *ExceptionRecorda; // [rsp+98h] [rbp-68h]
  unsigned __int64 v99; // [rsp+A0h] [rbp-60h] BYREF
  PVOID v100; // [rsp+A8h] [rbp-58h]
  PVOID v101; // [rsp+B0h] [rbp-50h]
  PVOID v102; // [rsp+B8h] [rbp-48h]
  ULONG64 ControlPc; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v104; // [rsp+C8h] [rbp-38h]
  PRUNTIME_FUNCTION FunctionEntry; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v106; // [rsp+D8h] [rbp-28h]
  PVOID v107; // [rsp+E0h] [rbp-20h]
  PCONTEXT v108; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v109; // [rsp+F0h] [rbp-10h]
  PVOID v110; // [rsp+F8h] [rbp-8h]
  struct _UNWIND_HISTORY_TABLE *v111; // [rsp+100h] [rbp+0h]
  int v112; // [rsp+108h] [rbp+8h]
  PCONTEXT v113; // [rsp+110h] [rbp+10h]
  int v114; // [rsp+120h] [rbp+20h] BYREF
  __int64 v115; // [rsp+128h] [rbp+28h]
  DWORD64 v116; // [rsp+130h] [rbp+30h]
  int v117; // [rsp+138h] [rbp+38h]
  struct _CONTEXT v118; // [rsp+1C0h] [rbp+C0h] BYREF

  v7 = HistoryTable;
  v8 = TargetFrame;
  v101 = TargetIp;
  v102 = TargetFrame;
  ExceptionRecorda = ExceptionRecord;
  v113 = ContextRecord;
  v94 = HistoryTable;
  v100 = ReturnValue;
  if ( !RtlpGetStackLimits(&v97, (void **)&v99) )
    RtlRaiseStatus(-1073741784);
  v91 = ContextRecord;
  v9 = ContextRecord;
  v10 = &v118;
  RtlCaptureContext(ContextRecord);
  if ( HistoryTable )
    HistoryTable->Search = 1;
  if ( !ExceptionRecord )
  {
    Rip = ContextRecord->Rip;
    ExceptionRecorda = (struct _EXCEPTION_RECORD *)&v114;
    v116 = Rip;
    v114 = -1073741785;
    v115 = 0LL;
    v117 = 0;
  }
  v87 = 2;
  if ( !v8 )
    v87 = 6;
  v11 = 0LL;
  v12 = v99;
  while ( 1 )
  {
    v13 = v9->Rip;
    v92 = v13;
    v89 = RtlLookupFunctionEntry(v13, &ImageBase, v7);
    if ( !v89 )
    {
      Rsp = (DWORD64 *)v9->Rsp;
      v9->Rip = *Rsp;
      v9->Rsp = (DWORD64)(Rsp + 1);
      v39 = v97;
      goto LABEL_61;
    }
    RtlpCopyContext(v10, v9);
    v15 = *(unsigned int *)(v14 + 8);
    v16 = 0LL;
    v17 = ImageBase;
    v18 = ImageBase + v15;
    v90 = 0LL;
    v19 = v13 - ImageBase - v89->BeginAddress;
    v20 = *(_BYTE *)(v18 + 3);
    v21 = *(_BYTE *)v18 & 7;
    if ( (v20 & 0xF) == 0 )
    {
LABEL_11:
      v11 = v10->Rsp;
      goto LABEL_12;
    }
    if ( v19 >= *(unsigned __int8 *)(v18 + 1) || (*(_BYTE *)v18 & 0x20) != 0 )
    {
      v47 = *(_BYTE *)(v18 + 3);
      v48 = v20;
    }
    else
    {
      v82 = 0LL;
      if ( *(_BYTE *)(v18 + 2) )
      {
        do
        {
          v83 = *(_WORD *)(v18 + 2 * v82 + 4);
          if ( (HIBYTE(v83) & 0xF) == 3 )
            break;
          v82 = (unsigned int)RtlpUnwindOpSlots(v83) + (unsigned int)v82;
        }
        while ( (unsigned int)v82 < *(unsigned __int8 *)(v18 + 2) );
        v17 = ImageBase;
        v16 = v90;
      }
      if ( v19 < *(unsigned __int8 *)(v18 + 2 * v82 + 4) )
        goto LABEL_11;
      v48 = *(unsigned __int8 *)(v18 + 3);
      v47 = *(_BYTE *)(v18 + 3);
    }
    v11 = *(&v10->Rax + (v47 & 0xF)) - (int)(v48 & 0xFFFFFFF0);
LABEL_12:
    EstablisherFrame = v11;
    if ( v21 >= 2 )
    {
      v60 = *(_BYTE *)(v18 + 2);
      if ( v60 )
      {
        v61 = *(_WORD *)(v18 + 4);
        v62 = v61;
        LOWORD(v62) = HIBYTE(v61);
        if ( (HIBYTE(v61) & 0xF) == 6 )
        {
          v63 = v13 - v17;
          v64 = (unsigned __int8)v61;
          if ( (v61 & 0x1000) != 0 )
          {
            v65 = v89->EndAddress - (unsigned __int8)v61;
            if ( v63 - v65 < (unsigned int)(unsigned __int8)v61 )
            {
LABEL_176:
              v38 = v89;
              RtlpUnwindEpilogue(v17, v62, v63 - v65, (_DWORD)v89, (__int64)v10, 0LL, 0LL, 0LL);
              v17 = ImageBase;
              v16 = v90;
              goto LABEL_44;
            }
          }
          for ( i = 1; i < v60; ++i )
          {
            v67 = *(_WORD *)(v18 + 2LL * i + 4);
            if ( (HIBYTE(v67) & 0xF) != 6 )
              break;
            v62 = (unsigned __int8)v67 + (HIBYTE(v67) >> 4 << 8);
            if ( !v62 )
              break;
            v65 = v89->EndAddress - v62;
            if ( v63 - v65 < v64 )
            {
              LODWORD(v17) = ImageBase;
              goto LABEL_176;
            }
          }
          v17 = ImageBase;
        }
      }
LABEL_24:
      p_BeginAddress = &v89->BeginAddress;
      v27 = 0;
      v28 = v92;
      v96 = 0;
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
              v30 = (unsigned int)RtlpUnwindOpSlots(*((_WORD *)v33 + 2)) + (unsigned int)v30;
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
                      v49 = *(unsigned __int16 *)&v29[2 * v30 + 4];
                      if ( (_DWORD)v34 )
                      {
                        v30 = (unsigned int)(v30 + 1);
                        v50 = (*(unsigned __int16 *)&v29[2 * v30 + 4] << 16) + v49;
                      }
                      else
                      {
                        v50 = 8 * v49;
                      }
                      v10->Rsp += v50;
                      break;
                    case 2:
                      v10->Rsp += (unsigned int)(8 * v34 + 8);
                      break;
                    case 3:
                      v55 = *(&v10->Rax + (v29[3] & 0xF));
                      v10->Rsp = v55;
                      v10->Rsp = v55 - (v29[3] & 0xF0);
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
                      v68 = 16 * (unsigned int)*(unsigned __int16 *)&v29[2 * v30 + 4];
                      goto LABEL_119;
                    case 9:
                      v30 = (unsigned int)(v30 + 2);
                      v68 = *(unsigned __int16 *)&v29[2 * (unsigned int)(v30 - 1) + 4]
                          + (*(unsigned __int16 *)&v29[2 * v30 + 4] << 16);
LABEL_119:
                      v69 = (unsigned int)v34;
                      v10->FltSave.XmmRegisters[v69].Low = *(_QWORD *)(v68 + v11);
                      v10->FltSave.XmmRegisters[v69].High = *(_QWORD *)(v68 + v11 + 8);
                      break;
                    case 0xA:
                      v76 = (DWORD64 *)v10->Rsp;
                      v31 = 1;
                      v77 = v76 + 3;
                      if ( (_DWORD)v34 )
                      {
                        ++v76;
                        ++v77;
                      }
                      v10->Rip = *v76;
                      v10->Rsp = *v77;
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
          v28 = v92;
          v17 = ImageBase;
          v27 = v96;
        }
        if ( (*v29 & 0x20) == 0 )
          break;
        v70 = (unsigned __int8)v29[2];
        if ( (v70 & 1) != 0 )
          ++v70;
        v96 = ++v27;
        p_BeginAddress = &v29[2 * v70 + 4];
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
      if ( v28 - *p_BeginAddress - (int)v17 >= (unsigned int)(unsigned __int8)v36[1] && (*v36 & 0x10) != 0 )
      {
        v37 = (unsigned __int8)v36[2];
        if ( (v37 & 1) != 0 )
          v37 = (unsigned int)(v37 + 1);
        v16 = v17 + *(unsigned int *)&v36[2 * v37 + 4];
        v90 = v16;
        HandlerData = &v36[2 * (unsigned int)(v37 + 2) + 4];
      }
      else
      {
        v16 = v90;
      }
      v9 = v91;
      v13 = v92;
      goto LABEL_43;
    }
    v22 = *(_BYTE *)v13;
    v23 = 0LL;
    j = (_BYTE *)v13;
    if ( *(_BYTE *)v13 == 72 )
    {
      v54 = *(_BYTE *)(v13 + 1);
      if ( v54 == -125 && *(_BYTE *)(v13 + 2) == 0xC4 )
      {
        j = (_BYTE *)(v13 + 4);
        goto LABEL_15;
      }
      if ( v54 == -127 && *(_BYTE *)(v13 + 2) == 0xC4 )
        goto LABEL_97;
    }
    if ( (v22 & 0xFE) != 0x48 )
      goto LABEL_15;
    if ( *(_BYTE *)(v13 + 1) != 0x8D )
      goto LABEL_15;
    v52 = *(_BYTE *)(v13 + 2) & 7;
    v23 = v52 | (8 * (v22 & 1u));
    if ( !(v52 | (8 * (v22 & 1))) || (_DWORD)v23 != (*(_BYTE *)(v18 + 3) & 0xF) )
      goto LABEL_15;
    v53 = *(_BYTE *)(v13 + 2) & 0xF8;
    if ( v53 != 96 )
    {
      if ( v53 != -96 )
        goto LABEL_15;
LABEL_97:
      j = (_BYTE *)(v13 + 7);
      goto LABEL_15;
    }
    for ( j = (_BYTE *)(v13 + 4); ; j += 2 )
    {
LABEL_15:
      while ( (*j & 0xF8) == 0x58 )
        ++j;
      if ( (*j & 0xF0) != 0x40 || (j[1] & 0xF8) != 0x58 )
        break;
    }
    if ( *j == 0xF2 )
      ++j;
    v25 = *j;
    if ( (unsigned __int8)(*j + 62) <= 1u || v25 == -13 && j[1] == 0xC3 )
      goto LABEL_128;
    if ( ((v25 + 23) & 0xFD) != 0 )
    {
      if ( (v25 != -1 || j[1] != 37) && ((v25 & 0xF8) != 0x48 || j[1] != 0xFF || (j[2] & 0x38) != 0x20) )
        goto LABEL_24;
    }
    else
    {
      if ( v25 == -21 )
        v56 = (char)j[1] + 2;
      else
        v56 = *(_DWORD *)(j + 1) + 5;
      v57 = (unsigned __int64)&j[v56 - v17];
      v58 = v89;
      BeginAddress = v89->BeginAddress;
      if ( v57 >= BeginAddress )
      {
        if ( v57 < v89->EndAddress )
        {
          if ( v57 != BeginAddress || (*(_BYTE *)v18 & 0x20) != 0 )
            goto LABEL_24;
          goto LABEL_128;
        }
        v58 = v89;
      }
      v84 = (_DWORD *)RtlpSameFunction(v58, v17, v57 + v17);
      v17 = ImageBase;
      if ( v84 && v57 != *v84 )
        goto LABEL_24;
      v16 = v90;
    }
LABEL_128:
    v71 = (char *)v13;
    if ( (*(_BYTE *)v13 & 0xF8) == 0x48 )
    {
      v72 = *(_BYTE *)(v13 + 1);
      if ( v72 == -125 )
      {
        v71 = (char *)(v13 + 4);
        v10->Rsp += *(char *)(v13 + 3);
      }
      else
      {
        if ( v72 == -127 )
        {
          v10->Rsp += *(unsigned __int8 *)(v13 + 3) | (unsigned __int64)((*(unsigned __int8 *)(v13 + 4) | (*(unsigned __int16 *)(v13 + 5) << 8)) << 8);
        }
        else
        {
          if ( v72 != -115 )
            goto LABEL_131;
          v85 = *(_BYTE *)(v13 + 2) & 0xF8;
          if ( v85 == 96 )
          {
            v86 = *(&v10->Rax + v23);
            v71 = (char *)(v13 + 4);
            v10->Rsp = v86;
            v10->Rsp = v86 + *(char *)(v13 + 3);
            goto LABEL_131;
          }
          if ( v85 != -96 )
            goto LABEL_131;
          v10->Rsp = *(&v10->Rax + v23)
                   + (*(unsigned __int8 *)(v13 + 3) | ((*(unsigned __int8 *)(v13 + 4) | (*(unsigned __int16 *)(v13 + 5) << 8)) << 8));
        }
        v71 = (char *)(v13 + 7);
      }
    }
    while ( 1 )
    {
LABEL_131:
      while ( 1 )
      {
        v73 = *v71;
        if ( (*v71 & 0xF8) != 0x58 )
          break;
        *(&v10->Rax + (*v71 & 7)) = *(_QWORD *)v10->Rsp;
        v10->Rsp += 8LL;
        ++v71;
      }
      if ( (v73 & 0xF0) != 0x40 )
        break;
      v78 = v71[1];
      if ( (v78 & 0xF8) != 0x58 )
        break;
      *(&v10->Rax + (v78 & 7 | (unsigned __int64)(8 * (v73 & 1u)))) = *(_QWORD *)v10->Rsp;
      v10->Rsp += 8LL;
      v71 += 2;
    }
    v74 = *(_QWORD *)v10->Rsp;
    v10->Rsp += 8LL;
    v10->Rip = v74;
LABEL_43:
    v38 = v89;
LABEL_44:
    if ( (v11 & 7) != 0
      || (v39 = v97, v11 < v97)
      || (v12 = v99, v11 >= v99)
      || (v8 = v102) != 0LL && (unsigned __int64)v102 < v11 )
    {
      RtlRaiseStatus(-1073741784);
    }
    if ( v16 )
    {
      v40 = 0;
      v107 = v101;
      v41 = v87;
      do
      {
        if ( v8 == (PVOID)v11 )
          v41 |= 0x20u;
        v42 = ExceptionRecorda;
        v43 = (DWORD64)v100;
        ControlPc = v13;
        v104 = v17;
        ExceptionRecorda->ExceptionFlags = v41;
        v9->Rax = v43;
        v110 = HandlerData;
        v111 = v94;
        FunctionEntry = v38;
        v106 = v11;
        v108 = v9;
        v109 = v16;
        v112 = v40;
        v87 = v41 & 0xFFFFFF9F;
        v44 = RtlpExecuteHandlerForUnwind(v42, v11, v9, &ControlPc) - 1;
        if ( v44 )
        {
          if ( v44 != 2 )
            RtlRaiseStatus(-1073741786);
          v13 = ControlPc;
          v38 = FunctionEntry;
          ImageBase = v104;
          RtlpCopyContext(v113, v108);
          v91 = v79;
          v9 = v79;
          v10 = &v118;
          RtlpCopyContext(&v118, v79);
          RtlVirtualUnwind(0, v80, v13, v38, &v118, &HandlerData, &EstablisherFrame, 0LL);
          v11 = v106;
          v16 = v109;
          v40 = v112;
          HandlerData = v110;
          v94 = v111;
          v41 = v87 | 0x40;
          EstablisherFrame = v106;
          v87 |= 0x40u;
          v90 = v109;
        }
        else
        {
          v16 = v90;
          if ( (PVOID)v11 != v8 )
          {
            v45 = v9;
            v91 = v10;
            v9 = v10;
            v10 = v45;
          }
          v41 = v87;
        }
        v17 = ImageBase;
      }
      while ( (v41 & 0x40) != 0 );
      v12 = v99;
    }
    else
    {
      if ( (PVOID)v11 == v102 )
        goto LABEL_60;
      v51 = v9;
      v91 = v10;
      v9 = v10;
      v10 = v51;
    }
    v39 = v97;
LABEL_60:
    v7 = v94;
LABEL_61:
    if ( (v11 & 7) != 0 || v11 < v39 || v11 >= v12 )
      break;
    if ( (PVOID)v11 == v8 )
      goto LABEL_65;
  }
  if ( (PVOID)v11 == v8 )
  {
LABEL_65:
    v46 = ExceptionRecorda;
    v9->Rax = (DWORD64)v100;
    if ( v46->ExceptionCode != -2147483607 )
      v9->Rip = (DWORD64)v101;
    if ( v46->ExceptionCode == -2147483610 )
    {
      if ( LdrSystemDllInitBlock.Wow64SharedInformation[9]
        && !(unsigned int)RtlGuardIsValidStackPointer(*(_QWORD *)(v46->ExceptionInformation[0] + 16)) )
      {
        __fastfail(0xDu);
      }
      goto LABEL_71;
    }
    if ( v46->ExceptionCode == -2147483607 && v46->NumberParameters )
    {
      if ( !LdrSystemDllInitBlock.Wow64SharedInformation[9] )
      {
LABEL_71:
        RtlRestoreContext(v9, v46);
        return;
      }
      LdrpValidateUserCallTarget(v46->ExceptionInformation[0]);
    }
    if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
    {
      if ( !(unsigned int)RtlGuardIsValidStackPointer(v9->Rsp) )
        __fastfail(0xDu);
    }
    goto LABEL_71;
  }
  if ( v13 == v9->Rip )
    RtlRaiseStatus(-1073741569);
  ZwRaiseException(ExceptionRecorda, v9, 0);
}
