/*
 * XREFs of NtGdiDdDDISharedPrimaryLockNotification @ 0x140348D60
 * Callers:
 *     <none>
 * Callees:
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x140347B8C (-DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiDdDDISharedPrimaryLockNotification(void *Src)
{
  struct _LUID v3[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+30h] [rbp-28h]
  int v5; // [rsp+38h] [rbp-20h]

  *(_OWORD *)&v3[0].LowPart = 0LL;
  v4 = 0LL;
  v5 = 0;
  if ( (unsigned int)DxDdIsTearDownLddmSpriteDisabled() )
    return 0LL;
  RtlCopyFromUser(v3, Src, 0x1CuLL);
  return DxLddmSharedPrimaryLockNotification(v3[0], v3[1].LowPart, (const struct _RECTL *)&v3[1].HighPart);
}
