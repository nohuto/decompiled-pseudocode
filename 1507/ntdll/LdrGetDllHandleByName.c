/*
 * XREFs of LdrGetDllHandleByName @ 0x18006CF40
 * Callers:
 *     LdrpSnapKernelBaseExtensions @ 0x1800205B8 (LdrpSnapKernelBaseExtensions.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x18001651C (LdrpDereferenceModule.c)
 *     LdrpIncrementModuleLoadCount @ 0x180020924 (LdrpIncrementModuleLoadCount.c)
 *     LdrpFindLoadedDllByName @ 0x18002467C (LdrpFindLoadedDllByName.c)
 *     LdrpFatalExceptionFilter @ 0x1800C0E8C (LdrpFatalExceptionFilter.c)
 */

__int64 __fastcall LdrGetDllHandleByName(unsigned __int16 *a1, unsigned __int16 *a2, _QWORD *a3)
{
  int LoadedDllByName; // ebx
  __int64 v5; // rdi
  __int64 v7; // [rsp+38h] [rbp-10h] BYREF
  int v8; // [rsp+68h] [rbp+20h] BYREF

  LoadedDllByName = LdrpFindLoadedDllByName(a1, a2, 0, (__int64)&v7, &v8);
  if ( LoadedDllByName >= 0 )
  {
    if ( v8 < 7 )
    {
      LoadedDllByName = -1073741515;
      v5 = v7;
    }
    else
    {
      v5 = v7;
      LoadedDllByName = LdrpIncrementModuleLoadCount(v7);
      if ( LoadedDllByName >= 0 )
        *a3 = *(_QWORD *)(v5 + 48);
    }
    LdrpDereferenceModule(v5);
  }
  return (unsigned int)LoadedDllByName;
}
