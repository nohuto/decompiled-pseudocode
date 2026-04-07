/*
 * XREFs of ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x18003577C
 * Callers:
 *     ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@@Z @ 0x180035CA0 (-CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?UpdateLayout@CAccent@@UEAAJXZ @ 0x180036960 (-UpdateLayout@CAccent@@UEAAJXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180036C2C (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CTopLevelAtlasedRectsVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800081E8 (-Create@CTopLevelAtlasedRectsVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800152A0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CCanvas@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180015C90 (-Create@CCanvas@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x18001C9C0 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
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
  struct CVisual *v11; // [rsp+60h] [rbp+20h] BYREF
  CVisual *v12; // [rsp+68h] [rbp+28h] BYREF

  v1 = 0;
  v2 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( *((_QWORD *)this + 47) )
    return v1;
  v5 = CCanvas::Create(*(struct MIL_CHANNEL__ *const *)(*((_QWORD *)this + 2) + 16LL), &v11);
  v1 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x41Du);
  }
  else
  {
    v6 = CTopLevelAtlasedRectsVisual::Create(*(struct MIL_CHANNEL__ *const *)(*((_QWORD *)this + 2) + 16LL), &v12);
    v1 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x41Eu);
    }
    else
    {
      v7 = (volatile signed __int32 *)v11;
      v2 = (volatile signed __int32 *)v12;
      inserted = VisualCollection::InsertRelative((struct CVisual *)((char *)v11 + 32), v12, 0LL, 0, 1);
      v1 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0x41Fu);
        goto LABEL_13;
      }
      *(_QWORD *)&v10.cxLeftWidth = 0LL;
      *(_QWORD *)&v10.cyTopHeight = 0LL;
      CVisual::SetInsetFromParent((CVisual *)v2, &v10);
      v9 = VisualCollection::InsertRelative((CAccent *)((char *)this + 32), (struct CVisual *)v7, 0LL, 1, 1);
      v1 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x423u);
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
