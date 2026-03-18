/*
 * XREFs of ?GetTargetIoType@FxIoTarget@@IEAAEXZ @ 0x1C002AFB8
 * Callers:
 *     ?SetFilterIoType@FxDevice@@AEAAXXZ @ 0x1C001F684 (-SetFilterIoType@FxDevice@@AEAAXXZ.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C002D058 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall FxIoTarget::GetTargetIoType(FxIoTarget *this)
{
  unsigned int Flags; // ecx

  Flags = this->m_TargetDevice->Flags;
  if ( (Flags & 4) != 0 )
    return 2;
  else
    return (unsigned __int8)(Flags & 0x10 | 8) >> 3;
}
