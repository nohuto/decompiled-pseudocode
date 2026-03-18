/*
 * XREFs of NtGdiDdDDISharedPrimaryUnLockNotification @ 0x1C02639A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C0261F44 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 */

__int64 __fastcall NtGdiDdDDISharedPrimaryUnLockNotification(struct _LUID *a1)
{
  struct _LUID *v1; // rdx

  v1 = a1;
  if ( gbDisableLddmSpriteTearDown )
    return 0LL;
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    v1 = (struct _LUID *)W32UserProbeAddress;
  return DxLddmSharedPrimaryUnLockNotification(*v1, v1[1].LowPart);
}
