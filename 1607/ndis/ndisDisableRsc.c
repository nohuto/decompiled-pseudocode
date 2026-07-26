/*
 * XREFs of ndisDisableRsc @ 0x1C00D6590
 * Callers:
 *     ndisUpdateMinimumStackVersion @ 0x1C00A70E0 (ndisUpdateMinimumStackVersion.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C000A5A0 (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memset @ 0x1C0027500 (memset.c)
 */

__int64 __fastcall ndisDisableRsc(_QWORD *a1)
{
  __int64 result; // rax
  _BYTE v3[248]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v4[9]; // [rsp+130h] [rbp+30h] BYREF
  __int128 v5; // [rsp+139h] [rbp+39h]
  int v6; // [rsp+149h] [rbp+49h]
  __int16 v7; // [rsp+14Dh] [rbp+4Dh]
  char v8; // [rsp+14Fh] [rbp+4Fh]

  memset(v3, 0, sizeof(v3));
  memset(v4, 0, sizeof(v4));
  v5 = 0uLL;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  result = a1[519];
  if ( result && !*(_BYTE *)(result + 5) )
  {
    if ( (*(_BYTE *)(result + 5) = 1, result = a1[519], *(_WORD *)(result + 10) >= 0x9Cu)
      && *(_BYTE *)(result + 9) >= 3u
      && (*(_BYTE *)(result + 152) || *(_BYTE *)(result + 153))
      || *(_WORD *)(result + 190) >= 0x9Cu
      && *(_BYTE *)(result + 189) >= 3u
      && (*(_BYTE *)(result + 332) || *(_BYTE *)(result + 333)) )
    {
      *(_DWORD *)((char *)&v5 + 7) |= 1u;
      *(_DWORD *)v4 = 1704832;
      *(_WORD *)((char *)&v5 + 13) = 257;
      memset(v3, 0, sizeof(v3));
      *(_DWORD *)&v3[88] |= 8u;
      *(_DWORD *)&v3[8] = 0;
      *(_QWORD *)&v3[104] = &ndisIntReqGeneric;
      *(_DWORD *)v3 = 15466902;
      *(_QWORD *)&v3[40] = v4;
      *(_DWORD *)&v3[32] = -67042804;
      *(_DWORD *)&v3[4] = 1;
      *(_DWORD *)&v3[48] = 32;
      return ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v3, 0LL, 0LL);
    }
  }
  return result;
}
