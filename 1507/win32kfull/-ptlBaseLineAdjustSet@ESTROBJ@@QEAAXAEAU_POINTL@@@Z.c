/*
 * XREFs of ?ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z @ 0x1C029ACDC
 * Callers:
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C00FE334 (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C028AD0C (-GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z.c)
 *     ?bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z @ 0x1C02B60B0 (-bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ESTROBJ::ptlBaseLineAdjustSet(ESTROBJ *this, struct _POINTL *a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx
  __int64 v4; // r9
  __int64 v5; // r10

  v2 = (__int64)*a2;
  v3 = 0;
  *(_QWORD *)((char *)this + 244) = v2;
  if ( ((_DWORD)v2 || *((_DWORD *)this + 62)) && *(_DWORD *)this )
  {
    v4 = 0LL;
    v5 = 0LL;
    do
    {
      if ( *(_DWORD *)(v5 + *((_QWORD *)this + 27)) == *((_DWORD *)this + 60) )
      {
        *(_DWORD *)(*((_QWORD *)this + 9) + v4 + 16) += *((_DWORD *)this + 61);
        *(_DWORD *)(*((_QWORD *)this + 9) + v4 + 20) += *((_DWORD *)this + 62);
        ++v3;
      }
      v5 += 4LL;
      v4 += 24LL;
    }
    while ( v3 < *(_DWORD *)this );
  }
}
