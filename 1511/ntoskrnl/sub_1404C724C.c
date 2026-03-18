/*
 * XREFs of sub_1404C724C @ 0x1404C724C
 * Callers:
 *     <none>
 * Callees:
 *     MmGetNumberOfPhysicalPages @ 0x1400F4844 (MmGetNumberOfPhysicalPages.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     sub_1404577BC @ 0x1404577BC (sub_1404577BC.c)
 */

__int64 __fastcall sub_1404C724C(__int64 a1)
{
  int v2; // ecx
  __int64 v4; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v5[12]; // [rsp+28h] [rbp-30h] BYREF
  __int128 v6; // [rsp+34h] [rbp-24h]

  v4 = MmGetNumberOfPhysicalPages(0) << 12;
  if ( *(_BYTE *)(a1 + 12) == (_BYTE)v2 )
  {
    memset(v5, 0, (unsigned int)(v2 + 32));
    v5[4] = 2;
    v6 = SL_HWID_IF_GUID_SYSTEM_MEMORY;
  }
  return sub_1404577BC(a1, (__int64)v5, &v4, 8u);
}
