/*
 * XREFs of ?UnmapSection@CGdiSpriteBitmap@@IEAAXXZ @ 0x18008816C
 * Callers:
 *     ?ProcessUnmapSection@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UNMAPSECTION@@@Z @ 0x18001B7E0 (-ProcessUnmapSection@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UNMAP.c)
 *     ?HandleSectionChange@CGdiSpriteBitmap@@IEAAJPEAXPEAUIMilRedirectedGDISurface@@@Z @ 0x180087E8C (-HandleSectionChange@CGdiSpriteBitmap@@IEAAJPEAXPEAUIMilRedirectedGDISurface@@@Z.c)
 *     ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x1800881D0 (--1CGdiSpriteBitmap@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CGdiSpriteBitmap::UnmapSection(CGdiSpriteBitmap *this)
{
  void *v1; // rdi
  void *v3; // rcx
  HANDLE CurrentProcess; // rax

  v1 = (void *)*((_QWORD *)this + 73);
  if ( v1 )
  {
    CurrentProcess = GetCurrentProcess();
    NtUnmapViewOfSection(CurrentProcess, v1);
    *((_QWORD *)this + 73) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 72);
  if ( v3 )
  {
    CloseHandle(v3);
    *((_QWORD *)this + 72) = 0LL;
  }
}
