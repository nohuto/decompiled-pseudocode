/*
 * XREFs of RaidAdapterQueryCapabilitiesIrpCompletion @ 0x1C0013B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterQueryCapabilitiesIrpCompletion(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // eax

  v2 = *(_QWORD *)(a2 + 184);
  v3 = *(_QWORD *)(a1 + 64);
  v4 = *(_QWORD *)(v2 + 8);
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(v2 + 3) |= 1u;
  if ( *(_DWORD *)(v3 + 312) == 5 )
  {
    v5 = *(_DWORD *)(v4 + 4);
    if ( (v5 & 0x10) != 0 )
      *(_DWORD *)(v4 + 4) = v5 & 0xFFFFFDFF;
  }
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v3 + 256));
  return 0LL;
}
