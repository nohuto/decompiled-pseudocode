/*
 * XREFs of CreateDIBPalette @ 0x1C01F095C
 * Callers:
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F063C (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     GreCreateHalftonePalette @ 0x1C02B1EB0 (GreCreateHalftonePalette.c)
 */

_WORD *__fastcall CreateDIBPalette(unsigned __int16 *a1, int a2)
{
  unsigned __int16 v2; // si
  int v4; // ebp
  _WORD *result; // rax
  _BYTE *v6; // rdx
  _WORD *v7; // rbx
  __int64 v8; // r8
  _BYTE *v9; // rcx
  __int64 HalftonePalette; // rdi

  v2 = a2;
  if ( !a2 )
  {
    HalftonePalette = GreCreateHalftonePalette(*(HDC *)(gpDispInfo + 32LL));
LABEL_15:
    GreSetPaletteOwner(HalftonePalette, 0LL);
    return (_WORD *)HalftonePalette;
  }
  if ( *(_DWORD *)a1 == 12 )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    if ( *((_DWORD *)a1 + 8) )
      v2 = a1[16];
  }
  result = (_WORD *)Win32AllocPoolWithQuota(4LL * v2 + 8, 1885565781LL);
  v7 = result;
  if ( result )
  {
    result[1] = v2;
    v8 = 0LL;
    v9 = (char *)a1 + *a1;
    *result = 768;
    if ( v2 )
    {
      v6 = (char *)result + 5;
      do
      {
        *(v6 - 1) = v9[2];
        *v6 = v9[1];
        v6[1] = *v9;
        v6[2] = 4;
        if ( v4 )
          v9 += 3;
        else
          v9 += 4;
        v8 = (unsigned int)(v8 + 1);
        v6 += 4;
      }
      while ( (int)v8 < (unsigned __int16)result[1] );
    }
    HalftonePalette = GreCreatePalette(result, v6, v8);
    Win32FreePool(v7);
    goto LABEL_15;
  }
  return result;
}
