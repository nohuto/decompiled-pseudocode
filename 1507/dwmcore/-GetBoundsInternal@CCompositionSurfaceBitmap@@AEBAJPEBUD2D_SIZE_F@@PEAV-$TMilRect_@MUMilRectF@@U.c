/*
 * XREFs of ?GetBoundsInternal@CCompositionSurfaceBitmap@@AEBAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800089D4
 * Callers:
 *     ?HitTest@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180008070 (-HitTest@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x1800085B0 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@.c)
 * Callees:
 *     ?BoundsFromLayoutSize@CCompositionSurfaceBitmap@@AEBA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180008A78 (-BoundsFromLayoutSize@CCompositionSurfaceBitmap@@AEBA_NPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRect.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180022B30 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetBoundsInternal(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  __int128 v6; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v7[64]; // [rsp+30h] [rbp-58h] BYREF

  if ( *(_QWORD *)(a1 + 440) )
  {
    if ( !(unsigned __int8)CCompositionSurfaceBitmap::BoundsFromLayoutSize(a1, a2, a3) )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, _BYTE *, __int128 *))(*(_QWORD *)(*(_QWORD *)(v4 + 440) + 112LL)
                                                                           + 32LL))(
             *(_QWORD *)(v4 + 440) + 112LL,
             v7,
             &v6) )
      {
        CBaseMatrix::Transform2DBounds((CBaseMatrix *)v7, (const struct MilRectF *)&v6, (struct MilRectF *)a3);
      }
      else
      {
        *(_OWORD *)a3 = v6;
      }
    }
  }
  else
  {
    *(_DWORD *)(a3 + 12) = 0;
    *(_DWORD *)(a3 + 8) = 0;
    *(_DWORD *)(a3 + 4) = 0;
    *(_DWORD *)a3 = 0;
  }
  return 0LL;
}
