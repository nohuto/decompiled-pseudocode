/*
 * XREFs of CheckDesktopPolicyChange @ 0x1C00A6250
 * Callers:
 *     <none>
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0032120 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

__int64 __fastcall CheckDesktopPolicyChange(const UNICODE_STRING *a1)
{
  unsigned int v1; // ebx
  void *v3; // rdi
  void *v4; // rdi
  int v6; // [rsp+30h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-2Ch] BYREF
  _QWORD KeyInformation[3]; // [rsp+38h] [rbp-28h] BYREF

  v1 = 0;
  v6 = 4;
  KeyInformation[0] = 0LL;
  v3 = OpenCacheKeyEx(a1, 4LL, 0x20019u, &v6);
  if ( v3 )
  {
    ZwQueryKey(v3, KeyBasicInformation, KeyInformation, 0x18u, &ResultLength);
    ZwClose(v3);
    gdwPolicyFlags |= 4u;
  }
  else
  {
    gdwPolicyFlags &= ~4u;
  }
  if ( qword_1C0106BE8 != KeyInformation[0] )
  {
    qword_1C0106BE8 = KeyInformation[0];
    v1 = 1;
  }
  KeyInformation[0] = 0LL;
  v6 = 2;
  v4 = OpenCacheKeyEx(a1, 4LL, 0x20019u, &v6);
  if ( v4 )
  {
    ZwQueryKey(v4, KeyBasicInformation, KeyInformation, 0x18u, &ResultLength);
    ZwClose(v4);
    gdwPolicyFlags |= 2u;
  }
  else
  {
    gdwPolicyFlags &= ~2u;
  }
  if ( qword_1C0106BF0 != KeyInformation[0] )
  {
    qword_1C0106BF0 = KeyInformation[0];
    return 1;
  }
  return v1;
}
