/*
 * XREFs of LdrDisableThreadCalloutsForDll @ 0x18007AB10
 * Callers:
 *     <none>
 * Callees:
 *     LdrpDereferenceModule @ 0x180032630 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByHandle @ 0x180032760 (LdrpFindLoadedDllByHandle.c)
 */

__int64 __fastcall LdrDisableThreadCalloutsForDll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int LoadedDllByHandle; // ebx
  char *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rcx
  int v10; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  LoadedDllByHandle = 0;
  if ( !byte_180145248 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(a1, (char *)&v11, &v10, a4);
    if ( LoadedDllByHandle >= 0 )
    {
      v8 = v11;
      if ( !*(_WORD *)(v11 + 110) )
        *(_BYTE *)(v11 + 106) |= 4u;
      LdrpDereferenceModule(v8, v5, v6, v7);
    }
  }
  return (unsigned int)LoadedDllByHandle;
}
