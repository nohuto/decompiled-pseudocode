/*
 * XREFs of ?RegisterNotifiers@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z @ 0x180058C24
 * Callers:
 *     ?ProcessUpdate@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SOLIDCOLORLEGACYMILBRUSH@@@Z @ 0x180058928 (-ProcessUpdate@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SOLIDCOLORLEGACYMI.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180085898 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CSolidColorLegacyMilBrush::RegisterNotifiers(struct CResource **this, struct CResourceTable *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // eax

  v3 = CResource::RegisterNotifier((CResource *)this, this[9]);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xEABu);
  }
  else
  {
    v5 = CResource::RegisterNotifier((CResource *)this, this[10]);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xEACu);
    }
    else
    {
      v6 = CResource::RegisterNotifier((CResource *)this, this[8]);
      v4 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xEADu);
    }
  }
  return v4;
}
