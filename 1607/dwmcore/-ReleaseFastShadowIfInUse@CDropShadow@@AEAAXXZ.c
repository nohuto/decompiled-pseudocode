/*
 * XREFs of ?ReleaseFastShadowIfInUse@CDropShadow@@AEAAXXZ @ 0x18014FB20
 * Callers:
 *     ??1CDropShadow@@UEAA@XZ @ 0x18014ED34 (--1CDropShadow@@UEAA@XZ.c)
 *     ?Draw@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014F0B4 (-Draw@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDropShadow::ReleaseFastShadowIfInUse(CDropShadow *this)
{
  int v2; // eax

  if ( *((_BYTE *)this + 232) )
  {
    v2 = (*(__int64 (__fastcall **)(CDropShadow *))(*(_QWORD *)CDropShadow::s_pFastShadow + 16LL))(CDropShadow::s_pFastShadow);
    *((_BYTE *)this + 232) = 0;
    CDropShadow::s_pFastShadow = (CDropShadow *)(-(__int64)(v2 != 0) & (unsigned __int64)CDropShadow::s_pFastShadow);
  }
}
