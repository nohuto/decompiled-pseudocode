/*
 * XREFs of PiDqQueryApplyObjectEvent @ 0x14053CF2C
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x140441C48 (PiDqObjectManagerServiceActionQueue.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x140017F60 (RtlLookupElementGenericTableAvl.c)
 *     _wcsicmp @ 0x1401723FC (_wcsicmp.c)
 *     PiDqQueryEvaluateFilter @ 0x14043E724 (PiDqQueryEvaluateFilter.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x14043EC3C (PiPnpRtlApplyMandatoryFilters.c)
 *     PiDqQueryAppendActionEntry @ 0x1404407A4 (PiDqQueryAppendActionEntry.c)
 *     PiDqQueryActionQueueEntryCreate @ 0x1404407EC (PiDqQueryActionQueueEntryCreate.c)
 *     PiDqQueryUnlock @ 0x14044239C (PiDqQueryUnlock.c)
 *     PiDqQueryLock @ 0x140442428 (PiDqQueryLock.c)
 *     PiDqQueryAddObjectToResultSet @ 0x1404E6010 (PiDqQueryAddObjectToResultSet.c)
 *     PiDqQueryFreeActiveData @ 0x14053D550 (PiDqQueryFreeActiveData.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x14053D5D8 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiDqSameUserHive @ 0x1406823D8 (PiDqSameUserHive.c)
 */

