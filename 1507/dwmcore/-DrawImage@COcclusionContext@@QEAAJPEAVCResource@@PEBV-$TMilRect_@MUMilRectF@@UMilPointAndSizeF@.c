/*
 * XREFs of ?DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18001FE18
 * Callers:
 *     ?DrawImage@COcclusionContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0CN@@@@Z @ 0x180020310 (-DrawImage@COcclusionContext@@UEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEAVCShape@@_N@Z @ 0x1800DCA98 (-CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 * Callees:
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x18001FA04 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 *     ?DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEA_N@Z @ 0x18001FC34 (-DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceMo.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall COcclusionContext::DrawImage(
        __int64 a1,
        int (__fastcall ***a2)(_QWORD, GUID *, CGdiSpriteBitmap **),
        __int64 a3,
        char a4)
{
  unsigned int v4; // ebx
  int DoesImageOcclude; // eax
  int v8; // eax
  char v10; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v10 = 0;
  if ( !*(_DWORD *)(a1 + 656) )
  {
    DoesImageOcclude = COcclusionContext::DoesImageOcclude(a1, a2, a4, &v10);
    v4 = DoesImageOcclude;
    if ( DoesImageOcclude < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, DoesImageOcclude, 0x515u);
    }
    else if ( v10 )
    {
      v8 = COcclusionContext::CollectRectangleForOcclusion(a1, a3, 0);
      v4 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x51Bu);
    }
  }
  return v4;
}
