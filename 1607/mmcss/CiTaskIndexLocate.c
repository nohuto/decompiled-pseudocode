/*
 * XREFs of CiTaskIndexLocate @ 0x1C000AE20
 * Callers:
 *     CiDispatchCreateMmThreadClient @ 0x1C000A650 (CiDispatchCreateMmThreadClient.c)
 *     CiTaskIndexCreate @ 0x1C000ACD0 (CiTaskIndexCreate.c)
 * Callees:
 *     CiSystemAcquirePushLock @ 0x1C000B5F0 (CiSystemAcquirePushLock.c)
 */

__int64 __fastcall CiTaskIndexLocate(int a1, struct _LIST_ENTRY *a2, LIST_ENTRY **a3)
{
  unsigned int v6; // esi
  struct _DEVICE_OBJECT *DeferredRoutine; // rax
  LIST_ENTRY *p_DeviceListHead; // rdx

  v6 = -1073740543;
  if ( a2 )
    CiSystemAcquirePushLock(&WPP_MAIN_CB.Dpc.DpcListEntry);
  DeferredRoutine = (struct _DEVICE_OBJECT *)WPP_MAIN_CB.Dpc.DeferredRoutine;
  if ( (PKDEFERRED_ROUTINE *)WPP_MAIN_CB.Dpc.DeferredRoutine != &WPP_MAIN_CB.Dpc.DeferredRoutine )
  {
    while ( 1 )
    {
      p_DeviceListHead = &DeferredRoutine[-1].DeviceQueue.DeviceListHead;
      if ( LODWORD(DeferredRoutine[-1].DeviceObjectExtension) == a1 )
        break;
      DeferredRoutine = *(struct _DEVICE_OBJECT **)&DeferredRoutine->Type;
      if ( DeferredRoutine == (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Dpc.DeferredRoutine )
        goto LABEL_6;
    }
    if ( a2 )
    {
      if ( p_DeviceListHead[8].Blink != a2 )
        goto LABEL_6;
      if ( _InterlockedIncrement64((volatile signed __int64 *)&p_DeviceListHead[3]) <= 1 )
        __fastfail(0xEu);
    }
    *a3 = p_DeviceListHead;
    v6 = 0;
  }
LABEL_6:
  if ( a2 )
  {
    WPP_MAIN_CB.Dpc.ProcessorHistory = 0LL;
    ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Dpc.DpcListEntry, 0LL);
  }
  return v6;
}