void __fastcall PiDqQueryApplyObjectEvent(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v4; // r9
  __int64 v5; // rdi
  int EvaluateFilter; // r15d
  char v8; // r13
  char v9; // r12
  __int64 v10; // rcx
  unsigned int v11; // r12d
  unsigned int v12; // r14d
  unsigned int v13; // r15d
  __int64 v14; // rsi
  unsigned int v15; // r15d
  __int64 v16; // r14
  __int64 v17; // rsi
  bool v18; // r14
  __int64 v19; // rdx
  int v20; // eax
  char v21; // cl
  bool v22; // si
  int v23; // r14d
  __int64 v24; // rdx
  __int64 v25; // rcx
  const wchar_t *v26; // rcx
  __int64 v27; // rcx
  const wchar_t *v28; // rcx
  int v29; // ecx
  int v30; // eax
  unsigned int v31; // r13d
  unsigned int v32; // r12d
  __int64 v33; // r15
  __int64 v34; // rsi
  char v35; // al
  __int64 v36; // rax
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rdx
  int v41; // eax
  unsigned int v42; // r15d
  __int64 v43; // r14
  const wchar_t *i; // rsi
  int v45; // eax
  __int64 v46; // rax
  const wchar_t *j; // r14
  int v48; // eax
  __int64 v49; // rax
  int v50; // eax
  int v51; // eax
  int v52; // ecx
  const wchar_t *v53; // rsi
  int v54; // eax
  __int64 v55; // rax
  int v56; // eax
  __int64 v57; // rdx
  int v58; // [rsp+34h] [rbp-Ch]
  __int64 *Buffer; // [rsp+88h] [rbp+48h] BYREF
  char v60; // [rsp+90h] [rbp+50h] BYREF
  char v61; // [rsp+98h] [rbp+58h]

  v3 = *(_DWORD *)(a2 + 4);
  v4 = 0LL;
  v58 = 0;
  v5 = a2;
  EvaluateFilter = 0;
  LOBYTE(Buffer) = 0;
  v8 = 0;
  v61 = 0;
  v9 = 0;
  v60 = 0;
  LOBYTE(a3) = 0;
  if ( (v3 & 3) != 0 || (v3 & 8) == 0 && !*(_DWORD *)(a2 + 76) )
    goto LABEL_29;
  if ( (v3 & 4) != 0 )
  {
    v41 = PiDqSameUserHive(a1 + 32, a2 + 24, &v60);
    v4 = 0LL;
    v58 = v41;
    if ( v41 < 0 )
      goto LABEL_143;
    LOBYTE(a3) = v60;
  }
  v10 = *(_QWORD *)(a1 + 24);
  a2 = *(unsigned int *)(v10 + 40);
  if ( (a2 & 2) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      v42 = 0;
      if ( *(_DWORD *)(v5 + 76) )
      {
        while ( 1 )
        {
          v43 = 32LL * v42;
          if ( *(_DWORD *)(v43 + v5 + 100) != 1 || (_BYTE)a3 )
          {
            if ( !*(_QWORD *)(v43 + v5 + 104) )
              goto LABEL_103;
            for ( i = *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 56LL); *i; i += v46 + 1 )
            {
              v45 = wcsicmp(*(const wchar_t **)(v43 + v5 + 104), i);
              v4 = 0LL;
              if ( !v45 )
                goto LABEL_103;
              v46 = -1LL;
              do
                ++v46;
              while ( i[v46] );
            }
          }
          if ( ++v42 >= *(_DWORD *)(v5 + 76) )
            break;
          LOBYTE(a3) = v60;
        }
      }
    }
    else
    {
LABEL_103:
      v8 = 1;
    }
  }
  else if ( (a2 & 4) != 0 )
  {
    v31 = 0;
    if ( *(_DWORD *)(v10 + 64) )
    {
      while ( 1 )
      {
        v32 = 0;
        v33 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 72LL) + 32LL * v31;
        if ( *(_DWORD *)(v5 + 76) )
        {
          do
          {
            v34 = 32LL * v32;
            if ( *(_DWORD *)(v33 + 16) != *(_DWORD *)(v34 + v5 + 96) )
              goto LABEL_71;
            v36 = *(_QWORD *)(v34 + v5 + 80);
            v37 = *(_QWORD *)v33 - v36;
            if ( *(_QWORD *)v33 == v36 )
              v37 = *(_QWORD *)(v33 + 8) - *(_QWORD *)(v34 + v5 + 88);
            if ( !v37 && (v38 = *(_DWORD *)(v34 + v5 + 100), *(_DWORD *)(v33 + 20) == v38) && (v38 != 1 || (_BYTE)a3) )
            {
              if ( !*(_QWORD *)(v34 + v5 + 104) )
              {
                v8 = 1;
                goto LABEL_28;
              }
              for ( j = *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 56LL); ; j += v49 + 1 )
              {
                if ( !*j )
                {
                  v35 = (char)Buffer;
                  goto LABEL_114;
                }
                v48 = wcsicmp(*(const wchar_t **)(v34 + v5 + 104), j);
                v4 = 0LL;
                if ( !v48 )
                  break;
                v49 = -1LL;
                do
                  ++v49;
                while ( j[v49] );
              }
              v35 = 1;
              LOBYTE(Buffer) = 1;
LABEL_114:
              if ( v35 )
                goto LABEL_76;
            }
            else
            {
LABEL_71:
              v35 = (char)Buffer;
            }
            LOBYTE(a3) = v60;
            ++v32;
          }
          while ( v32 < *(_DWORD *)(v5 + 76) );
          if ( v35 )
            break;
        }
        if ( ++v31 >= *(_DWORD *)(*(_QWORD *)(a1 + 24) + 64LL) )
          break;
        LOBYTE(a3) = v60;
      }
