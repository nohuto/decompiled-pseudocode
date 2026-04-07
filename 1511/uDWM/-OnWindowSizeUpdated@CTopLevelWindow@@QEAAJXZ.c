/*
 * XREFs of ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x18002A0AC
 * Callers:
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180030110 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18003B22C (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 * Callees:
 *     ?SetMouseCapture@CButton@@QEAAX_N@Z @ 0x1800107F4 (-SetMouseCapture@CButton@@QEAAX_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::OnWindowSizeUpdated(CTopLevelWindow *this)
{
  _DWORD *v1; // rax
  int v3; // edx
  int v4; // ecx
  bool v5; // zf
  void (__fastcall *v6)(CVisual *, int); // rbx
  CButton *v7; // rcx
  CBaseObject *v8; // rsi
  __int64 v10; // rdi
  CBaseObject *v11; // rcx
  __int64 v12; // [rsp+30h] [rbp+8h]

  v1 = (_DWORD *)*((_QWORD *)this + 93);
  v3 = v1[14] - v1[12];
  if ( v3 < 0 )
    v3 = 0;
  v4 = v1[15] - v1[13];
  LODWORD(v12) = v3;
  if ( v4 < 0 )
    v4 = 0;
  HIDWORD(v12) = v4;
  if ( *((_DWORD *)this + 28) != v3 || *((_DWORD *)this + 29) != v4 )
  {
    v5 = (*((_BYTE *)this + 84) & 1) == 0;
    *((_QWORD *)this + 14) = v12;
    if ( !v5 )
      (*(void (__fastcall **)(CTopLevelWindow *, __int64))(*(_QWORD *)this + 24LL))(this, 16LL);
    v6 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)this + 24LL);
    if ( v6 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 2);
    else
      v6(this, 2);
  }
  v7 = (CButton *)*((_QWORD *)this + 95);
  if ( v7 )
  {
    CButton::SetMouseCapture(v7, 0);
    v11 = (CBaseObject *)*((_QWORD *)this + 95);
    if ( v11 )
    {
      CBaseObject::Release(v11);
      *((_QWORD *)this + 95) = 0LL;
    }
  }
  v8 = (CBaseObject *)*((_QWORD *)this + 94);
  if ( v8 )
  {
    *((_QWORD *)this + 94) = 0LL;
    (*(void (__fastcall **)(CBaseObject *))(*(_QWORD *)v8 + 96LL))(v8);
    v10 = *((_QWORD *)this + 94);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 88LL))(v10);
    CBaseObject::Release(v8);
  }
  return 0LL;
}
