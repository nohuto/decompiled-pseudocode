/*
 * XREFs of CiTaskIndexLocate @ 0x1C000AEA0
 * Callers:
 *     CiTaskIndexCreate @ 0x1C000A410 (CiTaskIndexCreate.c)
 *     CiDispatchCreateMmThreadClient @ 0x1C000A860 (CiDispatchCreateMmThreadClient.c)
 * Callees:
 *     CiSystemAcquirePushLock @ 0x1C000B4F0 (CiSystemAcquirePushLock.c)
 */

__int64 __fastcall CiTaskIndexLocate(int a1, struct _SINGLE_LIST_ENTRY *a2, SINGLE_LIST_ENTRY **a3)
{
  unsigned int v6; // esi
  struct _DEVICE_OBJECT *DeferredRoutine; // rax
  SINGLE_LIST_ENTRY *p_DpcListEntry; // rdx

  v6 = -1073740543;
  if ( a2 )
    CiSystemAcquirePushLock(&WPP_MAIN_CB.Dpc.DpcListEntry);
  DeferredRoutine = (struct _DEVICE_OBJECT *)WPP_MAIN_CB.Dpc.DeferredRoutine;
  if ( (PKDEFERRED_ROUTINE *)WPP_MAIN_CB.Dpc.DeferredRoutine != &WPP_MAIN_CB.Dpc.DeferredRoutine )
  {
    while ( 1 )
    {
      p_DpcListEntry = &DeferredRoutine[-1].Dpc.DpcListEntry;
      if ( LODWORD(DeferredRoutine[-1].DeviceObjectExtension) == a1 )
        break;
      DeferredRoutine = *(struct _DEVICE_OBJECT **)&DeferredRoutine->Type;
      if ( DeferredRoutine == (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Dpc.DeferredRoutine )
        goto LABEL_11;
    }
    if ( a2 )
    {
      if ( p_DpcListEntry[12].Next != a2 )
        goto LABEL_11;
      if ( _InterlockedIncrement64((volatile signed __int64 *)&p_DpcListEntry[6]) <= 1 )
        __fastfail(0xEu);
    }
    *a3 = p_DpcListEntry;
    v6 = 0;
  }
LABEL_11:
  if ( a2 )
  {
    WPP_MAIN_CB.Dpc.ProcessorHistory = 0LL;
    ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Dpc.DpcListEntry, 0LL);
  }
  return v6;
}
