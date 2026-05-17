/*
 * XREFs of ResCRuntimeViewLoadCultureMap @ 0x1800FF784
 * Callers:
 *     ResCRuntimeGetCultureID @ 0x1800FF388 (ResCRuntimeGetCultureID.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005A470 (RtlSetLastWin32Error.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     ResCGetName @ 0x180105118 (ResCGetName.c)
 *     ResCCreateCultureMap @ 0x180105644 (ResCCreateCultureMap.c)
 *     ResCLoadCultureMap @ 0x180105A7C (ResCLoadCultureMap.c)
 *     ResCReloadCultureMap @ 0x180105B20 (ResCReloadCultureMap.c)
 */

_BOOL8 __fastcall ResCRuntimeViewLoadCultureMap(__int64 a1)
{
  unsigned int LastErrorValue; // ecx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  _BYTE Src[528]; // [rsp+20h] [rbp-228h] BYREF

  if ( !a1 )
  {
    if ( NtCurrentTeb()->LastErrorValue )
      return 0LL;
    LastErrorValue = 87;
LABEL_4:
    RtlSetLastWin32Error(LastErrorValue);
    return 0LL;
  }
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
  {
    v5 = ResCReloadCultureMap(v4);
LABEL_15:
    *(_QWORD *)(a1 + 8) = v5;
    return v5 != 0;
  }
  if ( !(unsigned int)ResCGetName(*(_QWORD *)(a1 + 32), 258LL, Src) )
    return 0LL;
  v6 = ResCLoadCultureMap(Src);
  *(_QWORD *)(a1 + 8) = v6;
  if ( !v6 )
  {
    LastErrorValue = NtCurrentTeb()->LastErrorValue;
    if ( LastErrorValue != 2 )
    {
      if ( !LastErrorValue || NtCurrentTeb()->LastErrorValue )
        return 0LL;
      goto LABEL_4;
    }
    v5 = ResCCreateCultureMap(Src);
    goto LABEL_15;
  }
  return 1LL;
}
