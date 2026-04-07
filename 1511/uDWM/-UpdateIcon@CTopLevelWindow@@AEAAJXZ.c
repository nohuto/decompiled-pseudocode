/*
 * XREFs of ?UpdateIcon@CTopLevelWindow@@AEAAJXZ @ 0x180024A4C
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180025200 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x18003C890 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUHICON__@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18003C9AC (-Create@CBitmapSource@@SAJPEAUHICON__@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     IsOpenThemeDataPresent @ 0x18004F1C0 (IsOpenThemeDataPresent.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateIcon(CTopLevelWindow *this)
{
  struct CBitmapSource *v1; // rbx
  unsigned int v3; // edi
  __int64 v4; // rax
  char v6; // r14
  HICON v7; // rcx
  char v8; // bp
  int v9; // eax
  int v10; // eax
  CBaseObject *v11; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0LL;
  v11 = 0LL;
  v3 = 0;
  if ( !(unsigned __int8)IsOpenThemeDataPresent() )
    return v3;
  v4 = *((_QWORD *)this + 68);
  if ( !v4 )
    return v3;
  v6 = *(_DWORD *)(v4 + 256) == 0;
  if ( (*((_DWORD *)this + 152) & 0x10000) == 0 || (v7 = *(HICON *)(*((_QWORD *)this + 93) + 136LL)) == 0LL )
  {
    v8 = 1;
LABEL_8:
    v10 = CImage::SetBitmapSource(*((CImage **)this + 68), v1);
    v3 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x1424u);
    }
    else if ( v6 != v8 )
    {
      CVisual::SetDirtyFlags(this, 4096);
    }
    goto LABEL_11;
  }
  v8 = 0;
  v9 = CBitmapSource::Create(v7, *(struct MIL_CHANNEL__ *const *)(*((_QWORD *)this + 2) + 16LL), &v11);
  v3 = v9;
  if ( v9 >= 0 )
  {
    v1 = v11;
    goto LABEL_8;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x1422u);
  v1 = v11;
LABEL_11:
  if ( v1 )
    CBaseObject::Release(v1);
  return v3;
}
