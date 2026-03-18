/*
 * XREFs of Win32DestroySection @ 0x1C01D1EF8
 * Callers:
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C003FD1C (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C00F19B0 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     FreeDesktop @ 0x1C0131160 (FreeDesktop.c)
 *     UninitializeWin32CrossSessionGlobals @ 0x1C0132AD0 (UninitializeWin32CrossSessionGlobals.c)
 *     CreateDesktopHeap @ 0x1C014E600 (CreateDesktopHeap.c)
 *     ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C027E2E8 (-ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTE.c)
 *     cMapRemoteFonts @ 0x1C027EF80 (cMapRemoteFonts.c)
 *     vUnmapRemoteFonts @ 0x1C027F480 (vUnmapRemoteFonts.c)
 *     ?SecureConnectPort@PROXYPORT@@QEAAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@@PEAU_PORT_VIEW@@PEAXPEAU_REMOTE_PORT_VIEW@@PEAK46@Z @ 0x1C02A2C08 (-SecureConnectPort@PROXYPORT@@QEAAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LONG_PTR __stdcall Win32DestroySection(PVOID Object)
{
  return ObfDereferenceObject(Object);
}
