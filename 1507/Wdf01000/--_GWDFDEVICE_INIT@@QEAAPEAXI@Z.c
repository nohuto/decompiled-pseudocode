/*
 * XREFs of ??_GWDFDEVICE_INIT@@QEAAPEAXI@Z @ 0x1C005D32C
 * Callers:
 *     ?_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z @ 0x1C002CC50 (-_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z.c)
 *     imp_WdfDeviceInitFree @ 0x1C006B310 (imp_WdfDeviceInitFree.c)
 * Callees:
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1C000F1E0 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 */

WDFDEVICE_INIT *__fastcall WDFDEVICE_INIT::`scalar deleting destructor'(WDFDEVICE_INIT *this, unsigned int a2)
{
  WDFDEVICE_INIT::~WDFDEVICE_INIT(this, a2);
  if ( this )
    FxPoolFree(this);
  return this;
}
