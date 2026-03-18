/*
 * XREFs of ?HandleSectionChange@CGdiSpriteBitmap@@IEAAJPEAXPEAVCRedirectedGDISurface@@@Z @ 0x18002B864
 * Callers:
 *     ?UpdateSurface@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18002B954 (-UpdateSurface@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     ?RecreateBitmap@CGdiSpriteBitmap@@IEAAJXZ @ 0x18002B704 (-RecreateBitmap@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     ?UnmapSection@CGdiSpriteBitmap@@IEAAXXZ @ 0x18002BB50 (-UnmapSection@CGdiSpriteBitmap@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Dispose@CBitmapResource@@IEAAXXZ @ 0x1800AEBC4 (-Dispose@CBitmapResource@@IEAAXXZ.c)
 */

__int64 __fastcall CGdiSpriteBitmap::HandleSectionChange(PVOID *this, HANDLE hObject, struct CRedirectedGDISurface *a3)
{
  unsigned int v5; // ebx
  HANDLE CurrentProcess; // rax
  NTSTATUS v8; // ebx
  int v9; // eax
  union _LARGE_INTEGER SectionOffset; // [rsp+68h] [rbp+10h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp+18h] BYREF

  ViewSize = (ULONG_PTR)a3;
  v5 = 0;
  CBitmapResource::Dispose((CBitmapResource *)this);
  CGdiSpriteBitmap::UnmapSection((CGdiSpriteBitmap *)this);
  if ( !hObject )
    return v5;
  ViewSize = 0LL;
  SectionOffset.QuadPart = 0LL;
  CurrentProcess = GetCurrentProcess();
  v8 = NtMapViewOfSection(hObject, CurrentProcess, this + 82, 0LL, 0LL, &SectionOffset, &ViewSize, ViewUnmap, 0, 4u);
  if ( v8 < 0 )
  {
    v5 = v8 | 0x10000000;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x1AEu);
  }
  else
  {
    this[81] = hObject;
    hObject = 0LL;
    v9 = CGdiSpriteBitmap::RecreateBitmap((CGdiSpriteBitmap *)this);
    v5 = v9;
    if ( v9 >= 0 )
    {
      if ( ViewSize > 0x75300 && !*((_BYTE *)this + 232) )
      {
        ++*((_DWORD *)this[4] + 90);
        *((_BYTE *)this + 232) = 1;
      }
      return v5;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1B6u);
  }
  if ( hObject )
    CloseHandle(hObject);
  return v5;
}
