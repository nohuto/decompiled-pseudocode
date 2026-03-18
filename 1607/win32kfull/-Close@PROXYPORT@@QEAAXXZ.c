/*
 * XREFs of ?Close@PROXYPORT@@QEAAXXZ @ 0x1C02A3280
 * Callers:
 *     ?vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C0110F68 (-vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z.c)
 * Callees:
 *     Win32UnmapViewInSessionSpace @ 0x1C01DF47C (Win32UnmapViewInSessionSpace.c)
 */

void __fastcall PROXYPORT::Close(void ***this, __int64 a2)
{
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  v3 = (*this)[2];
  if ( v3 )
    Win32UnmapViewInSessionSpace(v3);
  v4 = (*this)[1];
  if ( v4 )
    ZwClose(v4);
  v5 = **this;
  if ( v5 )
    ObfDereferenceObject(v5);
  Win32FreePool(*this, a2);
}
