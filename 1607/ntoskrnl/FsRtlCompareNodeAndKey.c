/*
 * XREFs of FsRtlCompareNodeAndKey @ 0x1400C1DE4
 * Callers:
 *     FsRtlFindInTunnelCache @ 0x1404E4A10 (FsRtlFindInTunnelCache.c)
 *     FsRtlAddToTunnelCache @ 0x1404E6068 (FsRtlAddToTunnelCache.c)
 * Callees:
 *     <none>
 */

LONG __fastcall FsRtlCompareNodeAndKey(__int64 a1, unsigned __int64 a2, const UNICODE_STRING *a3)
{
  unsigned __int64 v3; // rax
  const UNICODE_STRING *v4; // rcx

  v3 = *(_QWORD *)(a1 + 48);
  if ( v3 > a2 )
    return 1;
  if ( v3 < a2 )
    return -1;
  if ( (*(_DWORD *)(a1 + 56) & 2) != 0 )
    v4 = (const UNICODE_STRING *)(a1 + 80);
  else
    v4 = (const UNICODE_STRING *)(a1 + 64);
  return RtlCompareUnicodeString(v4, a3, 1u);
}
