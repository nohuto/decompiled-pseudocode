/*
 * XREFs of RtlVirtualUnwind @ 0x1400B0FB8
 * Callers:
 *     RtlDispatchException @ 0x1400F2B50 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1400F34B0 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x140211C30 (RtlRaiseException.c)
 * Callees:
 *     RtlpUnwindEpilogue @ 0x1400B1AE0 (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x1400B1C9C (RtlpUnwindOpSlots.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     RtlpSameFunction @ 0x140159958 (RtlpSameFunction.c)
 *     RtlpTrivialFunction @ 0x1401599F0 (RtlpTrivialFunction.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

PEXCEPTION_ROUTINE __stdcall RtlVirtualUnwind(DWORD HandlerType, DWORD64 ImageBase, DWORD64 ControlPc, PRUNTIME_FUNCTION FunctionEntry, struct _CONTEXT *ContextRecord, PVOID *HandlerData, PDWORD64 EstablisherFrame, PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)
{
  EXCEPTION_DISPOSITION (__cdecl *v8)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // r15
  DWORD64 v9; // rdi
  PRUNTIME_FUNCTION v11; // r13
  DWORD64 v12; // rsi
  DWORD64 v13; // r11
  int v14; // r12d
  unsigned int v15; // r14d
  unsigned int v16; // ebx
  struct _CONTEXT *v17; // rbx
  PDWORD64 v18; // rbp
  unsigned __int64 v19; // r10
  unsigned int v20; // ecx
  DWORD64 v21; // r11
  _BYTE *v22; // r14
  unsigned int v23; // ebp
  __int64 v24; // rdi
  unsigned int v25; // ecx
  __int64 v26; // r9
  unsigned __int64 *v27; // rcx
  unsigned __int64 v28; // rcx
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned __int64 *v33; // rdx
  unsigned int v34; // ecx
  int v35; // edx
  unsigned int v36; // edx
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  struct _M128A *v39; // rdx
  __int64 v40; // rcx
  __int16 v41; // ax
  unsigned int v42; // r10d
  int v43; // ecx
  unsigned int i; // r9d
  __int16 v45; // ax
  int v46; // edx
  char v47; // al
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // rcx
  unsigned int v50; // ecx
  unsigned __int64 *v51; // rcx
  unsigned __int64 *v52; // rdx
  _BYTE *v53; // r8
  __int64 v54; // r9
  char v55; // r8
  _BYTE *v56; // rcx
  unsigned int v57; // r12d
  char v58; // al
  char v59; // dl
  int v60; // eax
  int v61; // eax
  unsigned __int64 v62; // rax
  unsigned int v63; // ebp
  __int64 v64; // rcx
  __int64 v65; // rax
  bool v66; // cf
  char v67; // dl
  bool v68; // zf
  _BYTE *v69; // r14
  int v70; // eax
  unsigned __int64 BeginAddress; // rcx
  unsigned __int64 v72; // r14
  unsigned int *v73; // rax
  char *v74; // rcx
  char v75; // al
  char v76; // al
  unsigned __int64 v77; // rcx
  char v78; // dl
  unsigned __int64 *Rsp; // rdx
  __int64 v80; // r8
  unsigned __int64 *v81; // r8
  __int64 v82; // rdx
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // rcx
  unsigned __int64 *v85; // rcx
  __int64 v86; // rcx
  unsigned __int64 v87; // [rsp+40h] [rbp-58h]
  EXCEPTION_DISPOSITION (__cdecl *v88)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+48h] [rbp-50h]
  DWORD v89; // [rsp+A0h] [rbp+8h]
  char v91; // [rsp+B0h] [rbp+18h]
  unsigned int v92; // [rsp+B8h] [rbp+20h]

  v8 = 0LL;
  v9 = ImageBase + FunctionEntry->UnwindData;
  v11 = FunctionEntry;
  v12 = ControlPc;
  v13 = ImageBase;
  v14 = 0;
  if ( ControlPc <= 0x7FFFFFFEFFFFLL && (v9 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v15 = *(_BYTE *)v9 & 7;
  if ( (HandlerType & 0x80000000) != 0 && v15 < 2 )
  {
    if ( !(unsigned int)RtlpTrivialFunction(FunctionEntry, ImageBase, ControlPc, v9) )
      return v88;
    v13 = ImageBase;
    v14 = 1;
  }
  v89 = HandlerType & 0x7FFFFFFF;
  v16 = v12 - v11->BeginAddress - v13;
  if ( (*(_BYTE *)(v9 + 3) & 0xF) == 0 )
  {
    v17 = ContextRecord;
    v18 = EstablisherFrame;
LABEL_5:
    *v18 = v17->Rsp;
    goto LABEL_6;
  }
  if ( v16 >= *(unsigned __int8 *)(v9 + 1) || (*(_BYTE *)v9 & 0x20) != 0 )
  {
    v17 = ContextRecord;
    v18 = EstablisherFrame;
    v47 = *(_BYTE *)(v9 + 3);
  }
  else
  {
    v63 = 0;
    if ( *(_BYTE *)(v9 + 2) )
    {
      do
      {
        v64 = *(unsigned __int16 *)(v9 + 2LL * v63 + 4);
        if ( (BYTE1(v64) & 0xF) == 3 )
          break;
        v63 += RtlpUnwindOpSlots(v64, ImageBase, ControlPc, FunctionEntry);
      }
      while ( v63 < *(unsigned __int8 *)(v9 + 2) );
      v13 = ImageBase;
    }
    v65 = v63;
    v18 = EstablisherFrame;
    v66 = v16 < *(unsigned __int8 *)(v9 + 2 * v65 + 4);
    v17 = ContextRecord;
    if ( v66 )
      goto LABEL_5;
    v47 = *(_BYTE *)(v9 + 3);
  }
  v48 = *(&v17->Rax + (v47 & 0xF));
  *v18 = v48;
  *v18 = v48 - (*(_BYTE *)(v9 + 3) & 0xF0);
LABEL_6:
  if ( v14 )
    goto LABEL_7;
  if ( v15 >= 2 )
  {
    if ( *(_BYTE *)(v9 + 2) )
    {
      v41 = *(_WORD *)(v9 + 4);
      if ( (HIBYTE(v41) & 0xF) == 6 )
      {
        v42 = (unsigned __int8)v41;
        ControlPc = (unsigned int)(v12 - v13);
        if ( (v41 & 0x1000) != 0 )
        {
          v43 = v11->EndAddress - (unsigned __int8)v41;
          if ( (int)ControlPc - v43 < (unsigned int)(unsigned __int8)v41 )
          {
LABEL_101:
            RtlpUnwindEpilogue(v13, v12, ControlPc - v43, (_DWORD)v11, (__int64)v17, (__int64)ContextPointers, 0LL, 0LL);
            return v8;
          }
        }
        for ( i = 1; i < *(unsigned __int8 *)(v9 + 2); ++i )
        {
          v45 = *(_WORD *)(v9 + 2LL * i + 4);
          if ( (HIBYTE(v45) & 0xF) != 6 )
            break;
          v46 = (unsigned __int8)v45 + (HIBYTE(v45) >> 4 << 8);
          if ( !v46 )
            break;
          v43 = v11->EndAddress - v46;
          if ( (int)ControlPc - v43 < v42 )
            goto LABEL_101;
        }
      }
    }
    goto LABEL_7;
  }
  v55 = *(_BYTE *)v12;
  v56 = (_BYTE *)v12;
  v57 = 0;
  if ( *(_BYTE *)v12 == 72 )
  {
    v58 = *(_BYTE *)(v12 + 1);
    if ( v58 == -125 && *(_BYTE *)(v12 + 2) == 0xC4 )
    {
LABEL_139:
      v56 = (_BYTE *)(v12 + 4);
      goto LABEL_77;
    }
    if ( v58 == -127 && *(_BYTE *)(v12 + 2) == 0xC4 )
      goto LABEL_141;
  }
  if ( (v55 & 0xFE) != 0x48 )
    goto LABEL_77;
  if ( *(_BYTE *)(v12 + 1) != 0x8D )
    goto LABEL_77;
  v57 = *(_BYTE *)(v12 + 2) & 7 | (8 * (v55 & 1));
  if ( !v57 || v57 != (*(_BYTE *)(v9 + 3) & 0xF) )
    goto LABEL_77;
  v67 = *(_BYTE *)(v12 + 2) & 0xF8;
  if ( v67 == 96 )
    goto LABEL_139;
  if ( v67 == -96 )
LABEL_141:
    v56 = (_BYTE *)(v12 + 7);
  while ( 1 )
  {
LABEL_77:
    while ( (*v56 & 0xF8) == 0x58 )
      ++v56;
    if ( (*v56 & 0xF0) != 0x40 || (v56[1] & 0xF8) != 0x58 )
      break;
    v56 += 2;
  }
  if ( *v56 == 0xF2 )
    ++v56;
  v59 = *v56;
  if ( (unsigned __int8)(*v56 + 62) <= 1u || v59 == -13 && v56[1] == 0xC3 )
  {
LABEL_159:
    v74 = (char *)v12;
    if ( (*(_BYTE *)v12 & 0xF8) == 0x48 )
    {
      v75 = *(_BYTE *)(v12 + 1);
      switch ( v75 )
      {
        case -125:
          v17->Rsp += *(char *)(v12 + 3);
LABEL_167:
          v74 = (char *)(v12 + 4);
          goto LABEL_171;
        case -127:
          v17->Rsp += ((*(unsigned __int8 *)(v12 + 4) | (*(unsigned __int16 *)(v12 + 5) << 8)) << 8) | *(unsigned __int8 *)(v12 + 3);
          goto LABEL_170;
        case -115:
          v76 = *(_BYTE *)(v12 + 2) & 0xF8;
          if ( v76 == 96 )
          {
            v77 = *(&v17->Rax + v57);
            v17->Rsp = v77;
            v17->Rsp = v77 + *(char *)(v12 + 3);
            goto LABEL_167;
          }
          if ( v76 != -96 )
            goto LABEL_171;
          v17->Rsp = *(&v17->Rax + v57)
                   + (*(unsigned __int8 *)(v12 + 3) | ((*(unsigned __int8 *)(v12 + 4) | (*(unsigned __int16 *)(v12 + 5) << 8)) << 8));
LABEL_170:
          v74 = (char *)(v12 + 7);
          goto LABEL_171;
      }
    }
    while ( 1 )
    {
LABEL_171:
      while ( 1 )
      {
        v78 = *v74;
        if ( (*v74 & 0xF8) != 0x58 )
          break;
        Rsp = (unsigned __int64 *)v17->Rsp;
        v80 = *v74 & 7;
        if ( v12 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)Rsp & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        *(&v17->Rax + v80) = *Rsp;
        if ( ContextPointers )
          ContextPointers->IntegerContext[v80] = Rsp;
        v17->Rsp += 8LL;
        ++v74;
      }
      if ( (v78 & 0xF0) != 0x40 || (v74[1] & 0xF8) != 0x58 )
        break;
      v81 = (unsigned __int64 *)v17->Rsp;
      v82 = v74[1] & 7 | (8 * (v78 & 1u));
      if ( v12 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v81 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(&v17->Rax + v82) = *v81;
      if ( ContextPointers )
        ContextPointers->IntegerContext[v82] = v81;
      v17->Rsp += 8LL;
      v74 += 2;
    }
    if ( v12 <= 0x7FFFFFFEFFFFLL )
    {
      v83 = v17->Rsp;
      if ( (v83 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    v84 = *(_QWORD *)v17->Rsp;
    v17->Rsp += 8LL;
    v17->Rip = v84;
    return v8;
  }
  if ( ((v59 + 23) & 0xFD) == 0 )
  {
    v69 = &v56[-v13];
    if ( v59 == -21 )
      v70 = (char)v56[1] + 2;
    else
      v70 = *(_DWORD *)(v56 + 1) + 5;
    BeginAddress = v11->BeginAddress;
    v72 = (unsigned __int64)&v69[v70];
    if ( v72 < BeginAddress || v72 >= v11->EndAddress )
    {
      v73 = (unsigned int *)RtlpSameFunction(v11, v13, v72 + v13);
      if ( !v73 )
        goto LABEL_159;
      v68 = v72 == *v73;
    }
    else
    {
      if ( v72 != BeginAddress )
        goto LABEL_7;
      v68 = (*(_BYTE *)v9 & 0x20) == 0;
    }
    goto LABEL_158;
  }
  if ( v59 == -1 && v56[1] == 37 )
    goto LABEL_159;
  if ( (v59 & 0xF8) == 0x48 && v56[1] == 0xFF )
  {
    v68 = (v56[2] & 0x38) == 32;
LABEL_158:
    if ( v68 )
      goto LABEL_159;
  }
LABEL_7:
  v19 = *v18;
  v20 = 0;
  v21 = ImageBase;
  v87 = *v18;
  v92 = 0;
  while ( 1 )
  {
    v22 = (_BYTE *)(v21 + v11->UnwindData);
    v23 = v12 - v11->BeginAddress - v21;
    v91 = 0;
    LODWORD(v24) = 0;
    LOBYTE(ControlPc) = 0;
    if ( v12 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v22 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v22[2] )
    {
      do
      {
        v25 = v22[2 * (unsigned int)v24 + 5] & 0xF;
        v26 = (unsigned __int8)v22[2 * (unsigned int)v24 + 5] >> 4;
        if ( v23 < (unsigned __int8)v22[2 * (unsigned int)v24 + 4] )
        {
          v61 = RtlpUnwindOpSlots(
                  *(unsigned __int16 *)&v22[2 * (unsigned int)v24 + 4],
                  (unsigned int)v24,
                  ControlPc,
                  v26);
          v19 = v87;
          LODWORD(v24) = v61 + v24;
        }
        else
        {
          if ( v25 > 5 )
          {
            v34 = v25 - 6;
            if ( v34 )
            {
              v37 = v34 - 1;
              if ( v37 )
              {
                v38 = v37 - 1;
                if ( v38 )
                {
                  v50 = v38 - 1;
                  if ( v50 )
                  {
                    if ( v50 != 1 )
LABEL_201:
                      RtlRaiseStatus(-1073741569);
                    v91 = 1;
                    v51 = (unsigned __int64 *)v17->Rsp;
                    v52 = v51 + 3;
                    if ( (_DWORD)v26 )
                    {
                      ++v51;
                      ++v52;
                    }
                    if ( v12 <= 0x7FFFFFFEFFFFLL )
                    {
                      if ( ((unsigned __int8)v51 & 3) != 0 )
                        ExRaiseDatatypeMisalignment();
                      ControlPc = 0x7FFFFFFF0000LL;
                      if ( ((unsigned __int8)v52 & 3) != 0 )
                        ExRaiseDatatypeMisalignment();
                    }
                    v17->Rip = *v51;
                    v17->Rsp = *v52;
                  }
                  else
                  {
                    v24 = (unsigned int)(v24 + 2);
                    ControlPc = v19
                              + *(unsigned __int16 *)&v22[2 * (unsigned int)(v24 - 1) + 4]
                              + (*(unsigned __int16 *)&v22[2 * v24 + 4] << 16);
                    if ( v12 <= 0x7FFFFFFEFFFFLL
                      && (((_BYTE)v19 + (unsigned __int8)*(_WORD *)&v22[2 * (unsigned int)(v24 - 1) + 4]) & 3) != 0 )
                    {
                      ExRaiseDatatypeMisalignment();
                    }
                    v86 = (unsigned int)v26;
                    v17->FltSave.XmmRegisters[v86].Low = *(_QWORD *)ControlPc;
                    v17->FltSave.XmmRegisters[v86].High = *(_QWORD *)(ControlPc + 8);
                    if ( ContextPointers )
                      ContextPointers->FloatingContext[v26] = (PM128A)ControlPc;
                  }
                }
                else
                {
                  v24 = (unsigned int)(v24 + 1);
                  v39 = (struct _M128A *)(v19 + 16 * (unsigned int)*(unsigned __int16 *)&v22[2 * v24 + 4]);
                  if ( v12 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v39 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  v40 = (unsigned int)v26;
                  ControlPc = (unsigned int)v26;
                  v17->FltSave.XmmRegisters[v40].Low = v39->Low;
                  v17->FltSave.XmmRegisters[v40].High = v39->High;
                  if ( ContextPointers )
                    ContextPointers->FloatingContext[v26] = v39;
                }
              }
              else
              {
                LODWORD(v24) = v24 + 2;
              }
            }
            else
            {
              LODWORD(v24) = v24 + 1;
            }
          }
          else if ( v25 == 5 )
          {
            v24 = (unsigned int)(v24 + 2);
            v85 = (unsigned __int64 *)(v19
                                     + (*(unsigned __int16 *)&v22[2 * v24 + 4] << 16)
                                     + (unsigned int)*(unsigned __int16 *)&v22[2 * (unsigned int)(v24 - 1) + 4]);
            if ( v12 <= 0x7FFFFFFEFFFFLL
              && (((_BYTE)v19 + (unsigned __int8)*(_WORD *)&v22[2 * (unsigned int)(v24 - 1) + 4]) & 3) != 0 )
            {
              ExRaiseDatatypeMisalignment();
            }
            *(&v17->Rax + v26) = *v85;
            if ( ContextPointers )
              ContextPointers->IntegerContext[v26] = v85;
          }
          else if ( (v22[2 * (unsigned int)v24 + 5] & 0xF) != 0 )
          {
            v30 = v25 - 1;
            if ( v30 )
            {
              v31 = v30 - 1;
              if ( v31 )
              {
                v32 = v31 - 1;
                if ( v32 )
                {
                  if ( v32 != 1 )
                    goto LABEL_201;
                  v24 = (unsigned int)(v24 + 1);
                  v33 = (unsigned __int64 *)(v19 + 8 * (unsigned int)*(unsigned __int16 *)&v22[2 * v24 + 4]);
                  if ( v12 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v33 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  *(&v17->Rax + v26) = *v33;
                  if ( ContextPointers )
                    ContextPointers->IntegerContext[v26] = v33;
                }
                else
                {
                  v49 = *(&v17->Rax + (v22[3] & 0xF));
                  v17->Rsp = v49;
                  v17->Rsp = v49 - (v22[3] & 0xF0);
                }
              }
              else
              {
                v17->Rsp += (unsigned int)(8 * v26 + 8);
              }
            }
            else
            {
              v24 = (unsigned int)(v24 + 1);
              v35 = *(unsigned __int16 *)&v22[2 * v24 + 4];
              if ( (_DWORD)v26 )
              {
                v24 = (unsigned int)(v24 + 1);
                v36 = (*(unsigned __int16 *)&v22[2 * v24 + 4] << 16) + v35;
              }
              else
              {
                v36 = 8 * v35;
              }
              v17->Rsp += v36;
            }
          }
          else
          {
            v27 = (unsigned __int64 *)v17->Rsp;
            if ( v12 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v27 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            *(&v17->Rax + v26) = *v27;
            if ( ContextPointers )
              ContextPointers->IntegerContext[v26] = v27;
            v17->Rsp += 8LL;
          }
          LODWORD(v24) = v24 + 1;
        }
      }
      while ( (unsigned int)v24 < (unsigned __int8)v22[2] );
      LOBYTE(ControlPc) = v91;
      v20 = v92;
      v21 = ImageBase;
    }
    if ( (*v22 & 0x20) == 0 )
      break;
    v60 = (unsigned __int8)v22[2];
    if ( (v60 & 1) != 0 )
      ++v60;
    v11 = (PRUNTIME_FUNCTION)&v22[2 * v60 + 4];
    if ( v12 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v11 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v92 = ++v20;
    if ( v20 > 0x20 )
      RtlRaiseStatus(-1073741569);
  }
  if ( !(_BYTE)ControlPc )
  {
    if ( v12 <= 0x7FFFFFFEFFFFLL )
    {
      v62 = v17->Rsp;
      if ( (v62 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    v28 = *(_QWORD *)v17->Rsp;
    v17->Rsp += 8LL;
    v17->Rip = v28;
  }
  if ( v89 )
  {
    v53 = (_BYTE *)(v21 + v11->UnwindData);
    if ( v12 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v53 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (int)v12 - v11->BeginAddress - (int)v21 >= (unsigned __int8)v53[1] && ((*v53 >> 3) & (unsigned __int8)v89) != 0 )
    {
      v54 = (unsigned __int8)v53[2];
      if ( (v54 & 1) != 0 )
        v54 = (unsigned int)(v54 + 1);
      *HandlerData = &v53[2 * (unsigned int)(v54 + 2) + 4];
      return (PEXCEPTION_ROUTINE)(v21 + *(unsigned int *)&v53[2 * v54 + 4]);
    }
  }
  return v8;
}
