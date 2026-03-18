/*
 * XREFs of ?GetTransform@CGdiSpriteBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002AB70
 * Callers:
 *     ?GetTransform@CGdiSpriteBitmap@@WII@EAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C0460 (-GetTransform@CGdiSpriteBitmap@@WII@EAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 * Callees:
 *     ?GetBounds@CGdiSpriteBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002AC30 (-GetBounds@CGdiSpriteBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRect.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CGdiSpriteBitmap::GetTransform(__int64 a1, __int64 a2, __int64 a3)
{
  void (__fastcall *v3)(__int64, _QWORD, _QWORD, __int64); // rax

  *(_WORD *)(a2 + 64) = 32085;
  *(_OWORD *)a2 = _xmm;
  *(_OWORD *)(a2 + 16) = _xmm;
  *(_OWORD *)(a2 + 32) = _xmm;
  *(_OWORD *)(a2 + 48) = _xmm;
  if ( a3 )
  {
    v3 = *(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a1 + 112LL);
    if ( (char *)v3 == (char *)CGdiSpriteBitmap::GetBounds )
      CGdiSpriteBitmap::GetBounds(a1, 0LL, 0LL, a3);
    else
      v3(a1, 0LL, 0LL, a3);
  }
  return 0;
}
