/*
 * XREFs of ?SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z @ 0x1C00CA094
 * Callers:
 *     DwmSyncDesktopSwitch @ 0x1C00C647C (DwmSyncDesktopSwitch.c)
 *     DwmSyncGetTitleBarInfo @ 0x1C00C7CB8 (DwmSyncGetTitleBarInfo.c)
 *     DwmSyncHitTestQuery @ 0x1C00C82C8 (DwmSyncHitTestQuery.c)
 *     DwmSyncNotifyMinimizing @ 0x1C00C9844 (DwmSyncNotifyMinimizing.c)
 *     DwmSyncCaptureSurfaceBits @ 0x1C00C9F18 (DwmSyncCaptureSurfaceBits.c)
 *     DwmSyncGetCompositionAttribute @ 0x1C01436DC (DwmSyncGetCompositionAttribute.c)
 *     DwmSyncFlushForceRenderAndWaitForBatch @ 0x1C014F610 (DwmSyncFlushForceRenderAndWaitForBatch.c)
 *     DwmSyncMagnUpdateWindowSharedTextures @ 0x1C025F438 (DwmSyncMagnUpdateWindowSharedTextures.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SyncLpcCheckNtStatus(int a1, struct _PORT_MESSAGE *a2)
{
  __int64 result; // rax

  if ( a1 < 0 )
    return (unsigned int)a1;
  if ( a1 == 192 )
    return 3221225473LL;
  if ( a1 == 258 )
    return 3221225473LL;
  result = (unsigned int)a1;
  if ( ((unsigned __int16)a2->u2.s2.Type & 0xFFFF00FF) != 2 )
    return 3221225473LL;
  return result;
}
