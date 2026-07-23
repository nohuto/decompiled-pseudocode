/*
 * XREFs of ExpCovIsUnLoadedModulePresent @ 0x1406B7058
 * Callers:
 *     ExpCovQueryInformation @ 0x1406B72F0 (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x1406B7B6C (ExpCovResetInformation.c)
 * Callees:
 *     ExpCovIsModulePresent @ 0x1406B6FB8 (ExpCovIsModulePresent.c)
 */

bool __fastcall ExpCovIsUnLoadedModulePresent(__int64 a1, int a2, const UNICODE_STRING *a3, void *a4)
{
  __int64 v5; // rdx

  v5 = *(_QWORD *)(a1 + 56);
  return v5 && ExpCovIsModulePresent(a1 + 16, v5, a2, a3, a4);
}
