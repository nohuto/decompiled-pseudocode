/*
 * XREFs of ?ProcessSetPropertyBag@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETPROPERTYBAG@@@Z @ 0x1800F5BC0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180094250 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??4?$ComPtr@VCPropertyBag@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPropertyBag@@@Z @ 0x180122734 (--4-$ComPtr@VCPropertyBag@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPropertyBag@@@Z.c)
 *     ?HasValidTemplate@CEffectBrush@@QEBA_NXZ @ 0x180122F78 (-HasValidTemplate@CEffectBrush@@QEBA_NXZ.c)
 */

__int64 __fastcall CEffectBrush::ProcessSetPropertyBag(
        CEffectBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_EFFECTBRUSH_SETPROPERTYBAG *a3)
{
  char *v3; // rsi
  unsigned int v4; // ebx
  __int64 v6; // r9
  __int64 v7; // r10
  __int64 Resource; // rax

  v3 = (char *)this + 80;
  v4 = 0;
  if ( *((_QWORD *)this + 10) )
  {
    v4 = -2003303422;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303422, 0xE6u);
  }
  else if ( CEffectBrush::HasValidTemplate(this) )
  {
    Resource = CResourceTable::GetResource(v7, *(_DWORD *)(v6 + 8), 0x67u);
    if ( Resource )
    {
      Microsoft::WRL::ComPtr<CPropertyBag>::operator=(v3, Resource);
      *(_QWORD *)(*(_QWORD *)v3 + 120LL) = (char *)this + 64;
    }
    else
    {
      v4 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xF2u);
    }
  }
  return v4;
}
