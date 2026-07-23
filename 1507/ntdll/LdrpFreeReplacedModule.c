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

int __fastcall LdrpFreeReplacedModule(PVOID *BaseAddress)
{
  LdrpFreeLoadContext(BaseAddress[22]);
  *((_DWORD *)BaseAddress + 26) &= ~0x20u;
  *((_DWORD *)BaseAddress + 69) = 1;
  return LdrpDereferenceModule((char *)BaseAddress);
}
