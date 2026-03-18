/*
 * XREFs of ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C0029C90
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0024220 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreOffsetRgn @ 0x1C00441E0 (GreOffsetRgn.c)
 *     EngUpdateDeviceSurface @ 0x1C007C780 (EngUpdateDeviceSurface.c)
 *     ?vOffset@EPATHOBJ@@QEAAXAEAVEPOINTL@@@Z @ 0x1C0083930 (-vOffset@EPATHOBJ@@QEAAXAEAVEPOINTL@@@Z.c)
 * Callees:
 *     EngSetLastError @ 0x1C0076470 (EngSetLastError.c)
 *     LongAdd @ 0x1C00B49A8 (LongAdd.c)
 */

__int64 __fastcall RGNOBJ::bOffset(unsigned int **this, struct _POINTL *a2)
{
  unsigned int *v2; // r11
  unsigned int x; // r10d
  unsigned int y; // ebx
  __int64 v6; // rcx
  int v7; // eax
  signed int v8; // edx
  signed int v9; // r8d
  unsigned int v10; // r10d
  int v11; // r10d
  __int64 v12; // r11
  unsigned int v13; // r8d
  unsigned int *i; // rdx
  __int64 v15; // rcx
  unsigned int *v16; // rax
  __int128 v18; // [rsp+20h] [rbp-18h] BYREF

  v2 = *this;
  x = a2->x;
  y = a2->y;
  if ( (*this)[21] == 1 )
    return 1LL;
  v6 = v2[22];
  v7 = v2[24];
  v8 = v2[23];
  v9 = v2[25];
  *(_QWORD *)&v18 = __PAIR64__(v8, v6);
  *((_QWORD *)&v18 + 1) = __PAIR64__(v9, v7);
  if ( (int)v6 >= v7 || v8 >= v9 )
    return 1LL;
  if ( (int)LongAdd(v6, x, &v18) >= 0
    && (int)LongAdd(HIDWORD(v18), y, (char *)&v18 + 12) >= 0
    && (int)LongAdd(DWORD2(v18), v10, (char *)&v18 + 8) >= 0
    && (int)LongAdd(DWORD1(v18), y, (char *)&v18 + 4) >= 0
    && (((v18 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
    && (((HIDWORD(v18) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
    && (((DWORD2(v18) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
    && (((DWORD1(v18) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
  {
    *(_OWORD *)(v12 + 88) = v18;
    v13 = (*this)[21];
    for ( i = *this + 26; v13; i += *i + 4 )
    {
      i[1] += y;
      --v13;
      i[2] += y;
      v15 = *i;
      if ( (_DWORD)v15 )
      {
        v16 = &i[v15 + 3];
        do
        {
          *--v16 += v11;
          LODWORD(v15) = v15 - 1;
        }
        while ( (_DWORD)v15 );
      }
    }
    i[-*(i - 1) - 2] = 0x7FFFFFFF;
    (*this)[27] = 0x80000000;
    return 1LL;
  }
  EngSetLastError(0x216u);
  return 0LL;
}
