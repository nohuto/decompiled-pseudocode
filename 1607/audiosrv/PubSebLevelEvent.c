/*
 * XREFs of PubSebLevelEvent @ 0x180006030
 * Callers:
 *     ?UpdateOffloadPowerRequest@@YAXXZ @ 0x180007F90 (-UpdateOffloadPowerRequest@@YAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180038EA0 (_alloca_probe.c)
 */

__int64 __fastcall PubSebLevelEvent(__int64 a1, unsigned __int8 a2)
{
  _DWORD v3[1024]; // [rsp+30h] [rbp-1018h] BYREF

  v3[1] = -1;
  if ( a2 > 1u )
    v3[0] = ((v3[0] | 1) ^ ((LOBYTE(v3[0]) | 1) ^ (unsigned __int8)(2 * (a2 != 0))) & 2) & 0xFE000003 | (a2 << 14);
  else
    v3[0] = ((v3[0] | 1) ^ ((LOBYTE(v3[0]) | 1) ^ (unsigned __int8)(2 * (a2 != 0))) & 2) & 0xFE000003;
  return RtlPublishWnfStateData(a1, 0LL, v3, 8LL, 0LL);
}
