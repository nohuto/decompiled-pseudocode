/*
 * XREFs of LdrSetImplicitPathOptions @ 0x1800D0B80
 * Callers:
 *     <none>
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x180031C50 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180032238 (LdrpDereferenceModule.c)
 */

__int64 __fastcall LdrSetImplicitPathOptions(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  char *v6; // rdx
  int LoadedDllByHandle; // edi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  int v12; // [rsp+38h] [rbp+10h] BYREF
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  v5 = 32512;
  if ( (LdrpPolicyBits & 4) == 0 )
    v5 = 31488;
  if ( (~v5 & a2) != 0 || !a2 )
    return 3221225485LL;
  LoadedDllByHandle = LdrpFindLoadedDllByHandle(a1, (char *)&v13, &v12, a4);
  if ( LoadedDllByHandle >= 0 )
  {
    v10 = v13;
    *(_DWORD *)(v13 + 272) = a2;
    LdrpDereferenceModule(v10, v6, v8, v9);
  }
  return (unsigned int)LoadedDllByHandle;
}
