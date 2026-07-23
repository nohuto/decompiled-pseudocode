/*
 * XREFs of LdrpHandlePendingModuleReplaced @ 0x18006E938
 * Callers:
 *     LdrpSnapModule @ 0x180033FC0 (LdrpSnapModule.c)
 *     LdrpFreeLoadContext @ 0x18006E898 (LdrpFreeLoadContext.c)
 * Callees:
 *     LdrpFreeReplacedModule @ 0x18006E7CC (LdrpFreeReplacedModule.c)
 *     LdrpHandleReplacedModule @ 0x18006E974 (LdrpHandleReplacedModule.c)
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
