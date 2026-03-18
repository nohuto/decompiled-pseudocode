/*
 * XREFs of ??_GWDFDEVICE_INIT@@QEAAPEAXI@Z @ 0x1C005709C
 * Callers:
 *     ?_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z @ 0x1C0028600 (-_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z.c)
 *     imp_WdfDeviceInitFree @ 0x1C0063800 (imp_WdfDeviceInitFree.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1C001C9B0 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 */

WDFDEVICE_INIT *__fastcall WDFDEVICE_INIT::`scalar deleting destructor'(WDFDEVICE_INIT *this, unsigned int a2)
{
  WDFDEVICE_INIT::~WDFDEVICE_INIT(this, a2);
  if ( this )
    FxPoolFree(this);
  return this;
}
