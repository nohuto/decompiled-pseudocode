/*
 * XREFs of ??_GWDFDEVICE_INIT@@QEAAPEAXI@Z @ 0x1C00673C0
 * Callers:
 *     ?_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z @ 0x1C0031294 (-_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z.c)
 *     imp_WdfDeviceInitFree @ 0x1C0075E40 (imp_WdfDeviceInitFree.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1C0030CD0 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 */

WDFDEVICE_INIT *__fastcall WDFDEVICE_INIT::`scalar deleting destructor'(WDFDEVICE_INIT *this, unsigned int a2)
{
  WDFDEVICE_INIT::~WDFDEVICE_INIT(this, a2);
  if ( this )
    FxPoolFree(this);
  return this;
}
