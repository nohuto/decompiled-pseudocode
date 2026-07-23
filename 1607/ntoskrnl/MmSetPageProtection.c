/*
 * XREFs of MmSetPageProtection @ 0x1400B0300
 * Callers:
 *     sub_1401587A0 @ 0x1401587A0 (sub_1401587A0.c)
 *     MmAllocateIsrStack @ 0x14054E5A4 (MmAllocateIsrStack.c)
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 * Callees:
 *     MiLockPageAndSetDirty @ 0x1400150F8 (MiLockPageAndSetDirty.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140025B30 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiMakeProtectionMask @ 0x14002B880 (MiMakeProtectionMask.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

char __fastcall MmSetPageProtection(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned int v4; // r10d
  unsigned int ProtectionMask; // eax
  char v6; // bp
  __int64 *v7; // rsi
  unsigned __int64 v8; // r14
  unsigned __int64 ValidKernelPte; // rax
  __int64 v10; // rbx
  int v11; // ebp
  char v12; // di
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v18; // [rsp+20h] [rbp-108h] BYREF
  int v19; // [rsp+30h] [rbp-F8h] BYREF
  __int16 v20; // [rsp+34h] [rbp-F4h]
  int v21; // [rsp+38h] [rbp-F0h]
  int v22; // [rsp+3Ch] [rbp-ECh]
  __int64 v23; // [rsp+40h] [rbp-E8h]
  __int64 v24; // [rsp+48h] [rbp-E0h]

  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(a1) )
    return 0;
  ProtectionMask = MiMakeProtectionMask(v4);
  v6 = ProtectionMask;
  if ( ProtectionMask >= 8 || (ProtectionMask & 5) == 5 || (ProtectionMask & 2) != 0 && (MiFlags & 0x4000) != 0 )
    return 0;
  v7 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v8 = ((a2 & 0xFFF) != 0) + (a2 >> 12);
  ValidKernelPte = MiMakeValidKernelPte(-1LL, ProtectionMask, (unsigned __int64)v7);
  v10 = ValidKernelPte;
  v11 = v6 & 4;
  if ( v11 )
    v10 = ValidKernelPte | 0x42;
  v22 = 0;
  v19 = 0;
  v20 = 0;
  v23 = 0LL;
  v24 = 0LL;
  v21 = 20;
  MiInsertTbFlushEntry(&v19, a1, v8);
  for ( ; v8; --v8 )
  {
    v18 = MI_READ_PTE_LOCK_FREE(v7);
    v12 = v18;
    v13 = MI_READ_PTE_LOCK_FREE(&v18);
    v14 = 0xFFFFFFFFF000LL;
    v10 ^= (v10 ^ (((v13 >> 12) & 0xFFFFFFFFFLL) << 12)) & 0xFFFFFFFFF000LL;
    if ( v11 )
    {
      if ( (v12 & 0x42) != 0 )
        v10 |= 0x42uLL;
    }
    else if ( MiIsPfnInline((v13 >> 12) & 0xFFFFFFFFFLL) )
    {
      MiLockPageAndSetDirty(v15, 0);
    }
    if ( (v12 & 0x20) != 0 )
      v10 |= 0x20uLL;
    *v7 = v10;
    if ( (unsigned int)MiPteInShadowRange(v7, v14) )
      MiWritePteShadow(v16, v10);
    ++v7;
  }
  MiFlushTbList(&v19);
  return 1;
}
