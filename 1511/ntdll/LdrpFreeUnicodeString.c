/*
 * XREFs of LdrpFreeUnicodeString @ 0x18000A308
 * Callers:
 *     LdrpAppCompatRedirect @ 0x1800090C4 (LdrpAppCompatRedirect.c)
 *     LdrpMapDllSearchPath @ 0x18000A018 (LdrpMapDllSearchPath.c)
 *     LdrpSearchPath @ 0x18000BF00 (LdrpSearchPath.c)
 *     LdrpResolveDllName @ 0x18000CFF8 (LdrpResolveDllName.c)
 *     LdrpFindLoadedDllInternal @ 0x18001138C (LdrpFindLoadedDllInternal.c)
 *     LdrpApplyFileNameRedirection @ 0x180012354 (LdrpApplyFileNameRedirection.c)
 *     LdrpLoadDependentModule @ 0x180013200 (LdrpLoadDependentModule.c)
 *     LdrpDereferenceModule @ 0x180032630 (LdrpDereferenceModule.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800207A0 (NtdllpFreeStringRoutine.c)
 */

__int64 __fastcall LdrpFreeUnicodeString(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
  {
    result = NtdllpFreeStringRoutine();
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *(_DWORD *)a1 = 0;
  return result;
}
