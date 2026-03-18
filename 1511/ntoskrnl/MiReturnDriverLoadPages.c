/*
 * XREFs of MiReturnDriverLoadPages @ 0x140784C40
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x14074AF5C (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140005934 (MiLockAndDecrementShareCount.c)
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

void __fastcall MiReturnDriverLoadPages(__int64 *a1, unsigned __int64 a2)
{
  __int64 *v2; // rsi
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // r8
  KIRQL i; // r12
  unsigned __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rdi
  _KPROCESS *v11; // rdx
  __int64 v12; // [rsp+20h] [rbp-F8h] BYREF
  int v13; // [rsp+30h] [rbp-E8h] BYREF
  __int16 v14; // [rsp+34h] [rbp-E4h]
  int v15; // [rsp+38h] [rbp-E0h]
  int v16; // [rsp+3Ch] [rbp-DCh]
  __int64 v17; // [rsp+40h] [rbp-D8h]
  __int64 v18; // [rsp+48h] [rbp-D0h]

  v16 = 0;
  v13 = 0;
  v2 = a1;
  v17 = 0LL;
  v18 = 0LL;
  v4 = (__int64)((_QWORD)a1 << 25) >> 16;
  v14 = 0;
  v15 = 20;
  for ( i = ExAcquireSpinLockExclusive(&dword_1402FFA80); (unsigned __int64)v2 <= a2; v4 += 4096LL )
  {
    v12 = MI_READ_PTE_LOCK_FREE(v2);
    if ( (v12 & 1) != 0 )
    {
      v8 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v12);
      *v2 = 0LL;
      v9 = 48 * v8 - 0x58000000000LL;
      if ( MiPteInShadowRange((__int64)v2) )
        MiWritePteShadow((__int64)v2, 0LL);
      v10 = 48 * (*(_QWORD *)(v9 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      MiLockAndDecrementShareCount(v9, 1);
      MiLockAndDecrementShareCount(v10, 0);
      MiInsertTbFlushEntry((__int64)&v13, v4, 1LL, 0);
    }
    ++v2;
  }
  LOBYTE(v5) = i;
  MiUnlockWorkingSetExclusive((__int64)&dword_1402FFA80, v5, v6);
  MiFlushTbList((__int64)&v13, v11);
}
