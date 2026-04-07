/*
 * XREFs of ?_RemoveBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x180036274
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180035BDC (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18001CD40 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x42Du);
      }
      else
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
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x42Cu);
    }
  }
  return v2;
}
