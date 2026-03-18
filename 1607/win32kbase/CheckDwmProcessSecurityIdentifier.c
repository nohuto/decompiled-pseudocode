/*
 * XREFs of CheckDwmProcessSecurityIdentifier @ 0x1C0071430
 * Callers:
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007156C (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     UserIsCurrentProcessDwm @ 0x1C004B5A0 (UserIsCurrentProcessDwm.c)
 *     AllocateWindowManagerSid @ 0x1C00714A0 (AllocateWindowManagerSid.c)
 *     ?IsMobileCore@@YAEXZ @ 0x1C007187C (-IsMobileCore@@YAEXZ.c)
 */

__int64 CheckDwmProcessSecurityIdentifier()
{
  int v0; // ebx
  __int64 v1; // rcx
  char v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v0 = -1073741823;
  v3 = 0;
  if ( IsMobileCore() )
  {
    if ( UserIsCurrentProcessDwm(v1) )
      return 0;
  }
  else
  {
    v0 = AllocateWindowManagerSid(&v4);
    if ( v0 >= 0 )
    {
      v0 = RtlCheckTokenMembership(0LL, v4, &v3);
      if ( v0 >= 0 && !v3 )
        v0 = -1073741720;
      Win32FreePool();
    }
  }
  return (unsigned int)v0;
}
