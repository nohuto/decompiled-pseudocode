/*
 * XREFs of HvlpFastFlushAddressSpaceTb @ 0x140270938
 * Callers:
 *     HvlFlushAddressSpaceTb @ 0x14017EA3C (HvlFlushAddressSpaceTb.c)
 *     HvlpFlushAddressSpaceTb @ 0x140270BBC (HvlpFlushAddressSpaceTb.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlpExtendedFastHypercall @ 0x14017ECA0 (HvlpExtendedFastHypercall.c)
 */

__int64 __fastcall HvlpFastFlushAddressSpaceTb(__int64 a1, __int64 a2, char a3)
{
  int v4; // r9d
  unsigned __int64 v5; // r8
  unsigned int v6; // r9d
  unsigned __int64 v7; // rcx
  char *i; // rdx
  unsigned __int64 v9; // rcx
  _BYTE *v10; // rdx
  _QWORD v12[2]; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-20h]

  v4 = -(a3 != 0);
  v5 = 0LL;
  v6 = ~(_BYTE)v4 & 4;
  if ( !a1 )
    v6 |= 2u;
  if ( a2 )
  {
    v7 = *(_QWORD *)(a2 + 8);
    if ( !HvlpVirtualProcessorsIdentityMapped )
    {
      for ( i = byte_1403D3CC1; ; i = v10 + 2 )
      {
        if ( (v7 & 1) != 0 )
          v5 |= 1LL << *i;
        v9 = v7 >> 1;
        if ( !v9 )
          break;
        v10 = i + 2;
        if ( (v9 & 1) != 0 )
          v5 |= 1LL << *v10;
        v7 = v9 >> 1;
        if ( !v7 )
          break;
      }
      v7 = v5;
    }
    v13 = v7;
  }
  else
  {
    v6 |= 1u;
    v13 = 0LL;
  }
  v12[0] = a1;
  v12[1] = v6;
  return HvlpExtendedFastHypercall(65538LL, v12, 24LL);
}
