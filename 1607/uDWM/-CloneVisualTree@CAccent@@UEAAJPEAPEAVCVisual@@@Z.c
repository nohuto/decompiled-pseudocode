/*
 * XREFs of ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@@Z @ 0x1800367A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180020310 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180020CF8 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180035BDC (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x1800362A8 (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x1800368D0 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x180036E3C (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 *     ?Create@CAccent@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18003828C (-Create@CAccent@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAccent::CloneVisualTree(CAccent *this, struct CVisual **a2)
{
  __int64 v3; // rax
  int v5; // eax
  unsigned int v6; // edi
  CVisual *v7; // rbx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int updated; // eax
  int v12; // eax
  struct _MARGINS v14; // [rsp+30h] [rbp-18h] BYREF
  CVisual *v15; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = *((_QWORD *)this + 2);
  v15 = 0LL;
  v5 = CAccent::Create(*(struct IDwmChannel **)(v3 + 16), &v15);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x24Du);
LABEL_11:
    v7 = v15;
    goto LABEL_12;
  }
  v7 = v15;
  if ( *((_DWORD *)this + 66) == 3
    || (v8 = CAccent::UpdateAccentPolicy(
               v15,
               (const struct tagRECT *)((char *)this + 568),
               (__m128i *)((char *)this + 264),
               *((struct CResource **)this + 46)),
        v6 = v8,
        v8 >= 0) )
  {
    if ( (*((_BYTE *)this + 268) & 0xE0) == 0 )
    {
LABEL_9:
      *a2 = v7;
      if ( !v7 )
        return v6;
      _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
      goto LABEL_11;
    }
    *((_BYTE *)v7 + 351) = 1;
    v14 = 0LL;
    v9 = CVisual::ClearInstructions(v7);
    v6 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x259u);
    }
    else
    {
      CVisual::SetInsetFromParent(v7, &v14);
      *((_DWORD *)v7 + 67) = *((_DWORD *)this + 67);
      v10 = CAccent::_EnsureBorderShadowAtlas(v7);
      v6 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x25Cu);
      }
      else
      {
        updated = CAccent::_UpdateBorderShadowParts(v7);
        v6 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x25Du);
        }
        else
        {
          v12 = CAccent::_UpdateBorderShadowForAccent(v7);
          v6 = v12;
          if ( v12 >= 0 )
            goto LABEL_9;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x25Eu);
        }
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x251u);
  }
LABEL_12:
  if ( v7 )
    CBaseObject::Release(v7);
  return v6;
}