LABEL_76:
      v9 = v61;
      v8 = (char)Buffer;
    }
    else
    {
      v8 = 0;
    }
  }
  else
  {
    v11 = 0;
    if ( *(_DWORD *)(v10 + 64) )
    {
      do
      {
        v15 = 0;
        v16 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 72LL) + 32LL * v11;
        if ( *(_DWORD *)(v5 + 76) )
        {
          while ( 1 )
          {
            v17 = 32LL * v15;
            if ( *(_DWORD *)(v16 + 16) == *(_DWORD *)(v17 + v5 + 96) )
            {
              v25 = *(_QWORD *)v16 - *(_QWORD *)(v17 + v5 + 80);
              if ( *(_QWORD *)v16 == *(_QWORD *)(v17 + v5 + 80) )
                v25 = *(_QWORD *)(v16 + 8) - *(_QWORD *)(v17 + v5 + 88);
              if ( !v25 && *(_DWORD *)(v16 + 20) == *(_DWORD *)(v17 + v5 + 100) )
              {
                v26 = *(const wchar_t **)(v16 + 24);
                a2 = *(_QWORD *)(v17 + v5 + 104);
                if ( v26 == (const wchar_t *)a2
                  || v26 && a2 && (v50 = wcsicmp(v26, (const wchar_t *)a2), v4 = 0LL, !v50) )
                {
                  if ( *(_DWORD *)(v17 + v5 + 100) != 1 || v60 )
                    break;
                }
              }
            }
            if ( ++v15 >= *(_DWORD *)(v5 + 76) )
              goto LABEL_27;
          }
          v8 = 1;
        }
LABEL_27:
        ++v11;
      }
      while ( v11 < *(_DWORD *)(*(_QWORD *)(a1 + 24) + 64LL) );
LABEL_28:
      v9 = v61;
    }
    else
    {
      v9 = 0;
    }
  }
  if ( !*(_DWORD *)(*(_QWORD *)(a1 + 24) + 20LL) )
  {
    if ( (*(_DWORD *)(v5 + 4) & 8) != 0 )
    {
      v9 = 1;
      goto LABEL_20;
    }
    v9 = 0;
  }
  v12 = 0;
  do
  {
    if ( v12 >= *(_DWORD *)(v5 + 76) )
      break;
    v13 = 0;
    v14 = 32LL * v12;
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 80LL) )
    {
      while ( 1 )
      {
        a2 = 56LL * v13;
        a3 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 88LL);
        if ( *(_DWORD *)(a2 + a3 + 24) == *(_DWORD *)(v14 + v5 + 96) )
        {
          v27 = *(_QWORD *)(a2 + a3 + 8) - *(_QWORD *)(v14 + v5 + 80);
          if ( !v27 )
            v27 = *(_QWORD *)(a2 + a3 + 16) - *(_QWORD *)(v14 + v5 + 88);
          if ( !v27 && *(_DWORD *)(a2 + a3 + 28) == *(_DWORD *)(v14 + v5 + 100) )
          {
            v28 = *(const wchar_t **)(a2 + a3 + 32);
            a2 = *(_QWORD *)(v14 + v5 + 104);
            if ( v28 == (const wchar_t *)a2 || v28 && a2 && (v51 = wcsicmp(v28, (const wchar_t *)a2), v4 = 0LL, !v51) )
            {
              if ( *(_DWORD *)(v14 + v5 + 100) != 1 || v60 )
                break;
            }
          }
        }
        if ( ++v13 >= *(_DWORD *)(*(_QWORD *)(a1 + 24) + 80LL) )
          goto LABEL_17;
      }
      v9 = 1;
    }
LABEL_17:
    ++v12;
  }
  while ( !v9 );
LABEL_20:
  EvaluateFilter = v58;
  if ( !v8 && !v9 )
    goto LABEL_22;
