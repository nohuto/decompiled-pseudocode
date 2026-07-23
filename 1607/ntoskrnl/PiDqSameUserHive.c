/*
 * XREFs of PiDqSameUserHive @ 0x14063237C
 * Callers:
 *     PiDqQueryApplyObjectEvent @ 0x14048C498 (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     RtlEqualSid @ 0x14000F0F0 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     SeQueryUserSidToken @ 0x1403FEB00 (SeQueryUserSidToken.c)
 */

__int64 __fastcall PiDqSameUserHive(__int64 *a1, __int64 *a2, BOOLEAN *a3)
{
  __int64 v5; // rcx
  __int64 v7; // rcx
  _BYTE Sid2[80]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE Sid1[80]; // [rsp+70h] [rbp-68h] BYREF

  v5 = *a1;
  if ( !v5 )
    v5 = a1[2];
  SeQueryUserSidToken(v5, Sid1, 0x44u, 0LL);
  v7 = *a2;
  if ( !*a2 )
    v7 = a2[2];
  SeQueryUserSidToken(v7, Sid2, 0x44u, 0LL);
  *a3 = RtlEqualSid(Sid1, Sid2);
  return 0LL;
}
