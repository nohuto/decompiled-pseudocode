/*
 * XREFs of ?bGetLine@XCLIPOBJ@@IEAAHPEAVEPATHOBJ@@PEAK@Z @ 0x1C02B48A4
 * Callers:
 *     ?bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z @ 0x1C02B47C8 (-bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z.c)
 *     ?vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C02B4AFC (-vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
 * Callees:
 *     ?bGetMorePoints@XCLIPOBJ@@IEAAHPEAVEPATHOBJ@@PEAK@Z @ 0x1C02B49AC (-bGetMorePoints@XCLIPOBJ@@IEAAHPEAVEPATHOBJ@@PEAK@Z.c)
 *     ?bEnumStartLine@XCLIPOBJ@@QEAAHK@Z @ 0x1C02C7E2C (-bEnumStartLine@XCLIPOBJ@@QEAAHK@Z.c)
 */

__int64 __fastcall XCLIPOBJ::bGetLine(XCLIPOBJ *this, struct EPATHOBJ *a2, unsigned int *a3)
{
  __int64 v3; // r8
  int v6; // edi
  int v8; // eax
  unsigned int *v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = a3;
  v3 = *((_QWORD *)this + 18);
  v6 = 0;
  while ( 1 )
  {
    v8 = *(_DWORD *)(v3 + 24);
    if ( (v8 & 0x2000000) != 0 )
      break;
    if ( *(_DWORD *)v3 <= 1u )
    {
      if ( (v8 & 8) != 0 )
      {
        *(_QWORD *)(v3 + 4) = **(_QWORD **)(v3 + 16);
        *(_QWORD *)(*((_QWORD *)this + 18) + 16LL) = *((_QWORD *)this + 18) + 204LL;
        if ( (unsigned int)XCLIPOBJ::bEnumStartLine(this, 0x100000u) && !v6 )
          return 1LL;
      }
      else
      {
        if ( !(unsigned int)XCLIPOBJ::bGetMorePoints(this, a2, (unsigned int *)&v9) )
          return 0LL;
        if ( (unsigned int)XCLIPOBJ::bEnumStartLine(this, v6 | (unsigned int)v9) )
          return 1LL;
        v6 |= *(_DWORD *)(*((_QWORD *)this + 18) + 24LL) & 5;
      }
    }
    else
    {
      *(_QWORD *)(v3 + 4) = **(_QWORD **)(v3 + 16);
      *(_QWORD *)(*((_QWORD *)this + 18) + 16LL) += 8LL;
      --**((_DWORD **)this + 18);
      if ( (unsigned int)XCLIPOBJ::bEnumStartLine(this, v6 | *(_DWORD *)(*((_QWORD *)this + 18) + 24LL) & 8u) )
        return 1LL;
    }
    v3 = *((_QWORD *)this + 18);
  }
  return 0LL;
}
