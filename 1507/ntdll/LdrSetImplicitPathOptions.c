/*
 * XREFs of LdrSetImplicitPathOptions @ 0x1800BCAB0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x180015F14 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x18001651C (LdrpDereferenceModule.c)
 *     LdrpValidPathComponentsMask @ 0x1800C9208 (LdrpValidPathComponentsMask.c)
 */

__int64 __fastcall LdrSetImplicitPathOptions(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int valid; // eax
  int v4; // edx
  __int64 v5; // r9
  int LoadedDllByHandle; // edi
  __int64 v7; // rcx
  int v9; // [rsp+38h] [rbp+10h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  valid = LdrpValidPathComponentsMask(a1, a2);
  if ( (~valid & v4) != 0 || !v4 )
    return 3221225485LL;
  LoadedDllByHandle = LdrpFindLoadedDllByHandle(v5, &v10, &v9);
  if ( LoadedDllByHandle >= 0 )
  {
    v7 = v10;
    *(_DWORD *)(v10 + 272) = v2;
    LdrpDereferenceModule(v7);
  }
  return (unsigned int)LoadedDllByHandle;
}
