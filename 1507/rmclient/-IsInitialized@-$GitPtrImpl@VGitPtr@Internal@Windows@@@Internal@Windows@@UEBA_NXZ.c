/*
 * XREFs of ?IsInitialized@?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@UEBA_NXZ @ 0x18000D470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::IsInitialized(__int64 a1)
{
  return *(_DWORD *)(a1 + 8) != 0;
}
