/*
 * XREFs of CmpPopulateNodeInformation @ 0x1404B6134
 * Callers:
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1401B6C10 (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpQueryKeyDataFromNode @ 0x1404370E0 (CmpQueryKeyDataFromNode.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     CmpCopyCompressedName @ 0x14043EFB0 (CmpCopyCompressedName.c)
 */

__int64 __fastcall CmpPopulateNodeInformation(
        __int64 a1,
        __int64 a2,
        const void *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int v9; // r9d
  unsigned int v10; // edi
  unsigned int v11; // ebx
  unsigned int v12; // r15d
  int v13; // eax
  unsigned int v14; // r10d
  _WORD *v15; // rcx
  unsigned int v16; // eax

  if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
    v9 = (unsigned __int16)(2 * *(_WORD *)(a2 + 72));
  else
    v9 = *(unsigned __int16 *)(a2 + 72);
  v10 = v9 + 24;
  v11 = 0;
  if ( a4 )
  {
    v12 = (v9 + 31) & 0xFFFFFFF8;
    v10 = a4 + v12;
  }
  else
  {
    v12 = v9 + 24;
  }
  *a7 = v10;
  if ( a6 < 0x18 )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    *(_QWORD *)a5 = *(_QWORD *)a1;
    *(_DWORD *)(a5 + 8) = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a5 + 16) = a4;
    *(_DWORD *)(a5 + 20) = v9;
    v13 = -1;
    if ( a4 )
      v13 = v12;
    *(_DWORD *)(a5 + 12) = v13;
    v14 = a6 - 24;
    v15 = (_WORD *)(a5 + 24);
    if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
    {
      CmpCopyCompressedName(v15, v14, (unsigned __int8 *)(a2 + 76), *(unsigned __int16 *)(a2 + 72));
    }
    else
    {
      if ( v14 > v9 )
        v14 = v9;
      memmove(v15, (const void *)(a2 + 76), v14);
    }
    if ( a6 < v12 )
    {
      return (unsigned int)-2147483643;
    }
    else
    {
      v16 = a6 - v12;
      if ( a4 )
      {
        if ( v16 > a4 )
          v16 = a4;
        memmove((void *)(a5 + v12), a3, v16);
      }
      if ( v10 > a6 )
        return (unsigned int)-2147483643;
    }
  }
  return v11;
}
