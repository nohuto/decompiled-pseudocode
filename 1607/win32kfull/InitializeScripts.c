/*
 * XREFs of InitializeScripts @ 0x1C037D000
 * Callers:
 *     ?vLookupScript@@YAXKPEAGK@Z @ 0x1C0060C14 (-vLookupScript@@YAXKPEAGK@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     ?LOADSTRING@@YAHPEAXIPEAGH@Z @ 0x1C011F1F4 (-LOADSTRING@@YAHPEAXIPEAGH@Z.c)
 */

__int64 InitializeScripts()
{
  unsigned int v0; // ebx
  int v2; // r14d
  unsigned __int16 *v3; // r15
  unsigned int i; // edi
  int v5; // eax
  unsigned int v6; // esi
  __int64 *v7; // rdi
  int v8; // eax
  _WORD *v9; // r8
  unsigned int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // eax

  v0 = 1;
  if ( !hModuleWinKernel )
    return 0LL;
  if ( !qword_1C0328A08 )
  {
    v2 = 0;
    v3 = 0LL;
    for ( i = 0; i < 0x13; ++i )
    {
      v5 = LOADSTRING(hModuleWinKernel, i, 0LL, 0);
      if ( !v5 )
        break;
      v2 += v5 + 1;
    }
    if ( i == 19 )
      v3 = (unsigned __int16 *)PALLOCMEM2((unsigned int)(2 * v2), 1819501383LL, 1);
    qword_1C0328A08 = 0LL;
    if ( v3 )
    {
      v6 = 0;
      v7 = &qword_1C0328A08;
      do
      {
        *v7 = (__int64)v3;
        v8 = LOADSTRING(hModuleWinKernel, v6, v3, v2);
        v9 = (_WORD *)*v7;
        v10 = gdwOffset;
        *((_DWORD *)v7 - 2) = 0;
        v2 -= v8 + 1;
        v3 += v8 + 1;
        v11 = 0;
        while ( *v9 != 58 && *v9 )
        {
          v12 = 10 * v11;
          *((_DWORD *)v7 - 2) = 10 * v11;
          v13 = (unsigned __int16)*v9++;
          *v7 = (__int64)v9;
          v11 = v12 + v13 - 48;
          *((_DWORD *)v7 - 2) = v11;
          if ( !v6 )
            gdwOffset = ++v10;
        }
        *((_DWORD *)v7 - 2) = v11 + 1000;
        *v7 = (__int64)(v9 + 1);
        if ( !v6 )
          gdwOffset = v10 + 1;
        ++v6;
        v7 += 2;
      }
      while ( v6 < 0x13 );
    }
    else
    {
      return 0;
    }
  }
  return v0;
}
