/*
 * XREFs of ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C000A658
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00ABF5C (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 * Callees:
 *     ?SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C000A860 (-SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 *     ?FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C000A8D4 (-FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?CalcDpiOverride@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C000A908 (-CalcDpiOverride@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 *     ?CalcDpi@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C0022298 (-CalcDpi@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 */

void __fastcall FillDpiInfo(
        const struct tagSIZE *a1,
        struct tagSIZE *this,
        const struct tagSIZE *a3,
        DpiInternal *a4,
        DpiInternal *a5,
        unsigned int a6,
        struct _DPI_SCALE_FACTOR_COLLECTION *a7,
        struct _DPI_INFORMATION *a8)
{
  int v8; // ebp
  struct tagSIZE v13; // rax
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rcx
  unsigned int PlateauIndexForScaleFactor; // eax
  unsigned int v17; // edx
  bool v18; // zf
  int v19; // eax
  const struct _DPI_SCALE_FACTOR_COLLECTION *v20; // [rsp+20h] [rbp-8h]
  struct _DPI_SCALE_FACTOR_COLLECTION *v21; // [rsp+68h] [rbp+40h]

  v8 = (int)a4;
  *((struct tagSIZE *)a8 + 3) = *a1;
  *((struct tagSIZE *)a8 + 4) = *this;
  if ( a1->cx && a1->cy )
    *((struct tagSIZE *)a8 + 5) = DpiInternal::CalcDpi((DpiInternal *)this, a1, a3);
  v13 = DpiInternal::CalcDpiOverride((DpiInternal *)this, a1, a3);
  if ( !v13.cx || !v13.cy )
    v13 = (struct tagSIZE)*((_QWORD *)a8 + 5);
  *((struct tagSIZE *)a8 + 6) = v13;
  *((_DWORD *)a8 + 16) = v8;
  if ( v8 == 0xFFFF )
  {
    v14 = (unsigned int)(a3[1].cx - 1);
    if ( a3[1].cx != 1 )
    {
      do
      {
        if ( (unsigned int)(100 * *((_DWORD *)a8 + 9)) / *(_DWORD *)(*(_QWORD *)&a3[2] + 4 * v14) >= 0x2D0 )
          break;
        v18 = (_DWORD)v14 == 1;
        v14 = (unsigned int)(v14 - 1);
      }
      while ( !v18 );
    }
    v19 = 100;
    if ( (_DWORD)v14 )
      v19 = *(_DWORD *)(*(_QWORD *)&a3[3] + 4LL * (unsigned int)(v14 - 1)) + 1;
    LODWORD(v21) = v19;
    HIDWORD(v21) = v19;
  }
  else
  {
    LODWORD(v21) = 100 * v8 * *((_DWORD *)a8 + 10) / 0x6900u;
    v14 = 100 * v8 * *((_DWORD *)a8 + 11) / 0x6900u;
    HIDWORD(v21) = 100 * v8 * *((_DWORD *)a8 + 11) / 0x6900u;
  }
  v15 = a6;
  *((_QWORD *)a8 + 7) = v21;
  if ( !a6 )
    v15 = (unsigned int)((HIDWORD(v21) + (int)v21) / 2);
  PlateauIndexForScaleFactor = DpiInternal::FindPlateauIndexForScaleFactor(
                                 (DpiInternal *)v15,
                                 (unsigned int)a3,
                                 (const struct _DPI_SCALE_FACTOR_COLLECTION *)v14);
  *((_DWORD *)a8 + 3) = DpiInternal::SatisfyMinResolutionBarForScaleIdx(
                          (DpiInternal *)PlateauIndexForScaleFactor,
                          0,
                          (int)*this,
                          (struct tagSIZE)a3,
                          v20);
  DpiInternal::FillOverridesAndAdjustedScaleFactor((DpiInternal *)(unsigned int)a5, v17, (int)a3, a8, a5);
}
