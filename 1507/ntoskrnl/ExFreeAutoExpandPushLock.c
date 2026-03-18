/*
 * XREFs of ExFreeAutoExpandPushLock @ 0x1402633F0
 * Callers:
 *     <none>
 * Callees:
 *     ExSaFree @ 0x140265FEC (ExSaFree.c)
 */

void __fastcall ExFreeAutoExpandPushLock(_DWORD *a1)
{
  int v1; // eax

  v1 = a1[2];
  if ( (v1 & 1) != 0 )
    ExSaFree(v1 & 0xFFFFFFF8);
  ExFreePoolWithTag(a1, 0);
}
