/*
 * XREFs of ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0029EE0
 * Callers:
 *     GreCreateRectRgnIndirect @ 0x1C0023BD0 (GreCreateRectRgnIndirect.c)
 *     GreSetRectRgn @ 0x1C0025020 (GreSetRectRgn.c)
 *     SetRectRgnIndirect @ 0x1C0026D20 (SetRectRgnIndirect.c)
 *     GreCombineRgn @ 0x1C0026E40 (GreCombineRgn.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0028890 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C00294B0 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?GreValidateRgnInDCSurfBounds@@YAXPEAVDC@@PEAVSURFACE@@PEAVREGION@@W4_VALIDATE_REGION_CALLER@@@Z @ 0x1C002B770 (-GreValidateRgnInDCSurfBounds@@YAXPEAVDC@@PEAVSURFACE@@PEAVREGION@@W4_VALIDATE_REGION_CALLER@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C002C950 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C002D860 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     hbmSelectBitmap @ 0x1C002DCA0 (hbmSelectBitmap.c)
 *     GreRestoreDC @ 0x1C0032D00 (GreRestoreDC.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C003E8A0 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     ?AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1C003E934 (-AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     NtGdiCreateRectRgn @ 0x1C005D500 (NtGdiCreateRectRgn.c)
 *     GreCreateRectRgn @ 0x1C0069800 (GreCreateRectRgn.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00B48A8 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00B6550 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00B7960 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     EngCreateClip @ 0x1C00BF770 (EngCreateClip.c)
 *     GreIntersectVisRect @ 0x1C00BF800 (GreIntersectVisRect.c)
 * Callees:
 *     <none>
 */

void __fastcall RGNOBJ::vSet(RGNOBJ *this, struct _RECTL *a2)
{
  __int64 v2; // r9
  bool v3; // zf
  _DWORD *v4; // r8
  _DWORD *v5; // r8
  char *v6; // r8
  LONG bottom; // eax
  _DWORD *v8; // r8
  __int64 v9; // r8
  __int64 v10; // rdx

  if ( a2->left == a2->right || a2->top == a2->bottom )
  {
    v9 = *(_QWORD *)this;
    v10 = *(_QWORD *)this + 104LL;
    *(_DWORD *)(v9 + 80) = 120;
    *(_QWORD *)(v9 + 84) = 1LL;
    *(_QWORD *)(v9 + 92) = 0LL;
    *(_DWORD *)(v9 + 100) = 0;
    *(_DWORD *)v10 = 0;
    *(_DWORD *)(v10 + 4) = 0x80000000;
    *(_QWORD *)(v10 + 8) = 0x7FFFFFFFLL;
    *(_QWORD *)(v9 + 40) = v10 + 16;
  }
  else
  {
    v2 = *(_QWORD *)this;
    v3 = *(_DWORD *)(*(_QWORD *)this + 80LL) == 160;
    v4 = (_DWORD *)(*(_QWORD *)this + 104LL);
    *(struct _RECTL *)(*(_QWORD *)this + 88LL) = *a2;
    if ( v3 )
    {
      v4[2] = a2->top;
      v8 = (_DWORD *)((char *)v4 + (unsigned int)(4 * *v4 + 16));
      v8[1] = a2->top;
      v8[2] = a2->bottom;
      v8[3] = a2->left;
      v8[4] = a2->right;
      bottom = a2->bottom;
      v6 = (char *)v8 + (unsigned int)(4 * *v8 + 16);
    }
    else
    {
      *(_DWORD *)(v2 + 80) = 160;
      *(_DWORD *)(v2 + 84) = 3;
      *v4 = 0;
      v4[1] = 0x80000000;
      v4[2] = a2->top;
      v4[3] = 0;
      v5 = (_DWORD *)((char *)v4 + (unsigned int)(4 * *v4 + 16));
      *v5 = 2;
      v5[1] = a2->top;
      v5[2] = a2->bottom;
      v5[3] = a2->left;
      v5[4] = a2->right;
      v5[5] = 2;
      v6 = (char *)v5 + (unsigned int)(4 * *v5 + 16);
      *(_DWORD *)v6 = 0;
      bottom = a2->bottom;
      *((_QWORD *)v6 + 1) = 0x7FFFFFFFLL;
    }
    *((_DWORD *)v6 + 1) = bottom;
    *(_QWORD *)(v2 + 40) = &v6[4 * *(_DWORD *)v6 + 16];
  }
}