LABEL_29:
  PiDqQueryLock(a1, a2, a3, 0LL);
  Buffer = *(__int64 **)(v5 + 8);
  v18 = RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 72), &Buffer) != 0LL;
  PiDqQueryUnlock(a1, v19);
  v20 = *(_DWORD *)(v5 + 4);
  v4 = 0LL;
  if ( (v20 & 2) != 0 )
  {
    if ( !v18 )
    {
      v22 = 0;
      v23 = 0;
      goto LABEL_36;
    }
    goto LABEL_87;
  }
  if ( (v20 & 1) == 0 && !v9 )
  {
    v21 = v18;
    goto LABEL_33;
  }
  a3 = *(_QWORD *)(a1 + 24);
  v29 = *(_DWORD *)(a3 + 20);
  if ( v29 )
  {
    v52 = v29 - 1;
    if ( v52 )
    {
      if ( v52 != 1 )
        goto LABEL_34;
      v53 = *(const wchar_t **)(a3 + 32);
      v21 = 0;
      LOBYTE(Buffer) = 0;
      if ( !*v53 )
        goto LABEL_34;
      while ( !v21 )
      {
        v54 = wcsicmp(v53, *(const wchar_t **)(*(_QWORD *)(v5 + 8) + 16LL));
        v4 = 0LL;
        v21 = v54 == 0;
        v55 = -1LL;
        LOBYTE(Buffer) = v21;
        do
          ++v55;
        while ( v53[v55] );
        v53 += v55 + 1;
        if ( !*v53 )
          goto LABEL_56;
      }
    }
    else
    {
      v56 = wcsicmp(*(const wchar_t **)(a3 + 24), *(const wchar_t **)(*(_QWORD *)(v5 + 8) + 16LL));
      v4 = 0LL;
      if ( v56 )
        goto LABEL_34;
      v21 = 1;
      LOBYTE(Buffer) = 1;
    }
  }
  else
  {
    v21 = 1;
    LOBYTE(Buffer) = 1;
LABEL_56:
    if ( !v21 )
      goto LABEL_34;
  }
  if ( !*(_DWORD *)(*(_QWORD *)(a1 + 24) + 20LL) )
  {
    v30 = PiPnpRtlApplyMandatoryFilters(
            *(__int64 *)&PiPnpRtlCtx,
            *(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL),
            *(_DWORD *)(*(_QWORD *)(v5 + 8) + 28LL),
            0LL,
            (struct _SECURITY_SUBJECT_CONTEXT *)(a1 + 32),
            &Buffer);
    EvaluateFilter = v30;
    if ( v30 == -1073741772 || v30 == -1073741275 )
    {
      v4 = 0LL;
      v21 = 0;
      EvaluateFilter = 0;
      LOBYTE(Buffer) = 0;
    }
    else
    {
      v21 = (char)Buffer;
      v4 = 0LL;
    }
    if ( EvaluateFilter < 0 )
      goto LABEL_143;
  }
  if ( v21 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 88LL) )
    {
      EvaluateFilter = PiDqQueryEvaluateFilter((_QWORD *)a1, *(void **)(*(_QWORD *)(v5 + 8) + 16LL), (bool *)&Buffer);
      if ( EvaluateFilter == -1073741772 )
      {
        v4 = 0LL;
        v21 = 0;
        EvaluateFilter = 0;
      }
      else
      {
        v21 = (char)Buffer;
      }
      if ( EvaluateFilter < 0 )
        goto LABEL_143;
    }
LABEL_33:
    if ( v21 )
    {
      if ( v18 )
      {
        v23 = 2;
        v22 = v8 != 0;
      }
      else
      {
        v23 = 1;
        PiDqQueryLock(a1, a2, a3, v4);
        EvaluateFilter = PiDqQueryAddObjectToResultSet(a1, *(_QWORD *)(v5 + 8));
        PiDqQueryUnlock(a1, v39);
        v22 = 1;
      }
      goto LABEL_36;
    }
  }
LABEL_34:
  if ( v18 )
  {
LABEL_87:
    v23 = 3;
    v22 = 1;
    PiDqQueryLock(a1, a2, a3, v4);
    PiDqQueryDeleteObjectFromResultSet(a1, *(_QWORD *)(v5 + 8));
    PiDqQueryUnlock(a1, v40);
    goto LABEL_36;
  }
  v22 = 0;
  v23 = 0;
LABEL_36:
  if ( EvaluateFilter < 0 )
    goto LABEL_143;
  if ( v22 )
  {
    EvaluateFilter = PiDqQueryActionQueueEntryCreate(
                       v23,
                       *(_QWORD *)(v5 + 8),
                       (volatile signed __int32 *)v5,
                       (__int64)&Buffer);
    if ( EvaluateFilter < 0 )
      goto LABEL_143;
    PiDqQueryLock(a1, a2, a3, v4);
    PiDqQueryAppendActionEntry(a1, Buffer);
    PiDqQueryUnlock(a1, v24);
  }
LABEL_22:
  if ( EvaluateFilter < 0 )
  {
LABEL_143:
    PiDqQueryLock(a1, a2, a3, v4);
    *(_DWORD *)(a1 + 216) |= 1u;
    PiDqQueryFreeActiveData(a1);
    PiDqQueryUnlock(a1, v57);
  }
}
