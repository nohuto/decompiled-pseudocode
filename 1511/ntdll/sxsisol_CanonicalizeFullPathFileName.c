/*
 * XREFs of sxsisol_CanonicalizeFullPathFileName @ 0x180016948
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800155C0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     RtlDetermineDosPathNameType_Ustr @ 0x180017C70 (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlGetFullPathName_UstrEx @ 0x180018C40 (RtlGetFullPathName_UstrEx.c)
 *     NtdllpFreeStringRoutine @ 0x1800207A0 (NtdllpFreeStringRoutine.c)
 */

__int64 __fastcall sxsisol_CanonicalizeFullPathFileName(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  bool v4; // r14
  int v6; // ebx
  int v8; // r11d
  int FullPathName_Ustr; // ebx
  _QWORD *v10; // rcx
  __int128 v11; // xmm0
  unsigned __int16 v12; // ax
  __int64 v13; // rcx
  __int64 v15; // rax
  __int128 v16; // [rsp+40h] [rbp-10h]
  int v17; // [rsp+70h] [rbp+20h] BYREF
  _OWORD *v18; // [rsp+88h] [rbp+38h] BYREF

  v18 = 0LL;
  v4 = 0;
  v6 = a2;
  if ( !a1 || a3 && a3[1] )
  {
    FullPathName_Ustr = -1073741811;
  }
  else
  {
    v8 = RtlDetermineDosPathNameType_Ustr(a1);
    v17 = v8;
    if ( ((v8 - 1) & 0xFFFFFFFA) != 0 || v8 == 5 )
      goto LABEL_11;
    FullPathName_Ustr = RtlGetFullPathName_UstrEx(a1, v6, (_DWORD)a3, (unsigned int)&v18, 0LL, 0LL, (__int64)&v17, 0LL);
    if ( FullPathName_Ustr >= 0 )
    {
      v10 = v18;
      v11 = *v18;
      v16 = *v18;
      if ( v17 == 6 && (v15 = *(_QWORD *)(a1 + 8), *(_WORD *)(v15 + 10) == 58) && *(_WORD *)(v15 + 12) == 92 )
      {
        *((_QWORD *)&v16 + 1) += 8LL;
        a2 = 65528LL;
        *(_QWORD *)(a1 + 8) = v15 + 8;
        *(_WORD *)a1 -= 8;
        v12 = v16 - 8;
        *(_WORD *)(a1 + 2) -= 8;
        WORD1(v16) -= 8;
        LOWORD(v16) = v16 - 8;
        v11 = v16;
      }
      else
      {
        v12 = *v18;
      }
      if ( *(_WORD *)a1 > v12 )
      {
        v4 = v10 == a3;
        *(_OWORD *)a1 = v11;
      }
LABEL_11:
      FullPathName_Ustr = 0;
      if ( v4 )
        return (unsigned int)FullPathName_Ustr;
    }
  }
  v13 = a3[1];
  if ( v13 )
  {
    NtdllpFreeStringRoutine(v13, a2, a3, a4);
    *a3 = 0LL;
    a3[1] = 0LL;
  }
  return (unsigned int)FullPathName_Ustr;
}
