/*
 * XREFs of RtlVirtualUnwind @ 0x180036EE0
 * Callers:
 *     RtlDispatchException @ 0x1800349B0 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x180035330 (RtlUnwindEx.c)
 *     _invalid_parameter @ 0x180096B58 (_invalid_parameter.c)
 *     __report_gsfailure @ 0x180096C80 (__report_gsfailure.c)
 * Callees:
 *     RtlpSameFunction @ 0x180078BD4 (RtlpSameFunction.c)
 *     RtlpUnwindOpSlots @ 0x180088E54 (RtlpUnwindOpSlots.c)
 *     RtlpTrivialFunction @ 0x1800A5B7C (RtlpTrivialFunction.c)
 *     RtlpUnwindEpilogue @ 0x1800A5BD4 (RtlpUnwindEpilogue.c)
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 */

PEXCEPTION_ROUTINE __stdcall RtlVirtualUnwind(ULONG HandlerType, ULONG64 ImageBase, ULONG64 ControlPc, PRUNTIME_FUNCTION FunctionEntry, PCONTEXT ContextRecord, PVOID *HandlerData, PULONG64 EstablisherFrame, PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)
{
  EXCEPTION_DISPOSITION (__cdecl *v8)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // rsi
  ULONG64 v9; // rbp
  PRUNTIME_FUNCTION v10; // r14
  ULONG64 v11; // rdi
  ULONG64 v12; // r11
  int v14; // r12d
  unsigned int v15; // r15d
  unsigned int v16; // ebx
  PCONTEXT v17; // rbx
  PULONG64 v18; // r13
  _BYTE *i; // rcx
  unsigned int v20; // r15d
  char v21; // dl
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v22; // rdx
  unsigned __int64 v23; // r10
  unsigned int v24; // ecx
  ULONG64 v25; // r13
  _BYTE *v26; // r14
  unsigned int v27; // r12d
  __int64 v28; // rbp
  __int64 v29; // r8
  unsigned int v30; // ecx
  unsigned __int64 *v31; // rcx
  DWORD64 v32; // rcx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned __int64 *v37; // rdx
  _BYTE *v38; // r8
  __int64 v39; // r9
  int v40; // edx
  unsigned int v41; // edx
  bool v42; // zf
  char v43; // al
  DWORD64 v44; // rcx
  char v45; // dl
  char v46; // al
  int v47; // eax
  unsigned __int64 v48; // r14
  unsigned __int64 BeginAddress; // rcx
  unsigned __int64 v50; // rcx
  DWORD64 v51; // rcx
  unsigned int v52; // ecx
  __int16 v53; // cx
  unsigned int v54; // r10d
  int v55; // r8d
  DWORD v56; // ecx
  unsigned int v57; // r11d
  __int16 v58; // dx
  unsigned int v59; // ecx
  unsigned int v60; // ecx
  __int64 v61; // rcx
  struct _M128A *v62; // rdx
  int v63; // eax
  unsigned int *v64; // rax
  unsigned __int64 *Rsp; // rcx
  __int64 v66; // r8
  unsigned int v67; // ecx
  DWORD64 *v68; // rax
  DWORD64 *v69; // rcx
  unsigned __int64 *v70; // r8
  __int64 v71; // rcx
  int v72; // eax
  unsigned int v73; // r14d
  __int64 v74; // rcx
  __int64 v75; // rax
  bool v76; // cf
  char v77; // al
  DWORD64 v78; // rcx
  unsigned __int64 *v79; // rcx
  __int64 v80; // rcx
  unsigned int v81; // [rsp+40h] [rbp-48h]
  unsigned __int64 v82; // [rsp+48h] [rbp-40h]
  ULONG v83; // [rsp+90h] [rbp+8h]
  ULONG64 v84; // [rsp+98h] [rbp+10h]
  char v85; // [rsp+98h] [rbp+10h]
  PRUNTIME_FUNCTION v86; // [rsp+A8h] [rbp+20h]

  v86 = FunctionEntry;
  v84 = ImageBase;
  v8 = 0LL;
  v9 = ImageBase + FunctionEntry->UnwindInfoAddress;
  v10 = FunctionEntry;
  v11 = ControlPc;
  v12 = ImageBase;
  v14 = 0;
  v15 = *(_BYTE *)v9 & 7;
  if ( (HandlerType & 0x80000000) != 0 && v15 < 2 )
  {
    if ( !(unsigned int)RtlpTrivialFunction(
                          HandlerType,
                          ImageBase,
                          ControlPc,
                          ImageBase + FunctionEntry->UnwindInfoAddress) )
      return (PEXCEPTION_ROUTINE)v86;
    v12 = v84;
    v14 = 1;
  }
  v83 = HandlerType & 0x7FFFFFFF;
  v16 = v11 - v10->BeginAddress - v12;
  if ( (*(_BYTE *)(v9 + 3) & 0xF) == 0 )
  {
    v17 = ContextRecord;
    v18 = EstablisherFrame;
LABEL_4:
    *v18 = v17->Rsp;
    goto LABEL_5;
  }
  if ( v16 >= *(unsigned __int8 *)(v9 + 1) || (*(_BYTE *)v9 & 0x20) != 0 )
  {
    v17 = ContextRecord;
    v18 = EstablisherFrame;
  }
  else
  {
    v73 = 0;
    if ( *(_BYTE *)(v9 + 2) )
    {
      do
      {
        v74 = *(unsigned __int16 *)(v9 + 2LL * v73 + 4);
        if ( (BYTE1(v74) & 0xF) == 3 )
          break;
        v73 += RtlpUnwindOpSlots(v74, ImageBase, ControlPc, FunctionEntry);
      }
      while ( v73 < *(unsigned __int8 *)(v9 + 2) );
      v12 = v84;
    }
    v18 = EstablisherFrame;
    v75 = v73;
    v10 = v86;
    v76 = v16 < *(unsigned __int8 *)(v9 + 2 * v75 + 4);
    v17 = ContextRecord;
    if ( v76 )
      goto LABEL_4;
  }
  v50 = *(&v17->Rax + (*(_BYTE *)(v9 + 3) & 0xF));
  *v18 = v50;
  *v18 = v50 - (*(_BYTE *)(v9 + 3) & 0xF0);
LABEL_5:
  if ( v14 )
  {
LABEL_18:
    v22 = v86;
    goto LABEL_19;
  }
  if ( v15 >= 2 )
  {
    if ( *(_BYTE *)(v9 + 2) )
    {
      v53 = HIBYTE(*(_WORD *)(v9 + 4));
      if ( (v53 & 0xF) == 6 )
      {
        v54 = *(unsigned __int8 *)(v9 + 4);
        v55 = v11 - v12;
        if ( (v53 & 0x10) != 0 )
        {
          v56 = v10->EndAddress - v54;
          if ( v55 - v56 < v54 )
          {
LABEL_148:
            RtlpUnwindEpilogue(v12, ImageBase, v55 - v56, (_DWORD)v10, (__int64)v17, (__int64)ContextPointers, 0LL, 0LL);
            return v8;
          }
        }
        v57 = *(unsigned __int8 *)(v9 + 2);
        FunctionEntry = (PRUNTIME_FUNCTION)1;
        if ( v57 > 1 )
        {
          while ( 1 )
          {
            v58 = HIBYTE(*(_WORD *)(v9 + 2LL * (unsigned int)FunctionEntry + 4));
            if ( (v58 & 0xF) != 6 )
              break;
            LODWORD(ImageBase) = *(unsigned __int8 *)(v9 + 2LL * (unsigned int)FunctionEntry + 4)
                               + ((unsigned __int8)v58 >> 4 << 8);
            if ( !(_DWORD)ImageBase )
              break;
            v56 = v10->EndAddress - ImageBase;
            if ( v55 - v56 < v54 )
            {
              LODWORD(v12) = v84;
              goto LABEL_148;
            }
            FunctionEntry = (PRUNTIME_FUNCTION)(unsigned int)((_DWORD)FunctionEntry + 1);
            if ( (unsigned int)FunctionEntry >= v57 )
              goto LABEL_18;
          }
        }
      }
    }
    goto LABEL_18;
  }
  i = (_BYTE *)v11;
  v20 = 0;
  if ( *(_BYTE *)v11 == 72 )
  {
    v46 = *(_BYTE *)(v11 + 1);
    if ( v46 == -125 && *(_BYTE *)(v11 + 2) == 0xC4 )
      goto LABEL_107;
    if ( v46 == -127 && *(_BYTE *)(v11 + 2) == 0xC4 )
    {
LABEL_72:
      i = (_BYTE *)(v11 + 7);
      goto LABEL_9;
    }
  }
  if ( (*(_BYTE *)v11 & 0xFE) != 0x48 )
    goto LABEL_9;
  if ( *(_BYTE *)(v11 + 1) != 0x8D )
    goto LABEL_9;
  v20 = *(_BYTE *)(v11 + 2) & 7 | (8 * (*(_BYTE *)v11 & 1));
  if ( !v20 || v20 != (*(_BYTE *)(v9 + 3) & 0xF) )
    goto LABEL_9;
  v45 = *(_BYTE *)(v11 + 2) & 0xF8;
  if ( v45 != 96 )
  {
    if ( v45 != -96 )
      goto LABEL_9;
    goto LABEL_72;
  }
LABEL_107:
  for ( i = (_BYTE *)(v11 + 4); ; i += 2 )
  {
LABEL_9:
    while ( (*i & 0xF8) == 0x58 )
      ++i;
    if ( (*i & 0xF0) != 0x40 || (i[1] & 0xF8) != 0x58 )
      break;
  }
  if ( *i == 0xF2 )
    ++i;
  v21 = *i;
  if ( (unsigned __int8)(*i + 62) <= 1u || v21 == -13 && i[1] == 0xC3 )
  {
LABEL_56:
    if ( (*(_BYTE *)v11 & 0xF8) != 0x48 )
    {
      while ( 1 )
      {
LABEL_60:
        while ( (*(_BYTE *)v11 & 0xF8) == 0x58 )
        {
          Rsp = (unsigned __int64 *)v17->Rsp;
          v66 = *(_BYTE *)v11 & 7;
          *(&v17->Rax + v66) = *Rsp;
          if ( ContextPointers )
            ContextPointers->IntegerContext[v66] = Rsp;
          v17->Rsp += 8LL;
          ++v11;
        }
        if ( (*(_BYTE *)v11 & 0xF0) != 0x40 || (*(_BYTE *)(v11 + 1) & 0xF8) != 0x58 )
          break;
        v70 = (unsigned __int64 *)v17->Rsp;
        v71 = *(_BYTE *)(v11 + 1) & 7 | (8 * (*(_BYTE *)v11 & 1u));
        *(&v17->Rax + v71) = *v70;
        if ( ContextPointers )
          ContextPointers->IntegerContext[v71] = v70;
        v17->Rsp += 8LL;
        v11 += 2LL;
      }
      v44 = *(_QWORD *)v17->Rsp;
      v17->Rsp += 8LL;
      v17->Rip = v44;
      return v8;
    }
    v43 = *(_BYTE *)(v11 + 1);
    switch ( v43 )
    {
      case -125:
        v17->Rsp += *(char *)(v11 + 3);
LABEL_59:
        v11 += 4LL;
        goto LABEL_60;
      case -127:
        v17->Rsp += *(unsigned __int8 *)(v11 + 3) | (unsigned __int64)((*(unsigned __int8 *)(v11 + 4) | (*(unsigned __int16 *)(v11 + 5) << 8)) << 8);
        break;
      case -115:
        v77 = *(_BYTE *)(v11 + 2) & 0xF8;
        if ( v77 == 96 )
        {
          v78 = *(&v17->Rax + v20);
          v17->Rsp = v78;
          v17->Rsp = v78 + *(char *)(v11 + 3);
          goto LABEL_59;
        }
        if ( v77 != -96 )
          goto LABEL_60;
        v17->Rsp = *(&v17->Rax + v20)
                 + (*(unsigned __int8 *)(v11 + 3) | ((*(unsigned __int8 *)(v11 + 4) | (*(unsigned __int16 *)(v11 + 5) << 8)) << 8));
        break;
      default:
        goto LABEL_60;
    }
    v11 += 7LL;
    goto LABEL_60;
  }
  if ( ((v21 + 23) & 0xFD) != 0 )
  {
    if ( v21 == -1 && i[1] == 37 )
      goto LABEL_56;
    if ( (v21 & 0xF8) != 0x48 || i[1] != 0xFF )
      goto LABEL_18;
    v42 = (i[2] & 0x38) == 32;
    goto LABEL_55;
  }
  if ( v21 == -21 )
    v47 = (char)i[1] + 2;
  else
    v47 = *(_DWORD *)(i + 1) + 5;
  v22 = v86;
  v48 = (unsigned __int64)&i[v47 - v12];
  BeginAddress = v86->BeginAddress;
  if ( v48 < BeginAddress || v48 >= v86->EndAddress )
  {
    v64 = (unsigned int *)RtlpSameFunction(v86, v12, v48 + v12);
    if ( !v64 )
      goto LABEL_56;
    v42 = v48 == *v64;
LABEL_55:
    if ( v42 )
      goto LABEL_56;
    goto LABEL_18;
  }
  if ( v48 == BeginAddress && (*(_BYTE *)v9 & 0x20) == 0 )
    goto LABEL_56;
LABEL_19:
  v23 = *v18;
  v24 = 0;
  v25 = v84;
  v82 = v23;
  v81 = 0;
  while ( 1 )
  {
    v26 = (_BYTE *)(v25 + v22->UnwindInfoAddress);
    v27 = v11 - v22->BeginAddress - v25;
    v85 = 0;
    LODWORD(v28) = 0;
    LOBYTE(FunctionEntry) = 0;
    if ( v26[2] )
    {
      do
      {
        v29 = (unsigned __int8)v26[2 * (unsigned int)v28 + 5] >> 4;
        if ( v27 < (unsigned __int8)v26[2 * (unsigned int)v28 + 4] )
        {
          v72 = RtlpUnwindOpSlots(
                  *(unsigned __int16 *)&v26[2 * (unsigned int)v28 + 4],
                  (unsigned int)v28,
                  v29,
                  FunctionEntry);
          v23 = v82;
          LODWORD(v28) = v72 + v28;
        }
        else
        {
          v30 = v26[2 * (unsigned int)v28 + 5] & 0xF;
          if ( v30 > 5 )
          {
            v52 = v30 - 6;
            if ( v52 )
            {
              v59 = v52 - 1;
              if ( v59 )
              {
                v60 = v59 - 1;
                if ( v60 )
                {
                  v67 = v60 - 1;
                  if ( v67 )
                  {
                    if ( v67 != 1 )
LABEL_155:
                      RtlRaiseStatus(-1073741569);
                    v68 = (DWORD64 *)v17->Rsp;
                    v85 = 1;
                    v69 = v68 + 3;
                    if ( (_DWORD)v29 )
                    {
                      ++v68;
                      ++v69;
                    }
                    v17->Rip = *v68;
                    v17->Rsp = *v69;
                  }
                  else
                  {
                    v28 = (unsigned int)(v28 + 2);
                    v80 = (unsigned int)v29;
                    FunctionEntry = (PRUNTIME_FUNCTION)(v23
                                                      + *(unsigned __int16 *)&v26[2 * (unsigned int)(v28 - 1) + 4]
                                                      + (*(unsigned __int16 *)&v26[2 * v28 + 4] << 16));
                    v17->FltSave.XmmRegisters[v80].Low = *(_QWORD *)&FunctionEntry->BeginAddress;
                    v17->FltSave.XmmRegisters[v80].High = *(_QWORD *)&FunctionEntry->UnwindInfoAddress;
                    if ( ContextPointers )
                      ContextPointers->FloatingContext[v29] = (PM128A)FunctionEntry;
                  }
                }
                else
                {
                  v28 = (unsigned int)(v28 + 1);
                  v61 = (unsigned int)v29;
                  FunctionEntry = (PRUNTIME_FUNCTION)(unsigned int)v29;
                  v62 = (struct _M128A *)(v23 + 16 * (unsigned int)*(unsigned __int16 *)&v26[2 * v28 + 4]);
                  v17->FltSave.XmmRegisters[v61].Low = v62->Low;
                  v17->FltSave.XmmRegisters[v61].High = v62->High;
                  if ( ContextPointers )
                    ContextPointers->FloatingContext[v29] = v62;
                }
              }
              else
              {
                LODWORD(v28) = v28 + 2;
              }
            }
            else
            {
              LODWORD(v28) = v28 + 1;
            }
          }
          else if ( v30 == 5 )
          {
            v28 = (unsigned int)(v28 + 2);
            v79 = (unsigned __int64 *)(v23
                                     + (*(unsigned __int16 *)&v26[2 * v28 + 4] << 16)
                                     + (unsigned int)*(unsigned __int16 *)&v26[2 * (unsigned int)(v28 - 1) + 4]);
            *(&v17->Rax + v29) = *v79;
            if ( ContextPointers )
              ContextPointers->IntegerContext[v29] = v79;
          }
          else if ( (v26[2 * (unsigned int)v28 + 5] & 0xF) != 0 )
          {
            v34 = v30 - 1;
            if ( v34 )
            {
              v35 = v34 - 1;
              if ( v35 )
              {
                v36 = v35 - 1;
                if ( v36 )
                {
                  if ( v36 != 1 )
                    goto LABEL_155;
                  v28 = (unsigned int)(v28 + 1);
                  v37 = (unsigned __int64 *)(v23 + 8 * (unsigned int)*(unsigned __int16 *)&v26[2 * v28 + 4]);
                  *(&v17->Rax + v29) = *v37;
                  if ( ContextPointers )
                    ContextPointers->IntegerContext[v29] = v37;
                }
                else
                {
                  v51 = *(&v17->Rax + (v26[3] & 0xF));
                  v17->Rsp = v51;
                  v17->Rsp = v51 - (v26[3] & 0xF0);
                }
              }
              else
              {
                v17->Rsp += (unsigned int)(8 * v29 + 8);
              }
            }
            else
            {
              v28 = (unsigned int)(v28 + 1);
              v40 = *(unsigned __int16 *)&v26[2 * v28 + 4];
              if ( (_DWORD)v29 )
              {
                v28 = (unsigned int)(v28 + 1);
                v41 = (*(unsigned __int16 *)&v26[2 * v28 + 4] << 16) + v40;
              }
              else
              {
                v41 = 8 * v40;
              }
              v17->Rsp += v41;
            }
          }
          else
          {
            v31 = (unsigned __int64 *)v17->Rsp;
            *(&v17->Rax + v29) = *v31;
            if ( ContextPointers )
              ContextPointers->IntegerContext[v29] = v31;
            v17->Rsp += 8LL;
          }
          LODWORD(v28) = v28 + 1;
        }
      }
      while ( (unsigned int)v28 < (unsigned __int8)v26[2] );
      v22 = v86;
      v24 = v81;
      LOBYTE(FunctionEntry) = v85;
    }
    if ( (*v26 & 0x20) == 0 )
      break;
    v63 = (unsigned __int8)v26[2];
    if ( (v63 & 1) != 0 )
      ++v63;
    v81 = ++v24;
    v22 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)&v26[2 * v63 + 4];
    v86 = v22;
    if ( v24 > 0x20 )
      RtlRaiseStatus(-1073741569);
  }
  if ( !(_BYTE)FunctionEntry )
  {
    v32 = *(_QWORD *)v17->Rsp;
    v17->Rsp += 8LL;
    v17->Rip = v32;
  }
  if ( v83 )
  {
    v38 = (_BYTE *)(v25 + v22->UnwindInfoAddress);
    if ( (int)v11 - v22->BeginAddress - (int)v25 >= (unsigned __int8)v38[1] && ((*v38 >> 3) & (unsigned __int8)v83) != 0 )
    {
      v39 = (unsigned __int8)v38[2];
      if ( (v39 & 1) != 0 )
        v39 = (unsigned int)(v39 + 1);
      *HandlerData = &v38[2 * (unsigned int)(v39 + 2) + 4];
      return (PEXCEPTION_ROUTINE)(v25 + *(unsigned int *)&v38[2 * v39 + 4]);
    }
  }
  return v8;
}
