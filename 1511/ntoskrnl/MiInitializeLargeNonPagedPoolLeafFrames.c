/*
 * XREFs of MiInitializeLargeNonPagedPoolLeafFrames @ 0x140016F80
 * Callers:
 *     MiExpandNonPagedPool @ 0x1400168DC (MiExpandNonPagedPool.c)
 *     MiInitializeNonPagedPool @ 0x14074D3B8 (MiInitializeNonPagedPool.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiInitializeLargeNonPagedPoolLeafFrames(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  __int16 v3; // di
  _QWORD *v4; // rsi
  unsigned __int64 v5; // r14
  __int64 v6; // r14
  __int64 v7; // rdi
  unsigned __int64 *v8; // rbx
  unsigned __int64 v9; // rax
  __int64 result; // rax
  int v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 CurrentIrql; // [rsp+68h] [rbp+10h]

  v2 = a1;
  v3 = a2;
  v4 = (_QWORD *)(48 * a2 - 0x58000000000LL);
  v5 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((((((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFFFF9LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v6 = v5 & 0xFFFFFFFFFLL;
  v7 = 512 - (v3 & 0x1FFu);
  v8 = v4 + 3;
  do
  {
    v11 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v11);
      while ( (*v8 & 0x8000000000000000uLL) != 0 );
    }
    v9 = *v8 & 0xC000000000000001uLL;
    *(v8 - 2) = v2;
    *v4 = 0LL;
    *v8 = v9 | 1;
    LOBYTE(v9) = *((_BYTE *)v8 + 10) & 0xFE;
    *((_WORD *)v8 + 4) = 1;
    *((_BYTE *)v8 + 10) = v9 | 6;
    v8[2] = v6 | v8[2] & 0xFE3FFFF000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)v8, 0x7FFFFFFFFFFFFFFFuLL);
    v4 += 6;
    v8 += 6;
    v2 += 8LL;
    --v7;
  }
  while ( v7 );
  result = (unsigned __int8)CurrentIrql;
  __writecr8((unsigned __int8)CurrentIrql);
  return result;
}
