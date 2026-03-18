/*
 * XREFs of vMirrorIncludeNotifyWrap @ 0x1C00F8A40
 * Callers:
 *     <none>
 * Callees:
 *     ?bStockSurface@SURFACE@@QEAAHXZ @ 0x1C028CAD8 (-bStockSurface@SURFACE@@QEAAHXZ.c)
 *     ?vMirrorNotifyDrawing@@YAXAEAVPDEVOBJ@@PEAVSURFACE@@H@Z @ 0x1C028CCD0 (-vMirrorNotifyDrawing@@YAXAEAVPDEVOBJ@@PEAVSURFACE@@H@Z.c)
 */

void __fastcall vMirrorIncludeNotifyWrap(__int64 a1, struct SURFACE *a2)
{
  __int64 v3; // rax
  int v4; // edx
  int v5; // r8d
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v6 = v3;
  if ( v3
    && (*(_DWORD *)(v3 + 56) & 0x2020001) == 0x2020001
    && (*((_DWORD *)a2 + 28) & 0x4000000) != 0
    && a2 != SURFACE::pdibDefault
    && !(unsigned int)SURFACE::bStockSurface(a2)
    && (v4 & 0x400800) == 0 )
  {
    if ( v5 )
    {
      *((_DWORD *)a2 + 28) = v4 | 0x10;
      vMirrorNotifyDrawing((struct PDEVOBJ *)&v6, a2, 1);
    }
    else
    {
      vMirrorNotifyDrawing((struct PDEVOBJ *)&v6, a2, 0);
      *((_DWORD *)a2 + 28) &= ~0x10u;
    }
  }
}
