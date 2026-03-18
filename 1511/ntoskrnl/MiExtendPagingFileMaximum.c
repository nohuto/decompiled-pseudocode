/*
 * XREFs of MiExtendPagingFileMaximum @ 0x1401DC544
 * Callers:
 *     MiCreatePagingFile @ 0x140537A84 (MiCreatePagingFile.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlSetBits @ 0x140061410 (RtlSetBits.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlSetAllBits @ 0x1400F9D20 (RtlSetAllBits.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x140109C34 (MiDerefPageFileSpaceBitmaps.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401CE7C4 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall MiExtendPagingFileMaximum(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v6; // rsi
  unsigned int v7; // r12d
  _QWORD *v8; // r13
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r14
  unsigned int v11; // r12d
  unsigned __int64 v12; // rbx
  ULONG v13; // edx
  ULONG v14; // eax
  __int128 v15; // xmm1
  _DWORD *v16; // rsi
  unsigned __int64 v17; // rsi
  __int64 v18; // rbx
  unsigned __int8 v19; // r15
  __int64 v20; // rax
  KSPIN_LOCK *SpinLock; // [rsp+20h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-50h] BYREF
  _DWORD *v23[2]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v24; // [rsp+50h] [rbp-28h]
  __int64 v25; // [rsp+60h] [rbp-18h]
  unsigned int v26; // [rsp+C0h] [rbp+48h]
  unsigned __int64 NumberToSet; // [rsp+C8h] [rbp+50h] BYREF
  unsigned __int64 v28; // [rsp+D0h] [rbp+58h]
  _QWORD *v29; // [rsp+D8h] [rbp+60h]

  v28 = a3;
  NumberToSet = a2;
  RtlSetAllBits((PRTL_BITMAP)(a2 + 8));
  RtlSetAllBits((PRTL_BITMAP)(a2 + 24));
  SpinLock = a1 + 29;
  KeAcquireInStackQueuedSpinLock(a1 + 29, &LockHandle);
  v6 = a1[14];
  v7 = *(_DWORD *)(v6 + 8);
  if ( a3 )
  {
    v8 = (_QWORD *)(((a1[27] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v9 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v29 = v8;
    v10 = (((4LL * v7) & 0xFFF) != 0) + ((4 * (unsigned __int64)v7) >> 12);
    v26 = (((4LL * v7) & 0xFFF) != 0) + (unsigned int)((4 * (unsigned __int64)v7) >> 12);
    memmove((void *)v9, v8, 8 * v10);
    memset(v8, 0, 8 * v10);
  }
  else
  {
    v8 = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    v29 = 0LL;
    v26 = 0;
  }
  v11 = 8 * (((v7 & 0x3F) != 0) + (v7 >> 6));
  memmove(*(void **)(NumberToSet + 16), *(const void **)(v6 + 16), v11);
  v12 = NumberToSet;
  memmove(*(void **)(NumberToSet + 32), *(const void **)(v6 + 32), v11);
  v13 = *(_DWORD *)(v6 + 8);
  v14 = 8 * v11 - v13;
  LODWORD(NumberToSet) = v14;
  if ( v14 )
  {
    RtlSetBits((PRTL_BITMAP)(v12 + 8), v13, v14);
    RtlSetBits((PRTL_BITMAP)(v12 + 24), *(_DWORD *)(v6 + 24), NumberToSet);
  }
  a1[1] = *(unsigned int *)(v12 + 8);
  v15 = *(_OWORD *)(v6 + 16);
  v23[1] = *(_DWORD **)(v6 + 8);
  v23[0] = (_DWORD *)v6;
  v25 = *(_QWORD *)(v6 + 32);
  v24 = v15;
  v16 = MiDerefPageFileSpaceBitmaps((__int64)a1, v23, 1);
  a1[14] = v12;
  a1[27] = v28;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  if ( v8 )
  {
    if ( v10 )
    {
      v17 = v10;
      do
      {
        NumberToSet = MI_READ_PTE_LOCK_FREE((__int64 *)v9);
        if ( (NumberToSet & 1) != 0 )
        {
          v18 = 48 * MI_GET_PAGE_FRAME_FROM_PTE((__int64)&NumberToSet) - 0x58000000000LL;
          if ( (*(_QWORD *)(v18 + 8) | 0x8000000000000000uLL) != v9 )
          {
            v19 = MiLockPageInline(v18);
            KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
            NumberToSet = MI_READ_PTE_LOCK_FREE((__int64 *)v9);
            if ( (NumberToSet & 1) != 0
              && v18 == MI_GET_PFN_FROM_PTE((__int64)&NumberToSet)
              && (*(_QWORD *)(v18 + 8) | 0x8000000000000000uLL) != v9 )
            {
              NumberToSet = MI_READ_PTE_LOCK_FREE((__int64 *)(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL));
              v20 = (*(_QWORD *)(v18 + 40) ^ (NumberToSet >> 12)) & 0xFFFFFFFFFLL;
              *(_QWORD *)(v18 + 8) = v9;
              *(_QWORD *)(v18 + 40) ^= v20;
            }
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v19);
          }
        }
        v9 += 8LL;
        --v17;
      }
      while ( v17 );
      LODWORD(v10) = v26;
      v8 = v29;
    }
    MiReleasePtes((__int64)&qword_1402FF7B0, v8, v10);
  }
}
