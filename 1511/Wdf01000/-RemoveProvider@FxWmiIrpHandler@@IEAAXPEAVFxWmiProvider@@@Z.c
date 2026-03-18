/*
 * XREFs of ?RemoveProvider@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z @ 0x1C006217C
 * Callers:
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C002B960 (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?Dispose@FxWmiProvider@@UEAAEXZ @ 0x1C0060FA0 (-Dispose@FxWmiProvider@@UEAAEXZ.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?RemoveProviderLocked@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z @ 0x1C00621B8 (-RemoveProviderLocked@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z.c)
 */

void __fastcall FxWmiIrpHandler::RemoveProvider(FxWmiIrpHandler *this, FxWmiProvider *Provider, unsigned __int8 a3)
{
  unsigned __int8 v5; // r8
  unsigned __int8 irql; // [rsp+40h] [rbp+18h] BYREF

  FxNonPagedObject::Lock(this, &irql, a3);
  FxWmiIrpHandler::RemoveProviderLocked(this, Provider);
  FxNonPagedObject::Unlock(this, irql, v5);
}
