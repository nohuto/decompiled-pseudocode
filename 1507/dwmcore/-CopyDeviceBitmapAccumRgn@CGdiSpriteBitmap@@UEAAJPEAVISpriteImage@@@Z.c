/*
 * XREFs of ?CopyDeviceBitmapAccumRgn@CGdiSpriteBitmap@@UEAAJPEAVISpriteImage@@@Z @ 0x18007EEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x180128B0C (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::CopyDeviceBitmapAccumRgn(CGdiSpriteBitmap *this, struct ISpriteImage *a2)
{
  signed int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rbx
  void *v7; // rcx
  HRGN RectRgn; // rax
  signed int v10; // eax
  int v11; // edx
  unsigned int v12; // ecx
  int v13; // r8d
  signed int LastError; // eax

  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(struct ISpriteImage *, __int64))(*(_QWORD *)a2 + 144LL))(a2, 80LL) )
  {
    v5 = (*(__int64 (__fastcall **)(struct ISpriteImage *))(*(_QWORD *)a2 + 232LL))(a2);
    if ( v5 )
      v6 = v5 - 16;
    else
      v6 = 0LL;
    if ( *(_QWORD *)(v6 + 536) )
    {
      if ( *((_QWORD *)this + 58)
        || (SetLastError(0), RectRgn = CreateRectRgn(0, 0, 0, 0), (*((_QWORD *)this + 58) = RectRgn) != 0LL) )
      {
        SetLastError(0);
        if ( !CombineRgn(*((HRGN *)this + 58), *(HRGN *)(v6 + 536), 0LL, 5) )
        {
          LastError = GetLastError();
          v4 = LastError;
          if ( LastError > 0 )
            v4 = (unsigned __int16)LastError | 0x80070000;
          if ( v4 >= 0 )
            v4 = -2003304445;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x609u);
        }
      }
      else
      {
        v10 = GetLastError();
        v4 = v10;
        if ( v10 > 0 )
          v4 = (unsigned __int16)v10 | 0x80070000;
        if ( v4 >= 0 )
          v4 = CheckGUIHandleQuota(v12, v11, v13);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x606u);
      }
    }
    else if ( !IsRectEmpty((const RECT *)(v6 + 544)) )
    {
      v7 = (void *)*((_QWORD *)this + 58);
      if ( v7 )
      {
        DeleteObject(v7);
        *((_QWORD *)this + 58) = 0LL;
      }
      *(_OWORD *)((char *)this + 472) = *(_OWORD *)(v6 + 544);
    }
  }
  return (unsigned int)v4;
}
