/*
 * XREFs of SdbGetAppPatchDirEx @ 0x1407042C4
 * Callers:
 *     SdbResolveDatabase @ 0x140704364 (SdbResolveDatabase.c)
 *     SdbpGetStandardDatabasePath @ 0x140704768 (SdbpGetStandardDatabasePath.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x14011BAF4 (RtlStringCchCopyW.c)
 *     AslPathToSystemPath @ 0x140705B6C (AslPathToSystemPath.c)
 */

void __fastcall SdbGetAppPatchDirEx(__int64 a1, wchar_t *a2, unsigned int a3, int a4)
{
  size_t v4; // rsi
  __int16 v6; // ax
  const wchar_t *v7; // rdx
  __int64 v8; // rcx
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+30h] [rbp+8h] BYREF

  v4 = a3;
  pszSrc = 0LL;
  if ( a4 && a1 && ((v6 = *(_WORD *)(a1 + 568), v6 == -31132) || v6 == 512 || v6 == -21916) )
    v7 = L"\\AppPatch\\AppPatch64";
  else
    v7 = L"\\AppPatch";
  if ( (int)AslPathToSystemPath(&pszSrc, v7) >= 0 && pszSrc )
    RtlStringCchCopyW(a2, v4, pszSrc);
  else
    *a2 = 0;
  AslFree(v8, (void *)pszSrc);
}
