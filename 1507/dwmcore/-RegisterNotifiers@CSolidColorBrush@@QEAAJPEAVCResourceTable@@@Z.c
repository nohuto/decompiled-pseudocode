/*
 * XREFs of ?RegisterNotifiers@CSolidColorBrush@@QEAAJPEAVCResourceTable@@@Z @ 0x180083EC4
 * Callers:
 *     ?ProcessUpdate@CSolidColorBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SOLIDCOLORBRUSH@@@Z @ 0x180083F24 (-ProcessUpdate@CSolidColorBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SOLIDCOLORBRUSH@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180048368 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CSolidColorBrush::RegisterNotifiers(struct CResource **this, struct CResourceTable *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // eax

  v3 = CResource::RegisterNotifier((CResource *)this, this[9]);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xEA9u);
  }
  else
  {
    v5 = CResource::RegisterNotifier((CResource *)this, this[10]);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xEAAu);
    }
    else
    {
      v6 = CResource::RegisterNotifier((CResource *)this, this[8]);
      v4 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xEABu);
    }
  }
  return v4;
}
