/*
 * XREFs of ?GetBlurBehindGeometry@CWindowData@@QEAAJPEAPEAUHRGN__@@@Z @ 0x180075820
 * Callers:
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180021314 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CWindowData::GetBlurBehindGeometry(CWindowData *this, HRGN *a2)
{
  __int64 v2; // rsi

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    return (*(__int64 (__fastcall **)(_QWORD, HRGN *))(*(_QWORD *)v2 + 304LL))(*((_QWORD *)this + 3), a2);
  *a2 = 0LL;
  return 0LL;
}
