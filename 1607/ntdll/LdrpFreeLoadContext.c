/*
 * XREFs of LdrpFreeLoadContext @ 0x18006B728
 * Callers:
 *     LdrpFreeReplacedModule @ 0x18006B65C (LdrpFreeReplacedModule.c)
 *     LdrpFreeLoadContextOfNode @ 0x18006B694 (LdrpFreeLoadContextOfNode.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     LdrpFreeReplacedModule @ 0x18006B65C (LdrpFreeReplacedModule.c)
 *     LdrpHandlePendingModuleReplaced @ 0x18006B7C8 (LdrpHandlePendingModuleReplaced.c)
 */

LOGICAL __fastcall LdrpFreeLoadContext(PVOID BaseAddress)
{
  LOGICAL result; // eax
  __int64 i; // rdi
  __int64 v4; // rcx
  __int64 v5; // rax

  *(_QWORD *)(*((_QWORD *)BaseAddress + 6) + 176LL) = 0LL;
  result = LdrpHandlePendingModuleReplaced(BaseAddress);
  if ( *((_QWORD *)BaseAddress + 10) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)BaseAddress + 22); i = (unsigned int)(i + 1) )
    {
      v4 = *(_QWORD *)(*((_QWORD *)BaseAddress + 10) + 8 * i);
      if ( v4 )
      {
        v5 = *(_QWORD *)(v4 + 176);
        if ( v5 )
        {
          if ( (*(_DWORD *)(v5 + 24) & 0x80000) == 0 && *(_QWORD *)(v5 + 48) != v4 )
          {
            *(_QWORD *)(v5 + 48) = v4;
            LdrpFreeReplacedModule((PVOID *)v4);
          }
        }
      }
    }
    result = RtlFreeHeap(LdrpHeap, 0, *((PVOID *)BaseAddress + 10));
  }
  if ( (*((_DWORD *)BaseAddress + 6) & 0x8000) != 0 )
    return RtlFreeHeap(LdrpHeap, 0, BaseAddress);
  return result;
}
