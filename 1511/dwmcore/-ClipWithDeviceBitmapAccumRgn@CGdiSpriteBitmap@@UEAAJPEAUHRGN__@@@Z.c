/*
 * XREFs of ?ClipWithDeviceBitmapAccumRgn@CGdiSpriteBitmap@@UEAAJPEAUHRGN__@@@Z @ 0x180087850
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x18013EC1C (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::ClipWithDeviceBitmapAccumRgn(CGdiSpriteBitmap *this, HRGN a2)
{
  signed int v2; // ebx
  HRGN RectRgnIndirect; // rsi
  HRGN v7; // r8
  signed int v8; // eax
  int v9; // edx
  unsigned int v10; // ecx
  int v11; // r8d
  signed int LastError; // eax

  v2 = 0;
  RectRgnIndirect = 0LL;
  if ( *((_QWORD *)this + 12) && *((_DWORD *)this + 114) == 1 )
  {
    if ( *((_QWORD *)this + 58)
      || (SetLastError(0), (RectRgnIndirect = CreateRectRgnIndirect((const RECT *)((char *)this + 472))) != 0LL) )
    {
      SetLastError(0);
      v7 = RectRgnIndirect;
      if ( *((_QWORD *)this + 58) )
        v7 = (HRGN)*((_QWORD *)this + 58);
      if ( !CombineRgn(a2, a2, v7, 1) )
      {
        LastError = GetLastError();
        v2 = LastError;
        if ( LastError > 0 )
          v2 = (unsigned __int16)LastError | 0x80070000;
        if ( v2 >= 0 )
          v2 = -2003304445;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x5E4u);
      }
      if ( RectRgnIndirect )
        DeleteObject(RectRgnIndirect);
    }
    else
    {
      v8 = GetLastError();
      v2 = v8;
      if ( v8 > 0 )
        v2 = (unsigned __int16)v8 | 0x80070000;
      if ( v2 >= 0 )
        v2 = CheckGUIHandleQuota(v10, v9, v11);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x5E1u);
    }
  }
  return (unsigned int)v2;
}
