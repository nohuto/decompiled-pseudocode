/*
 * XREFs of ?_WorkItemCallback@FxThreadedEventQueue@@KAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0026A20
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ @ 0x1C009E6D0 (-ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ.c)
 */

void __fastcall FxThreadedEventQueue::_WorkItemCallback(_DEVICE_OBJECT *DeviceObject, _QWORD *Context)
{
  __int64 v2; // rax
  _FX_DRIVER_GLOBALS *v4; // rdi
  FxPkgPnp *v5; // rsi
  KIRQL v6; // al
  KIRQL v7; // al
  char v8; // dl
  _KEVENT *p_m_Event; // rcx
  _KEVENT *v10; // [rsp+20h] [rbp-28h] BYREF
  __int16 v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h]
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  v2 = Context[1];
  v10 = 0LL;
  v11 = 0;
  v12 = 0LL;
  v4 = *(_FX_DRIVER_GLOBALS **)(v2 + 16);
  if ( v4->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + PfnKeGetCurrentProcessorNumberEx(0LL) * FxLibraryGlobals.DriverTracker.m_EntrySize) = v4;
  v5 = (FxPkgPnp *)Context[1];
  v6 = KeAcquireSpinLockRaiseToDpc(Context + 4);
  *((_BYTE *)Context + 96) &= ~1u;
  ++*((_BYTE *)Context + 97);
  KeReleaseSpinLock(Context + 4, v6);
  ((void (__fastcall *)(_QWORD, _KEVENT **, _QWORD))Context[10])(Context[1], &v10, Context[2]);
  v7 = KeAcquireSpinLockRaiseToDpc(Context + 4);
  --*((_BYTE *)Context + 97);
  v8 = *((_BYTE *)Context + 96);
  if ( (v8 & 1) == 0 && !*((_BYTE *)Context + 97) && *(_BYTE *)Context == *((_BYTE *)Context + 1) )
  {
    if ( (v8 & 4) != 0 )
    {
      LOBYTE(v11) = 1;
      *((_BYTE *)Context + 96) = v8 & 0xFB;
    }
    if ( (Context[12] & 2) != 0 )
    {
      v10 = (_KEVENT *)Context[11];
      Context[11] = 0LL;
    }
  }
  KeReleaseSpinLock(Context + 4, v7);
  if ( HIBYTE(v11) )
  {
    p_m_Event = &v5->m_DeviceRemoveProcessed->m_Event;
LABEL_18:
    KeSetEvent(p_m_Event, 0, 0);
    return;
  }
  if ( v12 )
  {
    v13 = v12;
    v12 = 0LL;
    v5->FireAndForgetIrp(v5, (FxIrp *)&v13);
  }
  if ( (_BYTE)v11 )
    FxPkgPnp::ProcessDelayedDeletion(v5);
  p_m_Event = v10;
  if ( v10 )
    goto LABEL_18;
}
