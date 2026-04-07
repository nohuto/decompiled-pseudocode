/*
 * XREFs of ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x180024944
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180025200 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x1800269A0 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180021ED8 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetScale@CVisual@@QEAAXNN@Z @ 0x180021F38 (-SetScale@CVisual@@QEAAXNN@Z.c)
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x180046B24 (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 *     fmodf_0 @ 0x18004FF42 (fmodf_0.c)
 */

void __fastcall CTopLevelWindow::UpdateWindowScale(CTopLevelWindow *this)
{
  CVisual *v2; // rcx
  __int64 v3; // rdi
  int v4; // edx
  CVisual *v5; // rcx

  *((_DWORD *)this + 176) = -1;
  v2 = (CVisual *)*((_QWORD *)this + 70);
  if ( !v2 )
    goto LABEL_6;
  CVisual::SetScale(
    v2,
    COERCE_FLOAT(*(_QWORD *)(*((_QWORD *)this + 93) + 180LL)),
    COERCE_FLOAT(HIDWORD(*(_QWORD *)(*((_QWORD *)this + 93) + 180LL))));
  v3 = *((_QWORD *)this + 93);
  if ( fmodf_0(*(float *)(v3 + 180), 1.0) == 0.0 && fmodf_0(*(float *)(v3 + 184), 1.0) == 0.0 )
  {
    v4 = 0;
LABEL_5:
    CVisual::SetInterpolationMode(*((CVisual **)this + 70), v4);
    goto LABEL_6;
  }
  if ( *(float *)(v3 + 180) < 1.0 || *(float *)(v3 + 184) < 1.0 )
  {
    v4 = 6;
    goto LABEL_5;
  }
  CVisual::ClearInterpolationMode(*((CVisual **)this + 70));
LABEL_6:
  v5 = (CVisual *)*((_QWORD *)this + 39);
  if ( v5 )
    CVisual::SetScale(
      v5,
      COERCE_FLOAT(*(_QWORD *)(*((_QWORD *)this + 93) + 180LL)),
      COERCE_FLOAT(HIDWORD(*(_QWORD *)(*((_QWORD *)this + 93) + 180LL))));
}
