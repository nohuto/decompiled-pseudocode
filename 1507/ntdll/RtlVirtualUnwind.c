/*
 * XREFs of RtlVirtualUnwind @ 0x180011740
 * Callers:
 *     RtlDispatchException @ 0x180013890 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x180014200 (RtlUnwindEx.c)
 *     _invalid_parameter @ 0x180083FB8 (_invalid_parameter.c)
 *     __report_gsfailure @ 0x1800840E0 (__report_gsfailure.c)
 * Callees:
 *     RtlpSameFunction @ 0x180011420 (RtlpSameFunction.c)
 *     RtlpTrivialFunction @ 0x180093014 (RtlpTrivialFunction.c)
 *     RtlpUnwindEpilogue @ 0x18009306C (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x18009326C (RtlpUnwindOpSlots.c)
 *     RtlRaiseStatus @ 0x1800932C0 (RtlRaiseStatus.c)
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
  _BYTE *v38; // r8
  __int64 v39; // r9
  int v41; // edx
  unsigned int v42; // edx
  bool v43; // zf
  char v44; // al
  DWORD64 v45; // rcx
  char v46; // dl
  char v47; // al
  int v48; // eax
  unsigned __int64 v49; // r14
  unsigned __int64 BeginAddress; // rcx
  unsigned __int64 v51; // rcx
  DWORD64 v52; // rcx
  unsigned int v53; // ecx
  __int16 v54; // cx
  unsigned int v55; // r10d
  int v56; // r8d
  DWORD v57; // ecx
  unsigned int v58; // r11d
  unsigned int v59; // r9d
  __int16 v60; // dx
  unsigned int v61; // ecx
  unsigned int v62; // ecx
  __int64 v63; // rcx
  struct _M128A *v64; // rdx
  int v65; // eax
  unsigned int v66; // ecx
  DWORD64 *v67; // rax
  DWORD64 *v68; // rcx
  unsigned int *v69; // rax
  unsigned __int64 *Rsp; // rcx
  __int64 v71; // r8
  unsigned __int64 *v72; // r8
  __int64 v73; // rcx
  unsigned int v74; // r14d
  __int64 v75; // rax
  bool v76; // cf
  char v77; // al
  DWORD64 v78; // rcx
  unsigned __int64 *v79; // rcx
  __int64 v80; // rcx
  struct _M128A *v81; // r9
  int v82; // eax
  unsigned int v83; // [rsp+40h] [rbp-48h]
  unsigned __int64 v84; // [rsp+48h] [rbp-40h]
  ULONG v85; // [rsp+90h] [rbp+8h]
  ULONG64 v86; // [rsp+98h] [rbp+10h]
  char v87; // [rsp+98h] [rbp+10h]
  PRUNTIME_FUNCTION v88; // [rsp+A8h] [rbp+20h]

  v88 = FunctionEntry;
  v86 = ImageBase;
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
      return (PEXCEPTION_ROUTINE)v88;
    v12 = v86;
    v14 = 1;
  }
  v85 = HandlerType & 0x7FFFFFFF;
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
        if ( (HIBYTE(*(_WORD *)(v9 + 2LL * v74 + 4)) & 0xF) == 3 )
          break;
        v74 += ((__int64 (*)(void))RtlpUnwindOpSlots)();
      }
      while ( v74 < *(unsigned __int8 *)(v9 + 2) );
      v12 = v86;
    }
    v18 = EstablisherFrame;
    v75 = v74;
    v10 = v88;
    v76 = v16 < *(unsigned __int8 *)(v9 + 2 * v75 + 4);
    v17 = ContextRecord;
    if ( v76 )
      goto LABEL_4;
  }
  v51 = *(&v17->Rax + (*(_BYTE *)(v9 + 3) & 0xF));
  *v18 = v51;
  *v18 = v51 - (*(_BYTE *)(v9 + 3) & 0xF0);
LABEL_5:
  if ( v14 )
  {
LABEL_18:
    v22 = v88;
    goto LABEL_19;
  }
  if ( v15 >= 2 )
  {
    if ( *(_BYTE *)(v9 + 2) )
    {
      v54 = HIBYTE(*(_WORD *)(v9 + 4));
      if ( (v54 & 0xF) == 6 )
      {
        v55 = *(unsigned __int8 *)(v9 + 4);
        v56 = v11 - v12;
        if ( (v54 & 0x10) != 0 )
        {
          v57 = v10->EndAddress - v55;
          if ( v56 - v57 < v55 )
          {
LABEL_147:
            RtlpUnwindEpilogue(v12, ImageBase, v56 - v57, (_DWORD)v10, (__int64)v17, (__int64)ContextPointers, 0LL, 0LL);
            return v8;
          }
        }
        v58 = *(unsigned __int8 *)(v9 + 2);
        v59 = 1;
        if ( v58 > 1 )
        {
          while ( 1 )
          {
            v60 = HIBYTE(*(_WORD *)(v9 + 2LL * v59 + 4));
            if ( (v60 & 0xF) != 6 )
              break;
            LODWORD(ImageBase) = *(unsigned __int8 *)(v9 + 2LL * v59 + 4) + ((unsigned __int8)v60 >> 4 << 8);
            if ( !(_DWORD)ImageBase )
              break;
            v57 = v10->EndAddress - ImageBase;
            if ( v56 - v57 < v55 )
            {
              LODWORD(v12) = v86;
              goto LABEL_147;
            }
            if ( ++v59 >= v58 )
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
    v47 = *(_BYTE *)(v11 + 1);
    if ( v47 == -125 && *(_BYTE *)(v11 + 2) == 0xC4 )
      goto LABEL_112;
    if ( v47 == -127 && *(_BYTE *)(v11 + 2) == 0xC4 )
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
  v46 = *(_BYTE *)(v11 + 2) & 0xF8;
  if ( v46 != 96 )
  {
    if ( v46 != -96 )
      goto LABEL_9;
    goto LABEL_72;
  }
LABEL_112:
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
          v71 = *(_BYTE *)v11 & 7;
          *(&v17->Rax + v71) = *Rsp;
          if ( ContextPointers )
            ContextPointers->IntegerContext[v71] = Rsp;
          v17->Rsp += 8LL;
          ++v11;
        }
        if ( (*(_BYTE *)v11 & 0xF0) != 0x40 || (*(_BYTE *)(v11 + 1) & 0xF8) != 0x58 )
          break;
        v72 = (unsigned __int64 *)v17->Rsp;
        v73 = *(_BYTE *)(v11 + 1) & 7 | (8 * (*(_BYTE *)v11 & 1u));
        *(&v17->Rax + v73) = *v72;
        if ( ContextPointers )
          ContextPointers->IntegerContext[v73] = v72;
        v17->Rsp += 8LL;
        v11 += 2LL;
      }
      v45 = *(_QWORD *)v17->Rsp;
      v17->Rsp += 8LL;
      v17->Rip = v45;
      return v8;
    }
    v44 = *(_BYTE *)(v11 + 1);
    switch ( v44 )
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
    v43 = (i[2] & 0x38) == 32;
    goto LABEL_55;
  }
  if ( v21 == -21 )
    v48 = (char)i[1] + 2;
  else
    v48 = *(_DWORD *)(i + 1) + 5;
  v22 = v88;
  v49 = (unsigned __int64)&i[v48 - v12];
  BeginAddress = v88->BeginAddress;
  if ( v49 < BeginAddress || v49 >= v88->EndAddress )
  {
    v69 = (unsigned int *)RtlpSameFunction((__int64)v88, v12, (void *)(v49 + v12));
    if ( !v69 )
      goto LABEL_56;
    v43 = v49 == *v69;
LABEL_55:
    if ( v43 )
      goto LABEL_56;
    goto LABEL_18;
  }
  if ( v49 == BeginAddress && (*(_BYTE *)v9 & 0x20) == 0 )
    goto LABEL_56;
LABEL_19:
  v23 = *v18;
  v24 = 0;
  v25 = v86;
  v84 = v23;
  v83 = 0;
  while ( 1 )
  {
    v26 = (_BYTE *)(v25 + v22->UnwindInfoAddress);
    v27 = v11 - v22->BeginAddress - v25;
    v87 = 0;
    LODWORD(v28) = 0;
    v29 = 0;
    if ( v26[2] )
    {
      do
      {
        v30 = (unsigned __int8)v26[2 * (unsigned int)v28 + 5] >> 4;
        if ( v27 < (unsigned __int8)v26[2 * (unsigned int)v28 + 4] )
        {
          v82 = RtlpUnwindOpSlots(*(unsigned __int16 *)&v26[2 * (unsigned int)v28 + 4]);
          v23 = v84;
          LODWORD(v28) = v82 + v28;
        }
        else
        {
          v31 = v26[2 * (unsigned int)v28 + 5] & 0xF;
          if ( v31 > 5 )
          {
            v53 = v31 - 6;
            if ( v53 )
            {
              v61 = v53 - 1;
              if ( v61 )
              {
                v62 = v61 - 1;
                if ( v62 )
                {
                  v66 = v62 - 1;
                  if ( v66 )
                  {
                    if ( v66 != 1 )
LABEL_155:
                      RtlRaiseStatus(-1073741569);
                    v67 = (DWORD64 *)v17->Rsp;
                    v87 = 1;
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
                    v80 = (unsigned int)v30;
                    v81 = (struct _M128A *)(v23
                                          + *(unsigned __int16 *)&v26[2 * (unsigned int)(v28 - 1) + 4]
                                          + (*(unsigned __int16 *)&v26[2 * v28 + 4] << 16));
                    v17->FltSave.XmmRegisters[v80].Low = v81->Low;
                    v17->FltSave.XmmRegisters[v80].High = v81->High;
                    if ( ContextPointers )
                      ContextPointers->FloatingContext[v30] = v81;
                  }
                }
                else
                {
                  v28 = (unsigned int)(v28 + 1);
                  v63 = (unsigned int)v30;
                  v64 = (struct _M128A *)(v23 + 16 * (unsigned int)*(unsigned __int16 *)&v26[2 * v28 + 4]);
                  v17->FltSave.XmmRegisters[v63].Low = v64->Low;
                  v17->FltSave.XmmRegisters[v63].High = v64->High;
                  if ( ContextPointers )
                    ContextPointers->FloatingContext[v30] = v64;
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
            v79 = (unsigned __int64 *)(v23
                                     + (*(unsigned __int16 *)&v26[2 * v28 + 4] << 16)
                                     + (unsigned int)*(unsigned __int16 *)&v26[2 * (unsigned int)(v28 - 1) + 4]);
            *(&v17->Rax + v30) = *v79;
            if ( ContextPointers )
              ContextPointers->IntegerContext[v30] = v79;
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
                  v52 = *(&v17->Rax + (v26[3] & 0xF));
                  v17->Rsp = v52;
                  v17->Rsp = v52 - (v26[3] & 0xF0);
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
      v22 = v88;
      v24 = v83;
      v29 = v87;
    }
    if ( (*v26 & 0x20) == 0 )
      break;
    v65 = (unsigned __int8)v26[2];
    if ( (v65 & 1) != 0 )
      ++v65;
    v83 = ++v24;
    v22 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)&v26[2 * v65 + 4];
    v88 = v22;
    if ( v24 > 0x20 )
      RtlRaiseStatus(-1073741569);
  }
  if ( !v29 )
  {
    v37 = *(_QWORD *)v17->Rsp;
    v17->Rsp += 8LL;
    v17->Rip = v37;
  }
  if ( v85 )
  {
    v38 = (_BYTE *)(v25 + v22->UnwindInfoAddress);
    if ( (int)v11 - v22->BeginAddress - (int)v25 >= (unsigned __int8)v38[1] && ((*v38 >> 3) & (unsigned __int8)v85) != 0 )
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
