/*
 * XREFs of MmSetPageProtection @ 0x14013821C
 * Callers:
 *     sub_14017D1E4 @ 0x14017D1E4 (sub_14017D1E4.c)
 *     MmAllocateIsrStack @ 0x14059A694 (MmAllocateIsrStack.c)
 *     sub_14079BAE4 @ 0x14079BAE4 (sub_14079BAE4.c)
 * Callees:
 *     MiLockPageAndSetDirty @ 0x14003C7B8 (MiLockPageAndSetDirty.c)
 *     MiMakeProtectionMask @ 0x14008E520 (MiMakeProtectionMask.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

// local variable allocation has failed, the output may be wrong!
char __fastcall MmSetPageProtection(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int ProtectionMask; // eax
  unsigned __int64 v5; // r10
  char v6; // r14
  __int64 *v7; // rsi
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // r10
  unsigned __int64 v11; // rbx
  int v12; // r14d
  unsigned __int64 v13; // r15
  __int64 PteShadow; // rdi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v19; // [rsp+20h] [rbp-B9h] BYREF
  int v20; // [rsp+30h] [rbp-A9h] BYREF
  __int16 v21; // [rsp+34h] [rbp-A5h]
  __int64 v22; // [rsp+38h] [rbp-A1h]
  __int64 v23; // [rsp+40h] [rbp-99h]
  __int64 v24; // [rsp+48h] [rbp-91h]

  if ( (*(_BYTE *)(8 * ((a1 >> 39) & 0x1FF) - 0x90482413000LL) & 1) != 0
    && (*(_BYTE *)(((a1 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) != 0
    && (*(_BYTE *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) & 0x81) == 0x81 )
  {
    return 0;
  }
  ProtectionMask = MiMakeProtectionMask(a3);
  v6 = ProtectionMask;
  if ( ProtectionMask >= 8 || (ProtectionMask & 5) == 5 || (ProtectionMask & 2) != 0 && (MiFlags & 0x30000) != 0 )
    return 0;
  v7 = (__int64 *)(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v8 = ((a2 & 0xFFF) != 0) + (a2 >> 12);
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL((unsigned __int64)v7) )
    v9 |= 0x100uLL;
  v11 = v9 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8);
  v12 = v6 & 4;
  if ( v12 )
    v11 |= 0x42uLL;
  v22 = 20LL;
  v20 = 0;
  v21 = 0;
  v23 = 0LL;
  v24 = 0LL;
  MiInsertTbFlushEntry((__int64)&v20, v10, v8, 0);
  if ( v8 )
  {
    v13 = (unsigned __int64)(v7 + 0x12090482600LL);
    do
    {
      PteShadow = *v7;
      if ( v13 <= 0x7F8 )
        PteShadow = MiReadPteShadow(v7, *v7);
      v19 = PteShadow;
      v15 = PteShadow;
      if ( (unsigned __int64)&STACK[0x90482413020] <= 0x7F8 )
        v15 = MiReadPteShadow(&v19, PteShadow);
      v16 = (v15 >> 12) & 0xFFFFFFFFFLL;
      v11 ^= (v11 ^ (v16 << 12)) & 0xFFFFFFFFF000LL;
      if ( v12 )
      {
        if ( (PteShadow & 0x42) != 0 )
          v11 |= 0x42uLL;
      }
      else if ( MI_IS_PFN(v16) )
      {
        MiLockPageAndSetDirty(v17, 0);
      }
      if ( (PteShadow & 0x20) != 0 )
        v11 |= 0x20uLL;
      *v7 = v11;
      if ( v13 <= 0x7F8 )
        MiWritePteShadow(v7, v11);
      ++v7;
      v13 += 8LL;
      --v8;
    }
    while ( v8 );
  }
  MiFlushTbList((__int64)&v20);
  return 1;
}
