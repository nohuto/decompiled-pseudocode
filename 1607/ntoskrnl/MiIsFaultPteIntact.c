/*
 * XREFs of MiIsFaultPteIntact @ 0x1400257E0
 * Callers:
 *     MiMigratePfn @ 0x140036990 (MiMigratePfn.c)
 *     MiFinishHardFault @ 0x14004D220 (MiFinishHardFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x1400C4044 (MiWaitForCollidedFaultComplete.c)
 *     MiPrivateFixup @ 0x140109170 (MiPrivateFixup.c)
 *     MiIdealClusterPage @ 0x1401F6574 (MiIdealClusterPage.c)
 *     MiMakeImagePageOk @ 0x1401F6D64 (MiMakeImagePageOk.c)
 * Callees:
 *     MiCheckVirtualAddress @ 0x14001E978 (MiCheckVirtualAddress.c)
 *     MiFindActualFaultingPte @ 0x1400259F0 (MiFindActualFaultingPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x1401F2534 (MiIsPrototypePteVadLookup.c)
 */

_BOOL8 __fastcall MiIsFaultPteIntact(unsigned __int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 ActualFaultingPte; // rax
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14[3]; // [rsp+20h] [rbp-18h] BYREF
  int v15; // [rsp+58h] [rbp+20h] BYREF

  ActualFaultingPte = MiFindActualFaultingPte();
  if ( !ActualFaultingPte )
    return 0LL;
  if ( ActualFaultingPte == a2 )
  {
    MI_READ_PTE_LOCK_FREE(ActualFaultingPte);
    v12 = MI_READ_PTE_LOCK_FREE(a3);
    return v13 == v12;
  }
  else
  {
    v8 = MI_READ_PTE_LOCK_FREE(ActualFaultingPte);
    if ( (v8 & 0x400) == 0 )
      return 0LL;
    v10 = (unsigned int)MiIsPrototypePteVadLookup(v8)
        ? MiCheckVirtualAddress(a1, &v15, v14)
        : MiGetPrototypePteDirect(v9);
    if ( v10 != a2 )
      return 0LL;
    return MI_READ_PTE_LOCK_FREE(v10) == *a3;
  }
}
