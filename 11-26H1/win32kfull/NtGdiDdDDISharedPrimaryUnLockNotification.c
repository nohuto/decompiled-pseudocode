/*
 * XREFs of NtGdiDdDDISharedPrimaryUnLockNotification @ 0x140348DF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x140347F18 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiDdDDISharedPrimaryUnLockNotification(void *Src)
{
  struct _LUID v3; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v4; // [rsp+28h] [rbp-20h]

  v3 = 0LL;
  v4 = 0;
  if ( (unsigned int)DxDdIsTearDownLddmSpriteDisabled() )
    return 0LL;
  RtlCopyFromUser(&v3, Src, 0xCuLL);
  return DxLddmSharedPrimaryUnLockNotification(v3, v4);
}
