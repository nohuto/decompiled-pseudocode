/*
 * XREFs of RtlSetEnvironmentVar @ 0x180046B90
 * Callers:
 *     RtlSetEnvironmentVariable @ 0x180046B40 (RtlSetEnvironmentVariable.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x18002A210 (NtdllpFreeStringRoutine.c)
 *     RtlSizeHeap @ 0x18002A610 (RtlSizeHeap.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlpAllocateEnvBlock @ 0x180047558 (RtlpAllocateEnvBlock.c)
 *     memmove @ 0x180098200 (memmove.c)
 *     memset @ 0x180098540 (memset.c)
 */

NTSTATUS __cdecl RtlSetEnvironmentVar(
        PVOID *Environment,
        PCWSTR Name,
        SIZE_T NameLength,
        PCWSTR Value,
        SIZE_T ValueLength)
{
  PCWSTR v5; // r12
  SIZE_T i; // rax
  WCHAR v8; // cx
  SIZE_T j; // rax
  _PEB *ProcessEnvironmentBlock; // rcx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  PVOID v12; // rbx
  char *v13; // rsi
  char *v14; // r14
  char *v15; // r14
  __int16 v16; // ax
  char v17; // r15
  _RTL_USER_PROCESS_PARAMETERS *v18; // rcx
  char v19; // bl
  __int16 v20; // ax
  SIZE_T v21; // rax
  SIZE_T v22; // r13
  SIZE_T v23; // rdi
  SIZE_T v24; // r12
  char *v25; // r15
  __int64 v26; // rbx
  char *v27; // rdi
  char *v28; // rdi
  SIZE_T v29; // rbx
  SIZE_T v30; // r15
  char *v31; // rdi
  char *EnvBlock; // r12
  char *v33; // rdi
  char *v34; // rsi
  SIZE_T v35; // rbx
  PCWSTR v36; // r9
  char *v37; // r10
  SIZE_T v38; // rax
  const WCHAR *v39; // r11
  unsigned int v40; // edx
  unsigned int v41; // r8d
  int v42; // edx
  char *v43; // r13
  SIZE_T v44; // rdi
  char *v45; // r12
  _RTL_CRITICAL_SECTION *FastPebLock; // rdx
  char v48; // [rsp+20h] [rbp-A8h]
  char *v49; // [rsp+28h] [rbp-A0h]
  PVOID BaseAddress; // [rsp+30h] [rbp-98h]
  _RTL_USER_PROCESS_PARAMETERS *v51; // [rsp+38h] [rbp-90h]
  NTSTATUS v52; // [rsp+40h] [rbp-88h]
  SIZE_T v53; // [rsp+50h] [rbp-78h]
  char *v54; // [rsp+58h] [rbp-70h]
  SIZE_T v55; // [rsp+60h] [rbp-68h]
  char *v56; // [rsp+68h] [rbp-60h]
  const WCHAR *v58; // [rsp+D8h] [rbp+10h]
  char v59; // [rsp+E0h] [rbp+18h]

  v58 = Name;
  v5 = Value;
  v53 = NameLength;
  v54 = 0LL;
  v55 = 0LL;
  v59 = 0;
  v48 = 0;
  if ( !NameLength || !*Name )
    return -1073741811;
  for ( i = 1LL; i < NameLength; ++i )
  {
    v8 = Name[i];
    if ( !v8 || v8 == 61 )
      return -1073741811;
  }
  if ( v5 )
  {
    for ( j = 0LL; j < ValueLength; ++j )
    {
      if ( !v5[j] )
        return -1073741811;
    }
  }
  ProcessEnvironmentBlock = NtCurrentTeb()->ProcessEnvironmentBlock;
  ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
  v51 = ProcessParameters;
  v52 = 0;
  v56 = 0LL;
  if ( !Environment )
  {
    v48 = 1;
    v59 = 1;
    RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
    v12 = ProcessParameters->Environment;
    BaseAddress = v12;
    NameLength = v53;
LABEL_15:
    Name = v58;
    goto LABEL_16;
  }
  v12 = *Environment;
  BaseAddress = *Environment;
  if ( ProcessEnvironmentBlock->ProcessParameters->Environment == *Environment )
  {
    FastPebLock = ProcessEnvironmentBlock->FastPebLock;
    if ( !FastPebLock || FastPebLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
      v59 = 1;
    goto LABEL_15;
  }
LABEL_16:
  v13 = (char *)v12;
  v14 = 0LL;
  if ( v12 )
  {
    v43 = 0LL;
    v44 = 0LL;
    while ( 1 )
    {
      if ( !*(_WORD *)v13 )
        goto LABEL_105;
      v45 = v13;
      v35 = 0LL;
      while ( 1 )
      {
        v13 += 2;
        if ( !*(_WORD *)v13 )
          break;
        if ( *(_WORD *)v13 == 61 )
        {
          v35 = (v13 - v45) >> 1;
          v13 += 2;
          v43 = v13;
          v54 = v13;
          while ( *(_WORD *)v13 )
            v13 += 2;
          v44 = (v13 - v43) >> 1;
          v55 = v44;
          break;
        }
      }
      v13 += 2;
      v36 = Name;
      v37 = v45;
      v38 = v35;
      if ( NameLength <= v35 )
        v38 = NameLength;
      v39 = &Name[v38];
      while ( v36 < v39 )
      {
        v40 = *v36;
        v41 = *(unsigned __int16 *)v37;
        if ( v40 != v41 )
        {
          if ( v40 >= 0x61 )
          {
            if ( v40 > 0x7A )
              v40 = (unsigned __int16)(v40
                                     + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                + 2LL
                                                * ((v40 & 0xF)
                                                 + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                       + 2LL
                                                                       * (((unsigned __int8)v40 >> 4)
                                                                        + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2LL * BYTE1(v40)))))));
            else
              v40 -= 32;
          }
          if ( v41 >= 0x61 )
          {
            if ( v41 > 0x7A )
              v41 = (unsigned __int16)(v41
                                     + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                + 2LL
                                                * ((v41 & 0xF)
                                                 + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                       + 2LL
                                                                       * (((unsigned __int8)v41 >> 4)
                                                                        + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2LL * BYTE1(v41)))))));
            else
              v41 -= 32;
          }
          if ( v40 != v41 )
          {
            v42 = v40 - v41;
            NameLength = v53;
            goto LABEL_89;
          }
        }
        ++v36;
        v37 += 2;
      }
      NameLength = v53;
      v42 = v53 - v35;
