/*
 * XREFs of ?AllocateDmaEnablerList@FxPkgPnp@@QEAAJXZ @ 0x1C001CBE8
 * Callers:
 *     ?AllocateDmaEnablerList@FxDevice@@UEAAJXZ @ 0x1C000E860 (-AllocateDmaEnablerList@FxDevice@@UEAAJXZ.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

__int64 __fastcall FxPkgPnp::AllocateDmaEnablerList(FxPkgPnp *this, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // r8
  _QWORD *v5; // rax
  unsigned int v6; // edi
  int (__fastcall *m_Method)(WDFDEVICE__ *); // rcx
  _LIST_ENTRY *Caller; // [rsp+38h] [rbp+0h]
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  if ( this->m_DmaEnablerList )
    return 0LL;
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( this->m_DmaEnablerList )
    goto LABEL_5;
  v5 = FxPoolAllocator(
         this->m_Globals,
         (_LIST_ENTRY *)&this->m_Globals->FxPoolFrameworks,
         ExDefaultNonPagedPoolType,
         0x48uLL,
         this->m_Globals->Tag,
         Caller);
  if ( v5 )
  {
    *((_DWORD *)v5 + 12) = 0;
    v5[5] = 0LL;
    *((_WORD *)v5 + 26) = 0;
    *((_BYTE *)v5 + 54) = 0;
    v5[2] = v5 + 1;
    v5[1] = v5 + 1;
    v5[4] = v5 + 3;
    v5[3] = v5 + 3;
    *v5 = &FxObject::`vftable'.FxTrackDriverForMiniDumpLog;
    v5[8] = 0LL;
    *((_BYTE *)v5 + 56) = 1;
    this->m_DmaEnablerList = (FxSpinLockTransactionedList *)v5;
LABEL_5:
    v6 = 0;
    goto LABEL_6;
  }
  v6 = -1073741670;
LABEL_6:
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (m_Method = this[-1].m_DeviceQueryStop.m_Method) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)m_Method, irql, v4);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  return v6;
}
