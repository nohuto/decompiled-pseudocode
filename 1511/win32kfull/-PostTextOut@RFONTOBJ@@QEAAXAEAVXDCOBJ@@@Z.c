/*
 * XREFs of ?PostTextOut@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002344C
 * Callers:
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C0102FFC (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ::PostTextOut(RFONTOBJ *this, struct XDCOBJ *a2)
{
  __int64 i; // rdx
  int v4; // eax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 48LL) + 56LL) & 0x8080) == 0x80 && !*(_DWORD *)(*(_QWORD *)this + 88LL) )
  {
    v5 = ghsemPrintKView;
    GreAcquireSemaphore(ghsemPrintKView);
    for ( i = gpPrintKViewList; i; i = *(_QWORD *)(i + 32) )
    {
      if ( *(_QWORD *)i == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 80LL) )
      {
        v4 = *(_DWORD *)(i + 12);
        if ( v4 )
          *(_DWORD *)(i + 12) = v4 - 1;
      }
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v5);
  }
}
