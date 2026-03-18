/*
 * XREFs of ?UnmapSection@CGdiSpriteBitmap@@IEAAXXZ @ 0x18002BB50
 * Callers:
 *     ?ProcessUnmapSection@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UNMAPSECTION@@@Z @ 0x180021130 (-ProcessUnmapSection@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UNMAP.c)
 *     ?HandleSectionChange@CGdiSpriteBitmap@@IEAAJPEAXPEAVCRedirectedGDISurface@@@Z @ 0x18002B864 (-HandleSectionChange@CGdiSpriteBitmap@@IEAAJPEAXPEAVCRedirectedGDISurface@@@Z.c)
 *     ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x18002BBB4 (--1CGdiSpriteBitmap@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CGdiSpriteBitmap::UnmapSection(CGdiSpriteBitmap *this)
{
  void *v1; // rdi
  void *v3; // rcx
  HANDLE CurrentProcess; // rax

  v1 = (void *)*((_QWORD *)this + 82);
  if ( v1 )
  {
    CurrentProcess = GetCurrentProcess();
    NtUnmapViewOfSection(CurrentProcess, v1);
    *((_QWORD *)this + 82) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 81);
  if ( v3 )
  {
    CloseHandle(v3);
    *((_QWORD *)this + 81) = 0LL;
  }
}
