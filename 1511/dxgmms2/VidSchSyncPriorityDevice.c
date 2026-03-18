/*
 * XREFs of VidSchSyncPriorityDevice @ 0x1C003AD20
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdatePriorityClass@DXGDEVICE@@QEAAX_N@Z @ 0x1C001C4BC (-UpdatePriorityClass@DXGDEVICE@@QEAAX_N@Z.c)
 *     VidSchSetPriorityContext @ 0x1C003AD60 (VidSchSetPriorityContext.c)
 */

__int64 __fastcall VidSchSyncPriorityDevice(__int64 a1, unsigned int a2)
{
  DXGDEVICE::UpdatePriorityClass(*(DXGDEVICE **)(a1 + 8));
  VidSchSetPriorityContext(*(_QWORD *)(a1 + 64), *(unsigned int *)(*(_QWORD *)(a1 + 64) + 388LL), 1LL, a2);
  return 0LL;
}
