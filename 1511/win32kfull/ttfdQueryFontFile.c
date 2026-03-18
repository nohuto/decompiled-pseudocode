/*
 * XREFs of ttfdQueryFontFile @ 0x1C0104700
 * Callers:
 *     <none>
 * Callees:
 *     StringCchCopyW @ 0x1C0246A6C (StringCchCopyW.c)
 */

__int64 __fastcall ttfdQueryFontFile(__int64 a1, int a2, unsigned int a3, wchar_t *a4)
{
  int v6; // edx
  unsigned int v8; // esi
  unsigned int v9; // ebx
  __int64 i; // r14
  __int64 v11; // r13
  unsigned __int64 v12; // r15

  v6 = a2 - 1;
  if ( v6 )
  {
    if ( v6 == 1 )
      return *(unsigned int *)(a1 + 12);
    else
      return 0xFFFFFFFFLL;
  }
  else
  {
    v8 = 0;
    v9 = a3 >> 1;
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 12); i = (unsigned int)(i + 1) )
    {
      if ( (*(_DWORD *)(a1 + 16LL * (unsigned int)i + 44) & 1) != 0 )
      {
        v11 = *(_QWORD *)(a1 + 16 * (i + 3)) + 352LL;
        v12 = (unsigned __int64)(*(_DWORD *)(*(_QWORD *)(a1 + 16 * (i + 3)) + 364LL)
                               - *(_DWORD *)(*(_QWORD *)(a1 + 16 * (i + 3)) + 368LL)) >> 1;
        if ( (_DWORD)i )
        {
          if ( a4 )
          {
            if ( StringCchCopyW(a4, v9, L" & ") < 0 )
              return v8;
            a4 += 3;
            v9 -= 3;
          }
          v8 += 6;
        }
        if ( a4 )
        {
          if ( StringCchCopyW(a4, v9, (STRSAFE_LPCWSTR)(v11 + *(int *)(v11 + 16))) < 0 )
            return v8;
          a4 += (int)v12 - 2;
          v9 += 2 - v12;
        }
        v8 += 2 * v12;
      }
    }
    return v8;
  }
}
