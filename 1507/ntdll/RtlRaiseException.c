/*
 * XREFs of RtlRaiseException @ 0x180011EA0
 * Callers:
 *     TpCheckTerminateWorker @ 0x18000A000 (TpCheckTerminateWorker.c)
 *     vDbgPrintExWithPrefixInternal @ 0x180010048 (vDbgPrintExWithPrefixInternal.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180021D00 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpLoadDependentModule @ 0x180022010 (LdrpLoadDependentModule.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180023E00 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlpReAllocateHeapInternal @ 0x18002DA50 (RtlpReAllocateHeapInternal.c)
 *     TppCallbackEpilog @ 0x18003A890 (TppCallbackEpilog.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18003AC50 (TppCallbackCheckThreadAfterCallback.c)
 *     RtlGetActiveActivationContext @ 0x18003DCF0 (RtlGetActiveActivationContext.c)
 *     RtlpAllocateActivationContextStackFrame @ 0x1800536D8 (RtlpAllocateActivationContextStackFrame.c)
 *     PssNtValidateDescriptor @ 0x180059950 (PssNtValidateDescriptor.c)
 *     RtlDeactivateActivationContext @ 0x180063B20 (RtlDeactivateActivationContext.c)
 *     RtlpFreeActivationContextStackFrame @ 0x180063C28 (RtlpFreeActivationContextStackFrame.c)
 *     RtlpTpImpersonate @ 0x18007E060 (RtlpTpImpersonate.c)
 *     RaiseException @ 0x18008C4A0 (RaiseException.c)
 *     KiRaiseUserExceptionDispatcher @ 0x1800958A0 (KiRaiseUserExceptionDispatcher.c)
 *     RtlpPossibleDeadlock @ 0x1800C2238 (RtlpPossibleDeadlock.c)
 *     RtlpAllocateHeapRaiseException @ 0x1800DCF48 (RtlpAllocateHeapRaiseException.c)
 *     RtlReportCriticalFailure @ 0x1800EA560 (RtlReportCriticalFailure.c)
 *     TppRaiseHandleStatus @ 0x1800F5BA8 (TppRaiseHandleStatus.c)
 *     TppRaiseInvalidParameter @ 0x1800F5C58 (TppRaiseInvalidParameter.c)
 * Callees:
 *     RtlpSameFunction @ 0x180011420 (RtlpSameFunction.c)
 *     RtlDispatchException @ 0x180013890 (RtlDispatchException.c)
 *     RtlLookupFunctionEntry @ 0x180014E40 (RtlLookupFunctionEntry.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     RtlpUnwindEpilogue @ 0x18009306C (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x18009326C (RtlpUnwindOpSlots.c)
 *     RtlRaiseStatus @ 0x1800932C0 (RtlRaiseStatus.c)
 *     ZwRaiseException @ 0x180094DC0 (ZwRaiseException.c)
 *     RtlpCaptureContext @ 0x180095900 (RtlpCaptureContext.c)
 *     RtlRestoreContext @ 0x180095A40 (RtlRestoreContext.c)
 *     _alloca_probe @ 0x180096610 (_alloca_probe.c)
 *     memset @ 0x180098540 (memset.c)
 */

