/*
 * XREFs of ?ProcessSetPropertyBag@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETPROPERTYBAG@@@Z @ 0x18010D43C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18003ABA0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?HasValidTemplate@CEffectBrush@@QEBA_NXZ @ 0x18013C134 (-HasValidTemplate@CEffectBrush@@QEBA_NXZ.c)
 */

__int64 __fastcall CEffectBrush::ProcessSetPropertyBag(
        CEffectBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_EFFECTBRUSH_SETPROPERTYBAG *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 Resource; // rax
  __int64 v8; // rsi
  __int64 v9; // rcx

  v3 = 0;
  if ( *((_QWORD *)this + 18) )
  {
    v3 = -2003303422;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303422, 0x103u);
  }
  else if ( CEffectBrush::HasValidTemplate(this) )
  {
    Resource = CResourceTable::GetResource(v6, *(_DWORD *)(v5 + 8), 0x70u);
    v8 = Resource;
    if ( Resource )
    {
      if ( *((_QWORD *)this + 18) != Resource )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)Resource + 8LL))(Resource);
        v9 = *((_QWORD *)this + 18);
        *((_QWORD *)this + 18) = v8;
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      *(_QWORD *)(*((_QWORD *)this + 18) + 192LL) = (char *)this + 128;
    }
    else
    {
      v3 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x10Fu);
    }
  }
  return v3;
}
