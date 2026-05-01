/*
 * XREFs of RtlStringCbCatW @ 0x18001A224
 * Callers:
 *     QuerySecurityDescriptorValue @ 0x180019E50 (QuerySecurityDescriptorValue.c)
 *     QueryTransientObjectSecurityDescriptor @ 0x18001A034 (QueryTransientObjectSecurityDescriptor.c)
 * Callees:
 *     sub_18001A2A0 @ 0x18001A2A0 (sub_18001A2A0.c)
 *     sub_18001A508 @ 0x18001A508 (sub_18001A508.c)
 */

__int64 __fastcall RtlStringCbCatW(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  int v3; // r9d
  unsigned __int64 v4; // r11
  __int64 v7; // rax
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  v4 = a2 >> 1;
  if ( (a2 >> 1) - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    v7 = 0LL;
  }
  else
  {
    v3 = sub_18001A508(a1, a2 >> 1, &v9);
    v7 = v9;
  }
  if ( v3 >= 0 )
    return (unsigned int)sub_18001A2A0(a1 + 2 * v7, v4 - v7, 0LL, a3);
  return (unsigned int)v3;
}
