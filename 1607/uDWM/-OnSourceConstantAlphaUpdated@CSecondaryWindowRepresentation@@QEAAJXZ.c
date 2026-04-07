/*
 * XREFs of ?OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180034684
 * Callers:
 *     ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E0B0 (-AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180034A0C (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001A10C (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z @ 0x180034EC4 (-SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::OnSourceConstantAlphaUpdated(CSecondaryWindowRepresentation *this)
{
  CWindowData *v1; // rbx
  CWindowData *v2; // rdi
  float v4; // xmm0_4
  double v5; // xmm3_8
  float v6; // xmm2_4

  v1 = 0LL;
  v2 = (CWindowData *)*((_QWORD *)this + 8);
  switch ( *((_DWORD *)this + 18) )
  {
    case 1:
      goto LABEL_2;
    case 2:
      v1 = *(CWindowData **)(*((_QWORD *)v2 + 51) + 32LL);
      break;
    case 3:
      if ( CWindowData::IsImmersiveWindow(v2) )
      {
LABEL_2:
        v1 = v2;
        break;
      }
      v1 = *(CWindowData **)(*((_QWORD *)v2 + 52) + 80LL);
      break;
  }
  v4 = *((double *)this + 62);
  v5 = (double)*((unsigned __int8 *)v1 + 332) / 255.0;
  v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)v5 - v4)) & _xmm);
  if ( v6 > 0.0000011920929 )
  {
    *((double *)this + 62) = v5;
    CSecondaryWindowRepresentation::SetDirtyFlags(this, 0x10u);
  }
  return 0LL;
}