LABEL_89:
      if ( !v42 )
        break;
      if ( v42 < 0 && !v56 )
        v56 = v45;
      Name = v58;
      v5 = Value;
      v12 = BaseAddress;
    }
    v15 = v13;
    while ( *(_WORD *)v15 )
    {
      do
      {
        v16 = *(_WORD *)v15;
        v15 += 2;
      }
      while ( v16 );
    }
    v14 = v15 + 2;
    if ( Value )
    {
      if ( ValueLength <= v44 )
      {
        memmove(v43, Value, 2 * ValueLength);
        *(_WORD *)&v43[2 * ValueLength] = 0;
        if ( ValueLength != v44 )
          memmove(&v43[2 * ValueLength + 2], v13, 2 * (unsigned int)((v14 - v13) >> 1));
        v17 = v59;
        if ( v59 )
          memset(RtlpEnvironLookupTable, 0, 0x468uLL);
        goto LABEL_28;
      }
      v30 = 2 * (ValueLength + ((v14 - (_BYTE *)BaseAddress) >> 1) - v55);
      if ( v30 >= RtlSizeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress) )
      {
        EnvBlock = (char *)RtlpAllocateEnvBlock(2 * (ValueLength + ((v14 - (_BYTE *)BaseAddress) >> 1) - v55));
        if ( !EnvBlock )
          goto LABEL_111;
        memmove(EnvBlock, BaseAddress, 2LL * (unsigned int)((v54 - (_BYTE *)BaseAddress) >> 1));
        v33 = &EnvBlock[2 * (unsigned int)((v54 - (_BYTE *)BaseAddress) >> 1)];
        memmove(v33, Value, 2 * ValueLength);
        *(_WORD *)&v33[2 * ValueLength] = 0;
        memmove(&v33[2 * ValueLength + 2], v13, 2 * (unsigned int)((v14 - v13) >> 1));
        if ( Environment )
        {
          *Environment = EnvBlock;
        }
        else
        {
          v51->Environment = EnvBlock;
          v51->EnvironmentSize = v30;
          ++v51->EnvironmentVersion;
        }
        v17 = v59;
        if ( v59 )
          memset(RtlpEnvironLookupTable, 0, 0x468uLL);
        if ( v48 )
        {
          RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
          v48 = 0;
        }
        v12 = BaseAddress;
        NtdllpFreeStringRoutine(BaseAddress);
        v5 = Value;
      }
      else
      {
        v31 = &v54[2 * ValueLength];
        memmove(v31 + 2, v13, 2 * (unsigned int)((v14 - v13) >> 1));
        *(_WORD *)v31 = 0;
        v5 = Value;
        memmove(v54, Value, 2 * ValueLength);
        v12 = BaseAddress;
        if ( !Environment )
        {
          v51->Environment = BaseAddress;
          v51->EnvironmentSize = v30;
          ++v51->EnvironmentVersion;
        }
        v17 = v59;
        if ( v59 )
          memset(RtlpEnvironLookupTable, 0, 0x468uLL);
      }
    }
    else
    {
      memmove(v45, v13, 2 * (unsigned int)((v14 - v13) >> 1));
      v17 = v59;
      if ( !v59 )
      {
LABEL_28:
        v5 = Value;
        v12 = BaseAddress;
        goto LABEL_29;
      }
      memset(RtlpEnvironLookupTable, 0, 0x468uLL);
      v5 = 0LL;
      v12 = BaseAddress;
    }
  }
  else
  {
LABEL_105:
    v17 = v59;
  }
