/*
 * XREFs of PiDqQueryApplyObjectEvent @ 0x14045EA20
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x14045E118 (PiDqObjectManagerServiceActionQueue.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x14008FDF0 (RtlLookupElementGenericTableAvl.c)
 *     _wcsicmp @ 0x14014437C (_wcsicmp.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x140440730 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiDqQueryEvaluateFilter @ 0x140441A6C (PiDqQueryEvaluateFilter.c)
 *     PiDqQueryUnlock @ 0x14045E710 (PiDqQueryUnlock.c)
 *     PiDqQueryLock @ 0x14045E768 (PiDqQueryLock.c)
 *     PiDqQueryFreeActiveData @ 0x14045F3C8 (PiDqQueryFreeActiveData.c)
 *     PiDqQueryAppendActionEntry @ 0x14045F450 (PiDqQueryAppendActionEntry.c)
 *     PiDqQueryActionQueueEntryCreate @ 0x14045F498 (PiDqQueryActionQueueEntryCreate.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x14045F6A4 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiDqQueryAddObjectToResultSet @ 0x140460C48 (PiDqQueryAddObjectToResultSet.c)
 *     PiDqSameUserHive @ 0x140607634 (PiDqSameUserHive.c)
 */

int __fastcall PiDqQueryApplyObjectEvent(__int64 a1, __int64 a2)
{
  int v2; // eax
  int AddObjectToResultSet; // r15d
  char v6; // r13
  char v7; // r12
  char v8; // r8
  __int64 v9; // rcx
  int v10; // edx
  unsigned int v11; // r12d
  unsigned int v12; // r15d
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned int v16; // r14d
  unsigned int v17; // r15d
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r8
  bool v21; // r14
  bool v22; // cl
  __int64 v23; // r8
  int v24; // ecx
  bool v25; // si
  unsigned int v26; // r14d
  int v27; // r15d
  __int64 v28; // rcx
  const wchar_t *v29; // rcx
  const wchar_t *v30; // rdx
  unsigned int v31; // r13d
  unsigned int v32; // r12d
  __int64 v33; // r15
  __int64 v34; // rsi
  char v35; // al
  __int64 v36; // rcx
  const wchar_t *v37; // rcx
  const wchar_t *v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rcx
  int v41; // eax
  unsigned int v42; // r15d
  __int64 v43; // r14
  const wchar_t *i; // rsi
  __int64 v45; // rax
  const wchar_t *j; // r14
  __int64 v47; // rax
  int v48; // ecx
  const wchar_t *v49; // rsi
  int v51; // [rsp+34h] [rbp-Ch]
  __int64 Buffer; // [rsp+88h] [rbp+48h] BYREF
  char v53; // [rsp+90h] [rbp+50h] BYREF
  char v54; // [rsp+98h] [rbp+58h]

  v2 = *(_DWORD *)(a2 + 4);
  v51 = 0;
  AddObjectToResultSet = 0;
  LOBYTE(Buffer) = 0;
  v6 = 0;
  v54 = 0;
  v7 = 0;
  v53 = 0;
  v8 = 0;
  if ( (v2 & 3) != 0 || (v2 & 8) == 0 && !*(_DWORD *)(a2 + 76) )
  {
LABEL_28:
    PiDqQueryLock(a1);
    Buffer = *(_QWORD *)(a2 + 8);
    v21 = RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 72), &Buffer) != 0LL;
    PiDqQueryUnlock(a1);
    LODWORD(v15) = *(_DWORD *)(a2 + 4);
    if ( (v15 & 2) != 0 )
    {
      if ( !v21 )
      {
        v25 = 0;
        v26 = 0;
        goto LABEL_48;
      }
      goto LABEL_84;
    }
    if ( (v15 & 1) != 0 || v7 )
    {
      v23 = *(_QWORD *)(a1 + 24);
      v24 = *(_DWORD *)(v23 + 20);
      if ( v24 )
      {
        v48 = v24 - 1;
        if ( v48 )
        {
          if ( v48 != 1 )
            goto LABEL_46;
          v49 = *(const wchar_t **)(v23 + 32);
          v22 = 0;
          LOBYTE(Buffer) = 0;
          if ( !*v49 )
            goto LABEL_46;
          while ( !v22 )
          {
            v22 = wcsicmp(v49, *(const wchar_t **)(*(_QWORD *)(a2 + 8) + 16LL)) == 0;
            v15 = -1LL;
            LOBYTE(Buffer) = v22;
            do
              ++v15;
            while ( v49[v15] );
            v49 += v15 + 1;
            if ( !*v49 )
              goto LABEL_34;
          }
        }
        else
        {
          LODWORD(v15) = wcsicmp(*(const wchar_t **)(v23 + 24), *(const wchar_t **)(*(_QWORD *)(a2 + 8) + 16LL));
          if ( (_DWORD)v15 )
            goto LABEL_46;
          v22 = 1;
          LOBYTE(Buffer) = 1;
        }
      }
      else
      {
        v22 = 1;
        LOBYTE(Buffer) = 1;
LABEL_34:
        if ( !v22 )
          goto LABEL_46;
      }
      v15 = *(_QWORD *)(a1 + 24);
      if ( !*(_DWORD *)(v15 + 20) )
      {
        LODWORD(v15) = PiPnpRtlApplyMandatoryFilters(
                         *(__int64 *)&PiPnpRtlCtx,
                         *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL),
                         *(_DWORD *)(*(_QWORD *)(a2 + 8) + 28LL),
                         0LL,
                         (struct _SECURITY_SUBJECT_CONTEXT *)(a1 + 32),
                         &Buffer);
        AddObjectToResultSet = v15;
        if ( (_DWORD)v15 == -1073741772 || (_DWORD)v15 == -1073741275 )
        {
          v22 = 0;
          AddObjectToResultSet = 0;
          LOBYTE(Buffer) = 0;
        }
        else
        {
          v22 = Buffer;
        }
        if ( AddObjectToResultSet < 0 )
          goto LABEL_141;
      }
      if ( !v22 )
      {
LABEL_46:
        if ( !v21 )
        {
          v25 = 0;
          v26 = 0;
LABEL_48:
          if ( AddObjectToResultSet >= 0 )
          {
            if ( !v25 )
              return v15;
            v27 = PiDqQueryActionQueueEntryCreate(v26, *(_QWORD *)(a2 + 8), a2, &Buffer);
            if ( v27 >= 0 )
            {
              PiDqQueryLock(a1);
              PiDqQueryAppendActionEntry(a1, Buffer);
              LODWORD(v15) = PiDqQueryUnlock(a1);
              return v15;
            }
          }
LABEL_141:
          PiDqQueryLock(a1);
          *(_DWORD *)(a1 + 216) |= 1u;
          PiDqQueryFreeActiveData(a1);
          LODWORD(v15) = PiDqQueryUnlock(a1);
          return v15;
        }
LABEL_84:
        v26 = 3;
        v25 = 1;
        PiDqQueryLock(a1);
        PiDqQueryDeleteObjectFromResultSet(a1, *(_QWORD *)(a2 + 8));
        LODWORD(v15) = PiDqQueryUnlock(a1);
        goto LABEL_48;
      }
      v15 = *(_QWORD *)(a1 + 24);
      if ( *(_QWORD *)(v15 + 88) )
      {
        LODWORD(v15) = PiDqQueryEvaluateFilter((_QWORD *)a1, *(void **)(*(_QWORD *)(a2 + 8) + 16LL), (bool *)&Buffer);
        AddObjectToResultSet = v15;
        if ( (_DWORD)v15 == -1073741772 )
        {
          v22 = 0;
          AddObjectToResultSet = 0;
        }
        else
        {
          v22 = Buffer;
        }
        if ( AddObjectToResultSet < 0 )
          goto LABEL_141;
      }
    }
    else
    {
      v22 = v21;
    }
    if ( v22 )
    {
      if ( v21 )
      {
        v26 = 2;
        v25 = v6 != 0;
      }
      else
      {
        v26 = 1;
        PiDqQueryLock(a1);
        AddObjectToResultSet = PiDqQueryAddObjectToResultSet(a1, *(_QWORD *)(a2 + 8));
        LODWORD(v15) = PiDqQueryUnlock(a1);
        v25 = 1;
      }
      goto LABEL_48;
    }
    goto LABEL_46;
  }
  if ( (v2 & 4) != 0 )
  {
    v51 = PiDqSameUserHive(a1 + 32, a2 + 24, &v53);
    if ( v51 < 0 )
      goto LABEL_141;
    v8 = v53;
  }
  v9 = *(_QWORD *)(a1 + 24);
  v10 = *(_DWORD *)(v9 + 40);
  if ( (v10 & 2) != 0 )
  {
    if ( (v10 & 4) != 0 )
    {
      v42 = 0;
      if ( *(_DWORD *)(a2 + 76) )
      {
        while ( 1 )
        {
          v43 = 32LL * v42;
          if ( *(_DWORD *)(v43 + a2 + 100) != 1 || v8 )
          {
            if ( !*(_QWORD *)(v43 + a2 + 104) )
              goto LABEL_101;
            for ( i = *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 56LL); *i; i += v45 + 1 )
            {
              if ( !wcsicmp(*(const wchar_t **)(v43 + a2 + 104), i) )
                goto LABEL_101;
              v45 = -1LL;
              do
                ++v45;
              while ( i[v45] );
            }
          }
          if ( ++v42 >= *(_DWORD *)(a2 + 76) )
            break;
          v8 = v53;
        }
      }
    }
    else
    {
LABEL_101:
      v6 = 1;
    }
  }
  else if ( (v10 & 4) != 0 )
  {
    v31 = 0;
    if ( *(_DWORD *)(v9 + 64) )
    {
      while ( 1 )
      {
        v32 = 0;
        v33 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 72LL) + 32LL * v31;
        if ( *(_DWORD *)(a2 + 76) )
        {
          do
          {
            v34 = 32LL * v32;
            if ( *(_DWORD *)(v33 + 16) != *(_DWORD *)(v34 + a2 + 96) )
              goto LABEL_62;
            v39 = *(_QWORD *)(v34 + a2 + 80);
            v40 = *(_QWORD *)v33 - v39;
            if ( *(_QWORD *)v33 == v39 )
              v40 = *(_QWORD *)(v33 + 8) - *(_QWORD *)(v34 + a2 + 88);
            if ( !v40 && (v41 = *(_DWORD *)(v34 + a2 + 100), *(_DWORD *)(v33 + 20) == v41) && (v41 != 1 || v8) )
            {
              if ( !*(_QWORD *)(v34 + a2 + 104) )
              {
                v6 = 1;
                goto LABEL_12;
              }
              for ( j = *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 56LL); ; j += v47 + 1 )
              {
                if ( !*j )
                {
                  v35 = Buffer;
                  goto LABEL_112;
                }
                if ( !wcsicmp(*(const wchar_t **)(v34 + a2 + 104), j) )
                  break;
                v47 = -1LL;
                do
                  ++v47;
                while ( j[v47] );
              }
              v35 = 1;
              LOBYTE(Buffer) = 1;
LABEL_112:
              if ( v35 )
                goto LABEL_67;
            }
            else
            {
LABEL_62:
              v35 = Buffer;
            }
            v8 = v53;
            ++v32;
          }
          while ( v32 < *(_DWORD *)(a2 + 76) );
          if ( v35 )
            break;
        }
        if ( ++v31 >= *(_DWORD *)(*(_QWORD *)(a1 + 24) + 64LL) )
          break;
        v8 = v53;
      }
