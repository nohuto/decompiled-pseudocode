/*
 * XREFs of ?CopyDeviceBitmapAccumRgn@CGdiSpriteBitmap@@UEAAJPEAVISpriteImage@@@Z @ 0x1800877A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x18013EC1C (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::CopyDeviceBitmapAccumRgn(CGdiSpriteBitmap *this, struct ISpriteImage *a2)
{
  signed int v3; // esi
  __int64 v4; // rdi
  void *v5; // rcx
  HRGN RectRgn; // rax
  signed int v8; // eax
  int v9; // edx
  unsigned int v10; // ecx
  int v11; // r8d
  signed int LastError; // eax

  v3 = 0;
  v4 = (*(__int64 (__fastcall **)(struct ISpriteImage *))(*(_QWORD *)a2 + 136LL))(a2);
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 48LL))(v4, 88LL) )
  {
    if ( *(_QWORD *)(v4 + 520) )
    {
      if ( *((_QWORD *)this + 58)
        || (SetLastError(0), RectRgn = CreateRectRgn(0, 0, 0, 0), (*((_QWORD *)this + 58) = RectRgn) != 0LL) )
      {
        SetLastError(0);
        if ( !CombineRgn(*((HRGN *)this + 58), *(HRGN *)(v4 + 520), 0LL, 5) )
        {
          LastError = GetLastError();
          v3 = LastError;
          if ( LastError > 0 )
            v3 = (unsigned __int16)LastError | 0x80070000;
          if ( v3 >= 0 )
            v3 = -2003304445;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x60Au);
        }
      }
      else
      {
        v8 = GetLastError();
        v3 = v8;
        if ( v8 > 0 )
          v3 = (unsigned __int16)v8 | 0x80070000;
        if ( v3 >= 0 )
          v3 = CheckGUIHandleQuota(v10, v9, v11);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x607u);
      }
    }
    else if ( !IsRectEmpty((const RECT *)(v4 + 528)) )
    {
      v5 = (void *)*((_QWORD *)this + 58);
      if ( v5 )
      {
        DeleteObject(v5);
        *((_QWORD *)this + 58) = 0LL;
      }
      *(_OWORD *)((char *)this + 472) = *(_OWORD *)(v4 + 528);
    }
  }
  return (unsigned int)v3;
}
