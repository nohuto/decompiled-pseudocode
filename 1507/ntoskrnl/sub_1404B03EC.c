/*
 * XREFs of sub_1404B03EC @ 0x1404B03EC
 * Callers:
 *     <none>
 * Callees:
 *     MmGetNumberOfPhysicalPages @ 0x1400757B0 (MmGetNumberOfPhysicalPages.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     sub_1404DAE70 @ 0x1404DAE70 (sub_1404DAE70.c)
 */

__int64 __fastcall sub_1404B03EC(__int64 a1)
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
  return sub_1404DAE70(a1, v5, &v4, 8LL);
}
