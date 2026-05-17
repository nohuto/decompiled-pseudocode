/*
 * XREFs of LdrpFreeReplacedModule @ 0x18006E7CC
 * Callers:
 *     LdrpLoadDllInternal @ 0x180011D2C (LdrpLoadDllInternal.c)
 *     LdrpLoadDependentModule @ 0x180013200 (LdrpLoadDependentModule.c)
 *     LdrpSnapModule @ 0x180033FC0 (LdrpSnapModule.c)
 *     LdrpFreeLoadContext @ 0x18006E898 (LdrpFreeLoadContext.c)
 *     LdrpHandlePendingModuleReplaced @ 0x18006E938 (LdrpHandlePendingModuleReplaced.c)
 * Callees:
 *     LdrpFreeLoadContext @ 0x18006E898 (LdrpFreeLoadContext.c)
 */

__int64 __fastcall LdrpFreeReplacedModule(unsigned __int64 a1)
{
  char *v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  LdrpFreeLoadContext(*(_QWORD *)(a1 + 176));
  *(_DWORD *)(a1 + 104) &= ~0x20u;
  *(_DWORD *)(a1 + 276) = 1;
  return LdrpDereferenceModule(a1, v2, v3, v4);
}
