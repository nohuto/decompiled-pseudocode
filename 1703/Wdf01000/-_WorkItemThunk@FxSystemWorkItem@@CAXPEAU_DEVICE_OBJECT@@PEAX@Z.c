/*
 * XREFs of ?_WorkItemThunk@FxSystemWorkItem@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0011A70
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003F450 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003F608 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

void __fastcall FxSystemWorkItem::_WorkItemThunk(_DEVICE_OBJECT *DeviceObject, char *Context, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *v4; // rdx
  unsigned __int8 v5; // al
  unsigned __int8 v6; // r8
  void (__fastcall *v7)(__int64); // rsi
  __int64 v8; // rdi
  unsigned __int8 v9; // r8
  unsigned __int8 v10; // di
  unsigned __int8 v11; // r8
  bool v12; // zf
  FxVerifierLock *v13; // rcx
  FxVerifierLock *v14; // rcx
  FxVerifierLock *v15; // rcx
  unsigned __int8 PreviousIrql; // [rsp+38h] [rbp+10h] BYREF

  v4 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)Context + 2);
  if ( v4->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = v4;
  if ( Context[24] < 0 && (v13 = (FxVerifierLock *)*((_QWORD *)Context - 5)) != 0LL )
  {
    FxVerifierLock::Lock(v13, &PreviousIrql, a3);
    v5 = PreviousIrql;
  }
  else
  {
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
    PreviousIrql = v5;
  }
  v7 = (void (__fastcall *)(__int64))*((_QWORD *)Context + 17);
  v8 = *((_QWORD *)Context + 18);
  ++*((_DWORD *)Context + 46);
  *((_QWORD *)Context + 17) = 0LL;
  Context[121] = 0;
  FxNonPagedObject::Unlock((FxNonPagedObject *)Context, v5, v6);
  v7(v8);
  if ( Context[24] < 0 && (v14 = (FxVerifierLock *)*((_QWORD *)Context - 5)) != 0LL )
  {
    FxVerifierLock::Lock(v14, &PreviousIrql, v9);
    v10 = PreviousIrql;
  }
  else
  {
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
    PreviousIrql = v10;
  }
  v12 = (*((_DWORD *)Context + 46))-- == 1;
  if ( v12 && !Context[121] )
    KeSetEvent((PRKEVENT)(Context + 152), 0, 0);
  if ( Context[24] < 0 && (v15 = (FxVerifierLock *)*((_QWORD *)Context - 5)) != 0LL )
    FxVerifierLock::Unlock(v15, v10, v11);
  else
    KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v10);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Context + 47, 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)Context + 8, 0, 0);
}
