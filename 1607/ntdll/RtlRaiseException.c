/*
 * XREFs of RtlRaiseException @ 0x180036760
 * Callers:
 *     PssNtValidateDescriptor @ 0x180008270 (PssNtValidateDescriptor.c)
 *     RtlGetActiveActivationContext @ 0x18000F460 (RtlGetActiveActivationContext.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180016360 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpLoadDependentModule @ 0x180016670 (LdrpLoadDependentModule.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180018740 (RtlDeactivateActivationContextUnsafeFast.c)
 *     TppCallbackEpilog @ 0x18001FBC0 (TppCallbackEpilog.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18001FF40 (TppCallbackCheckThreadAfterCallback.c)
 *     RtlpReAllocateHeapInternal @ 0x180020DC0 (RtlpReAllocateHeapInternal.c)
 *     TpCheckTerminateWorker @ 0x180052980 (TpCheckTerminateWorker.c)
 *     vDbgPrintExWithPrefixInternal @ 0x18005C418 (vDbgPrintExWithPrefixInternal.c)
 *     RtlpAllocateActivationContextStackFrame @ 0x180068D58 (RtlpAllocateActivationContextStackFrame.c)
 *     RtlDeactivateActivationContext @ 0x180077940 (RtlDeactivateActivationContext.c)
 *     RtlpFreeActivationContextStackFrame @ 0x180077A48 (RtlpFreeActivationContextStackFrame.c)
 *     RtlpTpImpersonate @ 0x18007E67C (RtlpTpImpersonate.c)
 *     RaiseException @ 0x18009F060 (RaiseException.c)
 *     KiRaiseUserExceptionDispatcher @ 0x1800AA070 (KiRaiseUserExceptionDispatcher.c)
 *     RtlpPossibleDeadlock @ 0x1800D3CC8 (RtlpPossibleDeadlock.c)
 *     RtlpAllocateHeapRaiseException @ 0x1800EC260 (RtlpAllocateHeapRaiseException.c)
 *     RtlReportCriticalFailure @ 0x1800F735C (RtlReportCriticalFailure.c)
 *     TppRaiseHandleStatus @ 0x1800FE514 (TppRaiseHandleStatus.c)
 *     TppRaiseInvalidParameter @ 0x1800FE5C4 (TppRaiseInvalidParameter.c)
 * Callees:
 *     RtlDispatchException @ 0x1800349B0 (RtlDispatchException.c)
 *     RtlLookupFunctionEntry @ 0x180035F90 (RtlLookupFunctionEntry.c)
 *     RtlpSameFunction @ 0x180078BD4 (RtlpSameFunction.c)
 *     RtlpUnwindOpSlots @ 0x180088E54 (RtlpUnwindOpSlots.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     RtlpUnwindEpilogue @ 0x1800A5BD4 (RtlpUnwindEpilogue.c)
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 *     ZwRaiseException @ 0x1800A8E70 (ZwRaiseException.c)
 *     RtlpCaptureContext @ 0x1800AA0D0 (RtlpCaptureContext.c)
 *     RtlRestoreContext @ 0x1800AA210 (RtlRestoreContext.c)
 *     _alloca_probe @ 0x1800AADB0 (_alloca_probe.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

void __stdcall RtlRaiseException(PEXCEPTION_RECORD ExceptionRecord)
{
  NTSTATUS v1; // edi
  DWORD64 Rip; // rbx
  PRUNTIME_FUNCTION v3; // rax
  __int64 v4; // rdx
  DWORD64 v5; // r8
  __int64 v6; // r9
  unsigned int *p_BeginAddress; // r13
  unsigned __int64 v8; // r12
  unsigned int v9; // esi
  unsigned __int64 v10; // rdi
  unsigned int v11; // r15d
  DWORD64 *Rsp; // rdx
  __int64 v13; // r14
  _BYTE *v14; // rcx
  unsigned int v15; // r15d
  __int64 v16; // rdi
  char v17; // r12
  _BYTE *v18; // rsi
  unsigned int v19; // r14d
  __int64 v20; // r9
  unsigned int v21; // ecx
  DWORD64 v22; // rax
  PEXCEPTION_RECORD v23; // rdi
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  void *v26; // rsp
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  DWORD64 v30; // rax
  unsigned __int8 v31; // cl
  int v32; // eax
  int v33; // r8d
  bool v34; // zf
  char v35; // al
  int v36; // eax
  char v37; // r8
  char v38; // al
  _BYTE *v39; // rsi
  int v40; // eax
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rsi
  unsigned int v43; // ecx
  __int16 v44; // cx
  unsigned int v45; // r11d
  unsigned int v46; // ecx
  unsigned int v47; // esi
  unsigned int j; // r10d
  __int16 v49; // r9
  int v50; // r9d
  unsigned int v51; // ecx
  unsigned int v52; // ecx
  ULONGLONG *v53; // rdx
  __int64 v54; // rcx
  LONGLONG v55; // rax
  int v56; // eax
  _DWORD *v57; // rax
  unsigned int v58; // ecx
  DWORD64 **v59; // rcx
  int v60; // eax
  __int64 i; // r14
  __int64 v62; // rcx
  char v63; // al
  BOOLEAN v64; // r8
  DWORD64 v65; // [rsp+40h] [rbp+0h] BYREF
  unsigned __int64 ImageBase; // [rsp+48h] [rbp+8h] BYREF
  PEXCEPTION_RECORD ExceptionRecorda; // [rsp+50h] [rbp+10h]
  struct _CONTEXT ContextRecord; // [rsp+60h] [rbp+20h] BYREF
  int v69; // [rsp+530h] [rbp+4F0h]
  int v70; // [rsp+534h] [rbp+4F4h]
  int v71; // [rsp+538h] [rbp+4F8h]
  int v72; // [rsp+53Ch] [rbp+4FCh]
  int v73; // [rsp+540h] [rbp+500h]
  int v74; // [rsp+544h] [rbp+504h]
  struct _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+550h] [rbp+510h] BYREF

  ExceptionRecorda = ExceptionRecord;
  v1 = -1073741786;
  RtlpCaptureContext(&ContextRecord);
  Rip = ContextRecord.Rip;
  HistoryTable.Count = 0;
  HistoryTable.LowAddress = -1LL;
  HistoryTable.HighAddress = 0LL;
  *(_DWORD *)&HistoryTable.LocalHint = 0x1000000;
  v3 = RtlLookupFunctionEntry(ContextRecord.Rip, &ImageBase, &HistoryTable);
  p_BeginAddress = &v3->BeginAddress;
  if ( !v3 )
LABEL_145:
    RtlRaiseStatus(v1);
  v8 = ImageBase;
  v9 = Rip - v3->BeginAddress - ImageBase;
  v10 = ImageBase + v3->UnwindInfoAddress;
  v11 = *(_BYTE *)v10 & 7;
  if ( (*(_BYTE *)(v10 + 3) & 0xF) == 0 )
  {
    Rsp = (DWORD64 *)ContextRecord.Rsp;
LABEL_4:
    v65 = (DWORD64)Rsp;
    goto LABEL_5;
  }
  if ( v9 >= *(unsigned __int8 *)(v10 + 1) || (*(_BYTE *)v10 & 0x20) != 0 )
  {
    v31 = *(_BYTE *)(v10 + 3);
    v32 = v31;
    Rsp = (DWORD64 *)ContextRecord.Rsp;
  }
  else
  {
    for ( i = 0LL;
          (unsigned int)i < *(unsigned __int8 *)(v10 + 2);
          i = (unsigned int)RtlpUnwindOpSlots(v62, v4, v5, v6) + (unsigned int)i )
    {
      v62 = *(unsigned __int16 *)(v10 + 2 * i + 4);
      if ( (BYTE1(v62) & 0xF) == 3 )
        break;
    }
    Rsp = (DWORD64 *)ContextRecord.Rsp;
    if ( v9 < *(unsigned __int8 *)(v10 + 2 * i + 4) )
      goto LABEL_4;
    v32 = *(unsigned __int8 *)(v10 + 3);
    v31 = *(_BYTE *)(v10 + 3);
  }
  v65 = *(&ContextRecord.Rax + (v31 & 0xF)) - (int)(v32 & 0xFFFFFFF0);
LABEL_5:
  if ( v11 < 2 )
  {
    v13 = 0LL;
    v14 = (_BYTE *)Rip;
    if ( *(_BYTE *)Rip == 72 )
    {
      v38 = *(_BYTE *)(Rip + 1);
      if ( v38 == -125 && *(_BYTE *)(Rip + 2) == 0xC4 )
        goto LABEL_108;
      if ( v38 == -127 && *(_BYTE *)(Rip + 2) == 0xC4 )
        goto LABEL_75;
    }
    if ( (*(_BYTE *)Rip & 0xFE) != 0x48 )
      goto LABEL_8;
    if ( *(_BYTE *)(Rip + 1) != 0x8D )
      goto LABEL_8;
    v5 = *(unsigned __int8 *)(Rip + 2);
    v36 = *(_BYTE *)(Rip + 2) & 7;
    v13 = v36 | (8 * (*(_BYTE *)Rip & 1u));
    if ( !(v36 | (8 * (*(_BYTE *)Rip & 1))) || (_DWORD)v13 != (*(_BYTE *)(v10 + 3) & 0xF) )
      goto LABEL_8;
    v37 = v5 & 0xF8;
    if ( v37 != 96 )
    {
      if ( v37 == -96 )
      {
LABEL_75:
        v14 = (_BYTE *)(Rip + 7);
        goto LABEL_8;
      }
      while ( 1 )
      {
LABEL_8:
        while ( (*v14 & 0xF8) == 0x58 )
          ++v14;
        if ( (*v14 & 0xF0) != 0x40 || (v14[1] & 0xF8) != 0x58 )
          break;
        v14 += 2;
      }
      if ( *v14 == 0xF2 )
        ++v14;
      LOBYTE(v5) = *v14;
      if ( (unsigned __int8)(*v14 + 62) <= 1u || (_BYTE)v5 == 0xF3 && v14[1] == 0xC3 )
      {
LABEL_58:
        if ( (*(_BYTE *)Rip & 0xF8) != 0x48 )
          goto LABEL_62;
        v35 = *(_BYTE *)(Rip + 1);
        switch ( v35 )
        {
          case -125:
            goto LABEL_60;
          case -127:
            Rsp = (DWORD64 *)((char *)Rsp
                            + (*(unsigned __int8 *)(Rip + 3) | (unsigned __int64)((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8)));
            break;
          case -115:
            v63 = *(_BYTE *)(Rip + 2) & 0xF8;
            if ( v63 == 96 )
            {
              Rsp = (DWORD64 *)*(&ContextRecord.Rax + v13);
              ContextRecord.Rsp = (DWORD64)Rsp;
LABEL_60:
              Rsp = (DWORD64 *)((char *)Rsp + *(char *)(Rip + 3));
              for ( Rip += 4LL; ; Rip += 2LL )
              {
LABEL_61:
                while ( 1 )
                {
                  ContextRecord.Rsp = (DWORD64)Rsp;
LABEL_62:
                  if ( (*(_BYTE *)Rip & 0xF8) != 0x58 )
                    break;
                  *(&ContextRecord.Rax + (*(_BYTE *)Rip & 7)) = *Rsp;
                  Rsp = (DWORD64 *)(ContextRecord.Rsp + 8);
                  ++Rip;
                }
                if ( (*(_BYTE *)Rip & 0xF0) != 0x40 || (*(_BYTE *)(Rip + 1) & 0xF8) != 0x58 )
                  break;
                *(&ContextRecord.Rax + (*(_BYTE *)(Rip + 1) & 7 | (unsigned __int64)(8 * (*(_BYTE *)Rip & 1u)))) = *Rsp;
                Rsp = (DWORD64 *)(ContextRecord.Rsp + 8);
              }
LABEL_29:
              v22 = *Rsp;
              ContextRecord.Rsp = (DWORD64)(Rsp + 1);
              ContextRecord.Rip = v22;
              goto LABEL_30;
            }
            if ( v63 != -96 )
              goto LABEL_62;
            Rsp = (DWORD64 *)(*(&ContextRecord.Rax + v13)
                            + (*(unsigned __int8 *)(Rip + 3) | (unsigned __int64)((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8)));
            break;
          default:
            goto LABEL_62;
        }
        Rip += 7LL;
        goto LABEL_61;
      }
      if ( (((_BYTE)v5 + 23) & 0xFD) != 0 )
      {
        if ( (_BYTE)v5 == 0xFF && v14[1] == 37 )
          goto LABEL_58;
        LOBYTE(v5) = v5 & 0xF8;
        if ( (_BYTE)v5 != 72 || v14[1] != 0xFF )
          goto LABEL_17;
        v34 = (v14[2] & 0x38) == 32;
        goto LABEL_57;
      }
      v39 = &v14[-v8];
      if ( (_BYTE)v5 == 0xEB )
        v40 = (char)v14[1] + 2;
      else
        v40 = *(_DWORD *)(v14 + 1) + 5;
      v41 = *p_BeginAddress;
      v42 = (unsigned __int64)&v39[v40];
      if ( v42 < v41 || v42 >= p_BeginAddress[1] )
      {
        v57 = (_DWORD *)RtlpSameFunction(p_BeginAddress, v8, v42 + v8);
        if ( !v57 || v42 == *v57 )
        {
          Rsp = (DWORD64 *)ContextRecord.Rsp;
          goto LABEL_58;
        }
        Rsp = (DWORD64 *)ContextRecord.Rsp;
        goto LABEL_17;
      }
      if ( v42 == v41 )
      {
        v34 = (*(_BYTE *)v10 & 0x20) == 0;
LABEL_57:
        if ( v34 )
          goto LABEL_58;
      }
LABEL_17:
      v15 = 0;
      while ( 1 )
      {
        v16 = 0LL;
        v17 = 0;
        v18 = (_BYTE *)(ImageBase + p_BeginAddress[2]);
        v19 = Rip - *p_BeginAddress - ImageBase;
        if ( v18[2] )
          break;
LABEL_27:
        if ( (*v18 & 0x20) == 0 )
        {
          if ( v17 )
            goto LABEL_30;
          goto LABEL_29;
        }
        v56 = (unsigned __int8)v18[2];
        if ( (v56 & 1) != 0 )
          ++v56;
        ++v15;
        p_BeginAddress = (unsigned int *)&v18[2 * v56 + 4];
        if ( v15 > 0x20 )
          RtlRaiseStatus(-1073741569);
      }
      while ( 1 )
      {
        v20 = (unsigned __int8)v18[2 * v16 + 5] >> 4;
        if ( v19 < (unsigned __int8)v18[2 * v16 + 4] )
        {
          v60 = RtlpUnwindOpSlots(*(unsigned __int16 *)&v18[2 * v16 + 4], Rsp, v5, v20);
          Rsp = (DWORD64 *)ContextRecord.Rsp;
          v16 = (unsigned int)(v60 + v16);
          goto LABEL_26;
        }
        v21 = v18[2 * v16 + 5] & 0xF;
        if ( v21 > 5 )
        {
          v43 = v21 - 6;
          if ( !v43 )
          {
            LODWORD(v16) = v16 + 1;
            goto LABEL_25;
          }
          v51 = v43 - 1;
          if ( !v51 )
          {
            LODWORD(v16) = v16 + 2;
            goto LABEL_25;
          }
          v52 = v51 - 1;
          if ( !v52 )
          {
            v16 = (unsigned int)(v16 + 1);
            v53 = (ULONGLONG *)(v65 + 16 * (unsigned int)*(unsigned __int16 *)&v18[2 * v16 + 4]);
            v54 = 2LL * (unsigned int)v20;
            *(&ContextRecord.Xmm0.Low + 2 * (unsigned int)v20) = *v53;
            v55 = v53[1];
            goto LABEL_99;
          }
          v58 = v52 - 1;
          if ( !v58 )
          {
            v16 = (unsigned int)(v16 + 2);
            v5 = v65
               + *(unsigned __int16 *)&v18[2 * (unsigned int)(v16 - 1) + 4]
               + (*(unsigned __int16 *)&v18[2 * v16 + 4] << 16);
            v54 = 2LL * (unsigned int)v20;
            *(&ContextRecord.Xmm0.Low + 2 * (unsigned int)v20) = *(_QWORD *)v5;
            v55 = *(_QWORD *)(v5 + 8);
LABEL_99:
            *(&ContextRecord.Xmm0.High + v54) = v55;
LABEL_45:
            Rsp = (DWORD64 *)ContextRecord.Rsp;
            goto LABEL_25;
          }
          if ( v58 != 1 )
LABEL_141:
            RtlRaiseStatus(-1073741569);
          v17 = 1;
          v59 = (DWORD64 **)(Rsp + 3);
          if ( (_DWORD)v20 )
          {
            ++Rsp;
            ++v59;
          }
          ContextRecord.Rip = *Rsp;
          Rsp = *v59;
        }
        else
        {
          if ( v21 == 5 )
          {
            v16 = (unsigned int)(v16 + 2);
            v30 = *(_QWORD *)((*(unsigned __int16 *)&v18[2 * v16 + 4] << 16)
                            + (unsigned int)*(unsigned __int16 *)&v18[2 * (unsigned int)(v16 - 1) + 4]
                            + v65);
LABEL_44:
            *(&ContextRecord.Rax + v20) = v30;
            goto LABEL_45;
          }
          if ( (v18[2 * v16 + 5] & 0xF) != 0 )
          {
            v27 = v21 - 1;
            if ( v27 )
            {
              v28 = v27 - 1;
              if ( v28 )
              {
                v29 = v28 - 1;
                if ( v29 )
                {
                  if ( v29 != 1 )
                    goto LABEL_141;
                  v16 = (unsigned int)(v16 + 1);
                  v30 = *(_QWORD *)(8 * (unsigned int)*(unsigned __int16 *)&v18[2 * v16 + 4] + v65);
                  goto LABEL_44;
                }
                ContextRecord.Rsp = *(&ContextRecord.Rax + (v18[3] & 0xF));
                Rsp = (DWORD64 *)(ContextRecord.Rsp - (v18[3] & 0xF0));
              }
              else
              {
                Rsp = (DWORD64 *)((char *)Rsp + (unsigned int)(8 * v20 + 8));
              }
            }
            else
            {
              v16 = (unsigned int)(v16 + 1);
              v33 = *(unsigned __int16 *)&v18[2 * v16 + 4];
              if ( (_DWORD)v20 )
              {
                v16 = (unsigned int)(v16 + 1);
                v5 = (*(unsigned __int16 *)&v18[2 * v16 + 4] << 16) + v33;
              }
              else
              {
                v5 = (unsigned int)(8 * v33);
              }
              Rsp = (DWORD64 *)((char *)Rsp + (unsigned int)v5);
            }
          }
          else
          {
            *(&ContextRecord.Rax + v20) = *Rsp;
            Rsp = (DWORD64 *)(ContextRecord.Rsp + 8);
          }
        }
        ContextRecord.Rsp = (DWORD64)Rsp;
LABEL_25:
        v16 = (unsigned int)(v16 + 1);
LABEL_26:
        if ( (unsigned int)v16 >= (unsigned __int8)v18[2] )
          goto LABEL_27;
      }
    }
LABEL_108:
    v14 = (_BYTE *)(Rip + 4);
    goto LABEL_8;
  }
  if ( !*(_BYTE *)(v10 + 2) )
    goto LABEL_17;
  v44 = HIBYTE(*(_WORD *)(v10 + 4));
  if ( (v44 & 0xF) != 6 )
    goto LABEL_17;
  v45 = *(unsigned __int8 *)(v10 + 4);
  v5 = (unsigned int)(Rip - v8);
  if ( (v44 & 0x10) == 0 || (v46 = p_BeginAddress[1] - v45, (unsigned int)v5 - v46 >= v45) )
  {
    v47 = *(unsigned __int8 *)(v10 + 2);
    for ( j = 1; j < v47; ++j )
    {
      v49 = HIBYTE(*(_WORD *)(v10 + 2LL * j + 4));
      if ( (v49 & 0xF) != 6 )
        break;
      v50 = *(unsigned __int8 *)(v10 + 2LL * j + 4) + ((unsigned __int8)v49 >> 4 << 8);
      if ( !v50 )
        break;
      v46 = p_BeginAddress[1] - v50;
      if ( (unsigned int)v5 - v46 < v45 )
        goto LABEL_136;
    }
    goto LABEL_17;
  }
LABEL_136:
  RtlpUnwindEpilogue(v8, (_DWORD)Rsp, v5 - v46, (_DWORD)p_BeginAddress, (__int64)&ContextRecord, 0LL, 0LL, 0LL);
LABEL_30:
  v23 = ExceptionRecorda;
  ExceptionRecorda->ExceptionAddress = (void *)ContextRecord.Rip;
  if ( NtCurrentPeb()->BeingDebugged )
  {
    v64 = 1;
    goto LABEL_144;
  }
  if ( MEMORY[0x7FFE03D8] )
  {
    v24 = (unsigned int)(MEMORY[0x7FFE03E8] - 448) - 16LL;
    v25 = v24 + 15;
    if ( v24 + 15 < v24 )
      v25 = 0xFFFFFFFFFFFFFF0LL;
    v26 = alloca(v25 & 0xFFFFFFFFFFFFFFF0uLL);
    v73 = (((unsigned __int64)&ContextRecord.P4Home + 7) & 0xFFFFFFFFFFFFFFC0uLL) - ((unsigned int)&v65 + 1264);
    v69 = v73;
    v74 = MEMORY[0x7FFE03E8] - 512;
    v71 = -1232;
    v70 = 24 - v73;
    v72 = 1232;
    memset((void *)(((unsigned __int64)&ContextRecord.P4Home + 7) & 0xFFFFFFFFFFFFFFC0uLL), 0, 0x40uLL);
    if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      *(_QWORD *)((((unsigned __int64)&ContextRecord.P4Home + 7) & 0xFFFFFFFFFFFFFFC0uLL) + 8) = MEMORY[0x7FFE03D8] | 0x8000000000000000uLL;
    ContextRecord.ContextFlags |= 0x100040u;
  }
  if ( !RtlDispatchException(v23, &ContextRecord) )
  {
    v64 = 0;
LABEL_144:
    v1 = ZwRaiseException(v23, &ContextRecord, v64);
    goto LABEL_145;
  }
  RtlRestoreContext(&ContextRecord, v23);
}
