/*
 * XREFs of ?OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180033E98
 * Callers:
 *     ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002B930 (-AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800341F4 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180017DC4 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z @ 0x1800346BC (-SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::OnSourceConstantAlphaUpdated(CSecondaryWindowRepresentation *this)
{
  __int64 v1; // r8
  __int64 v2; // r9
  double *v3; // r10
  float v4; // xmm0_4
  double v5; // xmm3_8
  float v6; // xmm2_4

  v1 = 0LL;
  v2 = *((_QWORD *)this + 8);
  v3 = (double *)this;
  switch ( *((_DWORD *)this + 18) )
  {
    case 1:
      goto LABEL_2;
    case 2:
      v1 = *(_QWORD *)(*(_QWORD *)(v2 + 384) + 32LL);
      break;
    case 3:
      if ( CWindowData::IsImmersiveWindow(*((CWindowData **)this + 8)) )
      {
LABEL_2:
        v1 = v2;
        break;
      }
      v1 = *(_QWORD *)(*(_QWORD *)(v2 + 392) + 80LL);
      break;
  }
  v4 = v3[62];
  v5 = (double)*(unsigned __int8 *)(v1 + 316) / 255.0;
  v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)v5 - v4)) & _xmm);
  if ( v6 > 0.0000011920929 )
  {
    v3[62] = v5;
    CSecondaryWindowRepresentation::SetDirtyFlags((CSecondaryWindowRepresentation *)v3, 0x10u);
  }
  return 0LL;
}
