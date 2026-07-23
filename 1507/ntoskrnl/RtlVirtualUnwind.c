/*
 * XREFs of RtlVirtualUnwind @ 0x14012E39C
 * Callers:
 *     RtlDispatchException @ 0x14001BBB0 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x14001C500 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x140246A34 (RtlRaiseException.c)
 * Callees:
 *     RtlpUnwindEpilogue @ 0x140005800 (RtlpUnwindEpilogue.c)
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     RtlpUnwindOpSlots @ 0x14001D3DC (RtlpUnwindOpSlots.c)
 *     RtlpSameFunction @ 0x1401609E0 (RtlpSameFunction.c)
 *     RtlpTrivialFunction @ 0x14017E660 (RtlpTrivialFunction.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

PEXCEPTION_ROUTINE __stdcall RtlVirtualUnwind(DWORD HandlerType, DWORD64 ImageBase, DWORD64 ControlPc, PRUNTIME_FUNCTION FunctionEntry, struct _CONTEXT *ContextRecord, PVOID *HandlerData, PDWORD64 EstablisherFrame, PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)
{
  EXCEPTION_DISPOSITION (__cdecl *v8)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // r15
  DWORD64 v9; // rdi
  PRUNTIME_FUNCTION v10; // r13
  DWORD64 v12; // r11
  int v14; // r12d
  unsigned int v15; // r14d
  unsigned int v16; // ebx
  struct _CONTEXT *v17; // rbx
  PDWORD64 v18; // rbp
  unsigned __int64 v19; // r11
  unsigned int v20; // edx
  DWORD64 v21; // r9
  _BYTE *v22; // r14
  unsigned int v23; // ebp
  __int64 v24; // rdi
  char v25; // r10
  unsigned int v26; // ecx
  __int64 v27; // r9
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  unsigned __int64 *v31; // rdx
  unsigned __int64 *v32; // rdx
  unsigned __int64 v33; // rcx
  unsigned int v35; // ecx
  int v36; // edx
  unsigned int v37; // edx
  int v38; // eax
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  unsigned __int64 *v42; // rdx
  unsigned __int64 *v43; // r8
  char v44; // al
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rcx
  __int16 v47; // ax
  unsigned int v48; // r10d
  int v49; // r8d
  int v50; // ecx
  unsigned int i; // r9d
  __int16 v52; // ax
  int v53; // edx
  struct _M128A *v54; // rdx
  __int64 v55; // rcx
  int v56; // eax
  char v57; // r8
  _BYTE *v58; // rcx
  unsigned int v59; // r12d
  char v60; // al
  char v61; // dl
  unsigned __int64 v62; // rcx
  _BYTE *v63; // r8
  __int64 v64; // r9
  unsigned int v65; // ebp
  unsigned __int16 v66; // cx
  __int64 v67; // rax
  bool v68; // cf
  char v69; // dl
  bool v70; // zf
  _BYTE *v71; // r14
  int v72; // eax
  unsigned __int64 BeginAddress; // rcx
  unsigned __int64 v74; // r14
  unsigned int *v75; // rax
  char *v76; // rdx
  char v77; // al
  char v78; // al
  unsigned __int64 v79; // rcx
  char v80; // cl
  unsigned __int64 *Rsp; // r8
  __int64 v82; // r9
  unsigned __int64 *v83; // r9
  __int64 v84; // r8
  unsigned __int64 v85; // rcx
  unsigned __int64 v86; // rcx
  unsigned __int64 *v87; // r8
  struct _M128A *v88; // r8
  __int64 v89; // rcx
  unsigned __int64 v90; // [rsp+40h] [rbp-58h]
  EXCEPTION_DISPOSITION (__cdecl *v91)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+48h] [rbp-50h]
  DWORD v92; // [rsp+A0h] [rbp+8h]
  char v94; // [rsp+B0h] [rbp+18h]
  unsigned int v95; // [rsp+B8h] [rbp+20h]

  v8 = 0LL;
  v9 = ImageBase + FunctionEntry->UnwindData;
  v10 = FunctionEntry;
  v12 = ImageBase;
  v14 = 0;
  if ( ControlPc <= (unsigned __int64)MmHighestUserAddress && (v9 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v15 = *(_BYTE *)v9 & 7;
  if ( (HandlerType & 0x80000000) != 0 && v15 < 2 )
  {
    if ( !(unsigned int)RtlpTrivialFunction(FunctionEntry, ImageBase, ControlPc, v9) )
      return v91;
    v12 = ImageBase;
    v14 = 1;
  }
  v92 = HandlerType & 0x7FFFFFFF;
  v16 = ControlPc - v10->BeginAddress - v12;
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
    v44 = *(_BYTE *)(v9 + 3);
  }
  else
  {
    v65 = 0;
    if ( *(_BYTE *)(v9 + 2) )
    {
      do
      {
        v66 = *(_WORD *)(v9 + 2LL * v65 + 4);
        if ( (HIBYTE(v66) & 0xF) == 3 )
          break;
        v65 += RtlpUnwindOpSlots(v66);
      }
      while ( v65 < *(unsigned __int8 *)(v9 + 2) );
      v12 = ImageBase;
    }
    v67 = v65;
    v18 = EstablisherFrame;
    v68 = v16 < *(unsigned __int8 *)(v9 + 2 * v67 + 4);
    v17 = ContextRecord;
    if ( v68 )
      goto LABEL_5;
    v44 = *(_BYTE *)(v9 + 3);
  }
  v45 = *(&v17->Rax + (v44 & 0xF));
  *v18 = v45;
  *v18 = v45 - (*(_BYTE *)(v9 + 3) & 0xF0);
LABEL_6:
  if ( v14 )
    goto LABEL_7;
  if ( v15 >= 2 )
  {
    if ( *(_BYTE *)(v9 + 2) )
    {
      v47 = *(_WORD *)(v9 + 4);
      if ( (HIBYTE(v47) & 0xF) == 6 )
      {
        v48 = (unsigned __int8)v47;
        v49 = ControlPc - v12;
        if ( (v47 & 0x1000) != 0 )
        {
          v50 = v10->EndAddress - (unsigned __int8)v47;
          if ( v49 - v50 < (unsigned int)(unsigned __int8)v47 )
          {
LABEL_89:
            RtlpUnwindEpilogue(v12, ControlPc, v49 - v50, v10, (__int64)v17, (__int64)ContextPointers, 0LL, 0LL);
            return v8;
          }
        }
        for ( i = 1; i < *(unsigned __int8 *)(v9 + 2); ++i )
        {
          v52 = *(_WORD *)(v9 + 2LL * i + 4);
          if ( (HIBYTE(v52) & 0xF) != 6 )
            break;
          v53 = (unsigned __int8)v52 + (HIBYTE(v52) >> 4 << 8);
          if ( !v53 )
            break;
          v50 = v10->EndAddress - v53;
          if ( v49 - v50 < v48 )
            goto LABEL_89;
        }
      }
    }
    goto LABEL_7;
  }
  v57 = *(_BYTE *)ControlPc;
  v58 = (_BYTE *)ControlPc;
  v59 = 0;
  if ( *(_BYTE *)ControlPc == 72 )
  {
    v60 = *(_BYTE *)(ControlPc + 1);
    if ( v60 == -125 && *(_BYTE *)(ControlPc + 2) == 0xC4 )
    {
LABEL_139:
      v58 = (_BYTE *)(ControlPc + 4);
      goto LABEL_77;
    }
    if ( v60 == -127 && *(_BYTE *)(ControlPc + 2) == 0xC4 )
      goto LABEL_141;
  }
  if ( (v57 & 0xFE) != 0x48 )
    goto LABEL_77;
  if ( *(_BYTE *)(ControlPc + 1) != 0x8D )
    goto LABEL_77;
  v59 = *(_BYTE *)(ControlPc + 2) & 7 | (8 * (v57 & 1));
  if ( !v59 || v59 != (*(_BYTE *)(v9 + 3) & 0xF) )
    goto LABEL_77;
  v69 = *(_BYTE *)(ControlPc + 2) & 0xF8;
  if ( v69 == 96 )
    goto LABEL_139;
  if ( v69 == -96 )
LABEL_141:
    v58 = (_BYTE *)(ControlPc + 7);
  while ( 1 )
  {
LABEL_77:
    while ( (*v58 & 0xF8) == 0x58 )
      ++v58;
    if ( (*v58 & 0xF0) != 0x40 || (v58[1] & 0xF8) != 0x58 )
      break;
    v58 += 2;
  }
  if ( *v58 == 0xF2 )
    ++v58;
  v61 = *v58;
  if ( (unsigned __int8)(*v58 + 62) <= 1u || v61 == -13 && v58[1] == 0xC3 )
  {
LABEL_160:
    v76 = (char *)ControlPc;
    if ( (*(_BYTE *)ControlPc & 0xF8) == 0x48 )
    {
      v77 = *(_BYTE *)(ControlPc + 1);
      switch ( v77 )
      {
        case -125:
          v17->Rsp += *(char *)(ControlPc + 3);
LABEL_168:
          v76 = (char *)(ControlPc + 4);
          goto LABEL_172;
        case -127:
          v17->Rsp += *(unsigned __int8 *)(ControlPc + 3) | ((*(unsigned __int8 *)(ControlPc + 4) | (*(unsigned __int16 *)(ControlPc + 5) << 8)) << 8);
          goto LABEL_171;
        case -115:
          v78 = *(_BYTE *)(ControlPc + 2) & 0xF8;
          if ( v78 == 96 )
          {
            v79 = *(&v17->Rax + v59);
            v17->Rsp = v79;
            v17->Rsp = v79 + *(char *)(ControlPc + 3);
            goto LABEL_168;
          }
          if ( v78 != -96 )
            goto LABEL_172;
          v17->Rsp = *(&v17->Rax + v59)
                   + (*(unsigned __int8 *)(ControlPc + 3) | ((*(unsigned __int8 *)(ControlPc + 4) | (*(unsigned __int16 *)(ControlPc + 5) << 8)) << 8));
LABEL_171:
          v76 = (char *)(ControlPc + 7);
          goto LABEL_172;
      }
    }
    while ( 1 )
    {
LABEL_172:
      while ( 1 )
      {
        v80 = *v76;
        if ( (*v76 & 0xF8) != 0x58 )
          break;
        Rsp = (unsigned __int64 *)v17->Rsp;
        v82 = v80 & 7;
        if ( ControlPc <= (unsigned __int64)MmHighestUserAddress && ((unsigned __int8)Rsp & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        *(&v17->Rax + v82) = *Rsp;
        if ( ContextPointers )
          ContextPointers->IntegerContext[v82] = Rsp;
        v17->Rsp += 8LL;
        ++v76;
      }
      if ( (v80 & 0xF0) != 0x40 || (v76[1] & 0xF8) != 0x58 )
        break;
      v83 = (unsigned __int64 *)v17->Rsp;
      v84 = v76[1] & 7 | (8 * (v80 & 1u));
      if ( ControlPc <= (unsigned __int64)MmHighestUserAddress && ((unsigned __int8)v83 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(&v17->Rax + v84) = *v83;
      if ( ContextPointers )
        ContextPointers->IntegerContext[v84] = v83;
      v17->Rsp += 8LL;
      v76 += 2;
    }
    if ( ControlPc <= (unsigned __int64)MmHighestUserAddress )
    {
      v85 = v17->Rsp;
      if ( (v85 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    v86 = *(_QWORD *)v17->Rsp;
    v17->Rsp += 8LL;
    v17->Rip = v86;
    return v8;
  }
  if ( ((v61 + 23) & 0xFD) == 0 )
  {
    v71 = &v58[-v12];
    if ( v61 == -21 )
      v72 = (char)v58[1] + 2;
    else
      v72 = *(_DWORD *)(v58 + 1) + 5;
    BeginAddress = v10->BeginAddress;
    v74 = (unsigned __int64)&v71[v72];
    if ( v74 < BeginAddress || v74 >= v10->EndAddress )
    {
      v75 = (unsigned int *)RtlpSameFunction(v10, v12, v74 + v12);
      if ( !v75 )
        goto LABEL_160;
      v70 = v74 == *v75;
    }
    else
    {
      if ( v74 != BeginAddress )
        goto LABEL_7;
      v70 = (*(_BYTE *)v9 & 0x20) == 0;
    }
    goto LABEL_159;
  }
  if ( v61 == -1 && v58[1] == 37 )
    goto LABEL_160;
  if ( (v61 & 0xF8) == 0x48 && v58[1] == 0xFF )
  {
    v70 = (v58[2] & 0x38) == 32;
LABEL_159:
    if ( v70 )
      goto LABEL_160;
  }
LABEL_7:
  v19 = *v18;
  v20 = 0;
  v21 = ImageBase;
  v90 = *v18;
  v95 = 0;
  while ( 1 )
  {
    v22 = (_BYTE *)(v21 + v10->UnwindData);
    v23 = ControlPc - v10->BeginAddress - v21;
    v94 = 0;
    LODWORD(v24) = 0;
    v25 = 0;
    if ( ControlPc <= (unsigned __int64)MmHighestUserAddress && ((unsigned __int8)v22 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v22[2] )
    {
      do
      {
        v26 = v22[2 * (unsigned int)v24 + 5] & 0xF;
        v27 = (unsigned __int8)v22[2 * (unsigned int)v24 + 5] >> 4;
        if ( v23 < (unsigned __int8)v22[2 * (unsigned int)v24 + 4] )
        {
          v56 = RtlpUnwindOpSlots(*(_WORD *)&v22[2 * (unsigned int)v24 + 4]);
          v19 = v90;
          LODWORD(v24) = v56 + v24;
        }
        else
        {
          if ( v26 > 5 )
          {
            v35 = v26 - 6;
            if ( v35 )
            {
              v39 = v35 - 1;
              if ( v39 )
              {
                v40 = v39 - 1;
                if ( v40 )
                {
                  v41 = v40 - 1;
                  if ( v41 )
                  {
                    if ( v41 != 1 )
LABEL_202:
                      RtlRaiseStatus(-1073741569);
                    v42 = (unsigned __int64 *)v17->Rsp;
                    v94 = 1;
                    v43 = v42 + 3;
                    if ( (_DWORD)v27 )
                    {
                      ++v42;
                      ++v43;
                    }
                    if ( ControlPc <= (unsigned __int64)MmHighestUserAddress )
                    {
                      if ( ((unsigned __int8)v42 & 3) != 0 )
                        ExRaiseDatatypeMisalignment();
                      if ( ControlPc <= (unsigned __int64)MmHighestUserAddress && ((unsigned __int8)v43 & 3) != 0 )
                        ExRaiseDatatypeMisalignment();
                    }
                    v17->Rip = *v42;
                    v17->Rsp = *v43;
                  }
                  else
                  {
                    v24 = (unsigned int)(v24 + 2);
                    v88 = (struct _M128A *)(v19
                                          + *(unsigned __int16 *)&v22[2 * (unsigned int)(v24 - 1) + 4]
                                          + (*(unsigned __int16 *)&v22[2 * v24 + 4] << 16));
                    if ( ControlPc <= (unsigned __int64)MmHighestUserAddress
                      && (((_BYTE)v19 + (unsigned __int8)*(_WORD *)&v22[2 * (unsigned int)(v24 - 1) + 4]) & 3) != 0 )
                    {
                      ExRaiseDatatypeMisalignment();
                    }
                    v89 = (unsigned int)v27;
                    v17->FltSave.XmmRegisters[v89].Low = v88->Low;
                    v17->FltSave.XmmRegisters[v89].High = v88->High;
                    if ( ContextPointers )
                      ContextPointers->FloatingContext[v27] = v88;
                  }
                }
                else
                {
                  v24 = (unsigned int)(v24 + 1);
                  v54 = (struct _M128A *)(v19 + 16 * (unsigned int)*(unsigned __int16 *)&v22[2 * v24 + 4]);
                  if ( ControlPc <= (unsigned __int64)MmHighestUserAddress && ((unsigned __int8)v54 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  v55 = (unsigned int)v27;
                  v17->FltSave.XmmRegisters[v55].Low = v54->Low;
                  v17->FltSave.XmmRegisters[v55].High = v54->High;
                  if ( ContextPointers )
                    ContextPointers->FloatingContext[v27] = v54;
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
          else if ( v26 == 5 )
          {
            v24 = (unsigned int)(v24 + 2);
            v87 = (unsigned __int64 *)(v19
                                     + *(unsigned __int16 *)&v22[2 * (unsigned int)(v24 - 1) + 4]
                                     + (*(unsigned __int16 *)&v22[2 * v24 + 4] << 16));
            if ( ControlPc <= (unsigned __int64)MmHighestUserAddress
              && (((_BYTE)v19 + (unsigned __int8)*(_WORD *)&v22[2 * (unsigned int)(v24 - 1) + 4]) & 3) != 0 )
            {
              ExRaiseDatatypeMisalignment();
            }
            *(&v17->Rax + v27) = *v87;
            if ( ContextPointers )
              ContextPointers->IntegerContext[v27] = v87;
          }
          else if ( (v22[2 * (unsigned int)v24 + 5] & 0xF) != 0 )
          {
            v28 = v26 - 1;
            if ( v28 )
            {
              v29 = v28 - 1;
              if ( v29 )
              {
                v30 = v29 - 1;
                if ( v30 )
                {
                  if ( v30 != 1 )
                    goto LABEL_202;
                  v24 = (unsigned int)(v24 + 1);
                  v31 = (unsigned __int64 *)(v19 + 8 * (unsigned int)*(unsigned __int16 *)&v22[2 * v24 + 4]);
                  if ( ControlPc <= (unsigned __int64)MmHighestUserAddress && ((unsigned __int8)v31 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  *(&v17->Rax + v27) = *v31;
                  if ( ContextPointers )
                    ContextPointers->IntegerContext[v27] = v31;
                }
                else
                {
                  v46 = *(&v17->Rax + (v22[3] & 0xF));
                  v17->Rsp = v46;
                  v17->Rsp = v46 - (v22[3] & 0xF0);
                }
              }
              else
              {
                v17->Rsp += (unsigned int)(8 * v27 + 8);
              }
            }
            else
            {
              v24 = (unsigned int)(v24 + 1);
              v36 = *(unsigned __int16 *)&v22[2 * v24 + 4];
              if ( (_DWORD)v27 )
              {
                v24 = (unsigned int)(v24 + 1);
                v37 = (*(unsigned __int16 *)&v22[2 * v24 + 4] << 16) + v36;
              }
              else
              {
                v37 = 8 * v36;
              }
              v17->Rsp += v37;
            }
          }
          else
          {
            v32 = (unsigned __int64 *)v17->Rsp;
            if ( ControlPc <= (unsigned __int64)MmHighestUserAddress && ((unsigned __int8)v32 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            *(&v17->Rax + v27) = *v32;
            if ( ContextPointers )
              ContextPointers->IntegerContext[v27] = v32;
            v17->Rsp += 8LL;
          }
          LODWORD(v24) = v24 + 1;
        }
      }
      while ( (unsigned int)v24 < (unsigned __int8)v22[2] );
      v25 = v94;
      v20 = v95;
      v21 = ImageBase;
    }
    if ( (*v22 & 0x20) == 0 )
      break;
    v38 = (unsigned __int8)v22[2];
    if ( (v38 & 1) != 0 )
      ++v38;
    v10 = (PRUNTIME_FUNCTION)&v22[2 * v38 + 4];
    if ( ControlPc <= (unsigned __int64)MmHighestUserAddress && ((unsigned __int8)v10 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v95 = ++v20;
    if ( v20 > 0x20 )
      RtlRaiseStatus(-1073741569);
  }
  if ( !v25 )
  {
    if ( ControlPc <= (unsigned __int64)MmHighestUserAddress )
    {
      v62 = v17->Rsp;
      if ( (v62 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    v33 = *(_QWORD *)v17->Rsp;
    v17->Rsp += 8LL;
    v17->Rip = v33;
  }
  if ( v92 )
  {
    v63 = (_BYTE *)(v21 + v10->UnwindData);
    if ( ControlPc <= (unsigned __int64)MmHighestUserAddress && ((unsigned __int8)v63 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (int)ControlPc - v10->BeginAddress - (int)v21 >= (unsigned __int8)v63[1]
      && ((*v63 >> 3) & (unsigned __int8)v92) != 0 )
    {
      v64 = (unsigned __int8)v63[2];
      if ( (v64 & 1) != 0 )
        v64 = (unsigned int)(v64 + 1);
      *HandlerData = &v63[2 * (unsigned int)(v64 + 2) + 4];
      return (PEXCEPTION_ROUTINE)(ImageBase + *(unsigned int *)&v63[2 * v64 + 4]);
    }
  }
  return v8;
}
