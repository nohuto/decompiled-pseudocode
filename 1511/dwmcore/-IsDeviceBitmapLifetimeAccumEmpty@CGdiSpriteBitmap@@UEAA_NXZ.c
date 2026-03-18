/*
 * XREFs of ?IsDeviceBitmapLifetimeAccumEmpty@CGdiSpriteBitmap@@UEAA_NXZ @ 0x180125080
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x18013EC1C (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

bool __fastcall CGdiSpriteBitmap::IsDeviceBitmapLifetimeAccumEmpty(CGdiSpriteBitmap *this)
{
  HRGN v1; // rdi
  bool v3; // bl
  HRGN RectRgn; // rax
  signed int LastError; // eax
  int v6; // edx
  unsigned int v7; // ecx
  int v8; // r8d
  bool v9; // sf

  v1 = 0LL;
  v3 = 1;
  if ( *((_DWORD *)this + 114) == 2 )
    return v3;
  if ( *((_QWORD *)this + 58) )
  {
    SetLastError(0);
    RectRgn = CreateRectRgn(0, 0, 0, 0);
    v1 = RectRgn;
    if ( !RectRgn )
    {
      LastError = GetLastError();
      v9 = LastError < 0;
      if ( LastError > 0 )
      {
        LastError = (unsigned __int16)LastError | 0x80070000;
        v9 = LastError < 0;
      }
      if ( !v9 )
        LastError = CheckGUIHandleQuota(v7, v6, v8);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, LastError, 0x72Cu);
      return v3;
    }
    v3 = EqualRgn(*((HRGN *)this + 58), RectRgn);
  }
  else
  {
    if ( IsRectEmpty((const RECT *)((char *)this + 472)) )
      return v3;
    v3 = 0;
  }
  if ( v1 )
    DeleteObject(v1);
  return v3;
}
