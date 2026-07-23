/*
 * XREFs of RtlUnwindEx @ 0x1400F34B0
 * Callers:
 *     __C_specific_handler @ 0x14014CFE0 (__C_specific_handler.c)
 *     _local_unwind @ 0x14014D720 (_local_unwind.c)
 *     __longjmp_internal @ 0x140159F20 (__longjmp_internal.c)
 *     KiSystemServiceHandler @ 0x14016F380 (KiSystemServiceHandler.c)
 *     RtlUnwind @ 0x140211B70 (RtlUnwind.c)
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
 *     ZwRaiseException @ 0x14015CC50 (ZwRaiseException.c)
 *     RtlCaptureContext @ 0x140167490 (RtlCaptureContext.c)
 *     RtlRestoreContext @ 0x1401675D0 (RtlRestoreContext.c)
 *     RtlpExecuteHandlerForUnwind @ 0x140167C90 (RtlpExecuteHandlerForUnwind.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

void __stdcall RtlUnwindEx(
        PVOID TargetFrame,
        PVOID TargetIp,
        struct _EXCEPTION_RECORD *ExceptionRecord,
        PVOID ReturnValue,
        struct _CONTEXT *ContextRecord,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  struct _UNWIND_HISTORY_TABLE *v7; // rsi
  PVOID v8; // r14
  struct _CONTEXT *v9; // r15
  struct _CONTEXT *v10; // r13
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  DWORD64 v13; // r12
  unsigned int *p_BeginAddress; // r11
  unsigned __int64 v15; // rbx
  unsigned int v16; // edi
  unsigned int v17; // esi
  unsigned __int8 v18; // dl
  char v19; // cl
  int v20; // eax
  __int16 v21; // ax
  unsigned int v22; // r9d
  int v23; // r8d
  int v24; // ecx
  unsigned int i; // r10d
  __int16 v26; // ax
  int v27; // edx
  _DWORD *v28; // rdx
  unsigned int v29; // ecx
  char v30; // r9
  __int64 v31; // rbx
  unsigned int v32; // esi
  unsigned __int64 v33; // rdi
  unsigned __int64 v34; // rdx
  __int64 v35; // r8
  unsigned __int64 *v36; // rdx
  unsigned __int64 v37; // rcx
  unsigned int v38; // ecx
  unsigned __int64 v39; // rdx
  PEXCEPTION_ROUTINE v40; // r9
  struct _CONTEXT *v41; // rax
  unsigned __int64 v42; // rdx
  int v43; // esi
  unsigned int v44; // edx
  struct _EXCEPTION_RECORD *v45; // r10
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rax
  int v48; // eax
  struct _CONTEXT *v49; // rax
  struct _EXCEPTION_RECORD *v50; // rbx
  int v51; // edx
  unsigned int v52; // edx
  unsigned __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  unsigned __int64 v56; // rcx
  unsigned __int64 *v57; // rcx
  unsigned __int64 *v58; // rdx
  char v59; // cl
  __int64 v60; // rsi
  _BYTE *v61; // rdx
  char v62; // al
  char v63; // cl
  unsigned int v64; // eax
  struct _CONTEXT *v65; // r9
  PRUNTIME_FUNCTION v66; // r8
  DWORD64 v67; // r10
  unsigned __int64 Rip; // rax
  unsigned __int64 v69; // rax
  int v70; // eax
  __int64 v71; // r14
  unsigned __int16 v72; // cx
  unsigned int v73; // ecx
  char v74; // r8
  bool v75; // zf
  char *v76; // rdx
  char v77; // al
  int v78; // eax
  unsigned __int64 v79; // rcx
  unsigned __int64 v80; // rdi
  _DWORD *v81; // rax
  char v82; // al
  unsigned __int64 v83; // rcx
  char v84; // cl
  unsigned __int64 *v85; // r8
  unsigned __int64 *v86; // r8
  __int64 v87; // rcx
  unsigned __int64 v88; // rax
  unsigned __int64 v89; // rcx
  unsigned __int64 *v90; // r9
  __int64 v91; // rcx
  unsigned __int64 *Rsp; // rcx
  char v93; // [rsp+40h] [rbp-C0h]
  unsigned __int64 EstablisherFrame; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v95; // [rsp+50h] [rbp-B0h]
  unsigned __int64 ImageBase; // [rsp+58h] [rbp-A8h] BYREF
  EXCEPTION_DISPOSITION (__cdecl *v97)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+60h] [rbp-A0h]
  unsigned int v98; // [rsp+68h] [rbp-98h]
  PUNWIND_HISTORY_TABLE v99; // [rsp+70h] [rbp-90h]
  PRUNTIME_FUNCTION v100; // [rsp+78h] [rbp-88h]
  struct _EXCEPTION_RECORD *ExceptionRecorda; // [rsp+80h] [rbp-80h]
  PVOID HandlerData; // [rsp+88h] [rbp-78h] BYREF
  PVOID v103; // [rsp+90h] [rbp-70h]
  _DWORD *v104; // [rsp+98h] [rbp-68h]
  unsigned __int64 v105; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v106; // [rsp+A8h] [rbp-58h] BYREF
  PVOID v107; // [rsp+B0h] [rbp-50h]
  PVOID v108; // [rsp+B8h] [rbp-48h]
  struct _CONTEXT *v109; // [rsp+C0h] [rbp-40h]
  DWORD64 ControlPc; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v111; // [rsp+D8h] [rbp-28h]
  struct _RUNTIME_FUNCTION *v112; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v113; // [rsp+E8h] [rbp-18h]
  PVOID v114; // [rsp+F0h] [rbp-10h]
  struct _CONTEXT *v115; // [rsp+F8h] [rbp-8h]
  EXCEPTION_DISPOSITION (__cdecl *v116)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+100h] [rbp+0h]
  PVOID v117; // [rsp+108h] [rbp+8h]
  struct _UNWIND_HISTORY_TABLE *v118; // [rsp+110h] [rbp+10h]
  int v119; // [rsp+118h] [rbp+18h]
  int v120; // [rsp+120h] [rbp+20h] BYREF
  __int64 v121; // [rsp+128h] [rbp+28h]
  unsigned __int64 v122; // [rsp+130h] [rbp+30h]
  int v123; // [rsp+138h] [rbp+38h]
  struct _CONTEXT v124; // [rsp+1C0h] [rbp+C0h] BYREF

  v7 = HistoryTable;
  v8 = TargetFrame;
  v108 = TargetIp;
  v103 = TargetFrame;
  ExceptionRecorda = ExceptionRecord;
  v109 = ContextRecord;
  v99 = HistoryTable;
  v107 = ReturnValue;
  if ( !(unsigned __int8)RtlpGetStackLimits((__int64)&v105, (__int64)&v106) )
    RtlRaiseStatus(-1073741784);
  v9 = &v124;
  v10 = ContextRecord;
  RtlCaptureContext(ContextRecord);
  if ( HistoryTable )
    HistoryTable->Search = 1;
  if ( !ExceptionRecord )
  {
    Rip = ContextRecord->Rip;
    ExceptionRecorda = (struct _EXCEPTION_RECORD *)&v120;
    v122 = Rip;
    v120 = -1073741785;
    v121 = 0LL;
    v123 = 0;
  }
  v95 = 2;
  if ( !v8 )
    v95 = 6;
  v11 = v106;
  v12 = v105;
  EstablisherFrame = 0LL;
  while ( 1 )
  {
    v13 = v10->Rip;
    v100 = RtlLookupFunctionEntry(v13, &ImageBase, v7);
    if ( !v100 )
    {
      Rsp = (unsigned __int64 *)v10->Rsp;
      v10->Rip = *Rsp;
      v10->Rsp = (unsigned __int64)(Rsp + 1);
      goto LABEL_64;
    }
    RtlpCopyContext(v9, v10);
    v15 = ImageBase + p_BeginAddress[2];
    v97 = 0LL;
    if ( v13 <= 0x7FFFFFFEFFFFLL && (v15 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v16 = v13 - ImageBase - *p_BeginAddress;
    v17 = *(_BYTE *)v15 & 7;
    v18 = *(_BYTE *)(v15 + 3);
    if ( (v18 & 0xF) != 0 )
    {
      if ( v16 >= *(unsigned __int8 *)(v15 + 1) || (*(_BYTE *)v15 & 0x20) != 0 )
      {
        v19 = *(_BYTE *)(v15 + 3);
        v20 = v18;
LABEL_14:
        EstablisherFrame = *(&v9->Rax + (v19 & 0xF)) - (int)(v20 & 0xFFFFFFF0);
        goto LABEL_16;
      }
      v71 = 0LL;
      if ( *(_BYTE *)(v15 + 2) )
      {
        do
        {
          v72 = *(_WORD *)(v15 + 2 * v71 + 4);
          if ( (HIBYTE(v72) & 0xF) == 3 )
            break;
          v71 = (unsigned int)RtlpUnwindOpSlots(v72) + (unsigned int)v71;
        }
        while ( (unsigned int)v71 < *(unsigned __int8 *)(v15 + 2) );
        p_BeginAddress = &v100->BeginAddress;
      }
      v73 = *(unsigned __int8 *)(v15 + 2 * v71 + 4);
      v8 = v103;
      if ( v16 >= v73 )
      {
        v20 = *(unsigned __int8 *)(v15 + 3);
        v19 = *(_BYTE *)(v15 + 3);
        goto LABEL_14;
      }
    }
    EstablisherFrame = v9->Rsp;
LABEL_16:
    if ( v17 >= 2 )
    {
      if ( *(_BYTE *)(v15 + 2) )
      {
        v21 = *(_WORD *)(v15 + 4);
        if ( (HIBYTE(v21) & 0xF) == 6 )
        {
          v22 = (unsigned __int8)v21;
          v23 = v13 - ImageBase;
          if ( (v21 & 0x1000) != 0 )
          {
            v24 = p_BeginAddress[1] - (unsigned __int8)v21;
            if ( v23 - v24 < (unsigned int)(unsigned __int8)v21 )
            {
LABEL_128:
              RtlpUnwindEpilogue(ImageBase, v13, (unsigned int)(v23 - v24), p_BeginAddress, (__int64)v9, 0LL, 0LL, 0LL);
              goto LABEL_44;
            }
          }
          for ( i = 1; i < *(unsigned __int8 *)(v15 + 2); ++i )
          {
            v26 = *(_WORD *)(v15 + 2LL * i + 4);
            if ( (HIBYTE(v26) & 0xF) != 6 )
              break;
            v27 = (unsigned __int8)v26 + (HIBYTE(v26) >> 4 << 8);
            if ( !v27 )
              break;
            v24 = p_BeginAddress[1] - v27;
            if ( v23 - v24 < v22 )
              goto LABEL_128;
          }
        }
      }
      goto LABEL_24;
    }
    v59 = *(_BYTE *)v13;
    v60 = 0LL;
    v61 = (_BYTE *)v13;
    if ( *(_BYTE *)v13 == 72 )
    {
      v62 = *(_BYTE *)(v13 + 1);
      if ( v62 == -125 && *(_BYTE *)(v13 + 2) == 0xC4 )
      {
        v61 = (_BYTE *)(v13 + 4);
        goto LABEL_92;
      }
      if ( v62 == -127 && *(_BYTE *)(v13 + 2) == 0xC4 )
        goto LABEL_162;
    }
    if ( (v59 & 0xFE) != 0x48 )
      goto LABEL_92;
    if ( *(_BYTE *)(v13 + 1) != 0x8D )
      goto LABEL_92;
    v70 = *(_BYTE *)(v13 + 2) & 7;
    v60 = v70 | (8 * (v59 & 1u));
    if ( !(v70 | (8 * (v59 & 1))) || (_DWORD)v60 != (*(_BYTE *)(v15 + 3) & 0xF) )
      goto LABEL_92;
    v74 = *(_BYTE *)(v13 + 2) & 0xF8;
    if ( v74 == 96 )
    {
      v61 = (_BYTE *)(v13 + 4);
      goto LABEL_92;
    }
    if ( v74 == -96 )
LABEL_162:
      v61 = (_BYTE *)(v13 + 7);
    while ( 1 )
    {
LABEL_92:
      while ( (*v61 & 0xF8) == 0x58 )
        ++v61;
      if ( (*v61 & 0xF0) != 0x40 || (v61[1] & 0xF8) != 0x58 )
        break;
      v61 += 2;
    }
    if ( *v61 == 0xF2 )
      ++v61;
    v63 = *v61;
    if ( (unsigned __int8)(*v61 + 62) <= 1u || v63 == -13 && v61[1] == 0xC3 )
    {
LABEL_168:
      v76 = (char *)v13;
      if ( (*(_BYTE *)v13 & 0xF8) == 0x48 )
      {
        v77 = *(_BYTE *)(v13 + 1);
        if ( v77 != -125 )
        {
          if ( v77 == -127 )
          {
            v9->Rsp += *(unsigned __int8 *)(v13 + 3) | ((*(unsigned __int8 *)(v13 + 4) | (*(unsigned __int16 *)(v13 + 5) << 8)) << 8);
          }
          else
          {
            if ( v77 != -115 )
              goto LABEL_189;
            v82 = *(_BYTE *)(v13 + 2) & 0xF8;
            if ( v82 == 96 )
            {
              v83 = *(&v9->Rax + v60);
              v76 = (char *)(v13 + 4);
              v9->Rsp = v83;
              v9->Rsp = v83 + *(char *)(v13 + 3);
              goto LABEL_189;
            }
            if ( v82 != -96 )
              goto LABEL_189;
            v9->Rsp = *(&v9->Rax + v60)
                    + (*(unsigned __int8 *)(v13 + 3) | ((*(unsigned __int8 *)(v13 + 4) | (*(unsigned __int16 *)(v13 + 5) << 8)) << 8));
          }
          v76 = (char *)(v13 + 7);
          goto LABEL_189;
        }
        v76 = (char *)(v13 + 4);
        v9->Rsp += *(char *)(v13 + 3);
      }
      while ( 1 )
      {
LABEL_189:
        while ( 1 )
        {
          v84 = *v76;
          if ( (*v76 & 0xF8) != 0x58 )
            break;
          v85 = (unsigned __int64 *)v9->Rsp;
          if ( v13 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v85 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          *(&v9->Rax + (v84 & 7)) = *v85;
          v9->Rsp += 8LL;
          ++v76;
        }
        if ( (v84 & 0xF0) != 0x40 || (v76[1] & 0xF8) != 0x58 )
          break;
        v86 = (unsigned __int64 *)v9->Rsp;
        v87 = v76[1] & 7 | (8 * (v84 & 1u));
        if ( v13 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v86 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        *(&v9->Rax + v87) = *v86;
        v9->Rsp += 8LL;
        v76 += 2;
      }
      if ( v13 <= 0x7FFFFFFEFFFFLL )
      {
        v88 = v9->Rsp;
        if ( (v88 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
      }
      v89 = *(_QWORD *)v9->Rsp;
      v9->Rsp += 8LL;
      v9->Rip = v89;
      goto LABEL_44;
    }
    if ( ((v63 + 23) & 0xFD) != 0 )
    {
      if ( v63 == -1 && v61[1] == 37 )
        goto LABEL_168;
      if ( (v63 & 0xF8) != 0x48 || v61[1] != 0xFF )
        goto LABEL_24;
      v75 = (v61[2] & 0x38) == 32;
      goto LABEL_167;
    }
    if ( v63 == -21 )
      v78 = (char)v61[1] + 2;
    else
      v78 = *(_DWORD *)(v61 + 1) + 5;
    v79 = *p_BeginAddress;
    v80 = (unsigned __int64)&v61[v78 - ImageBase];
    if ( v80 < v79 || v80 >= p_BeginAddress[1] )
    {
      v81 = (_DWORD *)RtlpSameFunction(p_BeginAddress, ImageBase, &v61[v78]);
      if ( !v81 || v80 == *v81 )
        goto LABEL_168;
      p_BeginAddress = &v100->BeginAddress;
      goto LABEL_24;
    }
    if ( v80 == v79 )
    {
      v75 = (*(_BYTE *)v15 & 0x20) == 0;
LABEL_167:
      if ( v75 )
        goto LABEL_168;
    }
LABEL_24:
    v28 = p_BeginAddress;
    v29 = 0;
    v104 = p_BeginAddress;
    v98 = 0;
    while ( 1 )
    {
      v30 = 0;
      v31 = 0LL;
      v32 = v13 - *v28 - ImageBase;
      v93 = 0;
      v33 = ImageBase + (unsigned int)v28[2];
      if ( v13 <= 0x7FFFFFFEFFFFLL && (v33 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( *(_BYTE *)(v33 + 2) )
      {
        do
        {
          v34 = v33 + 2 * v31;
          v35 = *(unsigned __int8 *)(v34 + 5) >> 4;
          if ( v32 < *(unsigned __int8 *)(v34 + 4) )
          {
            v31 = (unsigned int)RtlpUnwindOpSlots(*(_WORD *)(v34 + 4)) + (unsigned int)v31;
          }
          else
          {
            if ( (*(_BYTE *)(v33 + 2 * v31 + 5) & 0xF) != 0 )
            {
              if ( (*(_BYTE *)(v33 + 2 * v31 + 5) & 0xF) == 4 )
              {
                v31 = (unsigned int)(v31 + 1);
                v42 = EstablisherFrame + 8 * (unsigned int)*(unsigned __int16 *)(v33 + 2 * v31 + 4);
                if ( v13 <= 0x7FFFFFFEFFFFLL && (v42 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                *(&v9->Rax + v35) = *(_QWORD *)v42;
              }
              else
              {
                switch ( *(_BYTE *)(v33 + 2 * v31 + 5) & 0xF )
                {
                  case 1:
                    v31 = (unsigned int)(v31 + 1);
                    v51 = *(unsigned __int16 *)(v33 + 2 * v31 + 4);
                    if ( (_DWORD)v35 )
                    {
                      v31 = (unsigned int)(v31 + 1);
                      v52 = (*(unsigned __int16 *)(v33 + 2 * v31 + 4) << 16) + v51;
                    }
                    else
                    {
                      v52 = 8 * v51;
                    }
                    v9->Rsp += v52;
                    break;
                  case 2:
                    v9->Rsp += (unsigned int)(8 * v35 + 8);
                    break;
                  case 3:
                    v56 = *(&v9->Rax + (*(_BYTE *)(v33 + 3) & 0xF));
                    v9->Rsp = v56;
                    v9->Rsp = v56 - (*(_BYTE *)(v33 + 3) & 0xF0);
                    break;
                  case 5:
                    v31 = (unsigned int)(v31 + 2);
                    if ( v13 <= 0x7FFFFFFEFFFFLL
                      && (((_BYTE)EstablisherFrame + (unsigned __int8)*(_WORD *)(v33 + 2LL * (unsigned int)(v31 - 1) + 4)) & 3) != 0 )
                    {
                      ExRaiseDatatypeMisalignment();
                    }
                    *(&v9->Rax + v35) = *(_QWORD *)(EstablisherFrame
                                                  + *(unsigned __int16 *)(v33 + 2LL * (unsigned int)(v31 - 1) + 4)
                                                  + (*(unsigned __int16 *)(v33 + 2 * v31 + 4) << 16));
                    break;
                  case 6:
                    LODWORD(v31) = v31 + 1;
                    break;
                  case 7:
                    LODWORD(v31) = v31 + 2;
                    break;
                  case 8:
                    v31 = (unsigned int)(v31 + 1);
                    v53 = EstablisherFrame + 16 * (unsigned int)*(unsigned __int16 *)(v33 + 2 * v31 + 4);
                    if ( v13 <= 0x7FFFFFFEFFFFLL && (v53 & 3) != 0 )
                      ExRaiseDatatypeMisalignment();
                    v54 = (unsigned int)v35;
                    v9->FltSave.XmmRegisters[v54].Low = *(_QWORD *)v53;
                    v9->FltSave.XmmRegisters[v54].High = *(_QWORD *)(v53 + 8);
                    break;
                  case 9:
                    v31 = (unsigned int)(v31 + 2);
                    v90 = (unsigned __int64 *)(EstablisherFrame
                                             + *(unsigned __int16 *)(v33 + 2LL * (unsigned int)(v31 - 1) + 4)
                                             + (*(unsigned __int16 *)(v33 + 2 * v31 + 4) << 16));
                    if ( v13 <= 0x7FFFFFFEFFFFLL
                      && (((_BYTE)EstablisherFrame + (unsigned __int8)*(_WORD *)(v33 + 2LL * (unsigned int)(v31 - 1) + 4)) & 3) != 0 )
                    {
                      ExRaiseDatatypeMisalignment();
                    }
                    v91 = (unsigned int)v35;
                    v9->FltSave.XmmRegisters[v91].Low = *v90;
                    v9->FltSave.XmmRegisters[v91].High = v90[1];
                    break;
                  case 0xA:
                    v57 = (unsigned __int64 *)v9->Rsp;
                    v93 = 1;
                    v58 = v57 + 3;
                    if ( (_DWORD)v35 )
                    {
                      ++v57;
                      ++v58;
                    }
                    if ( v13 <= 0x7FFFFFFEFFFFLL )
                    {
                      if ( ((unsigned __int8)v57 & 3) != 0 )
                        ExRaiseDatatypeMisalignment();
                      if ( ((unsigned __int8)v58 & 3) != 0 )
                        ExRaiseDatatypeMisalignment();
                    }
                    v9->Rip = *v57;
                    v9->Rsp = *v58;
                    break;
                  default:
                    RtlRaiseStatus(-1073741569);
                }
              }
            }
            else
            {
              v36 = (unsigned __int64 *)v9->Rsp;
              if ( v13 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v36 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              *(&v9->Rax + v35) = *v36;
              v9->Rsp += 8LL;
            }
            v31 = (unsigned int)(v31 + 1);
          }
        }
        while ( (unsigned int)v31 < *(unsigned __int8 *)(v33 + 2) );
        v30 = v93;
        v28 = v104;
        v29 = v98;
      }
      if ( (*(_BYTE *)v33 & 0x20) == 0 )
        break;
      v64 = *(unsigned __int8 *)(v33 + 2);
      if ( (v64 & 1) != 0 )
        ++v64;
      v28 = (_DWORD *)(v33 + 2 * (v64 + 2LL));
      v104 = v28;
      if ( v13 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v28 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v98 = ++v29;
      if ( v29 > 0x20 )
        RtlRaiseStatus(-1073741569);
    }
    if ( !v30 )
    {
      if ( v13 <= 0x7FFFFFFEFFFFLL )
      {
        v69 = v9->Rsp;
        if ( (v69 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
      }
      v37 = *(_QWORD *)v9->Rsp;
      v9->Rsp += 8LL;
      v9->Rip = v37;
    }
    v38 = v13 - *v28 - ImageBase;
    v39 = ImageBase + (unsigned int)v28[2];
    if ( v13 <= 0x7FFFFFFEFFFFLL && (v39 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v38 >= *(unsigned __int8 *)(v39 + 1) && (*(_BYTE *)v39 & 0x10) != 0 )
    {
      v55 = *(unsigned __int8 *)(v39 + 2);
      if ( (v55 & 1) != 0 )
        v55 = (unsigned int)(v55 + 1);
      v40 = (PEXCEPTION_ROUTINE)(ImageBase + *(unsigned int *)(v39 + 2 * v55 + 4));
      v97 = v40;
      HandlerData = (PVOID)(v39 + 2 * ((unsigned int)(v55 + 2) + 2LL));
      goto LABEL_45;
    }
LABEL_44:
    v40 = v97;
LABEL_45:
    if ( (EstablisherFrame & 7) != 0
      || (v12 = v105, EstablisherFrame < v105)
      || (v11 = v106, EstablisherFrame >= v106)
      || v8 && (unsigned __int64)v8 < EstablisherFrame )
    {
      RtlRaiseStatus(-1073741784);
    }
    if ( v40 )
    {
      v43 = 0;
      v44 = v95;
      v114 = v108;
      do
      {
        if ( v8 == (PVOID)EstablisherFrame )
          v44 |= 0x20u;
        v45 = ExceptionRecorda;
        v46 = EstablisherFrame;
        v47 = (unsigned __int64)v107;
        v113 = EstablisherFrame;
        ExceptionRecorda->ExceptionFlags = v44;
        v10->Rax = v47;
        v111 = ImageBase;
        v112 = v100;
        v117 = HandlerData;
        v95 = v44 & 0xFFFFFF9F;
        v116 = v40;
        v118 = v99;
        ControlPc = v13;
        v115 = v10;
        v119 = v43;
        v48 = RtlpExecuteHandlerForUnwind(v45, v46, v10, &ControlPc) - 1;
        if ( v48 )
        {
          if ( v48 != 2 )
            RtlRaiseStatus(-1073741786);
          v13 = ControlPc;
          ImageBase = v111;
          v100 = v112;
          RtlpCopyContext(v109, v115);
          v10 = v65;
          v9 = &v124;
          RtlpCopyContext(&v124, v65);
          v40 = RtlVirtualUnwind(2u, v67, v13, v66, &v124, &HandlerData, &EstablisherFrame, 0LL);
          v97 = v40;
          if ( v40 != v116 || EstablisherFrame != v113 || HandlerData != v117 )
            __fastfail(0x27u);
          v44 = v95 | 0x40;
          v43 = v119;
          v95 |= 0x40u;
          v99 = v118;
        }
        else
        {
          v40 = v97;
          v44 = v95;
          if ( (PVOID)EstablisherFrame != v8 )
          {
            v49 = v10;
            v10 = v9;
            v9 = v49;
          }
        }
      }
      while ( (v44 & 0x40) != 0 );
    }
    else if ( (PVOID)EstablisherFrame != v8 )
    {
      v41 = v10;
      v10 = v9;
      v9 = v41;
    }
    v7 = v99;
LABEL_64:
    if ( (EstablisherFrame & 7) != 0 || EstablisherFrame < v12 || EstablisherFrame >= v11 )
      break;
    if ( (PVOID)EstablisherFrame == v8 )
      goto LABEL_68;
  }
  if ( (PVOID)EstablisherFrame == v8 )
  {
LABEL_68:
    v50 = ExceptionRecorda;
    v10->Rax = (unsigned __int64)v107;
    if ( v50->ExceptionCode != -2147483607 )
      v10->Rip = (unsigned __int64)v108;
    RtlRestoreContext(v10, v50);
    return;
  }
  if ( v13 == v10->Rip )
    RtlRaiseStatus(-1073741569);
  ZwRaiseException(ExceptionRecorda, v10, 0);
}
