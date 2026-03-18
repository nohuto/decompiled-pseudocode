/*
 * XREFs of GetJournallingQueue @ 0x1C008C4B0
 * Callers:
 *     zzzSetDesktop @ 0x1C008BDA0 (zzzSetDesktop.c)
 * Callees:
 *     PhkFirstGlobalValid @ 0x1C008C504 (PhkFirstGlobalValid.c)
 */

__int64 __fastcall GetJournallingQueue(__int64 a1)
{
  __int64 GlobalValid; // rax
  __int64 v2; // r10
  __int64 v3; // r9

  if ( (*(_DWORD *)(a1 + 448) & 0x80u) != 0 || !*(_QWORD *)(a1 + 416) )
    return 0LL;
  GlobalValid = PhkFirstGlobalValid(a1, 1LL);
  if ( GlobalValid )
    return *(_QWORD *)(*(_QWORD *)(GlobalValid + 16) + 392LL);
  GlobalValid = PhkFirstGlobalValid(v2, 0LL);
  if ( GlobalValid )
    return *(_QWORD *)(*(_QWORD *)(GlobalValid + 16) + 392LL);
  return v3;
}
