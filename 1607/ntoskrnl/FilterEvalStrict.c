/*
 * XREFs of FilterEvalStrict @ 0x1404E4F24
 * Callers:
 *     FilterEvalStrict @ 0x1404E4F24 (FilterEvalStrict.c)
 *     FilterEval @ 0x1404E5754 (FilterEval.c)
 * Callees:
 *     FilterEvalStrict @ 0x1404E4F24 (FilterEvalStrict.c)
 *     PropertyEval @ 0x1404E51A4 (PropertyEval.c)
 *     FindFilterOperatorClose @ 0x1404E54FC (FindFilterOperatorClose.c)
 */

__int64 __fastcall FilterEvalStrict(
        __int64 (__fastcall *a1)(__int64, unsigned int *, unsigned int *, unsigned int *, __int64 *),
        __int64 a2,
        unsigned int a3,
        _DWORD *a4,
        _DWORD *a5)
{
  __int64 result; // rax
  unsigned int v8; // edi
  unsigned int FilterOperatorClose; // edx
  int v10; // ecx
  unsigned int *v11; // rax
  unsigned int *v12; // rbx
  unsigned int v13; // esi
  _DWORD *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // r8d
  int v19; // eax
  bool v20; // zf
  int v21; // ecx
  int v22; // eax
  unsigned int v23; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v24; // [rsp+44h] [rbp-3Ch] BYREF
  int v25; // [rsp+48h] [rbp-38h]
  int v26; // [rsp+4Ch] [rbp-34h]
  int v27; // [rsp+50h] [rbp-30h]
  __int64 v28; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v29; // [rsp+60h] [rbp-20h]
  __int64 v30; // [rsp+68h] [rbp-18h]
  unsigned int *v31; // [rsp+70h] [rbp-10h]
  unsigned int v34; // [rsp+B0h] [rbp+30h] BYREF

  v27 = 1;
  v34 = 0;
  v26 = 0;
  v23 = 0;
  v28 = 0LL;
  v24 = 0;
  if ( a3 < 3 )
    return 3221225485LL;
  v25 = *a4 & 0xFF00000;
  if ( !v25 )
    return 3221225485LL;
  *a5 = 0;
  result = FindFilterOperatorClose(a3, a4, &v34);
  v8 = result;
  if ( (_DWORD)result )
    return result;
  FilterOperatorClose = -1073741823;
  v10 = v25;
  v11 = &a4[14 * v34];
  v12 = a4 + 14;
  v31 = v11;
  LODWORD(v11) = a3 - v34;
  v13 = a3 - 1;
  v29 = (unsigned int)v11;
  if ( v25 == 3145728 || v25 == 0x100000 )
  {
    if ( v13 <= 1 )
      goto LABEL_15;
    v30 = v25;
    while ( 1 )
    {
      v14 = a5;
      v34 = 0;
      *a5 = 0;
      if ( (*v12 & 0xFF00000) != 0 )
      {
        result = FindFilterOperatorClose(v13, v12, &v34);
        v21 = ++v34;
        if ( (_DWORD)result )
          return result;
        result = FilterEvalStrict((_DWORD)a1, a2, v21, (_DWORD)v12, (__int64)v14);
        v8 = result;
        if ( (_DWORD)result == -1073741823 )
        {
          v27 = 0;
        }
        else if ( (_DWORD)result )
        {
          return result;
        }
        v12 += 14 * v34;
        v13 -= v34;
      }
      else
      {
        v8 = a1(a2, v12 + 2, &v23, &v24, &v28);
        if ( v8 == -1073741275 )
        {
          v8 = 0;
          if ( (((*v12 & 0xFFF) - 1) & 0xFFFEFFFF) != 0 )
          {
            v27 = 0;
            v12 += 14;
            --v13;
            goto LABEL_13;
          }
          v15 = 0LL;
          v17 = 0LL;
          v16 = 0LL;
          v23 = 0;
          v28 = 0LL;
          v24 = 0;
        }
        else
        {
          v15 = v23;
          v16 = v28;
          v17 = v24;
        }
        if ( v8 )
          return v8;
        PropertyEval(v15, v16, v17, *v12, v12[10], *((_QWORD *)v12 + 6), v12[11], a5);
        v12 += 14;
        --v13;
      }
      if ( *a5 == (v30 == 3145728) )
      {
        v12 = v31;
        v18 = 1;
        v13 = v29;
        FilterOperatorClose = -1073741823;
        v10 = v25;
        goto LABEL_16;
      }
LABEL_13:
      if ( v13 <= 1 )
        goto LABEL_14;
    }
  }
  if ( v25 != 5242880 )
    return 3221225485LL;
  if ( (*v12 & 0xFF00000) != 0 )
  {
    FilterOperatorClose = FindFilterOperatorClose(v13, v12, &v34);
    v22 = ++v34;
    if ( FilterOperatorClose )
      return FilterOperatorClose;
    result = FilterEvalStrict((_DWORD)a1, a2, v22, (_DWORD)v12, (__int64)a5);
    v8 = result;
    if ( !(_DWORD)result )
    {
      v12 += 14 * v34;
      v13 -= v34;
      goto LABEL_50;
    }
  }
  else
  {
    result = a1(a2, v12 + 2, &v23, &v24, &v28);
    v8 = result;
    if ( (_DWORD)result == -1073741275 )
      return 3221225473LL;
    if ( !(_DWORD)result )
    {
      PropertyEval(v23, v28, v24, *v12, v12[10], *((_QWORD *)v12 + 6), v12[11], a5);
      v12 += 14;
      --v13;
LABEL_50:
      *a5 = *a5 == 0;
LABEL_14:
      v10 = v25;
      FilterOperatorClose = -1073741823;
LABEL_15:
      v18 = v26;
LABEL_16:
      if ( !v13 )
        return 3221225485LL;
      v19 = *v12 & 0xFF00000;
      switch ( v19 )
      {
        case 4194304:
          v20 = v10 == 3145728;
          break;
        case 2097152:
          v20 = v10 == 0x100000;
          break;
        case 6291456:
          v20 = v10 == 5242880;
          break;
        default:
          return 3221225485LL;
      }
      if ( v20 )
      {
        if ( v18 || v27 || v8 )
          return v8;
        return FilterOperatorClose;
      }
      return 3221225485LL;
    }
  }
  return result;
}
