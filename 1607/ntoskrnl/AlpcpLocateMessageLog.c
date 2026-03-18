/*
 * XREFs of AlpcpLocateMessageLog @ 0x1406550B0
 * Callers:
 *     AlpcpEnterFreeEventMessageLog @ 0x140654E40 (AlpcpEnterFreeEventMessageLog.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140654ED8 (AlpcpEnterStateChangeEventMessageLog.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpLocateMessageLog(unsigned int a1)
{
  char *v2; // rax
  __int64 i; // rcx

  if ( AlpcpMessageLogLookupTable )
  {
    v2 = (char *)AlpcpMessageLogLookupTable + 16 * ((a1 >> 2) & 0x3FF);
    for ( i = *((_QWORD *)v2 + 1); (char *)i != v2; i = *(_QWORD *)(i + 8) )
    {
      if ( *(_DWORD *)(i + 28) && *(_DWORD *)(i + 24) == a1 )
        return i - 16;
    }
  }
  return 0LL;
}
