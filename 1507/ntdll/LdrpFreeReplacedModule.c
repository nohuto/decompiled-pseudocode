/*
 * XREFs of LdrpFreeReplacedModule @ 0x180061FF8
 * Callers:
 *     LdrpSnapModule @ 0x1800156C0 (LdrpSnapModule.c)
 *     LdrpLoadDllInternal @ 0x180020AC4 (LdrpLoadDllInternal.c)
 *     LdrpLoadDependentModule @ 0x180022010 (LdrpLoadDependentModule.c)
 *     LdrpFreeLoadContext @ 0x1800620C4 (LdrpFreeLoadContext.c)
 *     LdrpHandlePendingModuleReplaced @ 0x180062164 (LdrpHandlePendingModuleReplaced.c)
 * Callees:
 *     LdrpFreeLoadContext @ 0x1800620C4 (LdrpFreeLoadContext.c)
 */

__int64 __fastcall LdrpFreeReplacedModule(__int64 a1)
{
  LdrpFreeLoadContext(*(_QWORD *)(a1 + 176));
  *(_DWORD *)(a1 + 104) &= ~0x20u;
  *(_DWORD *)(a1 + 276) = 1;
  return LdrpDereferenceModule(a1);
}
