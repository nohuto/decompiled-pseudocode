/*
 * XREFs of ?RegisterNotifiers@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z @ 0x1800321B4
 * Callers:
 *     ?ProcessUpdate@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_IMAGELEGACYMILBRUSH@@@Z @ 0x180032A6C (-ProcessUpdate@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_IMAGELEGACYMILBRUSH@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18008DFE0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 */

__int64 __fastcall CImageLegacyMilBrush::RegisterNotifiers(struct CResource **this, struct CResourceTable *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  struct CResource *v6; // rax
  struct CResource *v7; // rdx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax

  v3 = CResource::RegisterNotifier((CResource *)this, this[60]);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xFCEu);
  }
  else
  {
    v5 = CResource::RegisterNotifier((CResource *)this, this[61]);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xFCFu);
    }
    else
    {
      v6 = this[74];
      if ( v6 )
        v7 = (struct CResource *)((char *)v6 + 16);
      else
        v7 = 0LL;
      v8 = CResource::RegisterNotifier((CResource *)this, v7);
      v4 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xFD0u);
      }
      else
      {
        v9 = CResource::RegisterNotifier((CResource *)this, this[59]);
        v4 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xFD1u);
        }
        else
        {
          v10 = CResource::RegisterNotifier((CResource *)this, this[65]);
          v4 = v10;
          if ( v10 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xFD2u);
          }
          else
          {
            v11 = CResource::RegisterNotifier((CResource *)this, this[68]);
            v4 = v11;
            if ( v11 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xFD3u);
          }
        }
      }
    }
  }
  return v4;
}
