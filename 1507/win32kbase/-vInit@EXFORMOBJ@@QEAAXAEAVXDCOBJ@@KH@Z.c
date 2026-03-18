/*
 * XREFs of ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C0028530
 * Callers:
 *     GreGetClipBox @ 0x1C0026E80 (GreGetClipBox.c)
 *     GreIntersectClipRect @ 0x1C00279E0 (GreIntersectClipRect.c)
 *     GreDCSelectPen @ 0x1C005B290 (GreDCSelectPen.c)
 * Callees:
 *     ?bInverse@EXFORMOBJ@@QEAAHAEAVMATRIX@@@Z @ 0x1C0027CF0 (-bInverse@EXFORMOBJ@@QEAAHAEAVMATRIX@@@Z.c)
 *     ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x1C003C580 (-vUpdateWtoDXform@DC@@QEAAXXZ.c)
 *     ?vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C003DF8C (-vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTFIX@@PEAU_POINTL@@_K@Z @ 0x1C00AFB20 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTFIX@@PEAU_POINTL@@_K@Z.c)
 */

void __fastcall EXFORMOBJ::vInit(EXFORMOBJ *this, DC **a2, int a3)
{
  DC *v5; // rcx
  __int64 v7; // rdx
  int v8; // esi
  int v9; // esi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  DC *v13; // rcx
  char *v14; // [rsp+20h] [rbp-18h] BYREF
  int v15; // [rsp+2Ch] [rbp-Ch]

  v5 = *a2;
  v7 = *((_QWORD *)*a2 + 10);
  if ( (*(_DWORD *)(v7 + 352) & 0xE000) != 0 )
  {
    if ( (*(_DWORD *)(v7 + 8) & 0x100) != 0 )
    {
      v15 = 0;
      v14 = (char *)v5 + 372;
      if ( v5 != (DC *)-372LL )
        EXFORMOBJ::bXform((EXFORMOBJ *)&v14, (struct _POINTFIX *)(v7 + 84), (struct _POINTL *)(v7 + 76), 1uLL);
      *(_DWORD *)(*((_QWORD *)*a2 + 10) + 8LL) &= ~0x100u;
    }
    DC::vUpdateWtoDXform(*a2);
    *(_DWORD *)(*((_QWORD *)*a2 + 10) + 8LL) |= 0x200u;
    v13 = *a2;
    if ( (*(_DWORD *)(*((_QWORD *)*a2 + 10) + 352LL) & 0x80u) != 0 )
    {
      v15 = 0;
      v14 = (char *)v13 + 336;
      if ( v13 != (DC *)-336LL )
        DC::vRealizeLineAttrs(v13, (struct EXFORMOBJ *)&v14);
      *((_DWORD *)*a2 + 66) |= 1u;
      *(_DWORD *)(*((_QWORD *)*a2 + 10) + 352LL) &= ~0x80u;
    }
    *(_DWORD *)(*((_QWORD *)*a2 + 10) + 352LL) |= 0x10u;
  }
  v8 = a3 - 515;
  if ( !v8 )
  {
    v10 = (__int64)*a2 + 408;
    goto LABEL_5;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v10 = (__int64)*a2 + 336;
LABEL_5:
    *(_QWORD *)this = v10;
    return;
  }
  if ( v9 != 510 )
  {
LABEL_21:
    *(_QWORD *)this = 0LL;
    return;
  }
  *(_QWORD *)this = (char *)*a2 + 372;
  if ( (*(_DWORD *)(*((_QWORD *)*a2 + 10) + 352LL) & 0x10) != 0 )
  {
    if ( (unsigned int)EXFORMOBJ::bInverse(this, (DC *)((char *)*a2 + 336)) )
    {
      *(_DWORD *)(*((_QWORD *)*a2 + 10) + 352LL) &= ~0x10u;
      v11 = *(_QWORD *)this;
      v12 = *((_QWORD *)*a2 + 10);
      *(_OWORD *)(v12 + 220) = *(_OWORD *)*(_QWORD *)this;
      *(_OWORD *)(v12 + 236) = *(_OWORD *)(v11 + 16);
      *(_DWORD *)(v12 + 252) = *(_DWORD *)(v11 + 32);
      return;
    }
    goto LABEL_21;
  }
}
