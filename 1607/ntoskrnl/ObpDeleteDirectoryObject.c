/*
 * XREFs of ObpDeleteDirectoryObject @ 0x1404C632C
 * Callers:
 *     <none>
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14005D6F0 (ObDereferenceObjectDeferDelete.c)
 */

void __fastcall ObpDeleteDirectoryObject(__int64 a1)
{
  void *v2; // rcx

  if ( (*(_DWORD *)(a1 + 344) & 4) != 0 )
    ObDereferenceObjectDeferDelete(*(PVOID *)(a1 + 312));
  v2 = *(void **)(a1 + 336);
  if ( v2 )
    ObDereferenceObjectDeferDelete(v2);
}
