/*
 * XREFs of RtlUnwindEx @ 0x14001C500
 * Callers:
 *     __C_specific_handler @ 0x1401716D0 (__C_specific_handler.c)
 *     _local_unwind @ 0x140171E10 (_local_unwind.c)
 *     __longjmp_internal @ 0x14017EBA0 (__longjmp_internal.c)
 *     KiSystemServiceHandler @ 0x140193680 (KiSystemServiceHandler.c)
 *     RtlUnwind @ 0x1402469EC (RtlUnwind.c)
 * Callees:
 *     RtlpUnwindEpilogue @ 0x140005800 (RtlpUnwindEpilogue.c)
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     RtlpCopyContext @ 0x14001CF10 (RtlpCopyContext.c)
 *     RtlLookupFunctionEntry @ 0x14001D0C0 (RtlLookupFunctionEntry.c)
 *     RtlpUnwindOpSlots @ 0x14001D3DC (RtlpUnwindOpSlots.c)
 *     RtlpGetStackLimits @ 0x14001D5A0 (RtlpGetStackLimits.c)
 *     RtlVirtualUnwind @ 0x14012E39C (RtlVirtualUnwind.c)
 *     RtlpSameFunction @ 0x1401609E0 (RtlpSameFunction.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x140181970 (ZwRaiseException.c)
 *     RtlCaptureContext @ 0x14018B560 (RtlCaptureContext.c)
 *     RtlRestoreContext @ 0x14018B6A0 (RtlRestoreContext.c)
 *     RtlpExecuteHandlerForUnwind @ 0x14018BD90 (RtlpExecuteHandlerForUnwind.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
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
  unsigned __int64 v13; // r12
  struct _RUNTIME_FUNCTION *v14; // r10
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
  unsigned int v25; // r10d
  __int16 v26; // ax
  int v27; // edx
  unsigned int v28; // r11d
  int v29; // eax
  struct _RUNTIME_FUNCTION *v30; // r9
  char v31; // r10
  unsigned __int64 v32; // rdi
  unsigned int v33; // esi
  __int64 v34; // rbx
  unsigned __int64 v35; // rdx
  __int64 v36; // r8
  unsigned __int64 *v37; // rdx
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // r9
  struct _CONTEXT *v41; // rax
  unsigned __int64 v42; // rdx
  int v43; // edx
  unsigned int v44; // edx
  unsigned int v45; // eax
  unsigned __int64 v46; // rcx
  int v47; // esi
  unsigned int v48; // edx
  struct _EXCEPTION_RECORD *v49; // r11
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rax
  int v52; // eax
  struct _CONTEXT *v53; // rax
  struct _EXCEPTION_RECORD *v54; // rbx
  unsigned __int64 *v55; // rdx
  unsigned __int64 *v56; // r9
  __int64 v57; // r8
  unsigned __int64 v58; // rdx
  __int64 v59; // rcx
  char v60; // dl
  __int64 v61; // rsi
  _BYTE *v62; // rcx
  char v63; // al
  char v64; // dl
  struct _CONTEXT *v65; // r8
  DWORD64 v66; // r10
  PRUNTIME_FUNCTION v67; // r11
  unsigned __int64 Rip; // rax
  unsigned __int64 v69; // rax
  int v70; // eax
  __int64 v71; // r14
  __int64 v72; // rcx
  unsigned int v73; // ecx
  char v74; // r8
  _BYTE *v75; // rdi
  int v76; // eax
  unsigned __int64 BeginAddress; // rcx
  unsigned __int64 v78; // rdi
  _DWORD *v79; // rax
  char *v80; // rdx
  char v81; // al
  char v82; // al
  unsigned __int64 v83; // rcx
  char v84; // cl
  unsigned __int64 *v85; // r8
  unsigned __int64 *v86; // r9
  unsigned __int64 v87; // rcx
  unsigned __int64 v88; // rcx
  unsigned __int64 *v89; // r9
  __int64 v90; // rcx
  unsigned __int64 *Rsp; // rcx
  char v92; // [rsp+40h] [rbp-C0h]
  unsigned __int64 EstablisherFrame; // [rsp+48h] [rbp-B8h] BYREF
  PRUNTIME_FUNCTION v94; // [rsp+50h] [rbp-B0h]
  unsigned int v95; // [rsp+58h] [rbp-A8h]
  unsigned __int64 ImageBase; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v97; // [rsp+68h] [rbp-98h]
  PUNWIND_HISTORY_TABLE v98; // [rsp+70h] [rbp-90h]
  unsigned int v99; // [rsp+78h] [rbp-88h]
  struct _EXCEPTION_RECORD *ExceptionRecorda; // [rsp+80h] [rbp-80h]
  PVOID HandlerData; // [rsp+88h] [rbp-78h] BYREF
  int i; // [rsp+90h] [rbp-70h]
  PVOID v103; // [rsp+98h] [rbp-68h]
  PVOID v104; // [rsp+A0h] [rbp-60h]
  struct _RUNTIME_FUNCTION *v105; // [rsp+A8h] [rbp-58h]
  PVOID v106; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v107; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v108; // [rsp+C0h] [rbp-40h] BYREF
  struct _CONTEXT *v109; // [rsp+C8h] [rbp-38h]
  DWORD64 ControlPc; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v111; // [rsp+D8h] [rbp-28h]
  struct _RUNTIME_FUNCTION *v112; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v113; // [rsp+E8h] [rbp-18h]
  PVOID v114; // [rsp+F0h] [rbp-10h]
  struct _CONTEXT *v115; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v116; // [rsp+100h] [rbp+0h]
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
  v104 = TargetIp;
  v106 = TargetFrame;
  ExceptionRecorda = ExceptionRecord;
  v109 = ContextRecord;
  v98 = HistoryTable;
  v103 = ReturnValue;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v108, &v107) )
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
  v11 = v107;
  v12 = v108;
  EstablisherFrame = 0LL;
  while ( 1 )
  {
    v13 = v10->Rip;
    v94 = RtlLookupFunctionEntry(v13, &ImageBase, v7);
    if ( !v94 )
    {
      Rsp = (unsigned __int64 *)v10->Rsp;
      v10->Rip = *Rsp;
      v10->Rsp = (unsigned __int64)(Rsp + 1);
      goto LABEL_75;
    }
    RtlpCopyContext(v9, v10);
    v15 = ImageBase + v14->UnwindData;
    v97 = 0LL;
    if ( v13 <= (unsigned __int64)MmHighestUserAddress && (v15 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v16 = v13 - ImageBase - v14->BeginAddress;
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
          v72 = *(unsigned __int16 *)(v15 + 2 * v71 + 4);
          if ( (BYTE1(v72) & 0xF) == 3 )
            break;
          v71 = (unsigned int)RtlpUnwindOpSlots(v72) + (unsigned int)v71;
        }
        while ( (unsigned int)v71 < *(unsigned __int8 *)(v15 + 2) );
        v14 = v94;
      }
      v73 = *(unsigned __int8 *)(v15 + 2 * v71 + 4);
      v8 = v106;
      if ( v16 >= v73 )
      {
        v20 = *(unsigned __int8 *)(v15 + 3);
        v19 = *(_BYTE *)(v15 + 3);
        goto LABEL_14;
      }
    }
    EstablisherFrame = v9->Rsp;
LABEL_16:
    if ( v17 < 2 )
    {
      v60 = *(_BYTE *)v13;
      v61 = 0LL;
      v62 = (_BYTE *)v13;
      if ( *(_BYTE *)v13 == 72 )
      {
        v63 = *(_BYTE *)(v13 + 1);
        if ( v63 == -125 && *(_BYTE *)(v13 + 2) == 0xC4 )
        {
          v62 = (_BYTE *)(v13 + 4);
          goto LABEL_100;
        }
        if ( v63 == -127 && *(_BYTE *)(v13 + 2) == 0xC4 )
          goto LABEL_163;
      }
      if ( (v60 & 0xFE) != 0x48 )
        goto LABEL_100;
      if ( *(_BYTE *)(v13 + 1) != 0x8D )
        goto LABEL_100;
      v70 = *(_BYTE *)(v13 + 2) & 7;
      v61 = v70 | (8 * (v60 & 1u));
      if ( !(v70 | (8 * (v60 & 1))) || (_DWORD)v61 != (*(_BYTE *)(v15 + 3) & 0xF) )
        goto LABEL_100;
      v74 = *(_BYTE *)(v13 + 2) & 0xF8;
      if ( v74 == 96 )
      {
        v62 = (_BYTE *)(v13 + 4);
        goto LABEL_100;
      }
      if ( v74 == -96 )
LABEL_163:
        v62 = (_BYTE *)(v13 + 7);
      while ( 1 )
      {
LABEL_100:
        while ( (*v62 & 0xF8) == 0x58 )
          ++v62;
        if ( (*v62 & 0xF0) != 0x40 || (v62[1] & 0xF8) != 0x58 )
          break;
        v62 += 2;
      }
      if ( *v62 == 0xF2 )
        ++v62;
      v64 = *v62;
      if ( (unsigned __int8)(*v62 + 62) > 1u && (v64 != -13 || v62[1] != 0xC3) )
      {
        if ( ((v64 + 23) & 0xFD) != 0 )
        {
          if ( v64 == -1 && v62[1] == 37 || (v64 & 0xF8) == 0x48 && v62[1] == 0xFF && (v62[2] & 0x38) == 0x20 )
            goto LABEL_180;
        }
        else
        {
          v75 = &v62[-ImageBase];
          if ( v64 == -21 )
            v76 = (char)v62[1] + 2;
          else
            v76 = *(_DWORD *)(v62 + 1) + 5;
          BeginAddress = v14->BeginAddress;
          v78 = (unsigned __int64)&v75[v76];
          if ( v78 < BeginAddress || v78 >= v14->EndAddress )
          {
            v79 = (_DWORD *)RtlpSameFunction(v14, ImageBase, v78 + ImageBase);
            v14 = v94;
            if ( !v79 || v78 == *v79 )
              goto LABEL_180;
          }
          else if ( v78 == BeginAddress && (*(_BYTE *)v15 & 0x20) == 0 )
          {
            goto LABEL_180;
          }
        }
        goto LABEL_25;
      }
LABEL_180:
      v80 = (char *)v13;
      if ( (*(_BYTE *)v13 & 0xF8) == 0x48 )
      {
        v81 = *(_BYTE *)(v13 + 1);
        if ( v81 != -125 )
        {
          if ( v81 == -127 )
          {
            v9->Rsp += *(unsigned __int8 *)(v13 + 3) | ((*(unsigned __int8 *)(v13 + 4) | (*(unsigned __int16 *)(v13 + 5) << 8)) << 8);
          }
          else
          {
            if ( v81 != -115 )
              goto LABEL_191;
            v82 = *(_BYTE *)(v13 + 2) & 0xF8;
            if ( v82 == 96 )
            {
              v83 = *(&v9->Rax + v61);
              v80 = (char *)(v13 + 4);
              v9->Rsp = v83;
              v9->Rsp = v83 + *(char *)(v13 + 3);
              goto LABEL_191;
            }
            if ( v82 != -96 )
              goto LABEL_191;
            v9->Rsp = *(&v9->Rax + v61)
                    + (*(unsigned __int8 *)(v13 + 3) | ((*(unsigned __int8 *)(v13 + 4) | (*(unsigned __int16 *)(v13 + 5) << 8)) << 8));
          }
          v80 = (char *)(v13 + 7);
          goto LABEL_191;
        }
        v80 = (char *)(v13 + 4);
        v9->Rsp += *(char *)(v13 + 3);
      }
      while ( 1 )
      {
LABEL_191:
        while ( 1 )
        {
          v84 = *v80;
          if ( (*v80 & 0xF8) != 0x58 )
            break;
          v85 = (unsigned __int64 *)v9->Rsp;
          if ( v13 <= (unsigned __int64)MmHighestUserAddress && ((unsigned __int8)v85 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          *(&v9->Rax + (v84 & 7)) = *v85;
          v9->Rsp += 8LL;
          ++v80;
        }
        if ( (v84 & 0xF0) != 0x40 || (v80[1] & 0xF8) != 0x58 )
          break;
        v86 = (unsigned __int64 *)v9->Rsp;
        if ( v13 <= (unsigned __int64)MmHighestUserAddress && ((unsigned __int8)v86 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        *(&v9->Rax + (v80[1] & 7 | (8 * (v84 & 1u)))) = *v86;
        v9->Rsp += 8LL;
        v80 += 2;
      }
      if ( v13 <= (unsigned __int64)MmHighestUserAddress )
      {
        v87 = v9->Rsp;
        if ( (v87 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
      }
      v88 = *(_QWORD *)v9->Rsp;
      v9->Rsp += 8LL;
      v9->Rip = v88;
      goto LABEL_46;
    }
    if ( !*(_BYTE *)(v15 + 2) )
      goto LABEL_25;
    v21 = *(_WORD *)(v15 + 4);
    if ( (HIBYTE(v21) & 0xF) != 6 )
      goto LABEL_25;
    v22 = (unsigned __int8)v21;
    v23 = v13 - ImageBase;
    if ( (v21 & 0x1000) == 0
      || (v24 = v14->EndAddress - (unsigned __int8)v21, v23 - v24 >= (unsigned int)(unsigned __int8)v21) )
    {
      v25 = 1;
      if ( *(_BYTE *)(v15 + 2) > 1u )
      {
        while ( 1 )
        {
          v26 = *(_WORD *)(v15 + 2LL * v25 + 4);
          if ( (HIBYTE(v26) & 0xF) != 6 || (v27 = (unsigned __int8)v26 + (HIBYTE(v26) >> 4 << 8)) == 0 )
          {
LABEL_24:
            v14 = v94;
            goto LABEL_25;
          }
          v24 = v94->EndAddress - v27;
          if ( v23 - v24 < v22 )
            break;
          if ( ++v25 >= *(unsigned __int8 *)(v15 + 2) )
            goto LABEL_24;
        }
        v14 = v94;
        goto LABEL_127;
      }
      v14 = v94;
LABEL_25:
      v28 = 0;
      v105 = v14;
      v99 = 0;
      v29 = v13 - ImageBase;
      v30 = v14;
      for ( i = v13 - ImageBase; ; v29 = i )
      {
        v31 = 0;
        v32 = ImageBase + v30->UnwindData;
        v33 = v29 - v30->BeginAddress;
        v34 = 0LL;
        v92 = 0;
        if ( v13 <= (unsigned __int64)MmHighestUserAddress && (v32 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( *(_BYTE *)(v32 + 2) )
        {
          do
          {
            v35 = v32 + 2 * v34;
            v36 = *(unsigned __int8 *)(v35 + 5) >> 4;
            if ( v33 < *(unsigned __int8 *)(v35 + 4) )
            {
              v34 = (unsigned int)RtlpUnwindOpSlots(*(unsigned __int16 *)(v35 + 4)) + (unsigned int)v34;
            }
            else
            {
              if ( (*(_BYTE *)(v32 + 2 * v34 + 5) & 0xF) != 0 )
              {
                if ( (*(_BYTE *)(v32 + 2 * v34 + 5) & 0xF) == 4 )
                {
                  v34 = (unsigned int)(v34 + 1);
                  v42 = EstablisherFrame + 8 * (unsigned int)*(unsigned __int16 *)(v32 + 2 * v34 + 4);
                  if ( v13 <= (unsigned __int64)MmHighestUserAddress && (v42 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  *(&v9->Rax + v36) = *(_QWORD *)v42;
                }
                else
                {
                  switch ( *(_BYTE *)(v32 + 2 * v34 + 5) & 0xF )
                  {
                    case 1:
                      v34 = (unsigned int)(v34 + 1);
                      v43 = *(unsigned __int16 *)(v32 + 2 * v34 + 4);
                      if ( (_DWORD)v36 )
                      {
                        v34 = (unsigned int)(v34 + 1);
                        v44 = (*(unsigned __int16 *)(v32 + 2 * v34 + 4) << 16) + v43;
                      }
                      else
                      {
                        v44 = 8 * v43;
                      }
                      v9->Rsp += v44;
                      break;
                    case 2:
                      v9->Rsp += (unsigned int)(8 * v36 + 8);
                      break;
                    case 3:
                      v46 = *(&v9->Rax + (*(_BYTE *)(v32 + 3) & 0xF));
                      v9->Rsp = v46;
                      v9->Rsp = v46 - (*(_BYTE *)(v32 + 3) & 0xF0);
                      break;
                    case 5:
                      v34 = (unsigned int)(v34 + 2);
                      if ( v13 <= (unsigned __int64)MmHighestUserAddress
                        && (((_BYTE)EstablisherFrame
                           + (unsigned __int8)*(_WORD *)(v32 + 2LL * (unsigned int)(v34 - 1) + 4)) & 3) != 0 )
                      {
                        ExRaiseDatatypeMisalignment();
                      }
                      *(&v9->Rax + v36) = *(_QWORD *)(EstablisherFrame
                                                    + *(unsigned __int16 *)(v32 + 2LL * (unsigned int)(v34 - 1) + 4)
                                                    + (*(unsigned __int16 *)(v32 + 2 * v34 + 4) << 16));
                      break;
                    case 6:
                      LODWORD(v34) = v34 + 1;
                      break;
                    case 7:
                      LODWORD(v34) = v34 + 2;
                      break;
                    case 8:
                      v34 = (unsigned int)(v34 + 1);
                      v58 = EstablisherFrame + 16 * (unsigned int)*(unsigned __int16 *)(v32 + 2 * v34 + 4);
                      if ( v13 <= (unsigned __int64)MmHighestUserAddress && (v58 & 3) != 0 )
                        ExRaiseDatatypeMisalignment();
                      v59 = (unsigned int)v36;
                      v9->FltSave.XmmRegisters[v59].Low = *(_QWORD *)v58;
                      v9->FltSave.XmmRegisters[v59].High = *(_QWORD *)(v58 + 8);
                      break;
                    case 9:
                      v34 = (unsigned int)(v34 + 2);
                      v89 = (unsigned __int64 *)(EstablisherFrame
                                               + *(unsigned __int16 *)(v32 + 2LL * (unsigned int)(v34 - 1) + 4)
                                               + (*(unsigned __int16 *)(v32 + 2 * v34 + 4) << 16));
                      if ( v13 <= (unsigned __int64)MmHighestUserAddress
                        && (((_BYTE)EstablisherFrame
                           + (unsigned __int8)*(_WORD *)(v32 + 2LL * (unsigned int)(v34 - 1) + 4)) & 3) != 0 )
                      {
                        ExRaiseDatatypeMisalignment();
                      }
                      v90 = (unsigned int)v36;
                      v9->FltSave.XmmRegisters[v90].Low = *v89;
                      v9->FltSave.XmmRegisters[v90].High = v89[1];
                      break;
                    case 0xA:
                      v55 = (unsigned __int64 *)v9->Rsp;
                      v92 = 1;
                      v56 = v55 + 3;
                      if ( (_DWORD)v36 )
                      {
                        ++v55;
                        ++v56;
                      }
                      if ( v13 <= (unsigned __int64)MmHighestUserAddress )
                      {
                        if ( ((unsigned __int8)v55 & 3) != 0 )
                          ExRaiseDatatypeMisalignment();
                        if ( v13 <= (unsigned __int64)MmHighestUserAddress && ((unsigned __int8)v56 & 3) != 0 )
                          ExRaiseDatatypeMisalignment();
                      }
                      v9->Rip = *v55;
                      v9->Rsp = *v56;
                      break;
                    default:
                      RtlRaiseStatus(-1073741569);
                  }
                }
              }
              else
              {
                v37 = (unsigned __int64 *)v9->Rsp;
                if ( v13 <= (unsigned __int64)MmHighestUserAddress && ((unsigned __int8)v37 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                *(&v9->Rax + v36) = *v37;
                v9->Rsp += 8LL;
              }
              v34 = (unsigned int)(v34 + 1);
            }
          }
          while ( (unsigned int)v34 < *(unsigned __int8 *)(v32 + 2) );
          v31 = v92;
          v30 = v105;
          v28 = v99;
        }
        if ( (*(_BYTE *)v32 & 0x20) == 0 )
          break;
        v45 = *(unsigned __int8 *)(v32 + 2);
        if ( (v45 & 1) != 0 )
          ++v45;
        v30 = (struct _RUNTIME_FUNCTION *)(v32 + 2 * (v45 + 2LL));
        v105 = v30;
        if ( v13 <= (unsigned __int64)MmHighestUserAddress && ((unsigned __int8)v30 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v99 = ++v28;
        if ( v28 > 0x20 )
          RtlRaiseStatus(-1073741569);
      }
      if ( !v31 )
      {
        if ( v13 <= (unsigned __int64)MmHighestUserAddress )
        {
          v69 = v9->Rsp;
          if ( (v69 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
        }
        v38 = *(_QWORD *)v9->Rsp;
        v9->Rsp += 8LL;
        v9->Rip = v38;
      }
      v39 = ImageBase + v30->UnwindData;
      if ( v13 <= (unsigned __int64)MmHighestUserAddress && (v39 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (int)v13 - (int)ImageBase - v30->BeginAddress >= *(unsigned __int8 *)(v39 + 1) && (*(_BYTE *)v39 & 0x10) != 0 )
      {
        v57 = *(unsigned __int8 *)(v39 + 2);
        if ( (v57 & 1) != 0 )
          v57 = (unsigned int)(v57 + 1);
        v40 = ImageBase + *(unsigned int *)(v39 + 2 * v57 + 4);
        v14 = v94;
        HandlerData = (PVOID)(v39 + 2 * ((unsigned int)(v57 + 2) + 2LL));
        v97 = v40;
        goto LABEL_47;
      }
      goto LABEL_45;
    }
LABEL_127:
    RtlpUnwindEpilogue(ImageBase, v13, v23 - v24, v14, (__int64)v9, 0LL, 0LL, 0LL);
LABEL_45:
    v14 = v94;
LABEL_46:
    v40 = v97;
LABEL_47:
    if ( (EstablisherFrame & 7) != 0
      || (v12 = v108, EstablisherFrame < v108)
      || (v11 = v107, EstablisherFrame >= v107)
      || v8 && (unsigned __int64)v8 < EstablisherFrame )
    {
      RtlRaiseStatus(-1073741784);
    }
    if ( v40 )
    {
      v47 = 0;
      v48 = v95;
      v114 = v104;
      do
      {
        if ( v8 == (PVOID)EstablisherFrame )
          v48 |= 0x20u;
        v49 = ExceptionRecorda;
        v50 = EstablisherFrame;
        v51 = (unsigned __int64)v103;
        v113 = EstablisherFrame;
        ExceptionRecorda->ExceptionFlags = v48;
        v10->Rax = v51;
        v111 = ImageBase;
        v117 = HandlerData;
        v95 = v48 & 0xFFFFFF9F;
        v116 = v40;
        v118 = v98;
        ControlPc = v13;
        v112 = v14;
        v115 = v10;
        v119 = v47;
        v52 = RtlpExecuteHandlerForUnwind(v49, v50, v10, &ControlPc) - 1;
        if ( v52 )
        {
          if ( v52 != 2 )
            RtlRaiseStatus(-1073741786);
          v13 = ControlPc;
          ImageBase = v111;
          v94 = v112;
          RtlpCopyContext(v109, v115);
          v10 = v65;
          v9 = &v124;
          RtlpCopyContext(&v124, v65);
          RtlVirtualUnwind(0, v66, v13, v67, &v124, &HandlerData, &EstablisherFrame, 0LL);
          v40 = v116;
          v48 = v95 | 0x40;
          v47 = v119;
          EstablisherFrame = v113;
          HandlerData = v117;
          v98 = v118;
          v97 = v116;
          v95 |= 0x40u;
        }
        else
        {
          v40 = v97;
          v48 = v95;
          if ( (PVOID)EstablisherFrame != v8 )
          {
            v53 = v10;
            v10 = v9;
            v9 = v53;
          }
        }
        v14 = v94;
      }
      while ( (v48 & 0x40) != 0 );
    }
    else if ( (PVOID)EstablisherFrame != v8 )
    {
      v41 = v10;
      v10 = v9;
      v9 = v41;
    }
    v7 = v98;
LABEL_75:
    if ( (EstablisherFrame & 7) != 0 || EstablisherFrame < v12 || EstablisherFrame >= v11 )
      break;
    if ( (PVOID)EstablisherFrame == v8 )
      goto LABEL_79;
  }
  if ( (PVOID)EstablisherFrame == v8 )
  {
LABEL_79:
    v54 = ExceptionRecorda;
    v10->Rax = (unsigned __int64)v103;
    if ( v54->ExceptionCode != -2147483607 )
      v10->Rip = (unsigned __int64)v104;
    RtlRestoreContext(v10, v54);
    return;
  }
  if ( v13 == v10->Rip )
    RtlRaiseStatus(-1073741569);
  ZwRaiseException(ExceptionRecorda, v10, 0);
}
