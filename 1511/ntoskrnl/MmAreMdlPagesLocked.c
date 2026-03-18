/*
 * XREFs of MmAreMdlPagesLocked @ 0x1406B5B58
 * Callers:
 *     VERIFY_BUFFER_LOCKED @ 0x1406B9E88 (VERIFY_BUFFER_LOCKED.c)
 * Callees:
 *     MiGetPdeAddress @ 0x14001A3B4 (MiGetPdeAddress.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiLockPage @ 0x1401DFF7C (MiLockPage.c)
 *     MiUnlockPage @ 0x1401DFF84 (MiUnlockPage.c)
 */

__int64 __fastcall MmAreMdlPagesLocked(__int64 a1)
{
  unsigned __int64 *v2; // r14
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // r9
  __int64 v5; // r10
  __int64 v6; // rbx
  unsigned __int8 v7; // al
  unsigned __int8 v8; // r8
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx

  if ( (*(_WORD *)(a1 + 10) & 0x804) != 0 )
    return 1LL;
  v2 = (unsigned __int64 *)(a1 + 48);
  v3 = (((*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF) + (unsigned __int64)*(unsigned int *)(a1 + 40) + 4095) >> 12;
  while ( !MI_IS_PFN(*v2) )
  {
LABEL_22:
    ++v2;
    if ( !--v3 )
      return 1LL;
  }
  v6 = 48 * v5 - 0x58000000000LL;
  if ( dword_1402FEC90 == 2 )
  {
    v8 = 17;
  }
  else
  {
    v7 = MiLockPage(48 * v5 - 0x58000000000LL);
    v4 = qword_1402FE8F0;
    v8 = v7;
  }
  v9 = *(unsigned __int16 *)(v6 + 32);
  if ( v9 > (*(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFuLL)
    || (*(_QWORD *)(v6 + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL
    || ((*(_QWORD *)(v6 + 40) >> 54) & 7) == 1
    || (unsigned __int16)v9 > 1u
    || !*(_QWORD *)v6
    || (v10 = (__int64)(*(_QWORD *)(v6 + 8) << 25) >> 16, (*(_BYTE *)(v6 + 34) & 7) == 6)
    && v10 + 0x200000000000LL <= 0xFFFFFFFFFFFLL
    || v10
    && v4
    && v10 >= v4
    && v10 < v4 + (qword_1402FE8D0 << 21)
    && (*(_BYTE *)(48 * ((*(_QWORD *)MiGetPdeAddress(v10) >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFDALL) & 0xF0) == 0xD0 )
  {
    if ( v8 != 17 )
      MiUnlockPage(v6, v8);
    goto LABEL_22;
  }
  if ( v8 != 17 )
    MiUnlockPage(v6, v8);
  return 0LL;
}
