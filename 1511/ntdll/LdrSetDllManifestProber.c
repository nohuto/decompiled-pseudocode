/*
 * XREFs of LdrSetDllManifestProber @ 0x180082870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall LdrSetDllManifestProber(
        _RTL_DYNAMIC_HASH_TABLE *a1,
        _RTL_DYNAMIC_HASH_TABLE *a2,
        _RTL_DYNAMIC_HASH_TABLE *a3)
{
  LdrpManifestProberRoutine = a1;
  LdrpCreateActCtxLanguageW = a2;
  LdrpReleaseActCtxW = a3;
}
