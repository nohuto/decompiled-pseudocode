/*
 * XREFs of ?RegisterNotifiers@CLinearGradientLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z @ 0x180017574
 * Callers:
 *     ?ProcessUpdate@CLinearGradientLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARGRADIENTLEGACYMILBRUSH@@PEBXI@Z @ 0x180017904 (-ProcessUpdate@CLinearGradientLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARGRADIENT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18008DFE0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 */

__int64 __fastcall CLinearGradientLegacyMilBrush::RegisterNotifiers(struct CResource **this, struct CResourceTable *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // eax

  v3 = CResource::RegisterNotifier((CResource *)this, this[20]);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xF05u);
  }
  else
  {
    v5 = CResource::RegisterNotifier((CResource *)this, this[21]);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xF06u);
    }
    else
    {
      v6 = CResource::RegisterNotifier((CResource *)this, this[19]);
      v4 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xF08u);
    }
  }
  return v4;
}
