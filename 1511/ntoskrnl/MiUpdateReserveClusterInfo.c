/*
 * XREFs of MiUpdateReserveClusterInfo @ 0x1400B84AC
 * Callers:
 *     MiAdjustModifiedPageLoad @ 0x14001373C (MiAdjustModifiedPageLoad.c)
 *     MiReservePageFileSpace @ 0x1400367C0 (MiReservePageFileSpace.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiFinishPageFileExtension @ 0x1401DC968 (MiFinishPageFileExtension.c)
 *     MiInsertPageFileInList @ 0x140538300 (MiInsertPageFileInList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdateReserveClusterInfo(__int64 a1, signed __int32 *a2, unsigned __int16 a3)
{
  __int64 result; // rax

  if ( a2 )
    return (unsigned int)_InterlockedCompareExchange(
                           (volatile signed __int32 *)(a1 + 792),
                           *a2 ^ (a3 ^ (unsigned __int16)*a2) & 0x3FF,
                           *a2);
  result = 512LL;
  _InterlockedExchange((volatile __int32 *)(a1 + 792), ((*(_DWORD *)(a1 + 792) & 0xFFFFFC00) + 1024) ^ 0x200);
  return result;
}
