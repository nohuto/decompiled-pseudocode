/*
 * XREFs of ResCRuntimeViewLoadCultureMap @ 0x1800F7628
 * Callers:
 *     ResCRuntimeGetCultureID @ 0x1800F7234 (ResCRuntimeGetCultureID.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180048BE0 (RtlSetLastWin32Error.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     ResCGetName @ 0x1800FA76C (ResCGetName.c)
 *     ResCCreateCultureMap @ 0x1800FAC98 (ResCCreateCultureMap.c)
 *     ResCLoadCultureMap @ 0x1800FB0DC (ResCLoadCultureMap.c)
 *     ResCReloadCultureMap @ 0x1800FB180 (ResCReloadCultureMap.c)
 */

_BOOL8 __fastcall ResCRuntimeViewLoadCultureMap(__int64 a1)
{
  LONG LastErrorValue; // ecx
  void *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  _BYTE Src[528]; // [rsp+20h] [rbp-228h] BYREF

  if ( !a1 )
  {
    if ( !NtCurrentTeb()->LastErrorValue )
    {
      LastErrorValue = 87;
LABEL_11:
      RtlSetLastWin32Error(LastErrorValue);
    }
    return 0LL;
  }
  v3 = *(void **)(a1 + 8);
  if ( v3 )
  {
    v4 = ResCReloadCultureMap(v3);
LABEL_14:
    *(_QWORD *)(a1 + 8) = v4;
    return v4 != 0;
  }
  if ( !(unsigned int)ResCGetName(*(_QWORD *)(a1 + 32), 258LL, Src) )
    return 0LL;
  v5 = ResCLoadCultureMap(Src);
  *(_QWORD *)(a1 + 8) = v5;
  if ( !v5 )
  {
    LastErrorValue = NtCurrentTeb()->LastErrorValue;
    if ( LastErrorValue != 2 )
    {
      if ( !LastErrorValue || NtCurrentTeb()->LastErrorValue )
        return 0LL;
      goto LABEL_11;
    }
    v4 = ResCCreateCultureMap(Src);
    goto LABEL_14;
  }
  return 1LL;
}
