/*
 * XREFs of ?PreprocessIrp@@YAJPEAVFxDevice@@PEAU_IRP@@PEAUFxIrpPreprocessInfo@@PEAX@Z @ 0x1C006B548
 * Callers:
 *     imp_WdfDeviceWdmDispatchPreprocessedIrp @ 0x1C001ABE0 (imp_WdfDeviceWdmDispatchPreprocessedIrp.c)
 *     ?DispatchWorker@@YAJPEAVFxDevice@@PEAU_IRP@@PEAX@Z @ 0x1C006B36C (-DispatchWorker@@YAJPEAVFxDevice@@PEAU_IRP@@PEAX@Z.c)
 * Callees:
 *     ?_RequiresRemLock@FxDevice@@SA?AW4FxDeviceRemLockAction@@EE@Z @ 0x1C0033BF0 (-_RequiresRemLock@FxDevice@@SA-AW4FxDeviceRemLockAction@@EE@Z.c)
 */

__int64 __fastcall PreprocessIrp(unsigned __int64 Device, _IRP *Irp, FxIrpPreprocessInfo *Info, void *DispatchContext)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned __int64 v5; // r10
  unsigned __int8 MajorFunction; // bp
  unsigned __int8 MinorFunction; // r14
  unsigned int v10; // eax
  unsigned int v11; // esi

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v5 = 0LL;
  MajorFunction = CurrentStackLocation->MajorFunction;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( Info->ClassExtension )
  {
    if ( *(_WORD *)(Device + 10) )
      v5 = Device ^ 0xFFFFFFFFFFFFFFF8uLL;
    v10 = ((__int64 (__fastcall *)(unsigned __int64, _IRP *, void *))Info->Dispatch[MajorFunction].EvtDevicePreprocess)(
            v5,
            Irp,
            DispatchContext);
  }
  else
  {
    if ( *(_WORD *)(Device + 10) )
      v5 = Device ^ 0xFFFFFFFFFFFFFFF8uLL;
    v10 = ((__int64 (__fastcall *)(unsigned __int64, _IRP *, FxIrpPreprocessInfo *, void *))Info->Dispatch[MajorFunction].EvtDevicePreprocess)(
            v5,
            Irp,
            Info,
            DispatchContext);
  }
  v11 = v10;
  if ( (unsigned int)FxDevice::_RequiresRemLock(MajorFunction, MinorFunction) == 1 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(*(_QWORD *)(Device + 144) + 336LL), Irp, 0x20u);
  return v11;
}
