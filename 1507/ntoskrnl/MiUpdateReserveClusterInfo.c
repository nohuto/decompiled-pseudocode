/*
 * XREFs of MiUpdateReserveClusterInfo @ 0x1400DDB10
 * Callers:
 *     MiAdjustModifiedPageLoad @ 0x140012840 (MiAdjustModifiedPageLoad.c)
 *     MiFindFreePageFileSpace @ 0x140062B48 (MiFindFreePageFileSpace.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiFinishPageFileExtension @ 0x1402216C8 (MiFinishPageFileExtension.c)
 *     MiInsertPageFileInList @ 0x1405B4BD0 (MiInsertPageFileInList.c)
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