LABEL_29:
  if ( v56 )
    v13 = v56;
  v49 = v13;
  if ( v14 )
  {
    v18 = v51;
LABEL_33:
    v19 = v59;
    goto LABEL_112;
  }
  if ( !v5 )
    goto LABEL_59;
  if ( v13 )
  {
    while ( *(_WORD *)v13 )
    {
      do
      {
        v20 = *(_WORD *)v13;
        v13 += 2;
      }
      while ( v20 );
    }
    v21 = RtlSizeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
    v14 = v13 + 2;
    v22 = v53;
    v23 = ValueLength;
    v24 = 2 * (ValueLength + v53 + ((v13 + 2 - (_BYTE *)v12) >> 1)) + 4;
    v13 = v49;
  }
  else
  {
    v22 = v53;
    v23 = ValueLength;
    v24 = 2 * (ValueLength + v53) + 6;
    v21 = 0LL;
  }
  if ( v24 < v21 )
  {
    memmove(&v13[2 * v22 + 4 + 2 * v23], v13, 2 * (unsigned int)((v14 - v13) >> 1));
    memmove(v13, v58, 2 * v22);
    if ( v17 )
      memset(RtlpEnvironLookupTable, 0, 0x468uLL);
    v34 = &v13[2 * v22];
    *(_WORD *)v34 = 61;
    v34 += 2;
    memmove(v34, Value, 2 * v23);
    *(_WORD *)&v34[2 * v23] = 0;
    if ( !Environment )
    {
      v18 = v51;
      v51->Environment = BaseAddress;
      v51->EnvironmentSize = v24;
      ++v51->EnvironmentVersion;
      goto LABEL_33;
    }
    goto LABEL_59;
  }
  v25 = (char *)RtlpAllocateEnvBlock(v24);
  if ( v25 )
  {
    if ( v13 )
    {
      v26 = (unsigned int)((v13 - (_BYTE *)v12) >> 1);
      memmove(v25, BaseAddress, 2 * v26);
    }
    else
    {
      v26 = 0LL;
    }
    v27 = &v25[2 * v26];
    memmove(v27, v58, 2 * v22);
    v28 = &v27[2 * v22];
    *(_WORD *)v28 = 61;
    v29 = 2 * ValueLength;
    memmove(v28 + 2, Value, 2 * ValueLength);
    *(_WORD *)&v28[2 * ValueLength + 2] = 0;
    if ( v13 )
    {
      memmove(&v28[v29 + 4], v13, 2 * (unsigned int)((v14 - v13) >> 1));
      v19 = v59;
      if ( v59 )
        memset(RtlpEnvironLookupTable, 0, 0x468uLL);
    }
    else
    {
      *(_WORD *)&v28[v29 + 4] = 0;
      v19 = v59;
    }
    if ( Environment )
    {
      *Environment = v25;
    }
    else
    {
      v51->Environment = v25;
      v51->EnvironmentSize = v24;
      ++v51->EnvironmentVersion;
    }
    if ( v48 )
    {
      RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
      v48 = 0;
    }
    NtdllpFreeStringRoutine(BaseAddress);
    goto LABEL_52;
  }
LABEL_111:
  v52 = -1073741670;
LABEL_59:
  v19 = v59;
LABEL_52:
  v18 = v51;
LABEL_112:
  if ( v52 >= 0 && v19 )
    ++v18->EnvironmentVersion;
  if ( v48 )
    RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  return v52;
}