void __stdcall RtlRaiseException(PEXCEPTION_RECORD ExceptionRecord)
{
  unsigned int v1; // edi
  DWORD64 Rip; // rbx
  PRUNTIME_FUNCTION v3; // rax
  DWORD64 v4; // r8
  unsigned int *p_BeginAddress; // r13
  unsigned __int64 v6; // r12
  unsigned int v7; // esi
  unsigned __int64 v8; // rdi
  unsigned int v9; // r15d
  DWORD64 *Rsp; // rdx
  __int64 v11; // r14
  _BYTE *v12; // rcx
  char v13; // r8
  unsigned int v14; // r15d
  __int64 v15; // rdi
  char v16; // r12
  _BYTE *v17; // rsi
  unsigned int v18; // r14d
  __int64 v19; // r9
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  DWORD64 v24; // rax
  DWORD64 v25; // rax
  struct _EXCEPTION_RECORD *v26; // rdi
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  void *v29; // rsp
  unsigned __int8 v30; // cl
  int v31; // eax
  int v32; // r8d
  bool v33; // zf
  char v34; // al
  int v35; // eax
  char v36; // r8
  char v37; // al
  _BYTE *v38; // rsi
  int v39; // eax
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rsi
  unsigned int v42; // ecx
  __int16 v43; // cx
  unsigned int v44; // r11d
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
  unsigned int v56; // ecx
  DWORD64 **v57; // rcx
  _DWORD *v58; // rax
  __int64 i; // r14
  __int64 v60; // rcx
  char v61; // al
  int v62; // eax
  DWORD64 v63; // [rsp+40h] [rbp+0h] BYREF
  unsigned __int64 ImageBase; // [rsp+48h] [rbp+8h] BYREF
  struct _EXCEPTION_RECORD *ExceptionRecorda; // [rsp+50h] [rbp+10h]
  struct _CONTEXT ContextRecord; // [rsp+60h] [rbp+20h] BYREF
  int v67; // [rsp+530h] [rbp+4F0h]
  int v68; // [rsp+534h] [rbp+4F4h]
  int v69; // [rsp+538h] [rbp+4F8h]
  int v70; // [rsp+53Ch] [rbp+4FCh]
  int v71; // [rsp+540h] [rbp+500h]
  int v72; // [rsp+544h] [rbp+504h]
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
  v6 = ImageBase;
  v7 = Rip - v3->BeginAddress - ImageBase;
  v8 = ImageBase + v3->UnwindInfoAddress;
  v9 = *(_BYTE *)v8 & 7;
  if ( (*(_BYTE *)(v8 + 3) & 0xF) == 0 )
  {
    Rsp = (DWORD64 *)ContextRecord.Rsp;
LABEL_4:
    v63 = (DWORD64)Rsp;
    goto LABEL_5;
  }
  if ( v7 >= *(unsigned __int8 *)(v8 + 1) || (*(_BYTE *)v8 & 0x20) != 0 )
  {
    v30 = *(_BYTE *)(v8 + 3);
    v31 = v30;
    Rsp = (DWORD64 *)ContextRecord.Rsp;
  }
  else
  {
    for ( i = 0LL;
          (unsigned int)i < *(unsigned __int8 *)(v8 + 2);
          i = (unsigned int)RtlpUnwindOpSlots(v60) + (unsigned int)i )
    {
      v60 = *(unsigned __int16 *)(v8 + 2 * i + 4);
      if ( (BYTE1(v60) & 0xF) == 3 )
        break;
    }
    Rsp = (DWORD64 *)ContextRecord.Rsp;
    if ( v7 < *(unsigned __int8 *)(v8 + 2 * i + 4) )
      goto LABEL_4;
    v31 = *(unsigned __int8 *)(v8 + 3);
    v30 = *(_BYTE *)(v8 + 3);
  }
  v63 = *(&ContextRecord.Rax + (v30 & 0xF)) - (int)(v31 & 0xFFFFFFF0);
LABEL_5:
  if ( v9 < 2 )
  {
    v11 = 0LL;
    v12 = (_BYTE *)Rip;
    if ( *(_BYTE *)Rip == 72 )
    {
      v37 = *(_BYTE *)(Rip + 1);
      if ( v37 == -125 && *(_BYTE *)(Rip + 2) == 0xC4 )
        goto LABEL_112;
      if ( v37 == -127 && *(_BYTE *)(Rip + 2) == 0xC4 )
        goto LABEL_75;
    }
    if ( (*(_BYTE *)Rip & 0xFE) != 0x48 )
      goto LABEL_8;
    if ( *(_BYTE *)(Rip + 1) != 0x8D )
      goto LABEL_8;
    v4 = *(unsigned __int8 *)(Rip + 2);
    v35 = *(_BYTE *)(Rip + 2) & 7;
    v11 = v35 | (8 * (*(_BYTE *)Rip & 1u));
    if ( !(v35 | (8 * (*(_BYTE *)Rip & 1))) || (_DWORD)v11 != (*(_BYTE *)(v8 + 3) & 0xF) )
      goto LABEL_8;
    v36 = v4 & 0xF8;
    if ( v36 != 96 )
    {
      if ( v36 == -96 )
      {
LABEL_75:
        v12 = (_BYTE *)(Rip + 7);
        goto LABEL_8;
      }
      while ( 1 )
      {
LABEL_8:
        while ( (*v12 & 0xF8) == 0x58 )
          ++v12;
        if ( (*v12 & 0xF0) != 0x40 || (v12[1] & 0xF8) != 0x58 )
          break;
        v12 += 2;
      }
      if ( *v12 == 0xF2 )
        ++v12;
      v13 = *v12;
      if ( (unsigned __int8)(*v12 + 62) <= 1u || v13 == -13 && v12[1] == 0xC3 )
      {
LABEL_58:
        if ( (*(_BYTE *)Rip & 0xF8) != 0x48 )
          goto LABEL_62;
        v34 = *(_BYTE *)(Rip + 1);
        switch ( v34 )
        {
          case -125:
            goto LABEL_60;
          case -127:
            Rsp = (DWORD64 *)((char *)Rsp
                            + (*(unsigned __int8 *)(Rip + 3) | (unsigned __int64)((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8)));
            break;
          case -115:
            v61 = *(_BYTE *)(Rip + 2) & 0xF8;
            if ( v61 == 96 )
            {
              Rsp = (DWORD64 *)*(&ContextRecord.Rax + v11);
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
LABEL_36:
              v25 = *Rsp;
              ContextRecord.Rsp = (DWORD64)(Rsp + 1);
              ContextRecord.Rip = v25;
              goto LABEL_37;
            }
            if ( v61 != -96 )
              goto LABEL_62;
            Rsp = (DWORD64 *)(*(&ContextRecord.Rax + v11)
                            + (*(unsigned __int8 *)(Rip + 3) | (unsigned __int64)((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8)));
            break;
          default:
            goto LABEL_62;
        }
        Rip += 7LL;
        goto LABEL_61;
      }
      if ( ((v13 + 23) & 0xFD) != 0 )
      {
        if ( v13 == -1 && v12[1] == 37 )
          goto LABEL_58;
        if ( (v13 & 0xF8) != 0x48 || v12[1] != 0xFF )
          goto LABEL_17;
        v33 = (v12[2] & 0x38) == 32;
        goto LABEL_57;
      }
      v38 = &v12[-v6];
      if ( v13 == -21 )
        v39 = (char)v12[1] + 2;
      else
        v39 = *(_DWORD *)(v12 + 1) + 5;
      v40 = *p_BeginAddress;
      v41 = (unsigned __int64)&v38[v39];
      if ( v41 < v40 || v41 >= p_BeginAddress[1] )
      {
        v58 = (_DWORD *)RtlpSameFunction((__int64)p_BeginAddress, v6, v41 + v6);
        if ( !v58 || v41 == *v58 )
        {
          Rsp = (DWORD64 *)ContextRecord.Rsp;
          goto LABEL_58;
        }
        Rsp = (DWORD64 *)ContextRecord.Rsp;
        goto LABEL_17;
      }
      if ( v41 == v40 )
      {
        v33 = (*(_BYTE *)v8 & 0x20) == 0;
LABEL_57:
        if ( v33 )
          goto LABEL_58;
      }
LABEL_17:
      v14 = 0;
      while ( 1 )
      {
        v15 = 0LL;
        v16 = 0;
        v17 = (_BYTE *)(ImageBase + p_BeginAddress[2]);
        v18 = Rip - *p_BeginAddress - ImageBase;
        if ( v17[2] )
          break;
LABEL_34:
        if ( (*v17 & 0x20) == 0 )
        {
          if ( v16 )
            goto LABEL_37;
          goto LABEL_36;
        }
        v55 = (unsigned __int8)v17[2];
        if ( (v55 & 1) != 0 )
          ++v55;
        ++v14;
        p_BeginAddress = (unsigned int *)&v17[2 * v55 + 4];
        if ( v14 > 0x20 )
          RtlRaiseStatus(3221225727LL);
      }
      while ( 1 )
      {
        v19 = (unsigned __int8)v17[2 * v15 + 5] >> 4;
        if ( v18 < (unsigned __int8)v17[2 * v15 + 4] )
        {
          v62 = RtlpUnwindOpSlots(*(unsigned __int16 *)&v17[2 * v15 + 4]);
          Rsp = (DWORD64 *)ContextRecord.Rsp;
          v15 = (unsigned int)(v62 + v15);
          goto LABEL_33;
        }
        v20 = v17[2 * v15 + 5] & 0xF;
        if ( v20 > 5 )
        {
          v42 = v20 - 6;
          if ( !v42 )
          {
            LODWORD(v15) = v15 + 1;
            goto LABEL_32;
          }
          v50 = v42 - 1;
          if ( !v50 )
          {
            LODWORD(v15) = v15 + 2;
            goto LABEL_32;
          }
          v51 = v50 - 1;
          if ( v51 )
          {
            v56 = v51 - 1;
            if ( v56 )
            {
              if ( v56 != 1 )
LABEL_141:
                RtlRaiseStatus(3221225727LL);
              v16 = 1;
              v57 = (DWORD64 **)(Rsp + 3);
              if ( (_DWORD)v19 )
              {
                ++Rsp;
                ++v57;
              }
              ContextRecord.Rip = *Rsp;
              Rsp = *v57;
              goto LABEL_31;
            }
            v15 = (unsigned int)(v15 + 2);
            v4 = v63
               + *(unsigned __int16 *)&v17[2 * (unsigned int)(v15 - 1) + 4]
               + (*(unsigned __int16 *)&v17[2 * v15 + 4] << 16);
            v53 = 2LL * (unsigned int)v19;
            *(&ContextRecord.Xmm0.Low + 2 * (unsigned int)v19) = *(_QWORD *)v4;
            v54 = *(_QWORD *)(v4 + 8);
          }
          else
          {
            v15 = (unsigned int)(v15 + 1);
            v52 = (ULONGLONG *)(v63 + 16 * (unsigned int)*(unsigned __int16 *)&v17[2 * v15 + 4]);
            v53 = 2LL * (unsigned int)v19;
            *(&ContextRecord.Xmm0.Low + 2 * (unsigned int)v19) = *v52;
            v54 = v52[1];
          }
          *(&ContextRecord.Xmm0.High + v53) = v54;
        }
        else
        {
          if ( v20 == 5 )
          {
            v15 = (unsigned int)(v15 + 2);
            v24 = *(_QWORD *)((*(unsigned __int16 *)&v17[2 * v15 + 4] << 16)
                            + (unsigned int)*(unsigned __int16 *)&v17[2 * (unsigned int)(v15 - 1) + 4]
                            + v63);
          }
          else
          {
            if ( (v17[2 * v15 + 5] & 0xF) == 0 )
            {
              *(&ContextRecord.Rax + v19) = *Rsp;
              Rsp = (DWORD64 *)(ContextRecord.Rsp + 8);
LABEL_31:
              ContextRecord.Rsp = (DWORD64)Rsp;
              goto LABEL_32;
            }
            v21 = v20 - 1;
            if ( !v21 )
            {
              v15 = (unsigned int)(v15 + 1);
              v32 = *(unsigned __int16 *)&v17[2 * v15 + 4];
              if ( (_DWORD)v19 )
              {
                v15 = (unsigned int)(v15 + 1);
                v4 = (*(unsigned __int16 *)&v17[2 * v15 + 4] << 16) + v32;
              }
              else
              {
                v4 = (unsigned int)(8 * v32);
              }
              Rsp = (DWORD64 *)((char *)Rsp + (unsigned int)v4);
              goto LABEL_31;
            }
            v22 = v21 - 1;
            if ( !v22 )
            {
              Rsp = (DWORD64 *)((char *)Rsp + (unsigned int)(8 * v19 + 8));
              goto LABEL_31;
            }
            v23 = v22 - 1;
            if ( !v23 )
            {
              ContextRecord.Rsp = *(&ContextRecord.Rax + (v17[3] & 0xF));
              Rsp = (DWORD64 *)(ContextRecord.Rsp - (v17[3] & 0xF0));
              goto LABEL_31;
            }
            if ( v23 != 1 )
              goto LABEL_141;
            v15 = (unsigned int)(v15 + 1);
            v24 = *(_QWORD *)(8 * (unsigned int)*(unsigned __int16 *)&v17[2 * v15 + 4] + v63);
          }
          *(&ContextRecord.Rax + v19) = v24;
        }
        Rsp = (DWORD64 *)ContextRecord.Rsp;
LABEL_32:
        v15 = (unsigned int)(v15 + 1);
LABEL_33:
        if ( (unsigned int)v15 >= (unsigned __int8)v17[2] )
          goto LABEL_34;
      }
    }
LABEL_112:
    v12 = (_BYTE *)(Rip + 4);
    goto LABEL_8;
  }
  if ( !*(_BYTE *)(v8 + 2) )
    goto LABEL_17;
  v43 = HIBYTE(*(_WORD *)(v8 + 4));
  if ( (v43 & 0xF) != 6 )
    goto LABEL_17;
  v44 = *(unsigned __int8 *)(v8 + 4);
  v4 = (unsigned int)(Rip - v6);
  if ( (v43 & 0x10) == 0 || (v45 = p_BeginAddress[1] - v44, (unsigned int)v4 - v45 >= v44) )
  {
    v46 = *(unsigned __int8 *)(v8 + 2);
    for ( j = 1; j < v46; ++j )
    {
      v48 = HIBYTE(*(_WORD *)(v8 + 2LL * j + 4));
      if ( (v48 & 0xF) != 6 )
        break;
      v49 = *(unsigned __int8 *)(v8 + 2LL * j + 4) + ((unsigned __int8)v48 >> 4 << 8);
      if ( !v49 )
        break;
      v45 = p_BeginAddress[1] - v49;
      if ( (unsigned int)v4 - v45 < v44 )
        goto LABEL_135;
    }
    goto LABEL_17;
  }
LABEL_135:
  RtlpUnwindEpilogue(v6, (_DWORD)Rsp, v4 - v45, (_DWORD)p_BeginAddress, (__int64)&ContextRecord, 0LL, 0LL, 0LL);
LABEL_37:
  v26 = ExceptionRecorda;
  ExceptionRecorda->ExceptionAddress = (void *)ContextRecord.Rip;
  if ( NtCurrentPeb()->BeingDebugged )
  {
    LOBYTE(v4) = 1;
    goto LABEL_144;
  }
  if ( MEMORY[0x7FFE03D8] )
  {
    v27 = (unsigned int)(MEMORY[0x7FFE03E8] - 448) - 16LL;
    v28 = v27 + 15;
    if ( v27 + 15 < v27 )
      v28 = 0xFFFFFFFFFFFFFF0LL;
    v29 = alloca(v28 & 0xFFFFFFFFFFFFFFF0uLL);
    v71 = (((unsigned __int64)&ContextRecord.P4Home + 7) & 0xFFFFFFFFFFFFFFC0uLL) - ((unsigned int)&v63 + 1264);
    v67 = v71;
    v72 = MEMORY[0x7FFE03E8] - 512;
    v69 = -1232;
    v68 = 24 - v71;
    v70 = 1232;
    memset((void *)(((unsigned __int64)&ContextRecord.P4Home + 7) & 0xFFFFFFFFFFFFFFC0uLL), 0, 0x40uLL);
    if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      *(_QWORD *)((((unsigned __int64)&ContextRecord.P4Home + 7) & 0xFFFFFFFFFFFFFFC0uLL) + 8) = MEMORY[0x7FFE03D8] | 0x8000000000000000uLL;
    ContextRecord.ContextFlags |= 0x100040u;
  }
  if ( !(unsigned __int8)RtlDispatchException(v26, &ContextRecord) )
  {
    v4 = 0LL;
LABEL_144:
    v1 = ZwRaiseException(v26, &ContextRecord, v4);
    goto LABEL_145;
  }
  RtlRestoreContext(&ContextRecord, v26);
}
