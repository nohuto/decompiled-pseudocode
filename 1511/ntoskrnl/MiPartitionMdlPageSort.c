/*
 * XREFs of MiPartitionMdlPageSort @ 0x1401D9784
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPartitionMdlPageSort(_QWORD *a1, _QWORD *a2)
{
  if ( *a1 >= *a2 )
    return *a1 > *a2;
  else
    return 0xFFFFFFFFLL;
}
