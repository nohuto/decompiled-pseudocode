/*
 * XREFs of ?_WorkItemThunk@FxSystemWorkItem@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C00267D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

void __fastcall FxSystemWorkItem::_WorkItemThunk(_DEVICE_OBJECT *DeviceObject, char *Context, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *v3; // rdi
  unsigned __int8 v5; // r8
  char v6; // al
  void (__fastcall *v7)(__int64); // rdi
  __int64 v8; // rsi
  unsigned __int8 v9; // r8
  unsigned __int8 v10; // r8
  bool v11; // zf
  FxVerifierLock *v12; // rcx
  FxVerifierLock *v13; // rcx
  unsigned __int8 PreviousIrql; // [rsp+38h] [rbp+10h] BYREF

  v3 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)Context + 2);
  if ( v3->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + PfnKeGetCurrentProcessorNumberEx(0LL) * FxLibraryGlobals.DriverTracker.m_EntrySize) = v3;
  FxNonPagedObject::Lock((FxNonPagedObject *)Context, &PreviousIrql, a3);
  v6 = Context[24];
  ++*((_DWORD *)Context + 46);
  v7 = (void (__fastcall *)(__int64))*((_QWORD *)Context + 17);
  v8 = *((_QWORD *)Context + 18);
  Context[121] = 0;
  *((_QWORD *)Context + 17) = 0LL;
  if ( v6 < 0 && (v12 = (FxVerifierLock *)*((_QWORD *)Context - 3)) != 0LL )
    FxVerifierLock::Unlock(v12, PreviousIrql, v5);
  else
    KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, PreviousIrql);
  v7(v8);
  FxNonPagedObject::Lock((FxNonPagedObject *)Context, &PreviousIrql, v9);
  v11 = (*((_DWORD *)Context + 46))-- == 1;
  if ( v11 && !Context[121] )
    KeSetEvent((PRKEVENT)(Context + 152), 0, 0);
  if ( Context[24] < 0 && (v13 = (FxVerifierLock *)*((_QWORD *)Context - 3)) != 0LL )
    FxVerifierLock::Unlock(v13, PreviousIrql, v10);
  else
    KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, PreviousIrql);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Context + 47, 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)Context + 8, 0, 0);
}
