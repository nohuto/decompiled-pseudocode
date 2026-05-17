/*
 * XREFs of LdrpFreeLoadContext @ 0x1800620C4
 * Callers:
 *     LdrpFreeReplacedModule @ 0x180061FF8 (LdrpFreeReplacedModule.c)
 *     LdrpFreeLoadContextOfNode @ 0x180062030 (LdrpFreeLoadContextOfNode.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     LdrpFreeReplacedModule @ 0x180061FF8 (LdrpFreeReplacedModule.c)
 *     LdrpHandlePendingModuleReplaced @ 0x180062164 (LdrpHandlePendingModuleReplaced.c)
 */

__int64 __fastcall LdrpFreeLoadContext(unsigned __int64 a1)
{
  __int64 result; // rax
  __int64 i; // rdi
  __int64 v4; // rcx
  __int64 v5; // rax

  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 176LL) = 0LL;
  result = LdrpHandlePendingModuleReplaced(a1);
  if ( *(_QWORD *)(a1 + 80) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 88); i = (unsigned int)(i + 1) )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 8 * i);
      if ( v4 )
      {
        v5 = *(_QWORD *)(v4 + 176);
        if ( v5 )
        {
          if ( (*(_DWORD *)(v5 + 24) & 0x80000) == 0 && *(_QWORD *)(v5 + 48) != v4 )
          {
            *(_QWORD *)(v5 + 48) = v4;
            LdrpFreeReplacedModule(v4);
          }
        }
      }
    }
    result = RtlFreeHeap(LdrpHeap, 0, *(_QWORD *)(a1 + 80));
  }
  if ( (*(_DWORD *)(a1 + 24) & 0x8000) != 0 )
    return RtlFreeHeap(LdrpHeap, 0, a1);
  return result;
}
