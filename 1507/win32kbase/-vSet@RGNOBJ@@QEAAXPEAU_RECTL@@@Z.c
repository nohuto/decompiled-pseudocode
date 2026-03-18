/*
 * XREFs of ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0040180
 * Callers:
 *     NtGdiCreateRectRgn @ 0x1C000C820 (NtGdiCreateRectRgn.c)
 *     GreCreateRectRgn @ 0x1C0011BD0 (GreCreateRectRgn.c)
 *     ReleaseCacheDC @ 0x1C00357B0 (ReleaseCacheDC.c)
 *     GreSetDCOwnerEx @ 0x1C0035D30 (GreSetDCOwnerEx.c)
 *     _GetDCEx @ 0x1C0036B60 (_GetDCEx.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C003CC70 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C003DBA0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C003E7A0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C003F720 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     GreCombineRgn @ 0x1C0040310 (GreCombineRgn.c)
 *     SetRectRgnIndirect @ 0x1C0041D40 (SetRectRgnIndirect.c)
 *     GreCreateRectRgnIndirect @ 0x1C0042990 (GreCreateRectRgnIndirect.c)
 *     GreSetRectRgn @ 0x1C0042B20 (GreSetRectRgn.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0043D80 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C004A358 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     ?AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1C004A3EC (-AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     GreValidateVisrgn @ 0x1C0067180 (GreValidateVisrgn.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00B0F10 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00B1130 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00B3F60 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00B5330 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     EngCreateClip @ 0x1C00BE210 (EngCreateClip.c)
 *     GreIntersectVisRect @ 0x1C00BE2A0 (GreIntersectVisRect.c)
 * Callees:
 *     <none>
 */

void __fastcall RGNOBJ::vSet(RGNOBJ *this, struct _RECTL *a2)
{
  __int64 v2; // r9
  bool v3; // zf
  _DWORD *v4; // r8
  _DWORD *v5; // r8
  LONG bottom; // eax
  char *v7; // r8
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
      v5 = (_DWORD *)((char *)v4 + (unsigned int)(4 * *v4 + 16));
      v5[1] = a2->top;
      v5[2] = a2->bottom;
      v5[3] = a2->left;
      v5[4] = a2->right;
      bottom = a2->bottom;
      v7 = (char *)v5 + (unsigned int)(4 * *v5 + 16);
    }
    else
    {
      *(_DWORD *)(v2 + 80) = 160;
      *(_DWORD *)(v2 + 84) = 3;
      *v4 = 0;
      v4[1] = 0x80000000;
      v4[2] = a2->top;
      v4[3] = 0;
      v8 = (_DWORD *)((char *)v4 + (unsigned int)(4 * *v4 + 16));
      *v8 = 2;
      v8[1] = a2->top;
      v8[2] = a2->bottom;
      v8[3] = a2->left;
      v8[4] = a2->right;
      v8[5] = 2;
      v7 = (char *)v8 + (unsigned int)(4 * *v8 + 16);
      *(_DWORD *)v7 = 0;
      bottom = a2->bottom;
      *((_QWORD *)v7 + 1) = 0x7FFFFFFFLL;
    }
    *((_DWORD *)v7 + 1) = bottom;
    *(_QWORD *)(v2 + 40) = &v7[4 * *(_DWORD *)v7 + 16];
  }
}
