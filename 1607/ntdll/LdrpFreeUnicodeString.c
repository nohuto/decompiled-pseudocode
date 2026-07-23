/*
 * XREFs of LdrpFreeUnicodeString @ 0x18000E8EC
 * Callers:
 *     LdrpAppCompatRedirect @ 0x18000E054 (LdrpAppCompatRedirect.c)
 *     LdrpMapDllSearchPath @ 0x18000E5B8 (LdrpMapDllSearchPath.c)
 *     LdrpSearchPath @ 0x18000EBE0 (LdrpSearchPath.c)
 *     LdrpResolveDllName @ 0x18000FA84 (LdrpResolveDllName.c)
 *     LdrpFindLoadedDllInternal @ 0x1800123E8 (LdrpFindLoadedDllInternal.c)
 *     LdrpApplyFileNameRedirection @ 0x180015A24 (LdrpApplyFileNameRedirection.c)
 *     LdrpLoadDependentModule @ 0x180016670 (LdrpLoadDependentModule.c)
 *     LdrpDereferenceModule @ 0x180032228 (LdrpDereferenceModule.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800094D0 (NtdllpFreeStringRoutine.c)
 */

LOGICAL __fastcall LdrpFreeUnicodeString(__int64 a1)
{
  void *v2; // rcx
  LOGICAL result; // eax

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    result = NtdllpFreeStringRoutine(v2);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *(_DWORD *)a1 = 0;
  return result;
}
