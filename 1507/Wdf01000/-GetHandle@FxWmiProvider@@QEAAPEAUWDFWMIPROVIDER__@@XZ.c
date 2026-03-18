/*
 * XREFs of ?GetHandle@FxWmiProvider@@QEAAPEAUWDFWMIPROVIDER__@@XZ @ 0x1C0030AF0
 * Callers:
 *     ?WaitForSignal@FxWorkItem@@AEAAXXZ @ 0x1C000768C (-WaitForSignal@FxWorkItem@@AEAAXXZ.c)
 *     ?GetNextDevice@FxChildList@@QEAAJPEAPEAUWDFDEVICE__@@PEAU_WDF_CHILD_LIST_ITERATOR@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z @ 0x1C001DD48 (-GetNextDevice@FxChildList@@QEAAJPEAPEAUWDFDEVICE__@@PEAU_WDF_CHILD_LIST_ITERATOR@@PEAU_WDF_CHIL.c)
 *     ?_QueryAllData@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C006A3B0 (-_QueryAllData@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z.c)
 * Callees:
 *     <none>
 */

WDFWORKITEM__ *__fastcall FxWmiProvider::GetHandle(FxWorkItem *this)
{
  if ( this->m_ObjectSize )
    return (WDFWORKITEM__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    return 0LL;
}
