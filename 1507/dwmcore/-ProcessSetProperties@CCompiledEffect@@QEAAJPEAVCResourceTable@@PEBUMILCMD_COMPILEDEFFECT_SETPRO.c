/*
 * XREFs of ?ProcessSetProperties@CCompiledEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECT_SETPROPERTIES@@@Z @ 0x1801134D0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18006CA90 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??4?$ComPtr@VCPropertyBag@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPropertyBag@@@Z @ 0x1801123AC (--4-$ComPtr@VCPropertyBag@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPropertyBag@@@Z.c)
 *     ?HasValidTemplate@CCompiledEffect@@QEBA_NXZ @ 0x180113374 (-HasValidTemplate@CCompiledEffect@@QEBA_NXZ.c)
 */

__int64 __fastcall CCompiledEffect::ProcessSetProperties(
        CCompiledEffect *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPILEDEFFECT_SETPROPERTIES *a3)
{
  __int64 *v3; // rsi
  unsigned int v4; // ebx
  __int64 v6; // r9
  __int64 v7; // r10
  __int64 Resource; // rax

  v3 = (__int64 *)((char *)this + 64);
  v4 = 0;
  if ( *((_QWORD *)this + 8) )
  {
    v4 = -2003303422;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303422, 0x57u);
  }
  else if ( CCompiledEffect::HasValidTemplate(this) )
  {
    Resource = CResourceTable::GetResource(v7, *(_DWORD *)(v6 + 8), 95LL);
    if ( Resource )
    {
      Microsoft::WRL::ComPtr<CPropertyBag>::operator=(v3, Resource);
      *(_QWORD *)(*v3 + 128) = (char *)this + 48;
    }
    else
    {
      v4 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x63u);
    }
  }
  return v4;
}
