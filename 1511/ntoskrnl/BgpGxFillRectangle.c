/*
 * XREFs of BgpGxFillRectangle @ 0x14011CAC8
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x14011C070 (BgpTxtDisplayCharacter.c)
 *     RaspAntiAlias @ 0x14011C860 (RaspAntiAlias.c)
 *     BgpClearScreen @ 0x14021EDD0 (BgpClearScreen.c)
 *     BgpTxtAdjustStaticRegion @ 0x14021F884 (BgpTxtAdjustStaticRegion.c)
 *     BgpTxtCreateRegion @ 0x1406DAC94 (BgpTxtCreateRegion.c)
 *     BgpTxtDisplayString @ 0x1406DECE0 (BgpTxtDisplayString.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall BgpGxFillRectangle(__int64 a1, int a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8

  result = (unsigned int)(*(_DWORD *)a1 * *(_DWORD *)(a1 + 4));
  v3 = *(_QWORD *)(a1 + 24);
  if ( (_DWORD)result )
  {
    v4 = (unsigned int)result;
    do
    {
      *(_WORD *)(v3 + 1) = *(_WORD *)((char *)&a2 + 1);
      *(_BYTE *)v3 = a2;
      if ( *(_DWORD *)(a1 + 8) == 32 )
        *(_BYTE *)(v3 + 3) = HIBYTE(a2);
      result = (unsigned __int64)*(unsigned int *)(a1 + 8) >> 3;
      v3 += result;
      --v4;
    }
    while ( v4 );
  }
  *(_DWORD *)(a1 + 16) &= ~0x10u;
  return result;
}
