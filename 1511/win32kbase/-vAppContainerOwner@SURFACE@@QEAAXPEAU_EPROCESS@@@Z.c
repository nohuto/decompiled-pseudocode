/*
 * XREFs of ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0035AB4
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C005B360 (bMigrateSurfaceForConversion.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00B5010 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 * Callees:
 *     UserIsProcessImmersiveAppContainer @ 0x1C0036E00 (UserIsProcessImmersiveAppContainer.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00372A0 (GreAcquireHmgrSemaphore.c)
 */

void __fastcall SURFACE::vAppContainerOwner(SURFACE *this, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = a2;
  if ( a2 )
    v2 = -(__int64)((unsigned int)UserIsProcessImmersiveAppContainer(a2) != 0) & a2;
  GreAcquireHmgrSemaphore(this, a2);
  *((_QWORD *)this + 72) = v2;
  GreReleaseHmgrSemaphore(v5, v4);
}
