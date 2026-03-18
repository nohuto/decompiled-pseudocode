/*
 * XREFs of ?PreprocessIrp@@YAJPEAVFxDevice@@PEAU_IRP@@PEAUFxIrpPreprocessInfo@@PEAX@Z @ 0x1C007DB8C
 * Callers:
 *     imp_WdfDeviceWdmDispatchPreprocessedIrp @ 0x1C0022070 (imp_WdfDeviceWdmDispatchPreprocessedIrp.c)
 *     ?DispatchWorker@@YAJPEAVFxDevice@@PEAU_IRP@@PEAX@Z @ 0x1C007D8A0 (-DispatchWorker@@YAJPEAVFxDevice@@PEAU_IRP@@PEAX@Z.c)
 * Callees:
 *     ?_RequiresRemLock@FxDevice@@SA?AW4FxDeviceRemLockAction@@EE@Z @ 0x1C003BB24 (-_RequiresRemLock@FxDevice@@SA-AW4FxDeviceRemLockAction@@EE@Z.c)
 */

__int64 __fastcall PreprocessIrp(unsigned __int64 Device, _IRP *Irp, FxIrpPreprocessInfo *Info, void *DispatchContext)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned __int8 MajorFunction; // si
  unsigned __int8 MinorFunction; // r14
  __int64 v10; // rax
  __int64 v11; // r9
  unsigned __int16 v12; // ax
  WDFDEVICE__ *v13; // rcx
  int v14; // eax
  __int64 v15; // r8
  unsigned __int16 v16; // ax
  unsigned __int64 v17; // rcx
  unsigned int v18; // ebp

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  MinorFunction = CurrentStackLocation->MinorFunction;
  v10 = CurrentStackLocation->MajorFunction;
  if ( Info->ClassExtension )
  {
    v15 = v10;
    v16 = *(_WORD *)(Device + 10);
    v17 = Device ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !v16 )
      v17 = 0LL;
    v14 = ((__int64 (__fastcall *)(unsigned __int64, _IRP *, void *))Info->Dispatch[v15].EvtDevicePreprocess)(
            v17,
            Irp,
            DispatchContext);
  }
  else
  {
    v11 = v10;
    v12 = *(_WORD *)(Device + 10);
    v13 = (WDFDEVICE__ *)(Device ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v12 )
      v13 = 0LL;
    v14 = Info->Dispatch[v11].EvtDevicePreprocess(v13, Irp);
  }
  v18 = v14;
  if ( (unsigned int)FxDevice::_RequiresRemLock(MajorFunction, MinorFunction) == 1 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(*(_QWORD *)(Device + 144) + 336LL), Irp, 0x20u);
  return v18;
}
