/*
 * XREFs of ?SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z @ 0x1C0040424
 * Callers:
 *     DwmSyncHitTestQuery @ 0x1C003E64C (DwmSyncHitTestQuery.c)
 *     DwmSyncNotifyMinimizing @ 0x1C003FBB4 (DwmSyncNotifyMinimizing.c)
 *     DwmSyncCaptureSurfaceBits @ 0x1C00402A8 (DwmSyncCaptureSurfaceBits.c)
 *     DwmSyncDesktopSwitch @ 0x1C01005C8 (DwmSyncDesktopSwitch.c)
 *     DwmSyncGetCompositionAttribute @ 0x1C0118714 (DwmSyncGetCompositionAttribute.c)
 *     DwmSyncGetTitleBarInfo @ 0x1C011E744 (DwmSyncGetTitleBarInfo.c)
 *     DwmSyncFlushForceRenderAndWaitForBatch @ 0x1C0132330 (DwmSyncFlushForceRenderAndWaitForBatch.c)
 *     DwmSyncMagnUpdateWindowSharedTextures @ 0x1C025FC68 (DwmSyncMagnUpdateWindowSharedTextures.c)
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
