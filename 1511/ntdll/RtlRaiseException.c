/*
 * XREFs of RtlRaiseException @ 0x180036970
 * Callers:
 *     RtlpTpImpersonate @ 0x180003D0C (RtlpTpImpersonate.c)
 *     LdrpLoadDependentModule @ 0x180013200 (LdrpLoadDependentModule.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180014F90 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800151C0 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlpReAllocateHeapInternal @ 0x180023D40 (RtlpReAllocateHeapInternal.c)
 *     TppCallbackEpilog @ 0x18002C870 (TppCallbackEpilog.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18002CC00 (TppCallbackCheckThreadAfterCallback.c)
 *     RtlpAllocateActivationContextStackFrame @ 0x180042128 (RtlpAllocateActivationContextStackFrame.c)
 *     vDbgPrintExWithPrefixInternal @ 0x180049998 (vDbgPrintExWithPrefixInternal.c)
 *     TpCheckTerminateWorker @ 0x18005C650 (TpCheckTerminateWorker.c)
 *     RtlDeactivateActivationContext @ 0x1800760D0 (RtlDeactivateActivationContext.c)
 *     RtlpFreeActivationContextStackFrame @ 0x1800761D8 (RtlpFreeActivationContextStackFrame.c)
 *     RtlGetActiveActivationContext @ 0x1800784E0 (RtlGetActiveActivationContext.c)
 *     PssNtValidateDescriptor @ 0x1800842D0 (PssNtValidateDescriptor.c)
 *     RaiseException @ 0x18009DC40 (RaiseException.c)
 *     KiRaiseUserExceptionDispatcher @ 0x1800A8C30 (KiRaiseUserExceptionDispatcher.c)
 *     RtlpPossibleDeadlock @ 0x1800CBF58 (RtlpPossibleDeadlock.c)
 *     RtlpAllocateHeapRaiseException @ 0x1800E3108 (RtlpAllocateHeapRaiseException.c)
 *     RtlReportCriticalFailure @ 0x1800EE670 (RtlReportCriticalFailure.c)
 *     TppRaiseHandleStatus @ 0x1800F55A8 (TppRaiseHandleStatus.c)
 *     TppRaiseInvalidParameter @ 0x1800F5658 (TppRaiseInvalidParameter.c)
 * Callees:
 *     RtlpUnwindOpSlots @ 0x180003788 (RtlpUnwindOpSlots.c)
 *     RtlDispatchException @ 0x180034C40 (RtlDispatchException.c)
 *     RtlLookupFunctionEntry @ 0x1800361F0 (RtlLookupFunctionEntry.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     RtlpSameFunction @ 0x1800A47C4 (RtlpSameFunction.c)
 *     RtlpUnwindEpilogue @ 0x1800A4880 (RtlpUnwindEpilogue.c)
 *     RtlRaiseStatus @ 0x1800A4A80 (RtlRaiseStatus.c)
 *     ZwRaiseException @ 0x1800A7A90 (ZwRaiseException.c)
 *     RtlpCaptureContext @ 0x1800A8C90 (RtlpCaptureContext.c)
 *     RtlRestoreContext @ 0x1800A8DD0 (RtlRestoreContext.c)
 *     _alloca_probe @ 0x1800A99F0 (_alloca_probe.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

void __stdcall RtlRaiseException(PEXCEPTION_RECORD ExceptionRecord)
{
  NTSTATUS v1; // edi
  DWORD64 Rip; // rbx
  PRUNTIME_FUNCTION v3; // rax
  unsigned int *p_BeginAddress; // r13
  unsigned __int64 v5; // r12
  unsigned int v6; // esi
  unsigned __int64 v7; // rdi
  unsigned int v8; // r15d
  DWORD64 *Rsp; // rdx
  __int64 v10; // r14
  _BYTE *v11; // rcx
  char v12; // r8
  unsigned int v13; // r15d
  __int64 v14; // rdi
  char v15; // r12
  _BYTE *v16; // rsi
  unsigned int v17; // r14d
  __int64 v18; // r9
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  DWORD64 v23; // rax
  DWORD64 v24; // rax
  PEXCEPTION_RECORD v25; // rdi
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  void *v28; // rsp
  unsigned __int8 v29; // cl
  int v30; // eax
  int v31; // r8d
  unsigned int v32; // r8d
  bool v33; // zf
  int v34; // eax
  char v35; // r8
  char v36; // al
  _BYTE *v37; // rsi
  int v38; // eax
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rsi
  unsigned int v41; // ecx
  __int16 v42; // cx
  unsigned int v43; // r11d
  int v44; // r8d
  unsigned int v45; // ecx
  unsigned int v46; // esi
  unsigned int j; // r10d
  __int16 v48; // r9
  int v49; // r9d
  unsigned int v50; // ecx
  unsigned int v51; // ecx
  ULONGLONG *v52; // rdx
  __int64 v53; // rcx
  LONGLONG v54; // rax
  int v55; // eax
  char v56; // al
  unsigned int v57; // ecx
  DWORD64 **v58; // rcx
  int v59; // eax
  __int64 i; // r14
  unsigned __int16 v61; // cx
  _DWORD *v62; // rax
  char v63; // al
  ULONGLONG *v64; // r8
  BOOLEAN v65; // r8
  DWORD64 v66; // [rsp+40h] [rbp+0h] BYREF
  unsigned __int64 ImageBase; // [rsp+48h] [rbp+8h] BYREF
  PEXCEPTION_RECORD ExceptionRecorda; // [rsp+50h] [rbp+10h]
  struct _CONTEXT ContextRecord; // [rsp+60h] [rbp+20h] BYREF
  int v70; // [rsp+530h] [rbp+4F0h]
  int v71; // [rsp+534h] [rbp+4F4h]
  int v72; // [rsp+538h] [rbp+4F8h]
  int v73; // [rsp+53Ch] [rbp+4FCh]
  int v74; // [rsp+540h] [rbp+500h]
  int v75; // [rsp+544h] [rbp+504h]
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
  v5 = ImageBase;
  v6 = Rip - v3->BeginAddress - ImageBase;
  v7 = ImageBase + v3->UnwindInfoAddress;
  v8 = *(_BYTE *)v7 & 7;
  if ( (*(_BYTE *)(v7 + 3) & 0xF) == 0 )
  {
    Rsp = (DWORD64 *)ContextRecord.Rsp;
LABEL_4:
    v66 = (DWORD64)Rsp;
    goto LABEL_5;
  }
  if ( v6 >= *(unsigned __int8 *)(v7 + 1) || (*(_BYTE *)v7 & 0x20) != 0 )
  {
    v29 = *(_BYTE *)(v7 + 3);
    v30 = v29;
    Rsp = (DWORD64 *)ContextRecord.Rsp;
  }
  else
  {
    for ( i = 0LL;
          (unsigned int)i < *(unsigned __int8 *)(v7 + 2);
          i = (unsigned int)RtlpUnwindOpSlots(v61) + (unsigned int)i )
    {
      v61 = *(_WORD *)(v7 + 2 * i + 4);
      if ( (HIBYTE(v61) & 0xF) == 3 )
        break;
    }
    Rsp = (DWORD64 *)ContextRecord.Rsp;
    if ( v6 < *(unsigned __int8 *)(v7 + 2 * i + 4) )
      goto LABEL_4;
    v30 = *(unsigned __int8 *)(v7 + 3);
    v29 = *(_BYTE *)(v7 + 3);
  }
  v66 = *(&ContextRecord.Rax + (v29 & 0xF)) - (int)(v30 & 0xFFFFFFF0);
LABEL_5:
  if ( v8 < 2 )
  {
    v10 = 0LL;
    v11 = (_BYTE *)Rip;
    if ( *(_BYTE *)Rip == 72 )
    {
      v36 = *(_BYTE *)(Rip + 1);
      if ( v36 == -125 && *(_BYTE *)(Rip + 2) == 0xC4 )
        goto LABEL_107;
      if ( v36 == -127 && *(_BYTE *)(Rip + 2) == 0xC4 )
        goto LABEL_68;
    }
    if ( (*(_BYTE *)Rip & 0xFE) != 0x48 )
      goto LABEL_8;
    if ( *(_BYTE *)(Rip + 1) != 0x8D )
      goto LABEL_8;
    v34 = *(_BYTE *)(Rip + 2) & 7;
    v10 = v34 | (8 * (*(_BYTE *)Rip & 1u));
    if ( !(v34 | (8 * (*(_BYTE *)Rip & 1))) || (_DWORD)v10 != (*(_BYTE *)(v7 + 3) & 0xF) )
      goto LABEL_8;
    v35 = *(_BYTE *)(Rip + 2) & 0xF8;
    if ( v35 != 96 )
    {
      if ( v35 == -96 )
      {
LABEL_68:
        v11 = (_BYTE *)(Rip + 7);
        goto LABEL_8;
      }
      while ( 1 )
      {
LABEL_8:
        while ( (*v11 & 0xF8) == 0x58 )
          ++v11;
        if ( (*v11 & 0xF0) != 0x40 || (v11[1] & 0xF8) != 0x58 )
          break;
        v11 += 2;
      }
      if ( *v11 == 0xF2 )
        ++v11;
      v12 = *v11;
      if ( (unsigned __int8)(*v11 + 62) <= 1u || v12 == -13 && v11[1] == 0xC3 )
      {
LABEL_98:
        if ( (*(_BYTE *)Rip & 0xF8) != 0x48 )
          goto LABEL_102;
        v56 = *(_BYTE *)(Rip + 1);
        switch ( v56 )
        {
          case -125:
            goto LABEL_100;
          case -127:
            Rsp = (DWORD64 *)((char *)Rsp
                            + (*(unsigned __int8 *)(Rip + 3) | (unsigned __int64)((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8)));
            break;
          case -115:
            v63 = *(_BYTE *)(Rip + 2) & 0xF8;
            if ( v63 == 96 )
            {
              Rsp = (DWORD64 *)*(&ContextRecord.Rax + v10);
              ContextRecord.Rsp = (DWORD64)Rsp;
LABEL_100:
              Rsp = (DWORD64 *)((char *)Rsp + *(char *)(Rip + 3));
              for ( Rip += 4LL; ; Rip += 2LL )
              {
LABEL_101:
                while ( 1 )
                {
                  ContextRecord.Rsp = (DWORD64)Rsp;
LABEL_102:
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
LABEL_36:
              v24 = *Rsp;
              ContextRecord.Rsp = (DWORD64)(Rsp + 1);
              ContextRecord.Rip = v24;
              goto LABEL_37;
            }
            if ( v63 != -96 )
              goto LABEL_102;
            Rsp = (DWORD64 *)(*(&ContextRecord.Rax + v10)
                            + (*(unsigned __int8 *)(Rip + 3) | (unsigned __int64)((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8)));
            break;
          default:
            goto LABEL_102;
        }
        Rip += 7LL;
        goto LABEL_101;
      }
      if ( ((v12 + 23) & 0xFD) != 0 )
      {
        if ( v12 == -1 && v11[1] == 37 )
          goto LABEL_98;
        if ( (v12 & 0xF8) != 0x48 || v11[1] != 0xFF )
          goto LABEL_17;
        v33 = (v11[2] & 0x38) == 32;
        goto LABEL_57;
      }
      v37 = &v11[-v5];
      if ( v12 == -21 )
        v38 = (char)v11[1] + 2;
      else
        v38 = *(_DWORD *)(v11 + 1) + 5;
      v39 = *p_BeginAddress;
      v40 = (unsigned __int64)&v37[v38];
      if ( v40 < v39 || v40 >= p_BeginAddress[1] )
      {
        v62 = (_DWORD *)RtlpSameFunction(p_BeginAddress, v5, v40 + v5);
        if ( !v62 || v40 == *v62 )
        {
          Rsp = (DWORD64 *)ContextRecord.Rsp;
          goto LABEL_98;
        }
        Rsp = (DWORD64 *)ContextRecord.Rsp;
      }
      else if ( v40 == v39 )
      {
        v33 = (*(_BYTE *)v7 & 0x20) == 0;
LABEL_57:
        if ( v33 )
          goto LABEL_98;
      }
LABEL_17:
      v13 = 0;
      while ( 1 )
      {
        v14 = 0LL;
        v15 = 0;
        v16 = (_BYTE *)(ImageBase + p_BeginAddress[2]);
        v17 = Rip - *p_BeginAddress - ImageBase;
        if ( v16[2] )
          break;
LABEL_34:
        if ( (*v16 & 0x20) == 0 )
        {
          if ( v15 )
            goto LABEL_37;
          goto LABEL_36;
        }
        v55 = (unsigned __int8)v16[2];
        if ( (v55 & 1) != 0 )
          ++v55;
        ++v13;
        p_BeginAddress = (unsigned int *)&v16[2 * v55 + 4];
        if ( v13 > 0x20 )
          RtlRaiseStatus(-1073741569);
      }
      while ( 1 )
      {
        v18 = (unsigned __int8)v16[2 * v14 + 5] >> 4;
        if ( v17 < (unsigned __int8)v16[2 * v14 + 4] )
        {
          v59 = RtlpUnwindOpSlots(*(_WORD *)&v16[2 * v14 + 4]);
          Rsp = (DWORD64 *)ContextRecord.Rsp;
          v14 = (unsigned int)(v59 + v14);
          goto LABEL_33;
        }
        v19 = v16[2 * v14 + 5] & 0xF;
        if ( v19 > 5 )
        {
          v41 = v19 - 6;
          if ( !v41 )
          {
            LODWORD(v14) = v14 + 1;
            goto LABEL_32;
          }
          v50 = v41 - 1;
          if ( !v50 )
          {
            LODWORD(v14) = v14 + 2;
            goto LABEL_32;
          }
          v51 = v50 - 1;
          if ( v51 )
          {
            v57 = v51 - 1;
            if ( v57 )
            {
              if ( v57 != 1 )
LABEL_141:
                RtlRaiseStatus(-1073741569);
              v15 = 1;
              v58 = (DWORD64 **)(Rsp + 3);
              if ( (_DWORD)v18 )
              {
                ++Rsp;
                ++v58;
              }
              ContextRecord.Rip = *Rsp;
              Rsp = *v58;
              goto LABEL_31;
            }
            v14 = (unsigned int)(v14 + 2);
            v64 = (ULONGLONG *)(v66
                              + *(unsigned __int16 *)&v16[2 * (unsigned int)(v14 - 1) + 4]
                              + (*(unsigned __int16 *)&v16[2 * v14 + 4] << 16));
            v53 = 2LL * (unsigned int)v18;
            *(&ContextRecord.Xmm0.Low + 2 * (unsigned int)v18) = *v64;
            v54 = v64[1];
          }
          else
          {
            v14 = (unsigned int)(v14 + 1);
            v52 = (ULONGLONG *)(v66 + 16 * (unsigned int)*(unsigned __int16 *)&v16[2 * v14 + 4]);
            v53 = 2LL * (unsigned int)v18;
            *(&ContextRecord.Xmm0.Low + 2 * (unsigned int)v18) = *v52;
            v54 = v52[1];
          }
          *(&ContextRecord.Xmm0.High + v53) = v54;
        }
        else
        {
          if ( v19 == 5 )
          {
            v14 = (unsigned int)(v14 + 2);
            v23 = *(_QWORD *)((*(unsigned __int16 *)&v16[2 * v14 + 4] << 16)
                            + (unsigned int)*(unsigned __int16 *)&v16[2 * (unsigned int)(v14 - 1) + 4]
                            + v66);
          }
          else
          {
            if ( (v16[2 * v14 + 5] & 0xF) == 0 )
            {
              *(&ContextRecord.Rax + v18) = *Rsp;
              Rsp = (DWORD64 *)(ContextRecord.Rsp + 8);
LABEL_31:
              ContextRecord.Rsp = (DWORD64)Rsp;
              goto LABEL_32;
            }
            v20 = v19 - 1;
            if ( !v20 )
            {
              v14 = (unsigned int)(v14 + 1);
              v31 = *(unsigned __int16 *)&v16[2 * v14 + 4];
              if ( (_DWORD)v18 )
              {
                v14 = (unsigned int)(v14 + 1);
                v32 = (*(unsigned __int16 *)&v16[2 * v14 + 4] << 16) + v31;
              }
              else
              {
                v32 = 8 * v31;
              }
              Rsp = (DWORD64 *)((char *)Rsp + v32);
              goto LABEL_31;
            }
            v21 = v20 - 1;
            if ( !v21 )
            {
              Rsp = (DWORD64 *)((char *)Rsp + (unsigned int)(8 * v18 + 8));
              goto LABEL_31;
            }
            v22 = v21 - 1;
            if ( !v22 )
            {
              ContextRecord.Rsp = *(&ContextRecord.Rax + (v16[3] & 0xF));
              Rsp = (DWORD64 *)(ContextRecord.Rsp - (v16[3] & 0xF0));
              goto LABEL_31;
            }
            if ( v22 != 1 )
              goto LABEL_141;
            v14 = (unsigned int)(v14 + 1);
            v23 = *(_QWORD *)(8 * (unsigned int)*(unsigned __int16 *)&v16[2 * v14 + 4] + v66);
          }
          *(&ContextRecord.Rax + v18) = v23;
        }
        Rsp = (DWORD64 *)ContextRecord.Rsp;
LABEL_32:
        v14 = (unsigned int)(v14 + 1);
LABEL_33:
        if ( (unsigned int)v14 >= (unsigned __int8)v16[2] )
          goto LABEL_34;
      }
    }
LABEL_107:
    v11 = (_BYTE *)(Rip + 4);
    goto LABEL_8;
  }
  if ( !*(_BYTE *)(v7 + 2) )
    goto LABEL_17;
  v42 = HIBYTE(*(_WORD *)(v7 + 4));
  if ( (v42 & 0xF) != 6 )
    goto LABEL_17;
  v43 = *(unsigned __int8 *)(v7 + 4);
  v44 = Rip - v5;
  if ( (v42 & 0x10) == 0 || (v45 = p_BeginAddress[1] - v43, v44 - v45 >= v43) )
  {
    v46 = *(unsigned __int8 *)(v7 + 2);
    for ( j = 1; j < v46; ++j )
    {
      v48 = HIBYTE(*(_WORD *)(v7 + 2LL * j + 4));
      if ( (v48 & 0xF) != 6 )
        break;
      v49 = *(unsigned __int8 *)(v7 + 2LL * j + 4) + ((unsigned __int8)v48 >> 4 << 8);
      if ( !v49 )
        break;
      v45 = p_BeginAddress[1] - v49;
      if ( v44 - v45 < v43 )
        goto LABEL_136;
    }
    goto LABEL_17;
  }
LABEL_136:
  RtlpUnwindEpilogue(v5, (_DWORD)Rsp, v44 - v45, (_DWORD)p_BeginAddress, (__int64)&ContextRecord, 0LL, 0LL, 0LL);
LABEL_37:
  v25 = ExceptionRecorda;
  ExceptionRecorda->ExceptionAddress = (void *)ContextRecord.Rip;
  if ( NtCurrentPeb()->BeingDebugged )
  {
    v65 = 1;
    goto LABEL_144;
  }
  if ( MEMORY[0x7FFE03D8] )
  {
    v26 = (unsigned int)(MEMORY[0x7FFE03E8] - 448) - 16LL;
    v27 = v26 + 15;
    if ( v26 + 15 < v26 )
      v27 = 0xFFFFFFFFFFFFFF0LL;
    v28 = alloca(v27 & 0xFFFFFFFFFFFFFFF0uLL);
    v74 = (((unsigned __int64)&ContextRecord.P4Home + 7) & 0xFFFFFFFFFFFFFFC0uLL) - ((unsigned int)&v66 + 1264);
    v70 = v74;
    v75 = MEMORY[0x7FFE03E8] - 512;
    v72 = -1232;
    v71 = 24 - v74;
    v73 = 1232;
    memset((void *)(((unsigned __int64)&ContextRecord.P4Home + 7) & 0xFFFFFFFFFFFFFFC0uLL), 0, 0x40uLL);
    if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      *(_QWORD *)((((unsigned __int64)&ContextRecord.P4Home + 7) & 0xFFFFFFFFFFFFFFC0uLL) + 8) = MEMORY[0x7FFE03D8] | 0x8000000000000000uLL;
    ContextRecord.ContextFlags |= 0x100040u;
  }
  if ( !RtlDispatchException(v25, &ContextRecord) )
  {
    v65 = 0;
LABEL_144:
    v1 = ZwRaiseException(v25, &ContextRecord, v65);
    goto LABEL_145;
  }
  RtlRestoreContext(&ContextRecord, v25);
}
