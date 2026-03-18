/*
 * XREFs of ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C002E420
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C002BDE0 (-bCompute@DC@@QEAAHXZ.c)
 *     GreOffsetRgn @ 0x1C0036A90 (GreOffsetRgn.c)
 *     ?vOffset@EPATHOBJ@@QEAAXAEAVEPOINTL@@@Z @ 0x1C0046DC0 (-vOffset@EPATHOBJ@@QEAAXAEAVEPOINTL@@@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C007FCF0 (EngUpdateDeviceSurface.c)
 * Callees:
 *     EngSetLastError @ 0x1C0079760 (EngSetLastError.c)
 */

__int64 __fastcall RGNOBJ::bOffset(int **this, struct _POINTL *a2)
{
  int *v2; // r8
  __int64 x; // rbx
  __int64 y; // r10
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rdx
  int v13; // r9d
  unsigned int *i; // rax
  __int64 v15; // rdx
  unsigned int *v16; // r8
  __int128 v17; // [rsp+20h] [rbp-28h]

  v2 = *this;
  x = a2->x;
  y = a2->y;
  if ( (*this)[21] == 1 )
    return 1LL;
  v6 = v2[22];
  v7 = v2[24];
  v8 = v2[23];
  v9 = v2[25];
  if ( (int)v6 < (int)v7 && (int)v8 < (int)v9 )
  {
    if ( (unsigned __int64)(x + v6 + 0x80000000LL) > 0xFFFFFFFF
      || (unsigned __int64)(y + v9 + 0x80000000LL) > 0xFFFFFFFF
      || (v10 = x + v7, (unsigned __int64)(v10 + 0x80000000LL) > 0xFFFFFFFF)
      || (v11 = y + v8, DWORD2(v17) = v10, (unsigned __int64)(v11 + 0x80000000LL) > 0xFFFFFFFF)
      || (DWORD1(v17) = v11,
          (((_DWORD)x + (_DWORD)v6) & 0xF8000000) != 0 && (((_DWORD)x + (_DWORD)v6) & 0xF8000000) != -134217728)
      || (((((_DWORD)y + (_DWORD)v9) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
      || (((v10 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
      || (((v11 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
    {
      EngSetLastError(0x216u);
      return 0LL;
    }
    LODWORD(v17) = x + v6;
    HIDWORD(v17) = y + v9;
    *(_OWORD *)(v2 + 22) = v17;
    v13 = (*this)[21];
    for ( i = (unsigned int *)(*this + 26); v13; i += *i + 4 )
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
          *--v16 += x;
          LODWORD(v15) = v15 - 1;
        }
        while ( (_DWORD)v15 );
      }
    }
    i[-*(i - 1) - 2] = 0x7FFFFFFF;
    (*this)[27] = 0x80000000;
  }
  return 1LL;
}