LABEL_67:
      v7 = v54;
      v6 = Buffer;
    }
    else
    {
      v6 = 0;
    }
  }
  else
  {
    v11 = 0;
    if ( *(_DWORD *)(v9 + 64) )
    {
      do
      {
        v12 = 0;
        v13 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 72LL) + 32LL * v11;
        if ( *(_DWORD *)(a2 + 76) )
        {
          while ( 1 )
          {
            v14 = 32LL * v12;
            if ( *(_DWORD *)(v13 + 16) == *(_DWORD *)(v14 + a2 + 96) )
            {
              v28 = *(_QWORD *)v13 - *(_QWORD *)(v14 + a2 + 80);
              if ( *(_QWORD *)v13 == *(_QWORD *)(v14 + a2 + 80) )
                v28 = *(_QWORD *)(v13 + 8) - *(_QWORD *)(v14 + a2 + 88);
              if ( !v28 && *(_DWORD *)(v13 + 20) == *(_DWORD *)(v14 + a2 + 100) )
              {
                v29 = *(const wchar_t **)(v13 + 24);
                v30 = *(const wchar_t **)(v14 + a2 + 104);
                if ( (v29 == v30 || v29 && v30 && !wcsicmp(v29, v30)) && (*(_DWORD *)(v14 + a2 + 100) != 1 || v53) )
                  break;
              }
            }
            if ( ++v12 >= *(_DWORD *)(a2 + 76) )
              goto LABEL_11;
          }
          v6 = 1;
        }
LABEL_11:
        ++v11;
      }
      while ( v11 < *(_DWORD *)(*(_QWORD *)(a1 + 24) + 64LL) );
LABEL_12:
      v7 = v54;
    }
    else
    {
      v7 = 0;
    }
  }
  v15 = *(_QWORD *)(a1 + 24);
  if ( !*(_DWORD *)(v15 + 20) )
  {
    LODWORD(v15) = *(_DWORD *)(a2 + 4);
    if ( (v15 & 8) != 0 )
    {
      v7 = 1;
      goto LABEL_24;
    }
    v7 = 0;
  }
  v16 = 0;
  do
  {
    if ( v16 >= *(_DWORD *)(a2 + 76) )
      break;
    v15 = *(_QWORD *)(a1 + 24);
    v17 = 0;
    v18 = 32LL * v16;
    if ( *(_DWORD *)(v15 + 80) )
    {
      while ( 1 )
      {
        v19 = 56LL * v17;
        v20 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 88LL);
        if ( *(_DWORD *)(v19 + v20 + 24) == *(_DWORD *)(v18 + a2 + 96) )
        {
          v36 = *(_QWORD *)(v19 + v20 + 8) - *(_QWORD *)(v18 + a2 + 80);
          if ( !v36 )
            v36 = *(_QWORD *)(v19 + v20 + 16) - *(_QWORD *)(v18 + a2 + 88);
          if ( !v36 )
          {
            LODWORD(v15) = *(_DWORD *)(v18 + a2 + 100);
            if ( *(_DWORD *)(v19 + v20 + 28) == (_DWORD)v15 )
            {
              v37 = *(const wchar_t **)(v19 + v20 + 32);
              v38 = *(const wchar_t **)(v18 + a2 + 104);
              if ( v37 == v38 || v37 && v38 && (LODWORD(v15) = wcsicmp(v37, v38), !(_DWORD)v15) )
              {
                if ( *(_DWORD *)(v18 + a2 + 100) != 1 || v53 )
                  break;
              }
            }
          }
        }
        v15 = *(_QWORD *)(a1 + 24);
        if ( ++v17 >= *(_DWORD *)(v15 + 80) )
          goto LABEL_21;
      }
      v7 = 1;
    }
LABEL_21:
    ++v16;
  }
  while ( !v7 );
LABEL_24:
  AddObjectToResultSet = v51;
  if ( v6 || v7 )
    goto LABEL_28;
  return v15;
}
