/*
 * XREFs of ?_EnsureResources@CLivePreview@@AEAAJXZ @ 0x180045C14
 * Callers:
 *     ?Initialize@CLivePreview@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180045D00 (-Initialize@CLivePreview@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800177C0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Create@CVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180034EF8 (-Create@CVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CLivePreview::_EnsureResources(CLivePreview *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax

  v2 = CResource::Create(0x29u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)this + 57);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x644u);
  }
  else
  {
    v4 = CResource::Create(0x29u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)this + 58);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x645u);
    }
    else
    {
      v5 = CVisual::Create(*(struct MIL_CHANNEL__ *const *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject ***)this + 61);
      v3 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x647u);
      }
      else
      {
        v6 = CVisual::Create(*(struct MIL_CHANNEL__ *const *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject ***)this + 62);
        v3 = v6;
        if ( v6 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x648u);
        }
        else
        {
          v7 = CVisual::Create(
                 *(struct MIL_CHANNEL__ *const *)(*((_QWORD *)this + 2) + 16LL),
                 (CBaseObject ***)this + 63);
          v3 = v7;
          if ( v7 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x649u);
          }
          else
          {
            v8 = CVisual::Create(
                   *(struct MIL_CHANNEL__ *const *)(*((_QWORD *)this + 2) + 16LL),
                   (CBaseObject ***)this + 64);
            v3 = v8;
            if ( v8 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x64Au);
          }
        }
      }
    }
  }
  return v3;
}
