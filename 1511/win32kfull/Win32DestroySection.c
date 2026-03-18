/*
 * XREFs of Win32DestroySection @ 0x1C01D3948
 * Callers:
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00C98FC (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     CreateDesktopHeap @ 0x1C00D0C64 (CreateDesktopHeap.c)
 *     FreeDesktop @ 0x1C00D3310 (FreeDesktop.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C00D9028 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     UninitializeWin32CrossSessionGlobals @ 0x1C01143A0 (UninitializeWin32CrossSessionGlobals.c)
 *     ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C027DCD8 (-ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTE.c)
 *     cMapRemoteFonts @ 0x1C027E968 (cMapRemoteFonts.c)
 *     vUnmapRemoteFonts @ 0x1C027EE60 (vUnmapRemoteFonts.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LONG_PTR __stdcall Win32DestroySection(PVOID Object)
{
  return ObfDereferenceObject(Object);
}
