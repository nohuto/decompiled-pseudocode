/*
 * XREFs of LdrpFreeUnicodeString @ 0x180042C80
 * Callers:
 *     LdrpDereferenceModule @ 0x18001651C (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllInternal @ 0x1800187EC (LdrpFindLoadedDllInternal.c)
 *     LdrpApplyFileNameRedirection @ 0x18002108C (LdrpApplyFileNameRedirection.c)
 *     LdrpLoadDependentModule @ 0x180022010 (LdrpLoadDependentModule.c)
 *     LdrpSearchPath @ 0x18003F450 (LdrpSearchPath.c)
 *     LdrpResolveDllName @ 0x18003F930 (LdrpResolveDllName.c)
 *     LdrpMapDllSearchPath @ 0x180042A04 (LdrpMapDllSearchPath.c)
 *     LdrpAppCompatRedirect @ 0x180042DFC (LdrpAppCompatRedirect.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x18002A210 (NtdllpFreeStringRoutine.c)
 */

__int64 __fastcall LdrpFreeUnicodeString(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    result = NtdllpFreeStringRoutine(v2);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *(_DWORD *)a1 = 0;
  return result;
}
