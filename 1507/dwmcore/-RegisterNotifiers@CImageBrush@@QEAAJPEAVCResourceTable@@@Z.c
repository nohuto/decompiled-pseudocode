/*
 * XREFs of ?RegisterNotifiers@CImageBrush@@QEAAJPEAVCResourceTable@@@Z @ 0x180085198
 * Callers:
 *     ?ProcessUpdate@CImageBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_IMAGEBRUSH@@@Z @ 0x180085258 (-ProcessUpdate@CImageBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_IMAGEBRUSH@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180048368 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CImageBrush::RegisterNotifiers(struct CResource **this, struct CResourceTable *a2)
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

  v3 = CResource::RegisterNotifier((CResource *)this, this[50]);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x101Au);
  }
  else
  {
    v5 = CResource::RegisterNotifier((CResource *)this, this[51]);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x101Bu);
    }
    else
    {
      v6 = this[64];
      if ( v6 )
        v7 = (struct CResource *)((char *)v6 + 16);
      else
        v7 = 0LL;
      v8 = CResource::RegisterNotifier((CResource *)this, v7);
      v4 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x101Cu);
      }
      else
      {
        v9 = CResource::RegisterNotifier((CResource *)this, this[49]);
        v4 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x101Du);
        }
        else
        {
          v10 = CResource::RegisterNotifier((CResource *)this, this[55]);
          v4 = v10;
          if ( v10 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x101Eu);
          }
          else
          {
            v11 = CResource::RegisterNotifier((CResource *)this, this[58]);
            v4 = v11;
            if ( v11 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x101Fu);
          }
        }
      }
    }
  }
  return v4;
}
