/*
 * XREFs of RtlGetFullPathName_UstrEx @ 0x180018C40
 * Callers:
 *     sxsisol_CanonicalizeFullPathFileName @ 0x180016948 (sxsisol_CanonicalizeFullPathFileName.c)
 *     RtlDosSearchPath_Ustr @ 0x1800185F0 (RtlDosSearchPath_Ustr.c)
 * Callees:
 *     RtlGetFullPathName_Ustr @ 0x180016F00 (RtlGetFullPathName_Ustr.c)
 *     NtdllpAllocateStringRoutine @ 0x180018174 (NtdllpAllocateStringRoutine.c)
 *     NtdllpFreeStringRoutine @ 0x1800207A0 (NtdllpFreeStringRoutine.c)
 */

__int64 __fastcall RtlGetFullPathName_UstrEx(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 *a5,
        _BYTE *a6,
        _DWORD *a7,
        _QWORD *a8)
{
  __int64 v11; // r12
  _QWORD *v12; // r13
  __int64 *v13; // r15
  _WORD *StringRoutine; // r14
  unsigned __int16 v15; // bx
  _WORD *v16; // r8
  unsigned int FullPathName_Ustr; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rbx
  unsigned int v22; // ebx
  unsigned __int64 i; // rax
  unsigned __int16 v25; // bx
  unsigned __int16 v26; // r13
  unsigned int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v33; // [rsp+78h] [rbp+10h] BYREF
  __int64 v34; // [rsp+88h] [rbp+20h]

  v33 = 0LL;
  v11 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  v12 = a8;
  if ( a8 )
    *a8 = 0LL;
  v13 = a5;
  if ( a5 )
    *a5 = 0LL;
  StringRoutine = 0LL;
  LODWORD(a5) = *a7;
  if ( a2 )
  {
    if ( a3 && !a4 )
    {
      v22 = -1073741811;
      goto LABEL_22;
    }
    v15 = *(_WORD *)(a2 + 2);
    v16 = *(_WORD **)(a2 + 8);
    v34 = v15;
LABEL_11:
    LODWORD(a8) = v15;
    FullPathName_Ustr = RtlGetFullPathName_Ustr(a1, v15, v16, &v33, a6, (__int64)&a5);
    LOWORD(v21) = FullPathName_Ustr;
    if ( FullPathName_Ustr )
    {
      if ( a2 && FullPathName_Ustr < (unsigned int)a8 )
      {
        *(_WORD *)a2 = FullPathName_Ustr;
        if ( v13 )
        {
          if ( v33 )
            v28 = (v33 - *(_QWORD *)(a2 + 8)) >> 1;
          else
            v28 = 0LL;
          *v13 = v28;
        }
        if ( a4 )
          *a4 = a2;
        v22 = 0;
      }
      else if ( a3 )
      {
        if ( v11 && FullPathName_Ustr < (unsigned int)a8 )
        {
          *(_WORD *)(a3 + 2) = v34;
          *(_WORD *)a3 = FullPathName_Ustr;
          *(_WORD *)(v11 + 2 * ((unsigned __int64)FullPathName_Ustr >> 1)) = 0;
          if ( v13 )
          {
            if ( v33 )
              v30 = (v33 - v11) >> 1;
            else
              v30 = 0LL;
            *v13 = v30;
          }
          if ( a4 )
            *a4 = a3;
          *(_QWORD *)(a3 + 8) = v11;
          v22 = 0;
          goto LABEL_22;
        }
        for ( i = FullPathName_Ustr + 2LL; ; i = v21 + 2 )
        {
          if ( i > 0xFFFE )
          {
            v22 = -1073741562;
            goto LABEL_18;
          }
          v25 = v21 + 2;
          v26 = v25;
          StringRoutine = (_WORD *)NtdllpAllocateStringRoutine(v25);
          if ( !StringRoutine )
          {
            v22 = -1073741801;
            goto LABEL_18;
          }
          v27 = RtlGetFullPathName_Ustr(a1, (unsigned int)v25 - 2, StringRoutine, &v33, a6, (__int64)&a5);
          v21 = v27;
          if ( !v27 )
          {
            v22 = -1073741773;
            goto LABEL_18;
          }
          if ( v27 <= (unsigned __int64)v26 - 2 )
            break;
          NtdllpFreeStringRoutine(StringRoutine, v18, v19, v20);
          StringRoutine = 0LL;
        }
        if ( v13 )
        {
          if ( v33 )
            v31 = (v33 - (__int64)StringRoutine) >> 1;
          else
            v31 = 0LL;
          *v13 = v31;
        }
        StringRoutine[v21 >> 1] = 0;
        *(_QWORD *)(a3 + 8) = StringRoutine;
        *(_WORD *)a3 = v21;
        *(_WORD *)(a3 + 2) = v26;
        if ( a4 )
          *a4 = a3;
        StringRoutine = 0LL;
        v22 = 0;
      }
      else
      {
        if ( v12 )
          *v12 = FullPathName_Ustr;
        v22 = -1073741789;
      }
    }
    else
    {
      v22 = -1073741773;
    }
LABEL_18:
    if ( v11 )
      NtdllpFreeStringRoutine(v11, v18, v19, v20);
    if ( StringRoutine )
      NtdllpFreeStringRoutine(StringRoutine, v18, v19, v20);
LABEL_22:
    *a7 = (_DWORD)a5;
    return v22;
  }
  v15 = 520;
  v34 = 520LL;
  v29 = NtdllpAllocateStringRoutine(520LL);
  v11 = v29;
  if ( v29 )
  {
    v16 = (_WORD *)v29;
    goto LABEL_11;
  }
  return 3221225495LL;
}
