/*
 * XREFs of ?Close@PROXYPORT@@QEAAXXZ @ 0x1C02A2AA4
 * Callers:
 *     ?vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C00EB258 (-vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z.c)
 * Callees:
 *     Win32UnmapViewInSessionSpace @ 0x1C01E85C0 (Win32UnmapViewInSessionSpace.c)
 */

void __fastcall PROXYPORT::Close(void ***this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (*this)[2];
  if ( v2 )
    Win32UnmapViewInSessionSpace(v2);
  v3 = (*this)[1];
  if ( v3 )
    ZwClose(v3);
  v4 = **this;
  if ( v4 )
    ObfDereferenceObject(v4);
  Win32FreePool(*this);
}
