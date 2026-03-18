/*
 * XREFs of GetJournallingQueue @ 0x1C0064B70
 * Callers:
 *     zzzSetDesktop @ 0x1C00644C0 (zzzSetDesktop.c)
 * Callees:
 *     PhkFirstGlobalValid @ 0x1C0064BC4 (PhkFirstGlobalValid.c)
 */

__int64 __fastcall GetJournallingQueue(__int64 a1)
{
  __int64 GlobalValid; // rax
  __int64 v2; // r10
  __int64 v3; // r9

  if ( (*(_DWORD *)(a1 + 440) & 0x80u) != 0 || !*(_QWORD *)(a1 + 408) )
    return 0LL;
  GlobalValid = PhkFirstGlobalValid(a1, 1LL);
  if ( GlobalValid )
    return *(_QWORD *)(*(_QWORD *)(GlobalValid + 16) + 384LL);
  GlobalValid = PhkFirstGlobalValid(v2, 0LL);
  if ( GlobalValid )
    return *(_QWORD *)(*(_QWORD *)(GlobalValid + 16) + 384LL);
  return v3;
}
