/*
 * XREFs of ?OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180016EC8
 * Callers:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180017220 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002EAF0 (-AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z @ 0x1800176F8 (-SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001D5B8 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::OnSourceConstantAlphaUpdated(CWindowData **this)
{
  CSecondaryWindowRepresentation *v1; // r9
  CWindowData *v2; // r8
  CWindowData *v3; // rcx
  float v4; // xmm0_4
  double v5; // xmm3_8
  float v6; // xmm2_4

  v1 = (CSecondaryWindowRepresentation *)this;
  v2 = 0LL;
  v3 = this[8];
  switch ( *((_DWORD *)v1 + 18) )
  {
    case 1:
      goto LABEL_2;
    case 2:
      v2 = *(CWindowData **)(*((_QWORD *)v3 + 50) + 32LL);
      break;
    case 3:
      if ( CWindowData::IsImmersiveWindow(v3) )
      {
LABEL_2:
        v2 = v3;
        break;
      }
      v2 = *(CWindowData **)(*((_QWORD *)v3 + 51) + 80LL);
      break;
  }
  v4 = *((double *)v1 + 62);
  v5 = (double)*((unsigned __int8 *)v2 + 332) / 255.0;
  v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)v5 - v4)) & _xmm);
  if ( v6 > 0.0000011920929 )
  {
    *((double *)v1 + 62) = v5;
    CSecondaryWindowRepresentation::SetDirtyFlags(v1, 0x10u);
  }
  return 0LL;
}
