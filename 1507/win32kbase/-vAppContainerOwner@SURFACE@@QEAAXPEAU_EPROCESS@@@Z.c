/*
 * XREFs of ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0039980
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C005DCB0 (bMigrateSurfaceForConversion.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00B1E40 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C00398C0 (GreAcquireHmgrSemaphore.c)
 *     UserIsProcessImmersiveAppContainer @ 0x1C0055A70 (UserIsProcessImmersiveAppContainer.c)
 */

void __fastcall SURFACE::vAppContainerOwner(SURFACE *this, struct _EPROCESS *a2, __int64 a3)
{
  unsigned __int64 v3; // rbx

  v3 = (unsigned __int64)a2;
  if ( a2 )
  {
    a3 = -(__int64)((unsigned int)UserIsProcessImmersiveAppContainer(a2) != 0);
    v3 &= a3;
  }
  GreAcquireHmgrSemaphore((__int64)this, (int)a2, a3);
  *((_QWORD *)this + 72) = v3;
  GreReleaseHmgrSemaphore();
}
