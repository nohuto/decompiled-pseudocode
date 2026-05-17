/*
 * XREFs of RtlSetEnvironmentVar @ 0x18005F2B0
 * Callers:
 *     RtlSetEnvironmentVariable @ 0x18005F260 (RtlSetEnvironmentVariable.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800094E0 (NtdllpFreeStringRoutine.c)
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     RtlSizeHeap @ 0x180046180 (RtlSizeHeap.c)
 *     RtlpAllocateEnvBlock @ 0x18005FC78 (RtlpAllocateEnvBlock.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlSetEnvironmentVar(
        unsigned __int64 *a1,
        _WORD *a2,
        unsigned __int64 a3,
        _WORD *a4,
        unsigned __int64 a5)
{
  _WORD *v5; // r12
  unsigned __int64 i; // rax
  __int16 v8; // cx
  unsigned __int64 j; // rax
  _PEB *ProcessEnvironmentBlock; // rcx
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  unsigned __int64 Environment; // rbx
  char *v13; // rsi
  char *v14; // r14
  char *v15; // r14
  __int16 v16; // ax
  char v17; // r15
  _RTL_USER_PROCESS_PARAMETERS *v18; // rcx
  char v19; // bl
  __int16 v20; // ax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r13
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // r12
  char *v25; // r15
  __int64 v26; // rbx
  char *v27; // rdi
  char *v28; // rdi
  __int64 v29; // rbx
  unsigned __int64 v30; // r15
  char *EnvBlock; // r12
  char *v32; // rdi
  char *v33; // rdi
  char *v34; // rsi
  unsigned __int64 v35; // rbx
  unsigned __int16 *v36; // r9
  char *v37; // r10
  unsigned __int64 v38; // rax
  unsigned __int16 *v39; // r11
  unsigned int v40; // edx
  unsigned int v41; // r8d
  int v42; // edx
  char *v43; // r13
  unsigned __int64 v44; // rdi
  char *v45; // r12
  _RTL_CRITICAL_SECTION *FastPebLock; // rdx
  char v48; // [rsp+20h] [rbp-A8h]
  char *v49; // [rsp+28h] [rbp-A0h]
  _BYTE *v50; // [rsp+30h] [rbp-98h]
  int v51; // [rsp+38h] [rbp-90h]
  _RTL_USER_PROCESS_PARAMETERS *v52; // [rsp+40h] [rbp-88h]
  unsigned __int64 v53; // [rsp+50h] [rbp-78h]
  char *v54; // [rsp+58h] [rbp-70h]
  unsigned __int64 v55; // [rsp+68h] [rbp-60h]
  char *v56; // [rsp+70h] [rbp-58h]
  _WORD *v58; // [rsp+D8h] [rbp+10h]
  char v59; // [rsp+E0h] [rbp+18h]

  v58 = a2;
  v5 = a4;
  v53 = a3;
  v54 = 0LL;
  v55 = 0LL;
  v59 = 0;
  v48 = 0;
  if ( !a3 || !*a2 )
    return 3221225485LL;
  for ( i = 1LL; i < a3; ++i )
  {
    v8 = a2[i];
    if ( !v8 || v8 == 61 )
      return 3221225485LL;
  }
  if ( v5 )
  {
    for ( j = 0LL; j < a5; ++j )
    {
      if ( !v5[j] )
        return 3221225485LL;
    }
  }
  ProcessEnvironmentBlock = NtCurrentTeb()->ProcessEnvironmentBlock;
  ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
  v52 = ProcessParameters;
  v51 = 0;
  v56 = 0LL;
  if ( !a1 )
  {
    v48 = 1;
    v59 = 1;
    RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    Environment = (unsigned __int64)ProcessParameters->Environment;
    v50 = (_BYTE *)Environment;
    a3 = v53;
LABEL_15:
    a2 = v58;
    goto LABEL_16;
  }
  Environment = *a1;
  v50 = (_BYTE *)*a1;
  if ( ProcessEnvironmentBlock->ProcessParameters->Environment == (void *)*a1 )
  {
    FastPebLock = ProcessEnvironmentBlock->FastPebLock;
    if ( !FastPebLock || FastPebLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
      v59 = 1;
    goto LABEL_15;
  }
LABEL_16:
  v13 = (char *)Environment;
  v14 = 0LL;
  if ( Environment )
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
      v36 = a2;
      v37 = v45;
      v38 = v35;
      if ( a3 <= v35 )
        v38 = a3;
      v39 = &a2[v38];
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
            a3 = v53;
            goto LABEL_89;
          }
        }
        ++v36;
        v37 += 2;
      }
      a3 = v53;
      v42 = v53 - v35;
LABEL_89:
      if ( !v42 )
        break;
      if ( v42 < 0 && !v56 )
        v56 = v45;
      a2 = v58;
      v5 = a4;
      Environment = (unsigned __int64)v50;
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
    if ( a4 )
    {
      if ( a5 <= v44 )
      {
        memmove(v43, a4, 2 * a5);
        *(_WORD *)&v43[2 * a5] = 0;
        if ( a5 != v44 )
          memmove(&v43[2 * a5 + 2], v13, 2 * (unsigned int)((v14 - v13) >> 1));
        v17 = v59;
        if ( v59 )
          memset(RtlpEnvironLookupTable, 0, 0x468uLL);
        goto LABEL_28;
      }
      v30 = 2 * (a5 + ((v14 - v50) >> 1) - v55);
      if ( v30 < RtlSizeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v50) )
      {
        v33 = &v54[2 * a5];
        memmove(v33 + 2, v13, 2 * (unsigned int)((v14 - v13) >> 1));
        *(_WORD *)v33 = 0;
        v5 = a4;
        memmove(v54, a4, 2 * a5);
        Environment = (unsigned __int64)v50;
        if ( !a1 )
        {
          v52->Environment = v50;
          v52->EnvironmentSize = v30;
          ++v52->EnvironmentVersion;
        }
        v17 = v59;
        if ( v59 )
          memset(RtlpEnvironLookupTable, 0, 0x468uLL);
      }
      else
      {
        EnvBlock = (char *)RtlpAllocateEnvBlock(2 * (a5 + ((v14 - v50) >> 1) - v55));
        if ( !EnvBlock )
          goto LABEL_111;
        memmove(EnvBlock, v50, 2LL * (unsigned int)((v54 - v50) >> 1));
        v32 = &EnvBlock[2 * (unsigned int)((v54 - v50) >> 1)];
        memmove(v32, a4, 2 * a5);
        *(_WORD *)&v32[2 * a5] = 0;
        memmove(&v32[2 * a5 + 2], v13, 2 * (unsigned int)((v14 - v13) >> 1));
        if ( a1 )
        {
          *a1 = (unsigned __int64)EnvBlock;
        }
        else
        {
          v52->Environment = EnvBlock;
          v52->EnvironmentSize = v30;
          ++v52->EnvironmentVersion;
        }
        v17 = v59;
        if ( v59 )
          memset(RtlpEnvironLookupTable, 0, 0x468uLL);
        if ( v48 )
        {
          RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
          v48 = 0;
        }
        Environment = (unsigned __int64)v50;
        NtdllpFreeStringRoutine((__int64)v50);
        v5 = a4;
      }
    }
    else
    {
      memmove(v45, v13, 2 * (unsigned int)((v14 - v13) >> 1));
      v17 = v59;
      if ( !v59 )
      {
LABEL_28:
        v5 = a4;
        Environment = (unsigned __int64)v50;
        goto LABEL_29;
      }
      memset(RtlpEnvironLookupTable, 0, 0x468uLL);
      v5 = 0LL;
      Environment = (unsigned __int64)v50;
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
    v18 = v52;
LABEL_33:
    v19 = v59;
    goto LABEL_112;
  }
  if ( !v5 )
    goto LABEL_62;
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
    v21 = RtlSizeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Environment);
    v14 = v13 + 2;
    v22 = v53;
    v23 = a5;
    v24 = 2 * (a5 + v53 + ((__int64)&v13[-Environment + 2] >> 1)) + 4;
    v13 = v49;
  }
  else
  {
    v22 = v53;
    v23 = a5;
    v24 = 2 * (a5 + v53) + 6;
    v21 = 0LL;
  }
  if ( v24 < v21 )
  {
    memmove(&v13[2 * v23 + 4 + 2 * v22], v13, 2 * (unsigned int)((v14 - v13) >> 1));
    memmove(v13, v58, 2 * v22);
    if ( v17 )
      memset(RtlpEnvironLookupTable, 0, 0x468uLL);
    v34 = &v13[2 * v22];
    *(_WORD *)v34 = 61;
    v34 += 2;
    memmove(v34, a4, 2 * v23);
    *(_WORD *)&v34[2 * v23] = 0;
    if ( !a1 )
    {
      v18 = v52;
      v52->Environment = v50;
      v52->EnvironmentSize = v24;
      ++v52->EnvironmentVersion;
      goto LABEL_33;
    }
    goto LABEL_62;
  }
  v25 = (char *)RtlpAllocateEnvBlock(v24);
  if ( v25 )
  {
    if ( v13 )
    {
      v26 = (unsigned int)((__int64)&v13[-Environment] >> 1);
      memmove(v25, v50, 2 * v26);
    }
    else
    {
      v26 = 0LL;
    }
    v27 = &v25[2 * v26];
    memmove(v27, v58, 2 * v22);
    v28 = &v27[2 * v22];
    *(_WORD *)v28 = 61;
    v29 = 2 * a5;
    memmove(v28 + 2, a4, 2 * a5);
    *(_WORD *)&v28[2 * a5 + 2] = 0;
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
    if ( a1 )
    {
      *a1 = (unsigned __int64)v25;
    }
    else
    {
      v52->Environment = v25;
      v52->EnvironmentSize = v24;
      ++v52->EnvironmentVersion;
    }
    if ( v48 )
    {
      RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
      v48 = 0;
    }
    NtdllpFreeStringRoutine((__int64)v50);
    goto LABEL_52;
  }
LABEL_111:
  v51 = -1073741670;
LABEL_62:
  v19 = v59;
LABEL_52:
  v18 = v52;
LABEL_112:
  if ( v51 >= 0 && v19 )
    ++v18->EnvironmentVersion;
  if ( v48 )
    RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  return (unsigned int)v51;
}
