/*
 * XREFs of ?_WorkItemCallback@FxWorkItemEventQueue@@KAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C002C020
 * Callers:
 *     <none>
 * Callees:
 *     ?Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z @ 0x1C002C24C (-Evaluate@FxPostProcessInfo@@QEAAXPEAVFxPkgPnp@@@Z.c)
 */

void __fastcall FxWorkItemEventQueue::_WorkItemCallback(_DEVICE_OBJECT *DeviceObject, void *Context)
{
  __int64 v2; // rbx
  _FX_DRIVER_GLOBALS *v4; // rbx
  _DRIVER_OBJECT *m_DriverObject; // rsi
  FxPkgPnp *v6; // r14
  KIRQL v7; // al
  KIRQL v8; // al
  KIRQL v9; // dl
  char v10; // al
  FxPostProcessInfo v11; // [rsp+20h] [rbp-38h] BYREF

  v2 = *((_QWORD *)Context + 1);
  v11.m_Event = 0LL;
  *(_WORD *)&v11.m_DeleteObject = 0;
  v11.m_FireAndForgetIrp = 0LL;
  v4 = *(_FX_DRIVER_GLOBALS **)(v2 + 16);
  m_DriverObject = v4->Driver->m_DriverObject.m_DriverObject;
  if ( v4->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = v4;
  v6 = (FxPkgPnp *)*((_QWORD *)Context + 1);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 4);
  *((_BYTE *)Context + 96) &= ~1u;
  ++*((_BYTE *)Context + 97);
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 4, v7);
  (*((void (__fastcall **)(_QWORD, FxPostProcessInfo *, _QWORD))Context + 10))(
    *((_QWORD *)Context + 1),
    &v11,
    *((_QWORD *)Context + 2));
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 4);
  --*((_BYTE *)Context + 97);
  v9 = v8;
  v10 = *((_BYTE *)Context + 96);
  if ( (v10 & 1) == 0 && !*((_BYTE *)Context + 97) && *(_BYTE *)Context == *((_BYTE *)Context + 1) )
  {
    if ( (v10 & 4) != 0 )
    {
      v11.m_DeleteObject = 1;
      *((_BYTE *)Context + 96) = v10 & 0xFB;
    }
    if ( (*((_BYTE *)Context + 96) & 2) != 0 )
    {
      v11.m_Event = (FxCREvent *)*((_QWORD *)Context + 11);
      *((_QWORD *)Context + 11) = 0LL;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 4, v9);
  FxPostProcessInfo::Evaluate(&v11, v6);
  if ( _InterlockedExchangeAdd(&v4->Refcnt, 0xFFFFFFFF) == 1 )
    KeSetEvent(&v4->DestroyEvent.m_Event, 0, 0);
  ObfDereferenceObject(m_DriverObject);
}
