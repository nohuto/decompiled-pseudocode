/*
 * XREFs of RtlDispatchException @ 0x14001BBB0
 * Callers:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     KiDispatchException @ 0x14001FAE0 (KiDispatchException.c)
 *     RtlRaiseException @ 0x140246A34 (RtlRaiseException.c)
 * Callees:
 *     RtlpUnwindEpilogue @ 0x140005800 (RtlpUnwindEpilogue.c)
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     RtlpIsFrameInBounds @ 0x14001C4E4 (RtlpIsFrameInBounds.c)
 *     RtlpCopyContext @ 0x14001CF10 (RtlpCopyContext.c)
 *     RtlLookupFunctionEntry @ 0x14001D0C0 (RtlLookupFunctionEntry.c)
 *     RtlpUnwindOpSlots @ 0x14001D3DC (RtlpUnwindOpSlots.c)
 *     RtlpGetStackLimits @ 0x14001D5A0 (RtlpGetStackLimits.c)
 *     RtlVirtualUnwind @ 0x14012E39C (RtlVirtualUnwind.c)
 *     RtlpSameFunction @ 0x1401609E0 (RtlpSameFunction.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlpExecuteHandlerForException @ 0x14018BD10 (RtlpExecuteHandlerForException.c)
 *     RtlpLogExceptionDispatch @ 0x1402458A0 (RtlpLogExceptionDispatch.c)
 *     RtlpLogExceptionHandler @ 0x140245A38 (RtlpLogExceptionHandler.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

BOOLEAN __stdcall RtlDispatchException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT Context)
{
  BOOLEAN v2; // r12
  PEXCEPTION_RECORD v4; // r14
  int v5; // edi
  DWORD64 Rip; // r15
  struct _UNWIND_HISTORY_TABLE *p_HistoryTable; // rsi
  PRUNTIME_FUNCTION v8; // rax
  PRUNTIME_FUNCTION v9; // r13
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rbx
  unsigned int v12; // edi
  unsigned int v13; // esi
  unsigned __int8 v14; // dl
  unsigned __int64 Rsp; // r9
  char v16; // cl
  int v17; // eax
  __int16 v18; // ax
  unsigned int v19; // r9d
  int v20; // r8d
  int v21; // ecx
  unsigned int j; // r10d
  __int16 v23; // ax
  int v24; // edx
  struct _RUNTIME_FUNCTION *v25; // rdx
  unsigned int v26; // r8d
  unsigned int v27; // esi
  __int64 v28; // rbx
  char v29; // r14
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rdx
  __int64 v32; // r8
  unsigned __int64 v33; // rax
  unsigned int v34; // r8d
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // r9
  unsigned __int64 *v37; // rdx
  int v38; // edx
  unsigned int v39; // edx
  unsigned int v40; // eax
  int v41; // ecx
  __int64 v42; // rbx
  int v43; // eax
  unsigned __int64 v44; // rbx
  unsigned __int64 *v45; // rdx
  __int64 v46; // r8
  unsigned __int64 v47; // rdx
  _M128A *v48; // rcx
  int v49; // eax
  char v50; // dl
  __int64 v51; // rsi
  _BYTE *v52; // rcx
  char v53; // al
  char v54; // dl
  DWORD64 v55; // r10
  int v56; // eax
  __int64 i; // r14
  __int64 v58; // rcx
  unsigned int v59; // ecx
  char v60; // r8
  _BYTE *v61; // rdi
  int v62; // eax
  unsigned __int64 BeginAddress; // rcx
  unsigned __int64 v64; // rdi
  _DWORD *v65; // rax
  char *v66; // rdx
  char v67; // al
  char v68; // al
  char v69; // cl
  char v70; // r10
  unsigned __int64 v71; // rax
  unsigned __int64 *v72; // r9
  _M128A *v73; // rcx
  char v75; // [rsp+40h] [rbp-C0h]
  int v76; // [rsp+44h] [rbp-BCh]
  unsigned __int64 EstablisherFrame; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 ImageBase; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v79; // [rsp+58h] [rbp-A8h]
  PEXCEPTION_RECORD v80; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v81; // [rsp+68h] [rbp-98h]
  PVOID HandlerData; // [rsp+70h] [rbp-90h] BYREF
  struct _UNWIND_HISTORY_TABLE *v83; // [rsp+78h] [rbp-88h]
  char v84[8]; // [rsp+80h] [rbp-80h] BYREF
  char v85[8]; // [rsp+88h] [rbp-78h] BYREF
  PRUNTIME_FUNCTION v86; // [rsp+90h] [rbp-70h]
  PCONTEXT v87; // [rsp+98h] [rbp-68h]
  DWORD64 ControlPc; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v89; // [rsp+A8h] [rbp-58h]
  PRUNTIME_FUNCTION FunctionEntry; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v91; // [rsp+B8h] [rbp-48h]
  struct _CONTEXT *p_ContextRecord; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v93; // [rsp+D0h] [rbp-30h]
  PVOID v94; // [rsp+D8h] [rbp-28h]
  struct _UNWIND_HISTORY_TABLE *v95; // [rsp+E0h] [rbp-20h]
  int v96; // [rsp+E8h] [rbp-18h]
  struct _CONTEXT ContextRecord; // [rsp+F0h] [rbp-10h] BYREF
  struct _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+5C0h] [rbp+4C0h] BYREF

  v2 = 0;
  v87 = Context;
  v4 = ExceptionRecord;
  v80 = ExceptionRecord;
  v75 = 0;
  if ( (NtGlobalFlag & 0x800000) != 0 )
  {
    v75 = 1;
    RtlpLogExceptionDispatch();
  }
  v5 = v4->ExceptionFlags & 1;
  v76 = v5;
  if ( !(unsigned __int8)RtlpGetStackLimits(v84, v85) )
  {
    v5 |= 8u;
    goto LABEL_220;
  }
  RtlpCopyContext(&ContextRecord, Context);
  Rip = Context->Rip;
  p_HistoryTable = &HistoryTable;
  v83 = &HistoryTable;
  v81 = 0LL;
  HistoryTable.Count = 0;
  HistoryTable.HighAddress = 0LL;
  *(_DWORD *)&HistoryTable.LocalHint = 0x1000000;
  HistoryTable.LowAddress = -1LL;
  while ( 1 )
  {
    v8 = RtlLookupFunctionEntry(Rip, &ImageBase, p_HistoryTable);
    v9 = v8;
    if ( v8 )
      break;
    if ( Rip != *(_QWORD *)ContextRecord.Rsp )
    {
      v36 = ContextRecord.Rsp + 8;
      ContextRecord.Rip = *(_QWORD *)ContextRecord.Rsp;
      ContextRecord.Rsp += 8LL;
LABEL_46:
      Rip = ContextRecord.Rip;
      if ( (unsigned __int8)RtlpIsFrameInBounds(v84, v36, v85, v36) == 1 )
        continue;
    }
    goto LABEL_219;
  }
  v10 = 0LL;
  v11 = ImageBase + v8->UnwindData;
  if ( Rip <= (unsigned __int64)MmHighestUserAddress && (v11 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v12 = Rip - v8->BeginAddress - ImageBase;
  v13 = *(_BYTE *)v11 & 7;
  v14 = *(_BYTE *)(v11 + 3);
  if ( (v14 & 0xF) != 0 )
  {
    if ( v12 >= *(unsigned __int8 *)(v11 + 1) || (*(_BYTE *)v11 & 0x20) != 0 )
    {
      Rsp = ContextRecord.Rsp;
      v16 = *(_BYTE *)(v11 + 3);
      v17 = v14;
LABEL_10:
      EstablisherFrame = *(&ContextRecord.Rax + (v16 & 0xF)) - (int)(v17 & 0xFFFFFFF0);
      goto LABEL_13;
    }
    for ( i = 0LL;
          (unsigned int)i < *(unsigned __int8 *)(v11 + 2);
          i = (unsigned int)RtlpUnwindOpSlots(v58) + (unsigned int)i )
    {
      v58 = *(unsigned __int16 *)(v11 + 2 * i + 4);
      if ( (BYTE1(v58) & 0xF) == 3 )
        break;
    }
    v59 = *(unsigned __int8 *)(v11 + 2 * i + 4);
    Rsp = ContextRecord.Rsp;
    v4 = v80;
    if ( v12 >= v59 )
    {
      v17 = *(unsigned __int8 *)(v11 + 3);
      v16 = *(_BYTE *)(v11 + 3);
      goto LABEL_10;
    }
  }
  else
  {
    Rsp = ContextRecord.Rsp;
  }
  EstablisherFrame = Rsp;
LABEL_13:
  if ( v13 >= 2 )
  {
    if ( !*(_BYTE *)(v11 + 2) )
      goto LABEL_22;
    v18 = *(_WORD *)(v11 + 4);
    if ( (HIBYTE(v18) & 0xF) == 6 )
    {
      v19 = (unsigned __int8)v18;
      v20 = Rip - ImageBase;
      if ( (v18 & 0x1000) != 0 )
      {
        v21 = v9->EndAddress - (unsigned __int8)v18;
        if ( v20 - v21 < (unsigned int)(unsigned __int8)v18 )
        {
LABEL_115:
          RtlpUnwindEpilogue(ImageBase, Rip, v20 - v21, v9, (__int64)&ContextRecord, 0LL, 0LL, 0LL);
          Rsp = ContextRecord.Rsp;
          goto LABEL_44;
        }
      }
      for ( j = 1; j < *(unsigned __int8 *)(v11 + 2); ++j )
      {
        v23 = *(_WORD *)(v11 + 2LL * j + 4);
        if ( (HIBYTE(v23) & 0xF) != 6 )
          break;
        v24 = (unsigned __int8)v23 + (HIBYTE(v23) >> 4 << 8);
        if ( !v24 )
          break;
        v21 = v9->EndAddress - v24;
        if ( v20 - v21 < v19 )
          goto LABEL_115;
      }
    }
    goto LABEL_21;
  }
  v50 = *(_BYTE *)Rip;
  v51 = 0LL;
  v52 = (_BYTE *)Rip;
  if ( *(_BYTE *)Rip == 72 )
  {
    v53 = *(_BYTE *)(Rip + 1);
    if ( v53 == -125 && *(_BYTE *)(Rip + 2) == 0xC4 )
    {
      v52 = (_BYTE *)(Rip + 4);
      goto LABEL_87;
    }
    if ( v53 == -127 && *(_BYTE *)(Rip + 2) == 0xC4 )
      goto LABEL_152;
  }
  if ( (v50 & 0xFE) != 0x48 )
    goto LABEL_87;
  if ( *(_BYTE *)(Rip + 1) != 0x8D )
    goto LABEL_87;
  v56 = *(_BYTE *)(Rip + 2) & 7;
  v51 = v56 | (8 * (v50 & 1u));
  if ( !(v56 | (8 * (v50 & 1))) || (_DWORD)v51 != (*(_BYTE *)(v11 + 3) & 0xF) )
    goto LABEL_87;
  v60 = *(_BYTE *)(Rip + 2) & 0xF8;
  if ( v60 == 96 )
  {
    v52 = (_BYTE *)(Rip + 4);
    goto LABEL_87;
  }
  if ( v60 == -96 )
LABEL_152:
    v52 = (_BYTE *)(Rip + 7);
  while ( 1 )
  {
LABEL_87:
    while ( (*v52 & 0xF8) == 0x58 )
      ++v52;
    if ( (*v52 & 0xF0) != 0x40 || (v52[1] & 0xF8) != 0x58 )
      break;
    v52 += 2;
  }
  if ( *v52 == 0xF2 )
    ++v52;
  v54 = *v52;
  if ( (unsigned __int8)(*v52 + 62) <= 1u || v54 == -13 && v52[1] == 0xC3 )
    goto LABEL_170;
  if ( ((v54 + 23) & 0xFD) != 0 )
  {
    if ( v54 == -1 && v52[1] == 37 || (v54 & 0xF8) == 0x48 && v52[1] == 0xFF && (v52[2] & 0x38) == 0x20 )
      goto LABEL_170;
LABEL_22:
    v25 = v9;
    v26 = 0;
    v86 = v9;
    v79 = 0;
    while ( 1 )
    {
      v27 = Rip - ImageBase - v25->BeginAddress;
      v28 = 0LL;
      v29 = 0;
      v30 = ImageBase + v25->UnwindData;
      if ( Rip <= (unsigned __int64)MmHighestUserAddress )
      {
        if ( (v30 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        Rsp = ContextRecord.Rsp;
      }
      if ( *(_BYTE *)(v30 + 2) )
      {
        do
        {
          v31 = v30 + 2 * v28;
          v32 = *(unsigned __int8 *)(v31 + 5) >> 4;
          if ( v27 < *(unsigned __int8 *)(v31 + 4) )
          {
            v49 = RtlpUnwindOpSlots(*(unsigned __int16 *)(v31 + 4));
            Rsp = ContextRecord.Rsp;
            v28 = (unsigned int)(v49 + v28);
          }
          else
          {
            if ( (*(_BYTE *)(v30 + 2 * v28 + 5) & 0xF) != 0 )
            {
              if ( (*(_BYTE *)(v30 + 2 * v28 + 5) & 0xF) != 4 )
              {
                switch ( *(_BYTE *)(v30 + 2 * v28 + 5) & 0xF )
                {
                  case 1:
                    v28 = (unsigned int)(v28 + 1);
                    v38 = *(unsigned __int16 *)(v30 + 2 * v28 + 4);
                    if ( (_DWORD)v32 )
                    {
                      v28 = (unsigned int)(v28 + 1);
                      v39 = (*(unsigned __int16 *)(v30 + 2 * v28 + 4) << 16) + v38;
                    }
                    else
                    {
                      v39 = 8 * v38;
                    }
                    Rsp += v39;
                    goto LABEL_32;
                  case 2:
                    Rsp += (unsigned int)(8 * v32 + 8);
                    goto LABEL_32;
                  case 3:
                    ContextRecord.Rsp = *(&ContextRecord.Rax + (*(_BYTE *)(v30 + 3) & 0xF));
                    Rsp = ContextRecord.Rsp - (*(_BYTE *)(v30 + 3) & 0xF0);
                    goto LABEL_32;
                  case 5:
                    v28 = (unsigned int)(v28 + 2);
                    if ( Rip <= (unsigned __int64)MmHighestUserAddress
                      && (((_BYTE)EstablisherFrame + (unsigned __int8)*(_WORD *)(v30 + 2LL * (unsigned int)(v28 - 1) + 4)) & 3) != 0 )
                    {
                      ExRaiseDatatypeMisalignment();
                    }
                    *(&ContextRecord.Rax + v32) = *(_QWORD *)(EstablisherFrame
                                                            + *(unsigned __int16 *)(v30
                                                                                  + 2LL * (unsigned int)(v28 - 1)
                                                                                  + 4)
                                                            + (*(unsigned __int16 *)(v30 + 2 * v28 + 4) << 16));
                    Rsp = ContextRecord.Rsp;
                    goto LABEL_33;
                  case 6:
                    LODWORD(v28) = v28 + 1;
                    goto LABEL_33;
                  case 7:
                    LODWORD(v28) = v28 + 2;
                    goto LABEL_33;
                  case 8:
                    v28 = (unsigned int)(v28 + 1);
                    v47 = EstablisherFrame + 16 * (unsigned int)*(unsigned __int16 *)(v30 + 2 * v28 + 4);
                    if ( Rip <= (unsigned __int64)MmHighestUserAddress && (v47 & 3) != 0 )
                      ExRaiseDatatypeMisalignment();
                    v48 = &ContextRecord.VectorRegister[(unsigned int)v32 - 22];
                    v48->Low = *(_QWORD *)v47;
                    v48->High = *(_QWORD *)(v47 + 8);
                    Rsp = ContextRecord.Rsp;
                    goto LABEL_33;
                  case 9:
                    v28 = (unsigned int)(v28 + 2);
                    v72 = (unsigned __int64 *)(EstablisherFrame
                                             + *(unsigned __int16 *)(v30 + 2LL * (unsigned int)(v28 - 1) + 4)
                                             + (*(unsigned __int16 *)(v30 + 2 * v28 + 4) << 16));
                    if ( Rip <= (unsigned __int64)MmHighestUserAddress
                      && (((_BYTE)EstablisherFrame + (unsigned __int8)*(_WORD *)(v30 + 2LL * (unsigned int)(v28 - 1) + 4)) & 3) != 0 )
                    {
                      ExRaiseDatatypeMisalignment();
                    }
                    v73 = &ContextRecord.VectorRegister[(unsigned int)v32 - 22];
                    v73->Low = *v72;
                    v73->High = v72[1];
                    Rsp = ContextRecord.Rsp;
                    goto LABEL_33;
                  case 0xA:
                    v45 = (unsigned __int64 *)(Rsp + 24);
                    v29 = 1;
                    if ( (_DWORD)v32 )
                    {
                      Rsp += 8LL;
                      ++v45;
                    }
                    if ( Rip <= (unsigned __int64)MmHighestUserAddress )
                    {
                      if ( (Rsp & 3) != 0 )
                        ExRaiseDatatypeMisalignment();
                      if ( Rip <= (unsigned __int64)MmHighestUserAddress && ((unsigned __int8)v45 & 3) != 0 )
                        ExRaiseDatatypeMisalignment();
                    }
                    ContextRecord.Rip = *(_QWORD *)Rsp;
                    Rsp = *v45;
                    goto LABEL_32;
                  default:
                    RtlRaiseStatus(-1073741569);
                }
              }
              v28 = (unsigned int)(v28 + 1);
              v37 = (unsigned __int64 *)(EstablisherFrame + 8 * (unsigned int)*(unsigned __int16 *)(v30 + 2 * v28 + 4));
              if ( Rip <= (unsigned __int64)MmHighestUserAddress && ((unsigned __int8)v37 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              *(&ContextRecord.Rax + v32) = *v37;
              Rsp = ContextRecord.Rsp;
            }
            else
            {
              if ( Rip <= (unsigned __int64)MmHighestUserAddress && (Rsp & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              *(&ContextRecord.Rax + v32) = *(_QWORD *)Rsp;
              Rsp = ContextRecord.Rsp + 8;
LABEL_32:
              ContextRecord.Rsp = Rsp;
            }
LABEL_33:
            v28 = (unsigned int)(v28 + 1);
          }
        }
        while ( (unsigned int)v28 < *(unsigned __int8 *)(v30 + 2) );
        v25 = v86;
        v26 = v79;
      }
      if ( (*(_BYTE *)v30 & 0x20) == 0 )
        break;
      v40 = *(unsigned __int8 *)(v30 + 2);
      if ( (v40 & 1) != 0 )
        ++v40;
      v25 = (struct _RUNTIME_FUNCTION *)(v30 + 2 * (v40 + 2LL));
      v86 = v25;
      if ( Rip <= (unsigned __int64)MmHighestUserAddress )
      {
        if ( ((unsigned __int8)v25 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        Rsp = ContextRecord.Rsp;
      }
      v79 = ++v26;
      if ( v26 > 0x20 )
        RtlRaiseStatus(-1073741569);
    }
    if ( !v29 )
    {
      if ( Rip <= (unsigned __int64)MmHighestUserAddress )
      {
        if ( (Rsp & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        Rsp = ContextRecord.Rsp;
      }
      v33 = *(_QWORD *)Rsp;
      Rsp += 8LL;
      ContextRecord.Rsp = Rsp;
      ContextRecord.Rip = v33;
    }
    v34 = Rip - ImageBase - v25->BeginAddress;
    v35 = ImageBase + v25->UnwindData;
    if ( Rip <= (unsigned __int64)MmHighestUserAddress )
    {
      if ( (v35 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      Rsp = ContextRecord.Rsp;
    }
    if ( v34 >= *(unsigned __int8 *)(v35 + 1) && (*(_BYTE *)v35 & 8) != 0 )
    {
      v46 = *(unsigned __int8 *)(v35 + 2);
      if ( (v46 & 1) != 0 )
        v46 = (unsigned int)(v46 + 1);
      v10 = ImageBase + *(unsigned int *)(v35 + 2 * v46 + 4);
      HandlerData = (PVOID)(v35 + 2 * ((unsigned int)(v46 + 2) + 2LL));
    }
    v4 = v80;
    goto LABEL_44;
  }
  v61 = &v52[-ImageBase];
  if ( v54 == -21 )
    v62 = (char)v52[1] + 2;
  else
    v62 = *(_DWORD *)(v52 + 1) + 5;
  BeginAddress = v9->BeginAddress;
  v64 = (unsigned __int64)&v61[v62];
  if ( v64 < BeginAddress || v64 >= v9->EndAddress )
  {
    v65 = (_DWORD *)RtlpSameFunction(v9, ImageBase, v64 + ImageBase);
    if ( v65 && v64 != *v65 )
    {
LABEL_21:
      Rsp = ContextRecord.Rsp;
      goto LABEL_22;
    }
    Rsp = ContextRecord.Rsp;
    goto LABEL_170;
  }
  if ( v64 != BeginAddress || (*(_BYTE *)v11 & 0x20) != 0 )
    goto LABEL_22;
LABEL_170:
  v66 = (char *)Rip;
  if ( (*(_BYTE *)Rip & 0xF8) != 0x48 )
    goto LABEL_183;
  v67 = *(_BYTE *)(Rip + 1);
  switch ( v67 )
  {
    case -125:
      v66 = (char *)(Rip + 4);
      Rsp += *(char *)(Rip + 3);
      goto LABEL_182;
    case -127:
      Rsp += *(unsigned __int8 *)(Rip + 3) | ((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8);
LABEL_180:
      v66 = (char *)(Rip + 7);
      goto LABEL_182;
    case -115:
      v68 = *(_BYTE *)(Rip + 2) & 0xF8;
      if ( v68 == 96 )
      {
        v66 = (char *)(Rip + 4);
        ContextRecord.Rsp = *(&ContextRecord.Rax + v51);
        Rsp = *(char *)(Rip + 3) + ContextRecord.Rsp;
        goto LABEL_182;
      }
      if ( v68 == -96 )
      {
        Rsp = *(&ContextRecord.Rax + v51)
            + (*(unsigned __int8 *)(Rip + 3) | ((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8));
        goto LABEL_180;
      }
      break;
  }
  while ( 1 )
  {
LABEL_183:
    v69 = *v66;
    if ( (*v66 & 0xF8) == 0x58 )
    {
      if ( Rip <= (unsigned __int64)MmHighestUserAddress && (Rsp & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(&ContextRecord.Rax + (v69 & 7)) = *(_QWORD *)Rsp;
      Rsp = ContextRecord.Rsp + 8;
      ++v66;
      goto LABEL_182;
    }
    if ( (v69 & 0xF0) != 0x40 )
      break;
    v70 = v66[1];
    if ( (v70 & 0xF8) != 0x58 )
      break;
    if ( Rip <= (unsigned __int64)MmHighestUserAddress && (Rsp & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    *(&ContextRecord.Rax + (v70 & 7 | (8 * (v69 & 1u)))) = *(_QWORD *)Rsp;
    Rsp = ContextRecord.Rsp + 8;
    v66 += 2;
LABEL_182:
    ContextRecord.Rsp = Rsp;
  }
  if ( Rip <= (unsigned __int64)MmHighestUserAddress )
  {
    if ( (Rsp & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    Rsp = ContextRecord.Rsp;
  }
  v71 = *(_QWORD *)Rsp;
  Rsp += 8LL;
  ContextRecord.Rsp = Rsp;
  ContextRecord.Rip = v71;
LABEL_44:
  v5 = v76;
  if ( !(unsigned __int8)RtlpIsFrameInBounds(v84, EstablisherFrame, v85, Rsp) )
  {
    v5 = v76 | 8;
LABEL_219:
    v2 = 0;
LABEL_220:
    v4->ExceptionFlags = v5;
    return v2;
  }
  p_HistoryTable = v83;
  if ( !v10 )
    goto LABEL_46;
  v41 = 0;
  while ( 1 )
  {
    v42 = 0LL;
    v89 = ImageBase;
    v91 = EstablisherFrame;
    p_ContextRecord = &ContextRecord;
    v94 = HandlerData;
    v4->ExceptionFlags = v5;
    ControlPc = Rip;
    FunctionEntry = v9;
    v93 = v10;
    v95 = p_HistoryTable;
    v96 = v41;
    if ( v75 )
      v42 = RtlpLogExceptionHandler(v4, &ContextRecord, Rip, v10);
    v43 = RtlpExecuteHandlerForException(v4, EstablisherFrame, v87, &ControlPc);
    if ( v42 )
      *(_DWORD *)(v42 + 1396) = v43;
    v44 = v81;
    v5 |= v4->ExceptionFlags & 1;
    v76 = v5;
    if ( v81 == EstablisherFrame )
    {
      v5 &= ~0x10u;
      v44 = 0LL;
      v76 = v5;
      v81 = 0LL;
    }
    if ( v43 == 1 )
      goto LABEL_68;
    if ( !v43 )
      break;
    if ( v43 == 2 )
    {
      v5 |= 0x10u;
      v76 = v5;
      if ( v91 > v44 )
        v81 = v91;
LABEL_68:
      v36 = ContextRecord.Rsp;
      goto LABEL_46;
    }
    if ( v43 != 3 )
      RtlRaiseStatus(-1073741786);
    Rip = ControlPc;
    v9 = FunctionEntry;
    ImageBase = v89;
    RtlpCopyContext(&ContextRecord, p_ContextRecord);
    RtlVirtualUnwind(0, v55, Rip, v9, &ContextRecord, &HandlerData, &EstablisherFrame, 0LL);
    p_HistoryTable = v95;
    v10 = v93;
    v41 = v96;
    EstablisherFrame = v91;
    HandlerData = v94;
    v83 = v95;
  }
  if ( (v5 & 1) != 0 )
    RtlRaiseStatus(-1073741787);
  return 1;
}
