/*
 * XREFs of MiIsFaultPteIntact @ 0x14001D2B8
 * Callers:
 *     MiWaitForCollidedFaultComplete @ 0x14001F86C (MiWaitForCollidedFaultComplete.c)
 *     MiFinishHardFault @ 0x1400663D0 (MiFinishHardFault.c)
 *     MiMigratePfn @ 0x140073740 (MiMigratePfn.c)
 *     MiPrivateFixup @ 0x1400FEA08 (MiPrivateFixup.c)
 *     MiMakeImagePageOk @ 0x1401D52A4 (MiMakeImagePageOk.c)
 * Callees:
 *     MiFindActualFaultingPte @ 0x14001D360 (MiFindActualFaultingPte.c)
 *     MiCheckVirtualAddress @ 0x14001D4E0 (MiCheckVirtualAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiIsFaultPteIntact(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 ActualFaultingPte; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  bool v9; // zf
  __int64 v11; // rbx
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF
  char v13; // [rsp+58h] [rbp+20h] BYREF

  ActualFaultingPte = MiFindActualFaultingPte();
  if ( ActualFaultingPte )
  {
    if ( ActualFaultingPte == a2 )
    {
      v11 = MI_READ_PTE_LOCK_FREE(ActualFaultingPte);
      v9 = v11 == MI_READ_PTE_LOCK_FREE(a3);
    }
    else
    {
      v7 = MI_READ_PTE_LOCK_FREE(ActualFaultingPte);
      if ( (v7 & 0x400) == 0 )
        return 0LL;
      v8 = HIDWORD(v7) == 0xFFFFFFFF ? MiCheckVirtualAddress(a1, &v13, v12) : v7 >> 16;
      if ( v8 != a2 )
        return 0LL;
      v9 = MI_READ_PTE_LOCK_FREE(v8) == *a3;
    }
    if ( v9 )
      return 1LL;
  }
  return 0LL;
}
