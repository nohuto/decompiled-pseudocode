/*
 * XREFs of MmSetPageProtection @ 0x1400EBB14
 * Callers:
 *     sub_14014F020 @ 0x14014F020 (sub_14014F020.c)
 *     MmAllocateIsrStack @ 0x14052F6BC (MmAllocateIsrStack.c)
 *     sub_14072EAFC @ 0x14072EAFC (sub_14072EAFC.c)
 * Callees:
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiMakeProtectionMask @ 0x140062870 (MiMakeProtectionMask.c)
 *     MiLockPageAndSetDirty @ 0x1400B820C (MiLockPageAndSetDirty.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

char __fastcall MmSetPageProtection(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int ProtectionMask; // eax
  __int64 v6; // r9
  char v7; // bp
  __int64 *v8; // rsi
  __int64 v9; // r14
  unsigned __int64 ValidKernelPte; // rax
  __int64 v11; // rbx
  int v12; // ebp
  _KPROCESS *v13; // rdx
  char v14; // di
  unsigned __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // [rsp+20h] [rbp-108h] BYREF
  int v20; // [rsp+30h] [rbp-F8h] BYREF
  __int16 v21; // [rsp+34h] [rbp-F4h]
  int v22; // [rsp+38h] [rbp-F0h]
  int v23; // [rsp+3Ch] [rbp-ECh]
  __int64 v24; // [rsp+40h] [rbp-E8h]
  __int64 v25; // [rsp+48h] [rbp-E0h]

  if ( (*(_BYTE *)(8 * ((a1 >> 39) & 0x1FF) - 0x90482413000LL) & 1) != 0
    && (*(_BYTE *)(((a1 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) != 0
    && (*(_BYTE *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) & 0x81) == 0x81 )
  {
    return 0;
  }
  ProtectionMask = MiMakeProtectionMask(a3);
  v7 = ProtectionMask;
  if ( ProtectionMask >= 8 || (ProtectionMask & 5) == 5 || (ProtectionMask & 2) != 0 && (MiFlags & 0x10000) != 0 )
    return 0;
  v8 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = ((a2 & 0xFFF) != 0) + (a2 >> 12);
  ValidKernelPte = MiMakeValidKernelPte(-1LL, ProtectionMask, (unsigned __int64)v8, v6);
  v11 = ValidKernelPte;
  v12 = v7 & 4;
  if ( v12 )
    v11 = ValidKernelPte | 0x42;
  v23 = 0;
  v20 = 0;
  v24 = 0LL;
  v25 = 0LL;
  v21 = 0;
  v22 = 20;
  MiInsertTbFlushEntry((__int64)&v20, a1, v9, 0);
  for ( ; v9; --v9 )
  {
    v19 = MI_READ_PTE_LOCK_FREE(v8);
    v14 = v19;
    v15 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v19) >> 12) & 0xFFFFFFFFFLL;
    v11 ^= (v11 ^ (v15 << 12)) & 0xFFFFFFFFF000LL;
    if ( v12 )
    {
      if ( (v14 & 0x42) != 0 )
        v11 |= 0x42uLL;
    }
    else if ( MI_IS_PFN(v15) )
    {
      MiLockPageAndSetDirty(v17, 0LL, v16);
    }
    if ( (v14 & 0x20) != 0 )
      v11 |= 0x20uLL;
    *v8 = v11;
    if ( (unsigned int)MiPteInShadowRange(v8) )
      MiWritePteShadow(v8, v11);
    ++v8;
  }
  MiFlushTbList((__int64)&v20, v13);
  return 1;
}
