/*
 * XREFs of ?ProcessSetSurface@CLinearGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARGRADIENTBRUSH_SETSURFACE@@@Z @ 0x18010CF90
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18003AAC4 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetSurface@CSurfaceBrush@@IEAAJPEAVCResource@@@Z @ 0x18013ADE8 (-SetSurface@CSurfaceBrush@@IEAAJPEAVCResource@@@Z.c)
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x180158148 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 */

__int64 __fastcall CLinearGradientBrush::ProcessSetSurface(
        CLinearGradientBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_LINEARGRADIENTBRUSH_SETSURFACE *a3)
{
  struct CResource *ResourceWithoutType; // rax
  int v6; // eax
  unsigned int v7; // esi
  int v8; // ecx
  int v9; // ecx

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v6 = CSurfaceBrush::SetSurface(this, ResourceWithoutType);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x66u);
    return v7;
  }
  *((float *)this + 38) = (float)*((int *)a3 + 3);
  *((float *)this + 39) = (float)*((int *)a3 + 4);
  *((float *)this + 40) = (float)*((int *)a3 + 5);
  *((float *)this + 41) = (float)*((int *)a3 + 6);
  *((_BYTE *)this + 193) = *((_DWORD *)a3 + 8) != 0;
  v8 = *((_DWORD *)a3 + 7);
  if ( !v8 )
    goto LABEL_7;
  v9 = v8 - 1;
  if ( !v9 )
  {
    *((_BYTE *)this + 192) = 2;
    goto LABEL_8;
  }
  if ( v9 != 1 )
  {
LABEL_7:
    *((_BYTE *)this + 192) = 0;
    goto LABEL_8;
  }
  *((_BYTE *)this + 192) = 1;
LABEL_8:
  CSpriteVisualContent::ReleasePrimitiveCaches(this);
  return v7;
}
