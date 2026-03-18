/*
 * XREFs of ?HandleSectionChange@CGdiSpriteBitmap@@IEAAJPEAXPEAUIMilRedirectedGDISurface@@@Z @ 0x180087E8C
 * Callers:
 *     ?UpdateSurface@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180087F88 (-UpdateSurface@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     ?Dispose@CBitmapResource@@IEAAXXZ @ 0x18005C708 (-Dispose@CBitmapResource@@IEAAXXZ.c)
 *     ?RecreateBitmap@CGdiSpriteBitmap@@IEAAJXZ @ 0x180087D44 (-RecreateBitmap@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     ?UnmapSection@CGdiSpriteBitmap@@IEAAXXZ @ 0x18008816C (-UnmapSection@CGdiSpriteBitmap@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::HandleSectionChange(
        PVOID *this,
        HANDLE SectionHandle,
        struct IMilRedirectedGDISurface *a3)
{
  unsigned int v5; // ebx
  HANDLE CurrentProcess; // rax
  NTSTATUS v8; // eax
  int v9; // eax
  union _LARGE_INTEGER SectionOffset; // [rsp+68h] [rbp+10h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp+18h] BYREF

  ViewSize = (ULONG_PTR)a3;
  v5 = 0;
  CBitmapResource::Dispose((CBitmapResource *)this);
  CGdiSpriteBitmap::UnmapSection((CGdiSpriteBitmap *)this);
  if ( !SectionHandle )
    return v5;
  ViewSize = 0LL;
  SectionOffset.QuadPart = 0LL;
  CurrentProcess = GetCurrentProcess();
  v8 = NtMapViewOfSection(
         SectionHandle,
         CurrentProcess,
         this + 73,
         0LL,
         0LL,
         &SectionOffset,
         &ViewSize,
         ViewUnmap,
         0,
         4u);
  if ( v8 < 0 )
  {
    v5 = v8 | 0x10000000;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8 | 0x10000000, 0x1AEu);
LABEL_8:
    if ( SectionHandle )
      CloseHandle(SectionHandle);
    return v5;
  }
  this[72] = SectionHandle;
  SectionHandle = 0LL;
  v9 = CGdiSpriteBitmap::RecreateBitmap((CGdiSpriteBitmap *)this);
  v5 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1B6u);
    return v5;
  }
  if ( ViewSize > 0x75300 && !*((_BYTE *)this + 160) )
  {
    ++*((_DWORD *)this[4] + 90);
    *((_BYTE *)this + 160) = 1;
    goto LABEL_8;
  }
  return v5;
}
