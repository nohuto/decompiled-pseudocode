/*
 * XREFs of CmpPopulateBasicInformation @ 0x140437300
 * Callers:
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1401B6C10 (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpQueryKeyDataFromNode @ 0x1404370E0 (CmpQueryKeyDataFromNode.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 */

__int64 __fastcall CmpPopulateBasicInformation(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  unsigned int v8; // edx
  unsigned int v9; // edi
  size_t v10; // r8
  unsigned int v11; // r8d
  unsigned int v12; // r9d
  unsigned int i; // eax

  if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
    v8 = (unsigned __int16)(2 * *(_WORD *)(a2 + 72));
  else
    v8 = *(unsigned __int16 *)(a2 + 72);
  v9 = v8 + 16;
  *a5 = v8 + 16;
  if ( a4 < 0x10 )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    *(_QWORD *)a3 = *(_QWORD *)a1;
    *(_DWORD *)(a3 + 8) = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a3 + 12) = v8;
    v10 = a4 - 16;
    if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
    {
      v11 = (unsigned int)v10 >> 1;
      if ( v11 >= *(unsigned __int16 *)(a2 + 72) )
        v11 = *(unsigned __int16 *)(a2 + 72);
      v12 = 0;
      for ( i = 0; i < v11; ++i )
        *(_WORD *)(a3 + 2LL * i + 16) = *(unsigned __int8 *)(i + a2 + 76);
    }
    else
    {
      if ( (unsigned int)v10 > v8 )
        v10 = v8;
      memmove((void *)(a3 + 16), (const void *)(a2 + 76), v10);
      v12 = 0;
    }
    if ( a4 < v9 )
      return (unsigned int)-2147483643;
  }
  return v12;
}
