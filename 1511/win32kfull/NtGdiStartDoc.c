/*
 * XREFs of NtGdiStartDoc @ 0x1C0269FE0
 * Callers:
 *     <none>
 * Callees:
 *     ULongLongAdd @ 0x1C00A5354 (ULongLongAdd.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C0267A20 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     ULongLongMult @ 0x1C026A57C (ULongLongMult.c)
 */

__int64 __fastcall NtGdiStartDoc(HDC a1, __int64 a2, int *a3, unsigned int a4)
{
  int *v4; // rdi
  unsigned int started; // r15d
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r13
  ULONGLONG v9; // rcx
  const WCHAR *v10; // rax
  ULONGLONG v11; // rdi
  const void *v12; // rdx
  LPCWSTR lpszDocName; // rsi
  ULONGLONG v14; // rcx
  const WCHAR *v15; // rax
  ULONGLONG v16; // rdi
  LPCWSTR lpszOutput; // rsi
  ULONGLONG v18; // rax
  const WCHAR *v19; // rax
  ULONGLONG v20; // rdi
  LPCWSTR lpszDatatype; // rsi
  int v23; // [rsp+20h] [rbp-88h]
  int v24; // [rsp+24h] [rbp-84h] BYREF
  int v25; // [rsp+28h] [rbp-80h]
  ULONGLONG Size; // [rsp+30h] [rbp-78h] BYREF
  ULONGLONG pullResult; // [rsp+38h] [rbp-70h] BYREF
  _DOCINFOW v28; // [rsp+40h] [rbp-68h] BYREF

  v4 = a3;
  started = 0;
  v24 = 0;
  v23 = 1;
  v28.cbSize = 0;
  memset(&v28.lpszDocName, 0, 24);
  if ( a2 )
  {
    if ( (a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v25 = *(_DWORD *)a2;
    v28.cbSize = v25;
    v6 = *(_QWORD *)(a2 + 8);
    v7 = *(_QWORD *)(a2 + 16);
    v8 = *(_QWORD *)(a2 + 24);
    if ( v6 )
    {
      if ( (v6 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v6 + 2 > W32UserProbeAddress || v6 + 2 < v6 )
        *W32UserProbeAddress = 0;
      v9 = -1LL;
      do
        ++v9;
      while ( *(_WORD *)(v6 + 2 * v9) );
      if ( ULongLongAdd(v9, 1uLL, &pullResult) >= 0 && ULongLongMult(pullResult, 2uLL, &Size) >= 0 && Size <= 0xFFFFFFFF )
      {
        if ( (_DWORD)Size )
          v10 = (const WCHAR *)AllocThreadBufferWithTag((unsigned int)Size, 1886221383LL, 0LL);
        else
          v10 = 0LL;
        v28.lpszDocName = v10;
      }
      if ( v28.lpszDocName )
      {
        if ( Size && (Size + v6 > W32UserProbeAddress || Size + v6 < v6) )
          *W32UserProbeAddress = 0;
        v11 = Size;
        v12 = (const void *)v6;
        lpszDocName = v28.lpszDocName;
        memmove((void *)v28.lpszDocName, v12, Size);
        if ( v11 >= 2 )
          lpszDocName[(v11 >> 1) - 1] = 0;
      }
      else
      {
        v23 = 0;
      }
    }
    if ( v7 )
    {
      if ( (v7 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v7 + 2 > W32UserProbeAddress || v7 + 2 < v7 )
        *W32UserProbeAddress = 0;
      v14 = -1LL;
      do
        ++v14;
      while ( *(_WORD *)(v7 + 2 * v14) );
      if ( ULongLongAdd(v14, 1uLL, &pullResult) >= 0
        && ULongLongMult(pullResult, 2uLL, &Size) >= 0
        && Size <= 0xFFFFFFFF )
      {
        if ( (_DWORD)Size )
          v15 = (const WCHAR *)AllocThreadBufferWithTag((unsigned int)Size, 1886221383LL, 0LL);
        else
          v15 = 0LL;
        v28.lpszOutput = v15;
      }
      if ( v28.lpszOutput )
      {
        if ( Size && (Size + v7 > W32UserProbeAddress || Size + v7 < v7) )
          *W32UserProbeAddress = 0;
        v16 = Size;
        lpszOutput = v28.lpszOutput;
        memmove((void *)v28.lpszOutput, (const void *)v7, Size);
        if ( v16 >= 2 )
          lpszOutput[(v16 >> 1) - 1] = 0;
      }
      else
      {
        v23 = 0;
      }
    }
    if ( (unsigned __int64)v25 >= 0x28 && v8 )
    {
      if ( (v8 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v8 + 2 > W32UserProbeAddress || v8 + 2 < v8 )
        *W32UserProbeAddress = 0;
      v18 = -1LL;
      do
        ++v18;
      while ( *(_WORD *)(v8 + 2 * v18) );
      if ( ULongLongAdd(v18, 1uLL, &pullResult) >= 0
        && ULongLongMult(pullResult, 2uLL, &Size) >= 0
        && Size <= 0xFFFFFFFF )
      {
        if ( Size && (Size + v8 > W32UserProbeAddress || Size + v8 < v8) )
          *W32UserProbeAddress = 0;
        if ( (_DWORD)Size )
          v19 = (const WCHAR *)AllocThreadBufferWithTag((unsigned int)Size, 1886221383LL, 0LL);
        else
          v19 = 0LL;
        v28.lpszDatatype = v19;
      }
      if ( v28.lpszDatatype )
      {
        v20 = Size;
        lpszDatatype = v28.lpszDatatype;
        memmove((void *)v28.lpszDatatype, (const void *)v8, Size);
        if ( v20 >= 2 )
          lpszDatatype[(v20 >> 1) - 1] = 0;
      }
      else
      {
        v23 = 0;
      }
      v4 = a3;
    }
    else
    {
      v4 = a3;
    }
  }
  if ( v23 )
  {
    started = GreStartDocInternal(a1, &v28, &v24, a4);
    if ( started )
    {
      if ( (unsigned __int64)v4 >= W32UserProbeAddress )
        v4 = (int *)W32UserProbeAddress;
      *v4 = v24;
    }
  }
  if ( v28.lpszDocName )
    FreeThreadBufferWithTag(v28.lpszDocName, a2);
  if ( v28.lpszOutput )
    FreeThreadBufferWithTag(v28.lpszOutput, a2);
  if ( v28.lpszDatatype )
    FreeThreadBufferWithTag(v28.lpszDatatype, a2);
  return started;
}
