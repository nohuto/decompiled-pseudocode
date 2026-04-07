/*
 * XREFs of ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x1800362A8
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJXZ @ 0x180035920 (-UpdateLayout@CAccent@@UEAAJXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180035BDC (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@@Z @ 0x1800367A0 (-CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@@Z.c)
 * Callees:
 *     ?Create@CCanvas@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180017790 (-Create@CCanvas@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001CE70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180020CF8 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?Create@CTopLevelAtlasedRectsVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180038330 (-Create@CTopLevelAtlasedRectsVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAccent::_EnsureBorderShadowAtlas(CAccent *this)
{
  unsigned int v1; // esi
  volatile signed __int32 *v2; // rbx
  int v5; // eax
  int v6; // eax
  volatile signed __int32 *v7; // rdi
  int inserted; // eax
  int v9; // eax
  struct _MARGINS v10; // [rsp+30h] [rbp-10h] BYREF
  struct CCanvas *v11; // [rsp+60h] [rbp+20h] BYREF
  CVisual *v12; // [rsp+68h] [rbp+28h] BYREF

  v1 = 0;
  v2 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( *((_QWORD *)this + 47) )
    return v1;
  v5 = CCanvas::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), &v11);
  v1 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x417u);
  }
  else
  {
    v6 = CTopLevelAtlasedRectsVisual::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), &v12);
    v1 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x418u);
    }
    else
    {
      v7 = (volatile signed __int32 *)v11;
      v2 = (volatile signed __int32 *)v12;
      inserted = VisualCollection::InsertRelative((struct CCanvas *)((char *)v11 + 32), v12, 0LL, 0, 1);
      v1 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x419u);
        goto LABEL_13;
      }
      *(_QWORD *)&v10.cxLeftWidth = 0LL;
      *(_QWORD *)&v10.cyTopHeight = 0LL;
      CVisual::SetInsetFromParent((CVisual *)v2, &v10);
      v9 = VisualCollection::InsertRelative((CAccent *)((char *)this + 32), (struct CVisual *)v7, 0LL, 1, 1);
      v1 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x41Du);
        goto LABEL_13;
      }
      *((_QWORD *)this + 48) = v7;
      if ( v7 )
      {
        _InterlockedIncrement(v7 + 2);
        v7 = (volatile signed __int32 *)v11;
        v2 = (volatile signed __int32 *)v12;
      }
      *((_QWORD *)this + 47) = v2;
      if ( !v2 )
        goto LABEL_13;
      _InterlockedIncrement(v2 + 2);
    }
    v2 = (volatile signed __int32 *)v12;
  }
  v7 = (volatile signed __int32 *)v11;
LABEL_13:
  if ( v7 )
    CBaseObject::Release((CBaseObject *)v7);
  if ( v2 )
    CBaseObject::Release((CBaseObject *)v2);
  return v1;
}
