/*
 * XREFs of ?SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z @ 0x1800346BC
 * Callers:
 *     ?OnSWRInvalidated@CSecondaryWindowRepresentation@@UEAAXPEBV1@@Z @ 0x180005A80 (-OnSWRInvalidated@CSecondaryWindowRepresentation@@UEAAXPEBV1@@Z.c)
 *     ?OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180033E98 (-OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x180034150 (-OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800348C4 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?OnSWRInvalidated@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800256C0 (-OnSWRInvalidated@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CSecondaryWindowRepresentation::SetDirtyFlags(CSecondaryWindowRepresentation *this, int a2)
{
  int v3; // ecx
  CTopLevelWindow3D *v4; // rdi
  void (__fastcall *v5)(CTopLevelWindow3D *, const struct CSecondaryWindowRepresentation *); // rsi

  v3 = *((_DWORD *)this + 6);
  if ( (a2 & v3) != a2 )
  {
    v4 = (CTopLevelWindow3D *)*((_QWORD *)this + 21);
    *((_DWORD *)this + 6) = a2 | v3;
    v5 = **(void (__fastcall ***)(CTopLevelWindow3D *, const struct CSecondaryWindowRepresentation *))v4;
    if ( v5 == CTopLevelWindow3D::OnSWRInvalidated )
      CTopLevelWindow3D::OnSWRInvalidated(v4, this);
    else
      v5(v4, this);
  }
}
