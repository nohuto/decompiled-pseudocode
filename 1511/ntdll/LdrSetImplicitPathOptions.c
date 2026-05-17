/*
 * XREFs of LdrSetImplicitPathOptions @ 0x1800C97D0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpDereferenceModule @ 0x180032630 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByHandle @ 0x180032760 (LdrpFindLoadedDllByHandle.c)
 *     LdrpValidPathComponentsMask @ 0x1800D1CE8 (LdrpValidPathComponentsMask.c)
 */

__int64 __fastcall LdrSetImplicitPathOptions(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int valid; // eax
  int v4; // edx
  __int64 v5; // r9
  char *v6; // rdx
  int LoadedDllByHandle; // edi
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rcx
  int v12; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  valid = LdrpValidPathComponentsMask(a1, a2);
  if ( (~valid & v4) != 0 || !v4 )
    return 3221225485LL;
  LoadedDllByHandle = LdrpFindLoadedDllByHandle(v5, (char *)&v13, &v12, v5);
  if ( LoadedDllByHandle >= 0 )
  {
    v10 = v13;
    *(_DWORD *)(v13 + 272) = v2;
    LdrpDereferenceModule(v10, v6, v8, v9);
  }
  return (unsigned int)LoadedDllByHandle;
}
