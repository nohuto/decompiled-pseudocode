/*
 * XREFs of LdrpFreeReplacedModule @ 0x18006B66C
 * Callers:
 *     LdrpLoadDependentModule @ 0x180016680 (LdrpLoadDependentModule.c)
 *     LdrpLoadDllInternal @ 0x180018D30 (LdrpLoadDllInternal.c)
 *     LdrpSnapModule @ 0x180033FA0 (LdrpSnapModule.c)
 *     LdrpFreeLoadContext @ 0x18006B738 (LdrpFreeLoadContext.c)
 *     LdrpHandlePendingModuleReplaced @ 0x18006B7D8 (LdrpHandlePendingModuleReplaced.c)
 * Callees:
 *     LdrpFreeLoadContext @ 0x18006B738 (LdrpFreeLoadContext.c)
 */

__int64 __fastcall LdrpFreeReplacedModule(__int64 a1)
{
  char *v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  LdrpFreeLoadContext(*(_QWORD *)(a1 + 176));
  *(_DWORD *)(a1 + 104) &= ~0x20u;
  *(_DWORD *)(a1 + 276) = 1;
  return LdrpDereferenceModule(a1, v2, v3, v4);
}
