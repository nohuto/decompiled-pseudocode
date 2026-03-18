/*
 * XREFs of ExpCovResetInfoCallBack @ 0x1406B79F4
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 *     ExpCovIsLoadedModulePresent @ 0x1406B6E50 (ExpCovIsLoadedModulePresent.c)
 */

__int64 __fastcall ExpCovResetInfoCallBack(__int64 a1, __int64 a2)
{
  if ( ExpCovIsLoadedModulePresent(a1, *(_DWORD *)(a2 + 48), a2 + 16, a2 + 32) == 1 )
    memset(
      (void *)(*(_QWORD *)(a1 + 128) + *(unsigned int *)(*(_QWORD *)(a1 + 128) + 32LL)),
      0,
      *(unsigned int *)(*(_QWORD *)(a1 + 128) + 28LL));
  return 0LL;
}
