/*
 * XREFs of VidSchSyncPriorityDevice @ 0x1C0079840
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdatePriorityClass@DXGDEVICE@@QEAAXXZ @ 0x1C000E164 (-UpdatePriorityClass@DXGDEVICE@@QEAAXXZ.c)
 *     VidSchSetPriorityContext @ 0x1C00388C0 (VidSchSetPriorityContext.c)
 */

__int64 __fastcall VidSchSyncPriorityDevice(__int64 a1, unsigned int a2)
{
  DXGDEVICE::UpdatePriorityClass(*(DXGDEVICE **)(a1 + 8));
  VidSchSetPriorityContext(*(_QWORD *)(a1 + 64), *(unsigned int *)(*(_QWORD *)(a1 + 64) + 388LL), 1LL, a2);
  return 0LL;
}
