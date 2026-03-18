/*
 * XREFs of ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C002E660
 * Callers:
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C001EA34 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     ?AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1C001EAC8 (-AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     GreValidateVisrgn @ 0x1C00209DC (GreValidateVisrgn.c)
 *     _GetDCEx @ 0x1C00212B0 (_GetDCEx.c)
 *     GreSetDCOwnerEx @ 0x1C0023A20 (GreSetDCOwnerEx.c)
 *     ReleaseCacheDC @ 0x1C0024AF0 (ReleaseCacheDC.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C002BB60 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C002C9A0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C002D710 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C002DD1C (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     SetRectRgnIndirect @ 0x1C002F110 (SetRectRgnIndirect.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C002F220 (SetOrCreateRectRgnIndirectPublic.c)
 *     GreCreateRectRgnIndirect @ 0x1C0034480 (GreCreateRectRgnIndirect.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0035860 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreSetRectRgn @ 0x1C0039670 (GreSetRectRgn.c)
 *     GreCreateRectRgn @ 0x1C0057900 (GreCreateRectRgn.c)
 *     NtGdiCreateRectRgn @ 0x1C005BC90 (NtGdiCreateRectRgn.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00BEE70 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00BF090 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00C1AE0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00C2E90 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     EngCreateClip @ 0x1C00CB9F0 (EngCreateClip.c)
 *     GreIntersectVisRect @ 0x1C00CBA80 (GreIntersectVisRect.c)
 * Callees:
 *     <none>
 */

void __fastcall RGNOBJ::vSet(RGNOBJ *this, struct _RECTL *a2)
{
  __int64 v2; // r10
  bool v3; // zf
  _DWORD *v4; // r8
  _DWORD *v5; // r8
  _DWORD *v6; // r8
  _DWORD *v7; // r8
  char *v8; // r8
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
      v6 = (_DWORD *)((char *)v5 + (unsigned int)(4 * *v5 + 16));
      v6[1] = a2->bottom;
      *(_QWORD *)(v2 + 40) = (char *)v6 + (unsigned int)(4 * *v6 + 16);
    }
    else
    {
      *(_DWORD *)(v2 + 80) = 160;
      *(_DWORD *)(v2 + 84) = 3;
      *v4 = 0;
      v4[1] = 0x80000000;
      v4[2] = a2->top;
      v4[3] = 0;
      v7 = (_DWORD *)((char *)v4 + (unsigned int)(4 * *v4 + 16));
      *v7 = 2;
      v7[1] = a2->top;
      v7[2] = a2->bottom;
      v7[3] = a2->left;
      v7[4] = a2->right;
      v7[5] = 2;
      v8 = (char *)v7 + (unsigned int)(4 * *v7 + 16);
      *(_DWORD *)v8 = 0;
      *((_DWORD *)v8 + 1) = a2->bottom;
      *((_QWORD *)v8 + 1) = 0x7FFFFFFFLL;
      *(_QWORD *)(v2 + 40) = v8 + 16;
    }
  }
}
