/*
 * XREFs of ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1C002DFEC
 * Callers:
 *     imp_WdfIoTargetFormatRequestForInternalIoctlOthers @ 0x1C002DDA0 (imp_WdfIoTargetFormatRequestForInternalIoctlOthers.c)
 *     ??0FxIrpPreprocessInfo@@QEAA@XZ @ 0x1C005D350 (--0FxIrpPreprocessInfo@@QEAA@XZ.c)
 *     ??0FxTagTracker@@AEAA@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z @ 0x1C007A758 (--0FxTagTracker@@AEAA@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C0082510 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x1C008C814 (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 *     ??0FxUsbPipeContinuousReader@@QEAA@PEAVFxUsbPipe@@E@Z @ 0x1C0090178 (--0FxUsbPipeContinuousReader@@QEAA@PEAVFxUsbPipe@@E@Z.c)
 *     ?ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU_IRP@@2@Z2@Z @ 0x1C009482C (-ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU.c)
 * Callees:
 *     <none>
 */

void __fastcall `vector constructor iterator'(
        char *__t,
        unsigned __int64 __s,
        int __n,
        void *(__fastcall *__f)(void *))
{
  while ( --__n >= 0 )
  {
    __f(__t);
    __t += __s;
  }
}
