/*
 * XREFs of ?Draw@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014F0B4
 * Callers:
 *     ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180139050 (-RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?Draw@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014F0B4 (-Draw@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?CanUseFastShadow@CDropShadow@@AEBA_NAEBUD2D_SIZE_F@@@Z @ 0x18014EF48 (-CanUseFastShadow@CDropShadow@@AEBA_NAEBUD2D_SIZE_F@@@Z.c)
 *     ?ConfigureFastShadow@CDropShadow@@AEAAJXZ @ 0x18014EFA8 (-ConfigureFastShadow@CDropShadow@@AEAAJXZ.c)
 *     ?Draw@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014F0B4 (-Draw@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?EnsureContentInitialized@CDropShadow@@AEAAJXZ @ 0x18014F5B0 (-EnsureContentInitialized@CDropShadow@@AEAAJXZ.c)
 *     ?EnsureCviInitialized@CDropShadow@@AEAAJXZ @ 0x18014F690 (-EnsureCviInitialized@CDropShadow@@AEAAJXZ.c)
 *     ?ReleaseFastShadowIfInUse@CDropShadow@@AEAAXXZ @ 0x18014FB20 (-ReleaseFastShadowIfInUse@CDropShadow@@AEAAXXZ.c)
 */

__int64 __fastcall CDropShadow::Draw(CDropShadow *a1, __int64 a2, const struct D2D_SIZE_F *a3, __int64 a4, __int64 a5)
{
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax

  v8 = CDropShadow::EnsureContentInitialized(a1);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x260u);
  }
  else if ( CDropShadow::CanUseFastShadow((CDropShadowContent **)a1, a3) )
  {
    v10 = CDropShadow::ConfigureFastShadow(a1);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x265u);
    }
    else
    {
      v11 = CDropShadow::Draw((_DWORD)CDropShadow::s_pFastShadow, a2, (_DWORD)a3, a4, a5);
      v9 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x267u);
    }
  }
  else
  {
    CDropShadow::ReleaseFastShadowIfInUse(a1);
    v12 = CDropShadow::EnsureCviInitialized(a1);
    v9 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x26Fu);
    }
    else
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD *, __int64, const struct D2D_SIZE_F *, __int64, __int64))(**((_QWORD **)a1 + 24) + 120LL))(
              *((_QWORD **)a1 + 24),
              a2,
              a3,
              a4,
              a5);
      v9 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x271u);
    }
  }
  return v9;
}
