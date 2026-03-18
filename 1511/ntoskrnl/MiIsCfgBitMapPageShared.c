/*
 * XREFs of MiIsCfgBitMapPageShared @ 0x140036650
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x140036380 (MiMarkSharedImageCfgBits.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x14004B0A0 (MiGetProtoPteAddress.c)
 *     MiGetNextPageTable @ 0x14005F080 (MiGetNextPageTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiIsCfgBitMapPageShared(unsigned __int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v5; // rbx
  __int64 ProtoPteAddress; // rdi
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v5 != MiGetNextPageTable(
               (unsigned int)(a1 >> 9) & 0xFFFFFFF8,
               (unsigned int)(a1 >> 9) & 0xFFFFFFF8,
               0,
               a3,
               0,
               (__int64)&v11) )
    return 3LL;
  ProtoPteAddress = MiGetProtoPteAddress(a2, a1 >> 12, 1LL, &v11);
  v8 = MI_READ_PTE_LOCK_FREE(v5);
  v11 = v8;
  if ( !v8 )
    return 2LL;
  if ( (v8 & 1) != 0 )
  {
    v9 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v11) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( (*(_QWORD *)(v9 + 40) & 0x200000000000000LL) == 0 )
      return 0LL;
    return (*(_QWORD *)(v9 + 8) | 0x8000000000000000uLL) == ProtoPteAddress;
  }
  else
  {
    if ( (v8 & 0x400) == 0 )
      return 0LL;
    if ( HIDWORD(v8) == 0xFFFFFFFF )
      return 1LL;
    return v8 >> 16 == ProtoPteAddress;
  }
}
