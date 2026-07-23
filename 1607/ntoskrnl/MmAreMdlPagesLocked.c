/*
 * XREFs of MmAreMdlPagesLocked @ 0x1407019C0
 * Callers:
 *     VERIFY_BUFFER_LOCKED @ 0x140705F2C (VERIFY_BUFFER_LOCKED.c)
 * Callees:
 *     MiIsPfn @ 0x14000F720 (MiIsPfn.c)
 *     MiGetPdeAddress @ 0x1400847A4 (MiGetPdeAddress.c)
 *     MiLockPage @ 0x140159948 (MiLockPage.c)
 *     MiUnlockPage @ 0x1401F29AC (MiUnlockPage.c)
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
  while ( !MiIsPfn(*v2) )
  {
LABEL_23:
    ++v2;
    if ( !--v3 )
      return 1LL;
  }
  v6 = 48 * v5 - 0x58000000000LL;
  if ( dword_1403270A0 == 2 )
  {
    v8 = 17;
  }
  else
  {
    v7 = MiLockPage(48 * v5 - 0x58000000000LL);
    v4 = qword_140326C70;
    v8 = v7;
  }
  v9 = *(unsigned __int16 *)(v6 + 32);
  if ( v9 > (*(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFuLL)
    || (*(_QWORD *)(v6 + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL
    || ((*(_QWORD *)(v6 + 40) >> 54) & 7) == 1
    || (unsigned __int16)v9 > 1u
    || !*(_QWORD *)v6
    || (v10 = (__int64)(*(_QWORD *)(v6 + 8) << 25) >> 16, (*(_BYTE *)(v6 + 34) & 7) == 6)
    && v10 >= qword_140327F60[0]
    && v10 < qword_140327F60[0] + 0x100000000000LL
    || v10
    && v4
    && v10 >= v4
    && v10 < v4 + (qword_140326C50 << 21)
    && (*(_BYTE *)(48 * ((*(_QWORD *)MiGetPdeAddress(v10) >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFDALL) & 0xF0) == 0xD0 )
  {
    if ( v8 != 17 )
      MiUnlockPage(v6, v8);
    goto LABEL_23;
  }
  if ( v8 != 17 )
    MiUnlockPage(v6, v8);
  return 0LL;
}
