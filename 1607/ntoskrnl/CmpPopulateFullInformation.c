/*
 * XREFs of CmpPopulateFullInformation @ 0x1404C1AC0
 * Callers:
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1401B6C10 (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpQueryKeyDataFromNode @ 0x1404370E0 (CmpQueryKeyDataFromNode.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 */

__int64 __fastcall CmpPopulateFullInformation(
        __int64 a1,
        const void *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6)
{
  unsigned int v6; // esi
  int v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // eax

  v6 = a3 + 44;
  *a6 = a3 + 44;
  if ( a5 < 0x2C )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    *(_QWORD *)a4 = *(_QWORD *)a1;
    *(_DWORD *)(a4 + 24) = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(a4 + 28) = *(_DWORD *)(a1 + 28);
    *(_DWORD *)(a4 + 36) = *(_DWORD *)(a1 + 36);
    *(_DWORD *)(a4 + 40) = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a4 + 8) = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a4 + 16) = a3;
    *(_DWORD *)(a4 + 20) = *(_DWORD *)(a1 + 20);
    *(_DWORD *)(a4 + 32) = *(_DWORD *)(a1 + 32);
    v7 = -1;
    v8 = 0;
    if ( a3 )
      v7 = 44;
    *(_DWORD *)(a4 + 12) = v7;
    if ( a3 )
    {
      v9 = a5 - 44;
      if ( a5 - 44 > a3 )
        v9 = a3;
      memmove((void *)(a4 + 44), a2, v9);
    }
    if ( a5 < v6 )
      return (unsigned int)-2147483643;
  }
  return v8;
}
