/*
 * XREFs of BmlCompareTargetModesWithConstraint @ 0x1C00BE9D4
 * Callers:
 *     BmlCompareTargetModes @ 0x1C00BE8E4 (BmlCompareTargetModes.c)
 * Callees:
 *     ??$DIFF@I@@YAIII@Z @ 0x1C000ADF8 (--$DIFF@I@@YAIII@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00BEAF0 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C00BEB88 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 *     ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1C00C04C4 (--$BmlCompareValues@I@@YA-AW4BML_COMPARISON_RESULT@@II@Z.c)
 *     BmlCompareRegionsWithPivot @ 0x1C00C04D4 (BmlCompareRegionsWithPivot.c)
 */

__int64 __fastcall BmlCompareTargetModesWithConstraint(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  unsigned int v7; // edx
  const struct _D3DDDI_RATIONAL *v8; // rsi
  unsigned int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // edi
  unsigned int v12; // ebx
  unsigned int v13; // eax
  unsigned int v14; // eax
  struct _D3DDDI_RATIONAL v16; // [rsp+20h] [rbp-18h] BYREF
  struct _D3DDDI_RATIONAL v17; // [rsp+40h] [rbp+8h] BYREF

  v6 = *(_QWORD *)(104LL * a2 + a1 + 16);
  v7 = 0;
  if ( ((*(_DWORD *)v6 & 1) == 0
     || (v7 = BmlCompareRegionsWithPivot(
                (struct _D3DKMDT_2DREGION *)(a3 + 84),
                (struct _D3DKMDT_2DREGION *)(a4 + 84),
                (struct _D3DKMDT_2DREGION *)(v6 + 36))) == 0)
    && (*(_DWORD *)v6 & 2) != 0 )
  {
    v8 = (const struct _D3DDDI_RATIONAL *)(v6 + 44);
    if ( *(_DWORD *)(v6 + 48) )
    {
      if ( v8->Numerator )
      {
        DmmCalculatePresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(a3 + 72), &v17);
        DmmCalculatePresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(a4 + 72), &v16);
        v9 = DmmMapVSyncFromRationalToInteger(
               (const struct _D3DDDI_RATIONAL *)(v6 + 44),
               (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)(a3 + 120) << 29) >> 29),
               0LL);
        v10 = DmmMapVSyncFromRationalToInteger(
                &v17,
                (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)(a3 + 120) << 29) >> 29),
                0LL);
        v11 = DIFF<unsigned int>(v10, v9);
        v12 = DmmMapVSyncFromRationalToInteger(
                v8,
                (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)(a4 + 120) << 29) >> 29),
                0LL);
        v13 = DmmMapVSyncFromRationalToInteger(
                &v16,
                (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)(a4 + 120) << 29) >> 29),
                0LL);
        v14 = DIFF<unsigned int>(v13, v12);
        return (unsigned int)BmlCompareValues<unsigned int>(v14, v11);
      }
    }
  }
  return v7;
}
