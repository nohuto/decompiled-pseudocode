/*
 * XREFs of ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0025BA0
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C006B7B0 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C0025AB0 (GreAcquireHmgrSemaphore.c)
 *     UserIsProcessImmersiveAppContainer @ 0x1C007F150 (UserIsProcessImmersiveAppContainer.c)
 */

void __fastcall SURFACE::vAppContainerOwner(SURFACE *this, struct _EPROCESS *a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx

  v3 = (unsigned __int64)a2;
  if ( a2 )
  {
    a3 = -(__int64)((unsigned int)UserIsProcessImmersiveAppContainer(a2) != 0);
    v3 &= a3;
  }
  GreAcquireHmgrSemaphore((__int64)this, (int)a2, a3);
  *((_QWORD *)this + 73) = v3;
  GreReleaseHmgrSemaphore(v6, v5);
}
