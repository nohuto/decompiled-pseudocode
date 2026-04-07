/*
 * XREFs of ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@@Z @ 0x180014840
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x180014318 (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180014970 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x180014EB8 (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x1800158BC (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180023350 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180023F2C (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?Create@CAccent@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18003EFD8 (-Create@CAccent@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
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
  v5 = CAccent::Create(*(struct MIL_CHANNEL__ *const *)(v3 + 16), &v15);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x261u);
LABEL_11:
    v7 = v15;
    goto LABEL_12;
  }
  v7 = v15;
  if ( *((_DWORD *)this + 66) == 3
    || (v8 = CAccent::UpdateAccentPolicy(
               v15,
               (const struct tagRECT *)((char *)this + 568),
               (CAccent *)((char *)this + 264),
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x26Du);
    }
    else
    {
      CVisual::SetInsetFromParent(v7, &v14);
      *((_DWORD *)v7 + 67) = *((_DWORD *)this + 67);
      v10 = CAccent::_EnsureBorderShadowAtlas(v7);
      v6 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x270u);
      }
      else
      {
        updated = CAccent::_UpdateBorderShadowParts(v7);
        v6 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x271u);
        }
        else
        {
          v12 = CAccent::_UpdateBorderShadowForAccent(v7);
          v6 = v12;
          if ( v12 >= 0 )
            goto LABEL_9;
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x272u);
        }
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x265u);
  }
LABEL_12:
  if ( v7 )
    CBaseObject::Release(v7);
  return v6;
}
