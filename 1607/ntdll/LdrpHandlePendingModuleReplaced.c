/*
 * XREFs of LdrpHandlePendingModuleReplaced @ 0x18006B7D8
 * Callers:
 *     LdrpSnapModule @ 0x180033FA0 (LdrpSnapModule.c)
 *     LdrpFreeLoadContext @ 0x18006B738 (LdrpFreeLoadContext.c)
 * Callees:
 *     LdrpFreeReplacedModule @ 0x18006B66C (LdrpFreeReplacedModule.c)
 *     LdrpHandleReplacedModule @ 0x18006B814 (LdrpHandleReplacedModule.c)
 */

void __fastcall LdrpHandlePendingModuleReplaced(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx

  if ( *(_QWORD *)(a1 + 72) )
  {
    v2 = LdrpHandleReplacedModule();
    v3 = *(_QWORD *)(a1 + 72);
    if ( v2 != v3 )
      LdrpFreeReplacedModule(v3);
    *(_QWORD *)(a1 + 72) = 0LL;
  }
}
