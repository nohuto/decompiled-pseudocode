/*
 * XREFs of PiDqQueryApplyObjectEvent @ 0x14048C498
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x14048BBB8 (PiDqObjectManagerServiceActionQueue.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1400C19B0 (RtlLookupElementGenericTableAvl.c)
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 *     PiDqQueryUnlock @ 0x14048C1B0 (PiDqQueryUnlock.c)
 *     PiDqQueryLock @ 0x14048C208 (PiDqQueryLock.c)
 *     PiDqQueryAppendActionEntry @ 0x14048CEA0 (PiDqQueryAppendActionEntry.c)
 *     PiDqQueryActionQueueEntryCreate @ 0x14048CEE8 (PiDqQueryActionQueueEntryCreate.c)
 *     PiDqQueryFreeActiveData @ 0x14048D088 (PiDqQueryFreeActiveData.c)
 *     PiDqQueryAddObjectToResultSet @ 0x1404C8DB4 (PiDqQueryAddObjectToResultSet.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x1404D1050 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1404DCF14 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiDqQueryEvaluateFilter @ 0x1404E55A4 (PiDqQueryEvaluateFilter.c)
 *     PiDqSameUserHive @ 0x14063237C (PiDqSameUserHive.c)
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
  __int64 v21; // rcx
  const wchar_t *v22; // rcx
  const wchar_t *v23; // rdx
  bool v24; // r14
  bool v25; // cl
  bool v26; // si
  unsigned int v27; // r14d
  int v28; // r15d
  __int64 v29; // rcx
  const wchar_t *v30; // rcx
  const wchar_t *v31; // rdx
  __int64 v32; // r8
  int v33; // ecx
  unsigned int v34; // r15d
  __int64 v35; // r14
  const wchar_t *i; // rsi
  __int64 v37; // rax
  unsigned int v38; // r13d
  unsigned int v39; // r12d
  __int64 v40; // r15
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rcx
  int v44; // eax
  const wchar_t *j; // r14
  __int64 v46; // rax
  char v47; // al
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
LABEL_33:
    PiDqQueryLock(a1);
    Buffer = *(_QWORD *)(a2 + 8);
    v24 = RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 72), &Buffer) != 0LL;
    PiDqQueryUnlock(a1);
    LODWORD(v15) = *(_DWORD *)(a2 + 4);
    if ( (v15 & 2) != 0 )
    {
      if ( !v24 )
      {
        v26 = 0;
        v27 = 0;
        goto LABEL_40;
      }
      goto LABEL_67;
    }
    if ( (v15 & 1) != 0 || v7 )
    {
      v32 = *(_QWORD *)(a1 + 24);
      v33 = *(_DWORD *)(v32 + 20);
      if ( v33 )
      {
        v48 = v33 - 1;
        if ( v48 )
        {
          if ( v48 != 1 )
            goto LABEL_38;
          v49 = *(const wchar_t **)(v32 + 32);
          v25 = 0;
          LOBYTE(Buffer) = 0;
          if ( !*v49 )
            goto LABEL_38;
          while ( !v25 )
          {
            v25 = wcsicmp(v49, *(const wchar_t **)(*(_QWORD *)(a2 + 8) + 16LL)) == 0;
            v15 = -1LL;
            LOBYTE(Buffer) = v25;
            do
              ++v15;
            while ( v49[v15] );
            v49 += v15 + 1;
            if ( !*v49 )
              goto LABEL_53;
          }
        }
        else
        {
          LODWORD(v15) = wcsicmp(*(const wchar_t **)(v32 + 24), *(const wchar_t **)(*(_QWORD *)(a2 + 8) + 16LL));
          if ( (_DWORD)v15 )
            goto LABEL_38;
          v25 = 1;
          LOBYTE(Buffer) = 1;
        }
      }
      else
      {
        v25 = 1;
        LOBYTE(Buffer) = 1;
LABEL_53:
        if ( !v25 )
          goto LABEL_38;
      }
      v15 = *(_QWORD *)(a1 + 24);
      if ( !*(_DWORD *)(v15 + 20) )
      {
        LODWORD(v15) = PiPnpRtlApplyMandatoryFilters(
                         PiPnpRtlCtx,
                         *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL),
                         *(_DWORD *)(*(_QWORD *)(a2 + 8) + 28LL),
                         0,
                         (unsigned __int8)a1 + 32,
                         (__int64)&Buffer);
        AddObjectToResultSet = v15;
        if ( (_DWORD)v15 == -1073741772 || (_DWORD)v15 == -1073741275 )
        {
          v25 = 0;
          AddObjectToResultSet = 0;
          LOBYTE(Buffer) = 0;
        }
        else
        {
          v25 = Buffer;
        }
        if ( AddObjectToResultSet < 0 )
          goto LABEL_139;
      }
      if ( !v25 )
      {
LABEL_38:
        if ( !v24 )
        {
          v26 = 0;
          v27 = 0;
LABEL_40:
          if ( AddObjectToResultSet >= 0 )
          {
            if ( !v26 )
              return v15;
            v28 = PiDqQueryActionQueueEntryCreate(v27, *(_QWORD *)(a2 + 8), a2, &Buffer);
            if ( v28 >= 0 )
            {
              PiDqQueryLock(a1);
              PiDqQueryAppendActionEntry(a1, Buffer);
              LODWORD(v15) = PiDqQueryUnlock(a1);
              return v15;
            }
          }
LABEL_139:
          PiDqQueryLock(a1);
          *(_DWORD *)(a1 + 216) |= 1u;
          PiDqQueryFreeActiveData(a1);
          LODWORD(v15) = PiDqQueryUnlock(a1);
          return v15;
        }
LABEL_67:
        v27 = 3;
        v26 = 1;
        PiDqQueryLock(a1);
        PiDqQueryDeleteObjectFromResultSet(a1, *(_QWORD *)(a2 + 8));
        LODWORD(v15) = PiDqQueryUnlock(a1);
        goto LABEL_40;
      }
      v15 = *(_QWORD *)(a1 + 24);
      if ( *(_QWORD *)(v15 + 88) )
      {
        LODWORD(v15) = PiDqQueryEvaluateFilter(a1, *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL), &Buffer, 0LL);
        AddObjectToResultSet = v15;
        if ( (_DWORD)v15 == -1073741772 )
        {
          v25 = 0;
          AddObjectToResultSet = 0;
        }
        else
        {
          v25 = Buffer;
        }
        if ( AddObjectToResultSet < 0 )
          goto LABEL_139;
      }
    }
    else
    {
      v25 = v24;
    }
    if ( v25 )
    {
      if ( v24 )
      {
        v27 = 2;
        v26 = v6 != 0;
      }
      else
      {
        v27 = 1;
        PiDqQueryLock(a1);
        AddObjectToResultSet = PiDqQueryAddObjectToResultSet(a1, *(_QWORD *)(a2 + 8));
        LODWORD(v15) = PiDqQueryUnlock(a1);
        v26 = 1;
      }
      goto LABEL_40;
    }
    goto LABEL_38;
  }
  if ( (v2 & 4) != 0 )
  {
    v51 = PiDqSameUserHive(a1 + 32, a2 + 24, &v53);
    if ( v51 < 0 )
      goto LABEL_139;
    v8 = v53;
  }
  v9 = *(_QWORD *)(a1 + 24);
  v10 = *(_DWORD *)(v9 + 40);
  if ( (v10 & 2) != 0 )
  {
    if ( (v10 & 4) != 0 )
    {
      v34 = 0;
      if ( *(_DWORD *)(a2 + 76) )
      {
        while ( 1 )
        {
          v35 = 32LL * v34;
          if ( *(_DWORD *)(v35 + a2 + 100) != 1 || v8 )
          {
            if ( !*(_QWORD *)(v35 + a2 + 104) )
              goto LABEL_85;
            for ( i = *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 56LL); *i; i += v37 + 1 )
            {
              if ( !wcsicmp(*(const wchar_t **)(v35 + a2 + 104), i) )
                goto LABEL_85;
              v37 = -1LL;
              do
                ++v37;
              while ( i[v37] );
            }
          }
          if ( ++v34 >= *(_DWORD *)(a2 + 76) )
            break;
          v8 = v53;
        }
      }
    }
    else
    {
LABEL_85:
      v6 = 1;
    }
  }
  else if ( (v10 & 4) != 0 )
  {
    v38 = 0;
    if ( *(_DWORD *)(v9 + 64) )
    {
      while ( 1 )
      {
        v39 = 0;
        v40 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 72LL) + 32LL * v38;
        if ( *(_DWORD *)(a2 + 76) )
        {
          do
          {
            v41 = 32LL * v39;
            if ( *(_DWORD *)(v40 + 16) != *(_DWORD *)(v41 + a2 + 96) )
              goto LABEL_107;
            v42 = *(_QWORD *)(v41 + a2 + 80);
            v43 = *(_QWORD *)v40 - v42;
            if ( *(_QWORD *)v40 == v42 )
              v43 = *(_QWORD *)(v40 + 8) - *(_QWORD *)(v41 + a2 + 88);
            if ( !v43 && (v44 = *(_DWORD *)(v41 + a2 + 100), *(_DWORD *)(v40 + 20) == v44) && (v44 != 1 || v8) )
            {
              if ( !*(_QWORD *)(v41 + a2 + 104) )
              {
                v6 = 1;
                goto LABEL_12;
              }
              for ( j = *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 56LL); ; j += v46 + 1 )
              {
                if ( !*j )
                {
                  v47 = Buffer;
                  goto LABEL_105;
                }
                if ( !wcsicmp(*(const wchar_t **)(v41 + a2 + 104), j) )
                  break;
                v46 = -1LL;
                do
                  ++v46;
                while ( j[v46] );
              }
              v47 = 1;
              LOBYTE(Buffer) = 1;
LABEL_105:
              if ( v47 )
                goto LABEL_106;
            }
            else
            {
LABEL_107:
              v47 = Buffer;
            }
            v8 = v53;
            ++v39;
          }
          while ( v39 < *(_DWORD *)(a2 + 76) );
          if ( v47 )
            break;
        }
        if ( ++v38 >= *(_DWORD *)(*(_QWORD *)(a1 + 24) + 64LL) )
          break;
        v8 = v53;
      }
LABEL_106:
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
              v21 = *(_QWORD *)v13 - *(_QWORD *)(v14 + a2 + 80);
              if ( *(_QWORD *)v13 == *(_QWORD *)(v14 + a2 + 80) )
                v21 = *(_QWORD *)(v13 + 8) - *(_QWORD *)(v14 + a2 + 88);
              if ( !v21 && *(_DWORD *)(v13 + 20) == *(_DWORD *)(v14 + a2 + 100) )
              {
                v22 = *(const wchar_t **)(v13 + 24);
                v23 = *(const wchar_t **)(v14 + a2 + 104);
                if ( (v22 == v23 || v22 && v23 && !wcsicmp(v22, v23)) && (*(_DWORD *)(v14 + a2 + 100) != 1 || v53) )
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
      goto LABEL_22;
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
          v29 = *(_QWORD *)(v19 + v20 + 8) - *(_QWORD *)(v18 + a2 + 80);
          if ( !v29 )
            v29 = *(_QWORD *)(v19 + v20 + 16) - *(_QWORD *)(v18 + a2 + 88);
          if ( !v29 )
          {
            LODWORD(v15) = *(_DWORD *)(v18 + a2 + 100);
            if ( *(_DWORD *)(v19 + v20 + 28) == (_DWORD)v15 )
            {
              v30 = *(const wchar_t **)(v19 + v20 + 32);
              v31 = *(const wchar_t **)(v18 + a2 + 104);
              if ( v30 == v31 || v30 && v31 && (LODWORD(v15) = wcsicmp(v30, v31), !(_DWORD)v15) )
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
LABEL_22:
  AddObjectToResultSet = v51;
  if ( v6 || v7 )
    goto LABEL_33;
  return v15;
}
