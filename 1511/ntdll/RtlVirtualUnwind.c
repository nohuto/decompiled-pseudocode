/*
 * XREFs of RtlVirtualUnwind @ 0x1800370C0
 * Callers:
 *     RtlDispatchException @ 0x180034C40 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1800355D0 (RtlUnwindEx.c)
 *     _invalid_parameter @ 0x180095768 (_invalid_parameter.c)
 *     __report_gsfailure @ 0x180095890 (__report_gsfailure.c)
 * Callees:
 *     RtlpUnwindOpSlots @ 0x180003788 (RtlpUnwindOpSlots.c)
 *     RtlpSameFunction @ 0x1800A47C4 (RtlpSameFunction.c)
 *     RtlpTrivialFunction @ 0x1800A4828 (RtlpTrivialFunction.c)
 *     RtlpUnwindEpilogue @ 0x1800A4880 (RtlpUnwindEpilogue.c)
 *     RtlRaiseStatus @ 0x1800A4A80 (RtlRaiseStatus.c)
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
  char v29; // r9
  __int64 v30; // r8
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned __int64 *v35; // rdx
  unsigned __int64 *v36; // rcx
  DWORD64 v37; // rcx
  _BYTE *v39; // r8
  __int64 v40; // r9
  int v41; // edx
  unsigned int v42; // edx
  bool v43; // zf
  char v44; // dl
  char v45; // al
  unsigned __int64 v46; // rcx
  DWORD64 v47; // rcx
  int v48; // eax
  unsigned __int64 v49; // r14
  unsigned __int64 BeginAddress; // rcx
  unsigned int v51; // ecx
  __int16 v52; // cx
  unsigned int v53; // r10d
  int v54; // r8d
  DWORD v55; // ecx
  unsigned int v56; // r11d
  unsigned int v57; // r9d
  __int16 v58; // dx
  unsigned int v59; // ecx
  unsigned int v60; // ecx
  __int64 v61; // rcx
  struct _M128A *v62; // rdx
  int v63; // eax
  char v64; // al
  DWORD64 v65; // rcx
  unsigned int v66; // ecx
  DWORD64 *v67; // rax
  DWORD64 *v68; // rcx
  unsigned __int64 *v69; // r8
  __int64 v70; // rcx
  unsigned __int64 *Rsp; // rcx
  __int64 v72; // r8
  int v73; // eax
  unsigned int v74; // r14d
  unsigned __int16 v75; // cx
  __int64 v76; // rax
  bool v77; // cf
  unsigned int *v78; // rax
  char v79; // al
  DWORD64 v80; // rcx
  unsigned __int64 *v81; // rcx
  __int64 v82; // rcx
  struct _M128A *v83; // r9
  unsigned int v84; // [rsp+40h] [rbp-48h]
  unsigned __int64 v85; // [rsp+48h] [rbp-40h]
  ULONG v86; // [rsp+90h] [rbp+8h]
  ULONG64 v87; // [rsp+98h] [rbp+10h]
  char v88; // [rsp+98h] [rbp+10h]
  PRUNTIME_FUNCTION v89; // [rsp+A8h] [rbp+20h]

  v89 = FunctionEntry;
  v87 = ImageBase;
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
      return (PEXCEPTION_ROUTINE)v89;
    v12 = v87;
    v14 = 1;
  }
  v86 = HandlerType & 0x7FFFFFFF;
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
    v74 = 0;
    if ( *(_BYTE *)(v9 + 2) )
    {
      do
      {
        v75 = *(_WORD *)(v9 + 2LL * v74 + 4);
        if ( (HIBYTE(v75) & 0xF) == 3 )
          break;
        v74 += RtlpUnwindOpSlots(v75);
      }
      while ( v74 < *(unsigned __int8 *)(v9 + 2) );
      v12 = v87;
    }
    v18 = EstablisherFrame;
    v76 = v74;
    v10 = v89;
    v77 = v16 < *(unsigned __int8 *)(v9 + 2 * v76 + 4);
    v17 = ContextRecord;
    if ( v77 )
      goto LABEL_4;
  }
  v46 = *(&v17->Rax + (*(_BYTE *)(v9 + 3) & 0xF));
  *v18 = v46;
  *v18 = v46 - (*(_BYTE *)(v9 + 3) & 0xF0);
LABEL_5:
  if ( v14 )
  {
LABEL_18:
    v22 = v89;
    goto LABEL_19;
  }
  if ( v15 >= 2 )
  {
    if ( *(_BYTE *)(v9 + 2) )
    {
      v52 = HIBYTE(*(_WORD *)(v9 + 4));
      if ( (v52 & 0xF) == 6 )
      {
        v53 = *(unsigned __int8 *)(v9 + 4);
        v54 = v11 - v12;
        if ( (v52 & 0x10) != 0 )
        {
          v55 = v10->EndAddress - v53;
          if ( v54 - v55 < v53 )
          {
LABEL_148:
            RtlpUnwindEpilogue(v12, ImageBase, v54 - v55, (_DWORD)v10, (__int64)v17, (__int64)ContextPointers, 0LL, 0LL);
            return v8;
          }
        }
        v56 = *(unsigned __int8 *)(v9 + 2);
        v57 = 1;
        if ( v56 > 1 )
        {
          while ( 1 )
          {
            v58 = HIBYTE(*(_WORD *)(v9 + 2LL * v57 + 4));
            if ( (v58 & 0xF) != 6 )
              break;
            LODWORD(ImageBase) = *(unsigned __int8 *)(v9 + 2LL * v57 + 4) + ((unsigned __int8)v58 >> 4 << 8);
            if ( !(_DWORD)ImageBase )
              break;
            v55 = v10->EndAddress - ImageBase;
            if ( v54 - v55 < v53 )
            {
              LODWORD(v12) = v87;
              goto LABEL_148;
            }
            if ( ++v57 >= v56 )
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
    v45 = *(_BYTE *)(v11 + 1);
    if ( v45 == -125 && *(_BYTE *)(v11 + 2) == 0xC4 )
      goto LABEL_107;
    if ( v45 == -127 && *(_BYTE *)(v11 + 2) == 0xC4 )
    {
LABEL_66:
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
  v44 = *(_BYTE *)(v11 + 2) & 0xF8;
  if ( v44 != 96 )
  {
    if ( v44 != -96 )
      goto LABEL_9;
    goto LABEL_66;
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
LABEL_99:
    if ( (*(_BYTE *)v11 & 0xF8) != 0x48 )
    {
      while ( 1 )
      {
LABEL_103:
        while ( (*(_BYTE *)v11 & 0xF8) == 0x58 )
        {
          Rsp = (unsigned __int64 *)v17->Rsp;
          v72 = *(_BYTE *)v11 & 7;
          *(&v17->Rax + v72) = *Rsp;
          if ( ContextPointers )
            ContextPointers->IntegerContext[v72] = Rsp;
          v17->Rsp += 8LL;
          ++v11;
        }
        if ( (*(_BYTE *)v11 & 0xF0) != 0x40 || (*(_BYTE *)(v11 + 1) & 0xF8) != 0x58 )
          break;
        v69 = (unsigned __int64 *)v17->Rsp;
        v70 = *(_BYTE *)(v11 + 1) & 7 | (8 * (*(_BYTE *)v11 & 1u));
        *(&v17->Rax + v70) = *v69;
        if ( ContextPointers )
          ContextPointers->IntegerContext[v70] = v69;
        v17->Rsp += 8LL;
        v11 += 2LL;
      }
      v65 = *(_QWORD *)v17->Rsp;
      v17->Rsp += 8LL;
      v17->Rip = v65;
      return v8;
    }
    v64 = *(_BYTE *)(v11 + 1);
    switch ( v64 )
    {
      case -125:
        v17->Rsp += *(char *)(v11 + 3);
LABEL_102:
        v11 += 4LL;
        goto LABEL_103;
      case -127:
        v17->Rsp += *(unsigned __int8 *)(v11 + 3) | (unsigned __int64)((*(unsigned __int8 *)(v11 + 4) | (*(unsigned __int16 *)(v11 + 5) << 8)) << 8);
        break;
      case -115:
        v79 = *(_BYTE *)(v11 + 2) & 0xF8;
        if ( v79 == 96 )
        {
          v80 = *(&v17->Rax + v20);
          v17->Rsp = v80;
          v17->Rsp = v80 + *(char *)(v11 + 3);
          goto LABEL_102;
        }
        if ( v79 != -96 )
          goto LABEL_103;
        v17->Rsp = *(&v17->Rax + v20)
                 + (*(unsigned __int8 *)(v11 + 3) | ((*(unsigned __int8 *)(v11 + 4) | (*(unsigned __int16 *)(v11 + 5) << 8)) << 8));
        break;
      default:
        goto LABEL_103;
    }
    v11 += 7LL;
    goto LABEL_103;
  }
  if ( ((v21 + 23) & 0xFD) != 0 )
  {
    if ( v21 == -1 && i[1] == 37 )
      goto LABEL_99;
    if ( (v21 & 0xF8) != 0x48 || i[1] != 0xFF )
      goto LABEL_18;
    v43 = (i[2] & 0x38) == 32;
    goto LABEL_55;
  }
  if ( v21 == -21 )
    v48 = (char)i[1] + 2;
  else
    v48 = *(_DWORD *)(i + 1) + 5;
  v22 = v89;
  v49 = (unsigned __int64)&i[v48 - v12];
  BeginAddress = v89->BeginAddress;
  if ( v49 < BeginAddress || v49 >= v89->EndAddress )
  {
    v78 = (unsigned int *)RtlpSameFunction(v89, v12, v49 + v12);
    if ( !v78 )
      goto LABEL_99;
    v43 = v49 == *v78;
LABEL_55:
    if ( v43 )
      goto LABEL_99;
    goto LABEL_18;
  }
  if ( v49 == BeginAddress && (*(_BYTE *)v9 & 0x20) == 0 )
    goto LABEL_99;
LABEL_19:
  v23 = *v18;
  v24 = 0;
  v25 = v87;
  v85 = v23;
  v84 = 0;
  while ( 1 )
  {
    v26 = (_BYTE *)(v25 + v22->UnwindInfoAddress);
    v27 = v11 - v22->BeginAddress - v25;
    v88 = 0;
    LODWORD(v28) = 0;
    v29 = 0;
    if ( v26[2] )
    {
      do
      {
        v30 = (unsigned __int8)v26[2 * (unsigned int)v28 + 5] >> 4;
        if ( v27 < (unsigned __int8)v26[2 * (unsigned int)v28 + 4] )
        {
          v73 = RtlpUnwindOpSlots(*(_WORD *)&v26[2 * (unsigned int)v28 + 4]);
          v23 = v85;
          LODWORD(v28) = v73 + v28;
        }
        else
        {
          v31 = v26[2 * (unsigned int)v28 + 5] & 0xF;
          if ( v31 > 5 )
          {
            v51 = v31 - 6;
            if ( v51 )
            {
              v59 = v51 - 1;
              if ( v59 )
              {
                v60 = v59 - 1;
                if ( v60 )
                {
                  v66 = v60 - 1;
                  if ( v66 )
                  {
                    if ( v66 != 1 )
LABEL_155:
                      RtlRaiseStatus(-1073741569);
                    v67 = (DWORD64 *)v17->Rsp;
                    v88 = 1;
                    v68 = v67 + 3;
                    if ( (_DWORD)v30 )
                    {
                      ++v67;
                      ++v68;
                    }
                    v17->Rip = *v67;
                    v17->Rsp = *v68;
                  }
                  else
                  {
                    v28 = (unsigned int)(v28 + 2);
                    v82 = (unsigned int)v30;
                    v83 = (struct _M128A *)(v23
                                          + *(unsigned __int16 *)&v26[2 * (unsigned int)(v28 - 1) + 4]
                                          + (*(unsigned __int16 *)&v26[2 * v28 + 4] << 16));
                    v17->FltSave.XmmRegisters[v82].Low = v83->Low;
                    v17->FltSave.XmmRegisters[v82].High = v83->High;
                    if ( ContextPointers )
                      ContextPointers->FloatingContext[v30] = v83;
                  }
                }
                else
                {
                  v28 = (unsigned int)(v28 + 1);
                  v61 = (unsigned int)v30;
                  v62 = (struct _M128A *)(v23 + 16 * (unsigned int)*(unsigned __int16 *)&v26[2 * v28 + 4]);
                  v17->FltSave.XmmRegisters[v61].Low = v62->Low;
                  v17->FltSave.XmmRegisters[v61].High = v62->High;
                  if ( ContextPointers )
                    ContextPointers->FloatingContext[v30] = v62;
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
          else if ( v31 == 5 )
          {
            v28 = (unsigned int)(v28 + 2);
            v81 = (unsigned __int64 *)(v23
                                     + (*(unsigned __int16 *)&v26[2 * v28 + 4] << 16)
                                     + (unsigned int)*(unsigned __int16 *)&v26[2 * (unsigned int)(v28 - 1) + 4]);
            *(&v17->Rax + v30) = *v81;
            if ( ContextPointers )
              ContextPointers->IntegerContext[v30] = v81;
          }
          else if ( (v26[2 * (unsigned int)v28 + 5] & 0xF) != 0 )
          {
            v32 = v31 - 1;
            if ( v32 )
            {
              v33 = v32 - 1;
              if ( v33 )
              {
                v34 = v33 - 1;
                if ( v34 )
                {
                  if ( v34 != 1 )
                    goto LABEL_155;
                  v28 = (unsigned int)(v28 + 1);
                  v35 = (unsigned __int64 *)(v23 + 8 * (unsigned int)*(unsigned __int16 *)&v26[2 * v28 + 4]);
                  *(&v17->Rax + v30) = *v35;
                  if ( ContextPointers )
                    ContextPointers->IntegerContext[v30] = v35;
                }
                else
                {
                  v47 = *(&v17->Rax + (v26[3] & 0xF));
                  v17->Rsp = v47;
                  v17->Rsp = v47 - (v26[3] & 0xF0);
                }
              }
              else
              {
                v17->Rsp += (unsigned int)(8 * v30 + 8);
              }
            }
            else
            {
              v28 = (unsigned int)(v28 + 1);
              v41 = *(unsigned __int16 *)&v26[2 * v28 + 4];
              if ( (_DWORD)v30 )
              {
                v28 = (unsigned int)(v28 + 1);
                v42 = (*(unsigned __int16 *)&v26[2 * v28 + 4] << 16) + v41;
              }
              else
              {
                v42 = 8 * v41;
              }
              v17->Rsp += v42;
            }
          }
          else
          {
            v36 = (unsigned __int64 *)v17->Rsp;
            *(&v17->Rax + v30) = *v36;
            if ( ContextPointers )
              ContextPointers->IntegerContext[v30] = v36;
            v17->Rsp += 8LL;
          }
          LODWORD(v28) = v28 + 1;
        }
      }
      while ( (unsigned int)v28 < (unsigned __int8)v26[2] );
      v22 = v89;
      v24 = v84;
      v29 = v88;
    }
    if ( (*v26 & 0x20) == 0 )
      break;
    v63 = (unsigned __int8)v26[2];
    if ( (v63 & 1) != 0 )
      ++v63;
    v84 = ++v24;
    v22 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)&v26[2 * v63 + 4];
    v89 = v22;
    if ( v24 > 0x20 )
      RtlRaiseStatus(-1073741569);
  }
  if ( !v29 )
  {
    v37 = *(_QWORD *)v17->Rsp;
    v17->Rsp += 8LL;
    v17->Rip = v37;
  }
  if ( v86 )
  {
    v39 = (_BYTE *)(v25 + v22->UnwindInfoAddress);
    if ( (int)v11 - v22->BeginAddress - (int)v25 >= (unsigned __int8)v39[1] && ((*v39 >> 3) & (unsigned __int8)v86) != 0 )
    {
      v40 = (unsigned __int8)v39[2];
      if ( (v40 & 1) != 0 )
        v40 = (unsigned int)(v40 + 1);
      *HandlerData = &v39[2 * (unsigned int)(v40 + 2) + 4];
      return (PEXCEPTION_ROUTINE)(v25 + *(unsigned int *)&v39[2 * v40 + 4]);
    }
  }
  return v8;
}
