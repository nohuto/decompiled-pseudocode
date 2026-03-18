/*
 * XREFs of ?RemoveProvider@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z @ 0x1C006A088
 * Callers:
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C0024720 (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?Dispose@FxWmiProvider@@UEAAEXZ @ 0x1C0068D80 (-Dispose@FxWmiProvider@@UEAAEXZ.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?RemoveProviderLocked@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z @ 0x1C006A0E4 (-RemoveProviderLocked@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z.c)
 */

void __fastcall FxWmiIrpHandler::RemoveProvider(FxWmiIrpHandler *this, FxWmiProvider *Provider, unsigned __int8 a3)
{
  signed __int8 m_ObjectFlags; // r8
  FxVerifierLock *v6; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  FxNonPagedObject::Lock(this, &irql, a3);
  FxWmiIrpHandler::RemoveProviderLocked(this, Provider);
  m_ObjectFlags = this->m_ObjectFlags;
  if ( m_ObjectFlags < 0 && (v6 = *(FxVerifierLock **)&this[-1].m_UpdateEvent.m_Event.m_DbgFlagIsInitialized) != 0LL )
    FxVerifierLock::Unlock(v6, irql, m_ObjectFlags);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
}
