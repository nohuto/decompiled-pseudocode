/*
 * XREFs of EtwpApplyPredicate @ 0x14022BCB8
 * Callers:
 *     EtwpApplyPayloadFilterInternal @ 0x14022B440 (EtwpApplyPayloadFilterInternal.c)
 * Callees:
 *     strncmp @ 0x14014D3F0 (strncmp.c)
 *     wcsncmp @ 0x14014F600 (wcsncmp.c)
 *     EtwpGetFieldValue @ 0x14022C208 (EtwpGetFieldValue.c)
 *     EtwpGetSignedFieldValue @ 0x14022C26C (EtwpGetSignedFieldValue.c)
 *     ExSystemExceptionFilter @ 0x1404A792C (ExSystemExceptionFilter.c)
 */

char __fastcall EtwpApplyPredicate(unsigned __int16 *a1, int a2, __int64 a3, const char *a4, unsigned int a5, bool *a6)
{
  const char *v6; // rdi
  char v10; // r15
  __int16 v11; // r12
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rcx
  bool v18; // bl
  bool v19; // zf
  unsigned int v20; // r9d
  char *v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  const wchar_t *v24; // r14
  char *j; // rsi
  __int64 v26; // rsi
  wchar_t v27; // r12
  const char *v28; // r13
  char *v29; // r14
  unsigned __int64 v30; // rax
  const char *v31; // r14
  const char *i; // rsi
  unsigned int v33; // esi
  char v34; // r12
  unsigned __int64 v35; // r13
  unsigned __int64 v36; // rcx
  __int64 v37; // rdx
  bool v38; // zf
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // [rsp+28h] [rbp-40h] BYREF
  const char *v42; // [rsp+30h] [rbp-38h]
  const char *v43; // [rsp+38h] [rbp-30h]
  const wchar_t *v44; // [rsp+40h] [rbp-28h]

  v6 = a4;
  if ( !a5 )
    return 0;
  v10 = 0;
  v11 = *(_WORD *)(a3 + 2);
  v12 = a2 - 1;
  if ( !v12 )
  {
    if ( !(unsigned __int8)EtwpGetSignedFieldValue(a4, a5, &v41) )
      return 0;
    v39 = *(_QWORD *)(a3 + 8);
    v40 = *(_QWORD *)(a3 + 16);
    if ( !v11 )
    {
      v19 = v41 == v39;
      goto LABEL_122;
    }
    if ( v11 != 1 )
    {
      switch ( v11 )
      {
        case 2:
          v18 = v41 <= v39;
          goto LABEL_123;
        case 3:
          v18 = v41 > v39;
          goto LABEL_123;
        case 4:
          v18 = v41 < v39;
          goto LABEL_123;
        case 5:
          v18 = v41 >= v39;
          goto LABEL_123;
        case 6:
          if ( v39 <= v41 && v41 <= v40 )
            goto LABEL_111;
          goto LABEL_114;
        case 7:
          if ( v41 < v39 || v40 < v41 )
            goto LABEL_111;
          goto LABEL_114;
      }
      if ( v11 != 8 || !v39 )
        return 0;
      v37 = v41 % v39;
      goto LABEL_84;
    }
    v38 = v41 == v39;
LABEL_120:
    v18 = !v38;
    goto LABEL_123;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( !(unsigned __int8)EtwpGetFieldValue(a4, a5, &v41, a5) )
      return 0;
    if ( !v11 )
    {
      v19 = v41 == *(_QWORD *)(a3 + 8);
      goto LABEL_122;
    }
    if ( v11 != 1 )
    {
      switch ( v11 )
      {
        case 2:
          v18 = (unsigned __int64)v41 <= *(_QWORD *)(a3 + 8);
          goto LABEL_123;
        case 3:
          v18 = (unsigned __int64)v41 > *(_QWORD *)(a3 + 8);
          goto LABEL_123;
        case 4:
          v18 = (unsigned __int64)v41 < *(_QWORD *)(a3 + 8);
          goto LABEL_123;
        case 5:
          v18 = (unsigned __int64)v41 >= *(_QWORD *)(a3 + 8);
          goto LABEL_123;
        case 6:
          if ( *(_QWORD *)(a3 + 8) <= (unsigned __int64)v41 && (unsigned __int64)v41 <= *(_QWORD *)(a3 + 16) )
            goto LABEL_111;
          goto LABEL_114;
        case 7:
          if ( (unsigned __int64)v41 < *(_QWORD *)(a3 + 8) || *(_QWORD *)(a3 + 16) < (unsigned __int64)v41 )
            goto LABEL_111;
          goto LABEL_114;
      }
      if ( v11 != 8 )
        return 0;
      v36 = *(_QWORD *)(a3 + 8);
      if ( !v36 )
        return 0;
      v37 = v41 % v36;
LABEL_84:
      v19 = v37 == 0;
      goto LABEL_122;
    }
    v38 = v41 == *(_QWORD *)(a3 + 8);
    goto LABEL_120;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v29 = (char *)a1 + a1[24];
    v30 = (unsigned __int64)&v29[a1[25]];
    v31 = &v29[*(_QWORD *)(a3 + 8)];
    if ( (unsigned __int64)v31 >= v30 )
      return 0;
    for ( i = v31; *i && (unsigned __int64)i < v30; ++i )
      ;
    v33 = (_DWORD)i - (_DWORD)v31;
    if ( v33 )
    {
      if ( v11 != 20 )
      {
        if ( v11 != 21 )
        {
          if ( v11 != 30 )
          {
            if ( v11 != 31 )
              return 0;
            v10 = 1;
          }
          if ( v33 != a5 )
            goto LABEL_36;
          v18 = 1;
          while ( v33 )
          {
            if ( *v6 != *v31 )
            {
              v18 = 0;
              goto LABEL_32;
            }
            v43 = ++v6;
            v41 = (__int64)++v31;
            --v33;
          }
          goto LABEL_32;
        }
        v10 = 1;
      }
      if ( v33 > a5 )
        goto LABEL_36;
      v34 = *v31;
      v35 = (unsigned __int64)&a4[a5 - (unsigned __int64)v33 + 1];
      v18 = 0;
      while ( (unsigned __int64)v6 < v35 )
      {
        if ( *v6 == v34 && !strncmp(v6, v31, v33) )
        {
          v18 = 1;
          goto LABEL_32;
        }
        v43 = ++v6;
      }
      goto LABEL_32;
    }
LABEL_114:
    v18 = 0;
    goto LABEL_123;
  }
  v15 = v14 - 1;
  if ( v15 )
  {
    if ( v15 == 1 && a5 == 16 )
    {
      v16 = *(_QWORD *)(a3 + 8);
      v17 = *(_QWORD *)a4 - v16;
      if ( *(_QWORD *)a4 == v16 )
        v17 = *((_QWORD *)a4 + 1) - *(_QWORD *)(a3 + 16);
      v18 = v17 == 0;
      if ( v11 == 30 )
        goto LABEL_123;
      if ( v11 == 31 )
        goto LABEL_13;
    }
    return 0;
  }
  if ( (a5 & 1) != 0 )
    return 0;
  v20 = a5 >> 1;
  v21 = (char *)a1 + a1[22];
  v22 = (unsigned __int64)&v21[2 * ((unsigned __int64)a1[23] >> 1)];
  v23 = *(_QWORD *)(a3 + 8);
  v24 = (const wchar_t *)&v21[2 * v23];
  if ( (unsigned __int64)v24 >= v22 )
    return 0;
  for ( j = &v21[2 * v23]; *(_WORD *)j && (unsigned __int64)j < v22; j += 2 )
    ;
  v26 = (j - (char *)v24) >> 1;
  if ( !(_DWORD)v26 )
    goto LABEL_114;
  if ( v11 != 20 )
  {
    if ( v11 != 21 )
    {
      if ( v11 != 30 )
      {
        if ( v11 != 31 )
          return 0;
        v10 = 1;
      }
      if ( (_DWORD)v26 == v20 )
      {
        v18 = 1;
        while ( (_DWORD)v26 )
        {
          if ( *v24 != *(_WORD *)v6 )
          {
            v18 = 0;
            goto LABEL_32;
          }
          v6 += 2;
          v42 = v6;
          v44 = ++v24;
          LODWORD(v26) = v26 - 1;
        }
        goto LABEL_32;
      }
      goto LABEL_36;
    }
    v10 = 1;
  }
  if ( (unsigned int)v26 > v20 )
  {
LABEL_36:
    v18 = 0;
    if ( !v10 )
      goto LABEL_123;
LABEL_111:
    v18 = 1;
    goto LABEL_123;
  }
  v27 = *v24;
  v28 = &v6[2 * (v20 - (unsigned __int64)(unsigned int)v26) + 2];
  v18 = 0;
  while ( v6 < v28 )
  {
    if ( *(_WORD *)v6 == v27 && !wcsncmp((const wchar_t *)v6, v24, (unsigned int)v26) )
    {
      v18 = 1;
      break;
    }
    v6 += 2;
    v42 = v6;
  }
LABEL_32:
  if ( v10 )
  {
LABEL_13:
    v19 = !v18;
LABEL_122:
    v18 = v19;
  }
LABEL_123:
  *a6 = v18;
  return 1;
}
