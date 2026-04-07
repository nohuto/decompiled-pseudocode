/*
 * XREFs of ?_RemoveBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x1800142E4
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x1800158BC (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18001FCE0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CAccent::_RemoveBorderShadowAtlas(CAccent *this)
{
  struct CVisual *v1; // rdx
  unsigned int v2; // edi
  int v5; // eax
  int v6; // eax
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx

  v1 = (struct CVisual *)*((_QWORD *)this + 47);
  v2 = 0;
  if ( v1 )
  {
    v5 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 48) + 32LL), v1);
    v2 = v5;
    if ( v5 >= 0 )
    {
      v6 = VisualCollection::Remove((CAccent *)((char *)this + 32), *((struct CVisual **)this + 48));
      v2 = v6;
      if ( v6 >= 0 )
      {
        v7 = (CBaseObject *)*((_QWORD *)this + 48);
        if ( v7 )
        {
          CBaseObject::Release(v7);
          *((_QWORD *)this + 48) = 0LL;
        }
        v8 = (CBaseObject *)*((_QWORD *)this + 47);
        if ( v8 )
        {
          CBaseObject::Release(v8);
          *((_QWORD *)this + 47) = 0LL;
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x443u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x442u);
    }
  }
  return v2;
}
