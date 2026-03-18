/*
 * XREFs of MmRemoveSystemCacheFromDump @ 0x1401D6658
 * Callers:
 *     MmGetDumpRange @ 0x1401D6330 (MmGetDumpRange.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x1403AF608 (IopLiveDumpPopulateBitmapForDump.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MmRemoveSystemCacheFromDump(__int64 a1)
{
  ULONG_PTR v2; // rsi
  KIRQL v3; // di
  unsigned __int64 v4; // rbp
  unsigned __int64 i; // rbx
  __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v2 = BugCheckParameter2;
  if ( (KiBugCheckActive & 3) != 0 || (struct _KTHREAD *)qword_1402FEC88 == KeGetCurrentThread() )
    v3 = 17;
  else
    v3 = ExAcquireSpinLockShared(&dword_1402FF880);
  v4 = *(_QWORD *)(v2 + 16);
  for ( i = 1LL; i <= v4; ++i )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(v2 + 496) + i * *(unsigned int *)(v2 + 64));
    if ( (v6 & 1) != 0 )
    {
      v7 = (v6 & 0x800000000000LL) != 0 ? v6 | 0xFFFF000000000000uLL : v6 & 0xFFFFFFFFFFFFLL;
      v9 = MI_READ_PTE_LOCK_FREE((__int64 *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL));
      if ( (v9 & 1) != 0 )
      {
        v8 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v9) >> 12) & 0xFFFFFFFFFLL;
        if ( (*(_QWORD *)(48 * v8 - 0x57FFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
          (*(void (__fastcall **)(__int64, unsigned __int64, __int64, __int64))(a1 + 8))(a1, v8, 1LL, 2LL);
      }
    }
  }
  if ( v3 != 17 )
    ExReleaseSpinLockShared(&dword_1402FF880, v3);
}
