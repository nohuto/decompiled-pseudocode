/*
 * XREFs of Win32OpenSectionByHandle @ 0x1C01D1F00
 * Callers:
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C003FD1C (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     InitializeWin32CrossSessionGlobals @ 0x1C0156350 (InitializeWin32CrossSessionGlobals.c)
 *     DwmSyncMagnUpdateWindowSharedTextures @ 0x1C025FC68 (DwmSyncMagnUpdateWindowSharedTextures.c)
 *     ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C027E2E8 (-ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTE.c)
 *     ?SecureConnectPort@PROXYPORT@@QEAAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@@PEAU_PORT_VIEW@@PEAXPEAU_REMOTE_PORT_VIEW@@PEAK46@Z @ 0x1C02A2C08 (-SecureConnectPort@PROXYPORT@@QEAAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall Win32OpenSectionByHandle(void *a1, ACCESS_MASK a2, __int64 a3, PVOID *a4)
{
  NTSTATUS result; // eax
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  result = ObReferenceObjectByHandle(a1, a2, MmSectionObjectType, 0, &Object, 0LL);
  *a4 = Object;
  return result;
}
