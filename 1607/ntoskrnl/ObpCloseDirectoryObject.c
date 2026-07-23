/*
 * XREFs of ObpCloseDirectoryObject @ 0x1404B91C8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ObpCloseDirectoryObject(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( a4 == 1 )
  {
    result = a2[86];
    if ( (result & 1) != 0 )
      return ObpRemoveNamespaceFromTable(a2);
  }
  return result;
}
