/*
 * XREFs of LdrpHandlePendingModuleReplaced @ 0x180062164
 * Callers:
 *     LdrpSnapModule @ 0x1800156C0 (LdrpSnapModule.c)
 *     LdrpFreeLoadContext @ 0x1800620C4 (LdrpFreeLoadContext.c)
 * Callees:
 *     LdrpFreeReplacedModule @ 0x180061FF8 (LdrpFreeReplacedModule.c)
 *     LdrpHandleReplacedModule @ 0x1800621A0 (LdrpHandleReplacedModule.c)
 */

void __fastcall LdrpHandlePendingModuleReplaced(__int64 a1)
{
  __int64 v2; // rax
  PVOID *v3; // rcx

  if ( *(_QWORD *)(a1 + 72) )
  {
    v2 = LdrpHandleReplacedModule();
    v3 = *(PVOID **)(a1 + 72);
    if ( (PVOID *)v2 != v3 )
      LdrpFreeReplacedModule(v3);
    *(_QWORD *)(a1 + 72) = 0LL;
  }
}
