/*
 * XREFs of SmKmStoreCreatePrepare @ 0x1403E4D40
 * Callers:
 *     SmProcessCreateRequest @ 0x1403E517C (SmProcessCreateRequest.c)
 * Callees:
 *     SmAlloc @ 0x1400022D0 (SmAlloc.c)
 *     memmove @ 0x140171780 (memmove.c)
 */

__int64 __fastcall SmKmStoreCreatePrepare(_DWORD *a1, char a2, _QWORD *a3, __int64 a4)
{
  int v4; // eax
  const void **v5; // rsi
  unsigned int v6; // ebx
  PVOID v9; // rbp
  size_t v10; // rdi
  const void *v11; // rax

  v4 = *a1;
  v5 = (const void **)(a1 + 2);
  v6 = 0;
  v9 = 0LL;
  if ( (unsigned __int8)*a1 != 6 || (v4 & 0xFFFFFC00) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else if ( a2 && ((v4 & 0x300) != 0 || (unsigned __int8)*(_DWORD *)v5) )
  {
    return (unsigned int)-1073741790;
  }
  else
  {
    if ( (unsigned __int8)*(_DWORD *)v5 )
    {
      v10 = (unsigned int)a1[12];
      if ( (_DWORD)v10 )
      {
        v9 = SmAlloc((unsigned int)v10, 0x4B456D73u);
        if ( !v9 )
          return (unsigned int)-1073741670;
      }
      memmove(v9, v5[4], v10);
      v11 = v5[7];
    }
    else
    {
      LODWORD(v10) = 0;
      v11 = 0LL;
    }
    *(_QWORD *)a4 = v5;
    *(_QWORD *)(a4 + 8) = v9;
    *(_DWORD *)(a4 + 16) = v10;
    *(_QWORD *)(a4 + 24) = v11;
    *a3 = v9;
  }
  return v6;
}
