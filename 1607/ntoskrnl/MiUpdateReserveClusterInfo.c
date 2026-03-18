/*
 * XREFs of MiUpdateReserveClusterInfo @ 0x1400B5470
 * Callers:
 *     MiReservePageFileSpace @ 0x14001E5D0 (MiReservePageFileSpace.c)
 *     MiAdjustModifiedPageLoad @ 0x1400BEA50 (MiAdjustModifiedPageLoad.c)
 *     MiFinishPageFileExtension @ 0x1401EE648 (MiFinishPageFileExtension.c)
 *     MiInsertPageFileInList @ 0x140568B64 (MiInsertPageFileInList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdateReserveClusterInfo(__int64 a1, signed __int32 *a2, unsigned __int16 a3)
{
  __int64 result; // rax

  if ( a2 )
    return (unsigned int)_InterlockedCompareExchange(
                           (volatile signed __int32 *)(a1 + 784),
                           *a2 ^ (a3 ^ (unsigned __int16)*a2) & 0x3FF,
                           *a2);
  result = 512LL;
  _InterlockedExchange((volatile __int32 *)(a1 + 784), ((*(_DWORD *)(a1 + 784) & 0xFFFFFC00) + 1024) ^ 0x200);
  return result;
}
