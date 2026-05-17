/*
 * XREFs of LdrGetDllHandleByName @ 0x1800788F0
 * Callers:
 *     LdrpSnapKernelBaseExtensions @ 0x180011A58 (LdrpSnapKernelBaseExtensions.c)
 * Callees:
 *     LdrpIncrementModuleLoadCount @ 0x180011798 (LdrpIncrementModuleLoadCount.c)
 *     LdrpFindLoadedDllByName @ 0x180015388 (LdrpFindLoadedDllByName.c)
 *     LdrpDereferenceModule @ 0x180032630 (LdrpDereferenceModule.c)
 *     LdrpFatalExceptionFilter @ 0x1800CB54C (LdrpFatalExceptionFilter.c)
 */

__int64 __fastcall LdrGetDllHandleByName(unsigned __int16 *a1, unsigned __int16 *a2, _QWORD *a3)
{
  char *v4; // rdx
  int LoadedDllByName; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rdi
  unsigned __int64 v10; // [rsp+38h] [rbp-10h] BYREF
  int v11; // [rsp+68h] [rbp+20h] BYREF

  LoadedDllByName = LdrpFindLoadedDllByName(a1, a2, 0, (__int64)&v10, &v11);
  if ( LoadedDllByName >= 0 )
  {
    if ( v11 < 7 )
    {
      LoadedDllByName = -1073741515;
      v8 = v10;
    }
    else
    {
      v8 = v10;
      LoadedDllByName = LdrpIncrementModuleLoadCount(v10);
      if ( LoadedDllByName >= 0 )
        *a3 = *(_QWORD *)(v8 + 48);
    }
    LdrpDereferenceModule(v8, v4, v6, v7);
  }
  return (unsigned int)LoadedDllByName;
}
