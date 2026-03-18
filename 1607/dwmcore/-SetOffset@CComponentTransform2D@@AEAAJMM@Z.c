/*
 * XREFs of ?SetOffset@CComponentTransform2D@@AEAAJMM@Z @ 0x18002065C
 * Callers:
 *     ?ProcessSetOffset@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM2D_SETOFFSET@@@Z @ 0x180020874 (-ProcessSetOffset@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM2.c)
 *     ?SetProperty@CComponentTransform2D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18014EB80 (-SetProperty@CComponentTransform2D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector2@@@Z @ 0x180023F30 (-NotifyVector2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector2@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18008DB00 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CComponentTransform2D::SetOffset(CComponentTransform2D *this, double a2, double a3)
{
  unsigned int v3; // edi
  int v6; // eax
  unsigned __int64 v7; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  if ( *((float *)this + 38) != *(float *)&a2 || *((float *)this + 39) != *(float *)&a3 )
  {
    *((_DWORD *)this + 38) = LODWORD(a2);
    *((_DWORD *)this + 39) = LODWORD(a3);
    CResource::NotifyOnChanged(this, 0LL, 0LL);
    v7 = _mm_unpacklo_ps(*(__m128 *)&a2, *(__m128 *)&a3).m128_u64[0];
    v6 = CPropertyChangeResource::NotifyVector2PropertyChanged(this, 0x3EAu, (const struct D2DVector2 *)&v7);
    v3 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x122u);
    else
      CResource::InvalidateAnimationSources(this, 0x3EAu);
  }
  return v3;
}
