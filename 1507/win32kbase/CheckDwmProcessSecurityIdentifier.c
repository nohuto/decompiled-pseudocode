/*
 * XREFs of CheckDwmProcessSecurityIdentifier @ 0x1C007F8C0
 * Callers:
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007F924 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C000EA40 (UserIsCurrentProcessDwm.c)
 *     AllocateWindowManagerSid @ 0x1C0010610 (AllocateWindowManagerSid.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ?IsMobileCore@@YAEXZ @ 0x1C0080038 (-IsMobileCore@@YAEXZ.c)
 */

__int64 CheckDwmProcessSecurityIdentifier()
{
  int v0; // ebx
  char v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v0 = -1073741823;
  v2 = 0;
  if ( IsMobileCore() )
  {
    if ( UserIsCurrentProcessDwm() )
      return 0;
  }
  else
  {
    v0 = AllocateWindowManagerSid(&v3);
    if ( v0 >= 0 )
    {
      v0 = RtlCheckTokenMembership(0LL, v3, &v2);
      if ( v0 >= 0 && !v2 )
        v0 = -1073741720;
      Win32FreePool();
    }
  }
  return (unsigned int)v0;
}
