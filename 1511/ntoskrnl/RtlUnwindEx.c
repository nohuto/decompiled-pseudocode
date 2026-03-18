/*
 * XREFs of RtlUnwindEx @ 0x140024DF0
 * Callers:
 *     __C_specific_handler @ 0x140143640 (__C_specific_handler.c)
 *     _local_unwind @ 0x140143D90 (_local_unwind.c)
 *     __longjmp_internal @ 0x140150360 (__longjmp_internal.c)
 *     KiSystemServiceHandler @ 0x140165280 (KiSystemServiceHandler.c)
 *     RtlUnwind @ 0x1401F7A08 (RtlUnwind.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     RtlpCopyContext @ 0x140025C60 (RtlpCopyContext.c)
 *     RtlLookupFunctionEntry @ 0x140025E10 (RtlLookupFunctionEntry.c)
 *     RtlpGetStackLimits @ 0x140028310 (RtlpGetStackLimits.c)
 *     RtlVirtualUnwind @ 0x1400F0A68 (RtlVirtualUnwind.c)
 *     RtlpUnwindEpilogue @ 0x1400F34A4 (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x1400F3634 (RtlpUnwindOpSlots.c)
 *     RtlpSameFunction @ 0x1401348A0 (RtlpSameFunction.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x140153000 (ZwRaiseException.c)
 *     RtlCaptureContext @ 0x14015BA80 (RtlCaptureContext.c)
 *     RtlRestoreContext @ 0x14015BBC0 (RtlRestoreContext.c)
 *     RtlpExecuteHandlerForUnwind @ 0x14015C2B0 (RtlpExecuteHandlerForUnwind.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

void __stdcall RtlUnwindEx(
        PVOID TargetFrame,
        PVOID TargetIp,
        struct _EXCEPTION_RECORD *ExceptionRecord,
        PVOID ReturnValue,
        struct _CONTEXT *ContextRecord,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  struct _UNWIND_HISTORY_TABLE *v7; // r15
  struct _CONTEXT *v9; // r13
  struct _CONTEXT *v10; // r14
  unsigned __int64 Rip; // rax
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  int v14; // eax
  unsigned __int64 v15; // r12
  unsigned int *p_BeginAddress; // r11
  unsigned int v17; // edi
  unsigned __int64 v18; // rbx
  unsigned int v19; // esi
  unsigned int v20; // r15d
  __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  char v23; // r8
  _BYTE *v24; // rcx
  unsigned int v25; // esi
  char v26; // al
  char v27; // dl
  char v28; // dl
  bool v29; // zf
  _BYTE *v30; // rdi
  int v31; // eax
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rdi
  unsigned int *v34; // rax
  char *v35; // r8
  char v36; // al
  char v37; // al
  unsigned __int64 v38; // rcx
  char v39; // cl
  unsigned __int64 *v40; // rdx
  unsigned __int64 *v41; // r9
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rcx
  __int16 v44; // ax
  unsigned int v45; // r9d
  int v46; // r10d
  int v47; // ecx
  unsigned int i; // r8d
  __int16 v49; // ax
  int v50; // edx
  _DWORD *v51; // rsi
  int v52; // r13d
  int v53; // eax
  char v54; // r10
  unsigned __int64 v55; // rdi
  unsigned int v56; // r15d
  __int64 v57; // rbx
  unsigned __int64 v58; // rdx
  __int64 v59; // r8
  unsigned __int64 *v60; // rdx
  __int64 v61; // rbx
  int v62; // edx
  unsigned int v63; // edx
  unsigned __int64 v64; // rcx
  __int64 v65; // rbx
  unsigned __int64 v66; // rdx
  __int64 v67; // rbx
  unsigned __int64 *v68; // r9
  __int64 v69; // rbx
  unsigned __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rbx
  unsigned __int64 *v73; // r9
  __int64 v74; // rcx
  unsigned __int64 *v75; // rdx
  unsigned __int64 *v76; // r9
  unsigned int v77; // eax
  unsigned __int64 v78; // rcx
  unsigned __int64 v79; // rcx
  unsigned __int64 v80; // rdx
  __int64 v81; // r8
  void *v82; // rax
  unsigned __int64 v83; // rdx
  PVOID v84; // rax
  int v85; // ebx
  unsigned int v86; // r15d
  struct _EXCEPTION_RECORD *v87; // r10
  unsigned __int64 v88; // rax
  unsigned __int64 v89; // rdx
  int v90; // eax
  CONTEXT *v91; // r9
  PRUNTIME_FUNCTION v92; // r8
  DWORD64 v93; // r10
  struct _CONTEXT *v94; // rax
  struct _CONTEXT *v95; // rax
  unsigned __int64 *Rsp; // rcx
  struct _EXCEPTION_RECORD *v97; // rdi
  char v98; // [rsp+40h] [rbp-C0h]
  unsigned __int64 EstablisherFrame; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 ImageBase; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v101; // [rsp+58h] [rbp-A8h]
  unsigned int v102; // [rsp+60h] [rbp-A0h]
  PCONTEXT Context; // [rsp+68h] [rbp-98h]
  PVOID v104; // [rsp+70h] [rbp-90h]
  PUNWIND_HISTORY_TABLE v105; // [rsp+78h] [rbp-88h]
  PRUNTIME_FUNCTION v106; // [rsp+80h] [rbp-80h]
  struct _EXCEPTION_RECORD *ExceptionRecorda; // [rsp+88h] [rbp-78h]
  int j; // [rsp+90h] [rbp-70h]
  PVOID HandlerData; // [rsp+98h] [rbp-68h] BYREF
  PVOID v110; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v111; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v112; // [rsp+B0h] [rbp-50h] BYREF
  PVOID v113; // [rsp+B8h] [rbp-48h]
  struct _CONTEXT *v114; // [rsp+C0h] [rbp-40h]
  DWORD64 ControlPc; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v116; // [rsp+D8h] [rbp-28h]
  struct _RUNTIME_FUNCTION *v117; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v118; // [rsp+E8h] [rbp-18h]
  PVOID v119; // [rsp+F0h] [rbp-10h]
  struct _CONTEXT *v120; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v121; // [rsp+100h] [rbp+0h]
  PVOID v122; // [rsp+108h] [rbp+8h]
  struct _UNWIND_HISTORY_TABLE *v123; // [rsp+110h] [rbp+10h]
  int v124; // [rsp+118h] [rbp+18h]
  int v125; // [rsp+120h] [rbp+20h] BYREF
  __int64 v126; // [rsp+128h] [rbp+28h]
  unsigned __int64 v127; // [rsp+130h] [rbp+30h]
  int v128; // [rsp+138h] [rbp+38h]
  struct _CONTEXT v129; // [rsp+1C0h] [rbp+C0h] BYREF

  v7 = HistoryTable;
  v113 = TargetIp;
  v104 = TargetFrame;
  v114 = ContextRecord;
  v105 = HistoryTable;
  v110 = ReturnValue;
  ExceptionRecorda = ExceptionRecord;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v111, &v112) )
    RtlRaiseStatus(-1073741784);
  Context = ContextRecord;
  v9 = ContextRecord;
  v10 = &v129;
  RtlCaptureContext(ContextRecord);
  if ( HistoryTable )
    HistoryTable->Search = 1;
  if ( !ExceptionRecord )
  {
    Rip = ContextRecord->Rip;
    ExceptionRecorda = (struct _EXCEPTION_RECORD *)&v125;
    v127 = Rip;
    v125 = -1073741785;
    v126 = 0LL;
    v128 = 0;
  }
  v12 = v112;
  v13 = v111;
  v14 = 2;
  EstablisherFrame = 0LL;
  if ( !TargetFrame )
    v14 = 6;
  v102 = v14;
  while ( 1 )
  {
    v15 = v9->Rip;
    v106 = RtlLookupFunctionEntry(v15, &ImageBase, v7);
    if ( !v106 )
    {
      Rsp = (unsigned __int64 *)v9->Rsp;
      v9->Rip = *Rsp;
      v9->Rsp = (unsigned __int64)(Rsp + 1);
      v84 = v104;
      goto LABEL_175;
    }
    RtlpCopyContext(v10, v9);
    v17 = 0;
    v18 = ImageBase + p_BeginAddress[2];
    v101 = 0LL;
    if ( v15 <= (unsigned __int64)MmHighestUserAddress && (v18 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v19 = v15 - ImageBase - *p_BeginAddress;
    v20 = *(_BYTE *)v18 & 7;
    if ( (*(_BYTE *)(v18 + 3) & 0xF) == 0 )
    {
      EstablisherFrame = v10->Rsp;
      goto LABEL_25;
    }
    if ( v19 >= *(unsigned __int8 *)(v18 + 1) || (*(_BYTE *)v18 & 0x20) != 0 )
    {
      v22 = *(&v10->Rax + (*(_BYTE *)(v18 + 3) & 0xF)) - (*(_BYTE *)(v18 + 3) & 0xF0);
    }
    else
    {
      if ( *(_BYTE *)(v18 + 2) )
      {
        do
        {
          v21 = *(unsigned __int16 *)(v18 + 2LL * v17 + 4);
          if ( (BYTE1(v21) & 0xF) == 3 )
            break;
          v17 += RtlpUnwindOpSlots(v21);
        }
        while ( v17 < *(unsigned __int8 *)(v18 + 2) );
        p_BeginAddress = &v106->BeginAddress;
      }
      if ( v19 < *(unsigned __int8 *)(v18 + 2LL * v17 + 4) )
      {
        EstablisherFrame = v10->Rsp;
        goto LABEL_25;
      }
      v22 = *(&v10->Rax + (*(_BYTE *)(v18 + 3) & 0xF)) - (*(_BYTE *)(v18 + 3) & 0xF0);
    }
    EstablisherFrame = v22;
LABEL_25:
    if ( v20 >= 2 )
    {
      if ( *(_BYTE *)(v18 + 2) )
      {
        v44 = *(_WORD *)(v18 + 4);
        if ( (HIBYTE(v44) & 0xF) == 6 )
        {
          v45 = (unsigned __int8)v44;
          v46 = v15 - ImageBase;
          if ( (v44 & 0x1000) != 0 )
          {
            v47 = p_BeginAddress[1] - (unsigned __int8)v44;
            if ( v46 - v47 < (unsigned int)(unsigned __int8)v44 )
            {
LABEL_104:
              RtlpUnwindEpilogue(ImageBase, v15, v46 - v47, (_DWORD)p_BeginAddress, (__int64)v10, 0LL, 0LL, 0LL);
              goto LABEL_157;
            }
          }
          for ( i = 1; i < *(unsigned __int8 *)(v18 + 2); ++i )
          {
            v49 = *(_WORD *)(v18 + 2LL * i + 4);
            if ( (HIBYTE(v49) & 0xF) != 6 )
              break;
            v50 = (unsigned __int8)v49 + (HIBYTE(v49) >> 4 << 8);
            if ( !v50 )
              break;
            v47 = p_BeginAddress[1] - v50;
            if ( v46 - v47 < v45 )
              goto LABEL_104;
          }
        }
      }
      goto LABEL_98;
    }
    v23 = *(_BYTE *)v15;
    v24 = (_BYTE *)v15;
    v25 = 0;
    if ( *(_BYTE *)v15 == 72 )
    {
      v26 = *(_BYTE *)(v15 + 1);
      if ( v26 == -125 && *(_BYTE *)(v15 + 2) == 0xC4 )
      {
        v24 = (_BYTE *)(v15 + 4);
        goto LABEL_40;
      }
      if ( v26 == -127 && *(_BYTE *)(v15 + 2) == 0xC4 )
        goto LABEL_39;
    }
    if ( (v23 & 0xFE) != 0x48 )
      goto LABEL_40;
    if ( *(_BYTE *)(v15 + 1) != 0x8D )
      goto LABEL_40;
    v25 = *(_BYTE *)(v15 + 2) & 7 | (8 * (v23 & 1));
    if ( !v25 || v25 != (*(_BYTE *)(v18 + 3) & 0xF) )
      goto LABEL_40;
    v27 = *(_BYTE *)(v15 + 2) & 0xF8;
    if ( v27 == 96 )
    {
      v24 = (_BYTE *)(v15 + 4);
      goto LABEL_40;
    }
    if ( v27 == -96 )
LABEL_39:
      v24 = (_BYTE *)(v15 + 7);
    while ( 1 )
    {
LABEL_40:
      while ( (*v24 & 0xF8) == 0x58 )
        ++v24;
      if ( (*v24 & 0xF0) != 0x40 || (v24[1] & 0xF8) != 0x58 )
        break;
      v24 += 2;
    }
    if ( *v24 == 0xF2 )
      ++v24;
    v28 = *v24;
    if ( (unsigned __int8)(*v24 + 62) <= 1u || v28 == -13 && v24[1] == 0xC3 )
    {
LABEL_66:
      v35 = (char *)v15;
      if ( (*(_BYTE *)v15 & 0xF8) == 0x48 )
      {
        v36 = *(_BYTE *)(v15 + 1);
        if ( v36 != -125 )
        {
          if ( v36 == -127 )
          {
            v10->Rsp += *(unsigned __int8 *)(v15 + 3) | ((*(unsigned __int8 *)(v15 + 4) | (*(unsigned __int16 *)(v15 + 5) << 8)) << 8);
          }
          else
          {
            if ( v36 != -115 )
              goto LABEL_77;
            v37 = *(_BYTE *)(v15 + 2) & 0xF8;
            if ( v37 == 96 )
            {
              v35 = (char *)(v15 + 4);
              v38 = *(&v10->Rax + v25);
              v10->Rsp = v38;
              v10->Rsp = v38 + *(char *)(v15 + 3);
              goto LABEL_77;
            }
            if ( v37 != -96 )
              goto LABEL_77;
            v10->Rsp = *(&v10->Rax + v25)
                     + (*(unsigned __int8 *)(v15 + 3) | ((*(unsigned __int8 *)(v15 + 4) | (*(unsigned __int16 *)(v15 + 5) << 8)) << 8));
          }
          v35 = (char *)(v15 + 7);
          goto LABEL_77;
        }
        v35 = (char *)(v15 + 4);
        v10->Rsp += *(char *)(v15 + 3);
      }
      while ( 1 )
      {
LABEL_77:
        while ( 1 )
        {
          v39 = *v35;
          if ( (*v35 & 0xF8) != 0x58 )
            break;
          v40 = (unsigned __int64 *)v10->Rsp;
          if ( v15 <= (unsigned __int64)MmHighestUserAddress && ((unsigned __int8)v40 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          *(&v10->Rax + (v39 & 7)) = *v40;
          v10->Rsp += 8LL;
          ++v35;
        }
        if ( (v39 & 0xF0) != 0x40 || (v35[1] & 0xF8) != 0x58 )
          break;
        v41 = (unsigned __int64 *)v10->Rsp;
        if ( v15 <= (unsigned __int64)MmHighestUserAddress && ((unsigned __int8)v41 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        *(&v10->Rax + (v35[1] & 7 | (8 * (v39 & 1u)))) = *v41;
        v10->Rsp += 8LL;
        v35 += 2;
      }
      if ( v15 <= (unsigned __int64)MmHighestUserAddress )
      {
        v42 = v10->Rsp;
        if ( (v42 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
      }
      v43 = *(_QWORD *)v10->Rsp;
      v10->Rsp += 8LL;
      v10->Rip = v43;
      goto LABEL_157;
    }
    if ( ((v28 + 23) & 0xFD) != 0 )
    {
      if ( v28 == -1 && v24[1] == 37 )
        goto LABEL_66;
      if ( (v28 & 0xF8) != 0x48 || v24[1] != 0xFF )
        goto LABEL_98;
      v29 = (v24[2] & 0x38) == 32;
      goto LABEL_65;
    }
    v30 = &v24[-ImageBase];
    if ( v28 == -21 )
      v31 = (char)v24[1] + 2;
    else
      v31 = *(_DWORD *)(v24 + 1) + 5;
    v32 = *p_BeginAddress;
    v33 = (unsigned __int64)&v30[v31];
    if ( v33 < v32 || v33 >= p_BeginAddress[1] )
    {
      v34 = (unsigned int *)RtlpSameFunction(p_BeginAddress, ImageBase, v33 + ImageBase);
      if ( !v34 )
        goto LABEL_66;
      v29 = v33 == *v34;
LABEL_65:
      if ( v29 )
        goto LABEL_66;
      goto LABEL_98;
    }
    if ( v33 == v32 )
    {
      v29 = (*(_BYTE *)v18 & 0x20) == 0;
      goto LABEL_65;
    }
LABEL_98:
    v51 = &v106->BeginAddress;
    v52 = 0;
    v53 = v15 - ImageBase;
    for ( j = v15 - ImageBase; ; v53 = j )
    {
      v54 = 0;
      v55 = ImageBase + (unsigned int)v51[2];
      v56 = v53 - *v51;
      v57 = 0LL;
      v98 = 0;
      if ( v15 <= (unsigned __int64)MmHighestUserAddress && (v55 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( *(_BYTE *)(v55 + 2) )
      {
        do
        {
          v58 = v55 + 2 * v57;
          v59 = *(unsigned __int8 *)(v58 + 5) >> 4;
          if ( v56 < *(unsigned __int8 *)(v58 + 4) )
          {
            v57 = (unsigned int)RtlpUnwindOpSlots(*(unsigned __int16 *)(v58 + 4)) + (unsigned int)v57;
          }
          else
          {
            switch ( *(_BYTE *)(v55 + 2 * v57 + 5) & 0xF )
            {
              case 0:
                v60 = (unsigned __int64 *)v10->Rsp;
                if ( v15 <= (unsigned __int64)MmHighestUserAddress && ((unsigned __int8)v60 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                *(&v10->Rax + v59) = *v60;
                v10->Rsp += 8LL;
                v57 = (unsigned int)(v57 + 1);
                break;
              case 1:
                v61 = (unsigned int)(v57 + 1);
                v62 = *(unsigned __int16 *)(v55 + 2 * v61 + 4);
                if ( (_DWORD)v59 )
                {
                  v61 = (unsigned int)(v61 + 1);
                  v63 = (*(unsigned __int16 *)(v55 + 2 * v61 + 4) << 16) + v62;
                }
                else
                {
                  v63 = 8 * v62;
                }
                v10->Rsp += v63;
                v57 = (unsigned int)(v61 + 1);
                break;
              case 2:
                v10->Rsp += (unsigned int)(8 * v59 + 8);
                v57 = (unsigned int)(v57 + 1);
                break;
              case 3:
                v64 = *(&v10->Rax + (*(_BYTE *)(v55 + 3) & 0xF));
                v10->Rsp = v64;
                v10->Rsp = v64 - (*(_BYTE *)(v55 + 3) & 0xF0);
                v57 = (unsigned int)(v57 + 1);
                break;
              case 4:
                v65 = (unsigned int)(v57 + 1);
                v66 = EstablisherFrame + 8 * (unsigned int)*(unsigned __int16 *)(v55 + 2 * v65 + 4);
                if ( v15 <= (unsigned __int64)MmHighestUserAddress && (v66 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                v57 = (unsigned int)(v65 + 1);
                *(&v10->Rax + v59) = *(_QWORD *)v66;
                break;
              case 5:
                v67 = (unsigned int)(v57 + 2);
                v68 = (unsigned __int64 *)(EstablisherFrame
                                         + *(unsigned __int16 *)(v55 + 2LL * (unsigned int)(v67 - 1) + 4)
                                         + (*(unsigned __int16 *)(v55 + 2 * v67 + 4) << 16));
                if ( v15 <= (unsigned __int64)MmHighestUserAddress
                  && (((_BYTE)EstablisherFrame + (unsigned __int8)*(_WORD *)(v55 + 2LL * (unsigned int)(v67 - 1) + 4)) & 3) != 0 )
                {
                  ExRaiseDatatypeMisalignment();
                }
                v57 = (unsigned int)(v67 + 1);
                *(&v10->Rax + v59) = *v68;
                break;
              case 6:
                v57 = (unsigned int)(v57 + 2);
                break;
              case 7:
                v57 = (unsigned int)(v57 + 3);
                break;
              case 8:
                v69 = (unsigned int)(v57 + 1);
                v70 = EstablisherFrame + 16 * (unsigned int)*(unsigned __int16 *)(v55 + 2 * v69 + 4);
                if ( v15 <= (unsigned __int64)MmHighestUserAddress && (v70 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                v71 = (unsigned int)v59;
                v57 = (unsigned int)(v69 + 1);
                v10->FltSave.XmmRegisters[v71].Low = *(_QWORD *)v70;
                v10->FltSave.XmmRegisters[v71].High = *(_QWORD *)(v70 + 8);
                break;
              case 9:
                v72 = (unsigned int)(v57 + 2);
                v73 = (unsigned __int64 *)(EstablisherFrame
                                         + *(unsigned __int16 *)(v55 + 2LL * (unsigned int)(v72 - 1) + 4)
                                         + (*(unsigned __int16 *)(v55 + 2 * v72 + 4) << 16));
                if ( v15 <= (unsigned __int64)MmHighestUserAddress
                  && (((_BYTE)EstablisherFrame + (unsigned __int8)*(_WORD *)(v55 + 2LL * (unsigned int)(v72 - 1) + 4)) & 3) != 0 )
                {
                  ExRaiseDatatypeMisalignment();
                }
                v74 = (unsigned int)v59;
                v57 = (unsigned int)(v72 + 1);
                v10->FltSave.XmmRegisters[v74].Low = *v73;
                v10->FltSave.XmmRegisters[v74].High = v73[1];
                break;
              case 0xA:
                v75 = (unsigned __int64 *)v10->Rsp;
                v98 = 1;
                v76 = v75 + 3;
                if ( (_DWORD)v59 )
                {
                  ++v75;
                  ++v76;
                }
                if ( v15 <= (unsigned __int64)MmHighestUserAddress )
                {
                  if ( ((unsigned __int8)v75 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  if ( v15 <= (unsigned __int64)MmHighestUserAddress && ((unsigned __int8)v76 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                }
                v57 = (unsigned int)(v57 + 1);
                v10->Rip = *v75;
                v10->Rsp = *v76;
                break;
              default:
                RtlRaiseStatus(-1073741569);
            }
          }
        }
        while ( (unsigned int)v57 < *(unsigned __int8 *)(v55 + 2) );
        v54 = v98;
      }
      if ( (*(_BYTE *)v55 & 0x20) == 0 )
        break;
      v77 = *(unsigned __int8 *)(v55 + 2);
      if ( (v77 & 1) != 0 )
        ++v77;
      v51 = (_DWORD *)(v55 + 2 * (v77 + 2LL));
      if ( v15 <= (unsigned __int64)MmHighestUserAddress && ((unsigned __int8)v51 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned int)++v52 > 0x20 )
        RtlRaiseStatus(-1073741569);
    }
    if ( !v54 )
    {
      if ( v15 <= (unsigned __int64)MmHighestUserAddress )
      {
        v78 = v10->Rsp;
        if ( (v78 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
      }
      v79 = *(_QWORD *)v10->Rsp;
      v10->Rsp += 8LL;
      v10->Rip = v79;
    }
    v80 = ImageBase + (unsigned int)v51[2];
    if ( v15 <= (unsigned __int64)MmHighestUserAddress && (v80 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (int)v15 - (int)ImageBase - *v51 >= (unsigned int)*(unsigned __int8 *)(v80 + 1) && (*(_BYTE *)v80 & 0x10) != 0 )
    {
      v81 = *(unsigned __int8 *)(v80 + 2);
      if ( (v81 & 1) != 0 )
        v81 = (unsigned int)(v81 + 1);
      v9 = Context;
      v82 = (void *)(v80 + 2 * ((unsigned int)(v81 + 2) + 2LL));
      v83 = ImageBase + *(unsigned int *)(v80 + 2 * v81 + 4);
      v101 = v83;
      HandlerData = v82;
      goto LABEL_158;
    }
    v9 = Context;
LABEL_157:
    v83 = v101;
LABEL_158:
    if ( (EstablisherFrame & 7) != 0
      || (v13 = v111, EstablisherFrame < v111)
      || (v12 = v112, EstablisherFrame >= v112)
      || (v84 = v104) != 0LL && (unsigned __int64)v104 < EstablisherFrame )
    {
      RtlRaiseStatus(-1073741784);
    }
    if ( v83 )
    {
      v85 = 0;
      v86 = v102;
      v119 = v113;
      while ( 1 )
      {
        if ( v84 == (PVOID)EstablisherFrame )
          v86 |= 0x20u;
        v87 = ExceptionRecorda;
        v88 = (unsigned __int64)v110;
        v121 = v83;
        v89 = EstablisherFrame;
        ExceptionRecorda->ExceptionFlags = v86;
        v86 &= 0xFFFFFF9F;
        v9->Rax = v88;
        v116 = ImageBase;
        v117 = v106;
        v122 = HandlerData;
        v118 = v89;
        v123 = v105;
        ControlPc = v15;
        v120 = v9;
        v124 = v85;
        v102 = v86;
        v90 = RtlpExecuteHandlerForUnwind(v87, v89, v9, &ControlPc) - 1;
        if ( v90 )
          break;
        v84 = v104;
        v83 = v101;
        if ( (PVOID)EstablisherFrame != v104 )
        {
          v94 = v9;
          Context = v10;
          v9 = v10;
          v10 = v94;
LABEL_172:
          v84 = v104;
        }
        if ( (v86 & 0x40) == 0 )
          goto LABEL_174;
      }
      if ( v90 != 2 )
        RtlRaiseStatus(-1073741786);
      v15 = ControlPc;
      ImageBase = v116;
      v106 = v117;
      RtlpCopyContext(v114, v120);
      Context = v91;
      v9 = v91;
      v10 = &v129;
      RtlpCopyContext(&v129, v91);
      RtlVirtualUnwind(0, v93, v15, v92, &v129, &HandlerData, &EstablisherFrame, 0LL);
      v86 |= 0x40u;
      v83 = v121;
      v85 = v124;
      EstablisherFrame = v118;
      HandlerData = v122;
      v105 = v123;
      v101 = v121;
      v102 = v86;
      goto LABEL_172;
    }
    if ( (PVOID)EstablisherFrame != v104 )
    {
      v95 = v9;
      Context = v10;
      v9 = v10;
      v10 = v95;
      v84 = v104;
    }
LABEL_174:
    v7 = v105;
LABEL_175:
    if ( (EstablisherFrame & 7) != 0 || EstablisherFrame < v13 || EstablisherFrame >= v12 )
      break;
    if ( (PVOID)EstablisherFrame == v84 )
      goto LABEL_184;
  }
  if ( (PVOID)EstablisherFrame == v84 )
  {
LABEL_184:
    v97 = ExceptionRecorda;
    v9->Rax = (unsigned __int64)v110;
    if ( v97->ExceptionCode != -2147483607 )
      v9->Rip = (unsigned __int64)v113;
    RtlRestoreContext(v9, v97);
  }
  else
  {
    if ( v15 == v9->Rip )
      RtlRaiseStatus(-1073741569);
    ZwRaiseException(ExceptionRecorda, v9, 0);
  }
}
