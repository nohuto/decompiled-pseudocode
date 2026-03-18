/*
 * XREFs of MiStoreEvictPageFile @ 0x140127CA4
 * Callers:
 *     MiStoreEvictThread @ 0x140170980 (MiStoreEvictThread.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlClearBits @ 0x140062740 (RtlClearBits.c)
 *     RtlFindNextForwardRunClearCapped @ 0x140063A80 (RtlFindNextForwardRunClearCapped.c)
 *     RtlSetBits @ 0x14008B810 (RtlSetBits.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x140127E08 (MiDerefPageFileSpaceBitmaps.c)
 *     MiRefPageFileSpaceBitmaps @ 0x140127E6C (MiRefPageFileSpaceBitmaps.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x14013CC18 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall MiStoreEvictPageFile(__int64 a1)
{
  unsigned int v2; // r15d
  int v3; // ebx
  unsigned int v4; // eax
  unsigned int NextForwardRunClearCapped; // eax
  __int64 v6; // rsi
  ULONG v7; // r12d
  unsigned __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int i; // r14d
  __int64 v12; // rcx
  void *v13; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v15[24]; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v16[4]; // [rsp+50h] [rbp-10h] BYREF
  int v17; // [rsp+90h] [rbp+30h] BYREF
  ULONG StartingIndex; // [rsp+98h] [rbp+38h] BYREF

  v2 = *(_WORD *)(a1 + 164) & 0xF;
  if ( *(_DWORD *)(a1 + 160) )
  {
    MiRefPageFileSpaceBitmaps(a1, v15);
    v3 = v17;
    v4 = 0;
    do
    {
      NextForwardRunClearCapped = RtlFindNextForwardRunClearCapped((__int64)v16, v4, 0xFFFFFFFF, &StartingIndex);
      v6 = NextForwardRunClearCapped;
      if ( !NextForwardRunClearCapped )
        break;
      v7 = StartingIndex;
      v8 = ((unsigned __int64)v2 << 60) | StartingIndex;
      if ( v8 >> 60 != 15 && StartingIndex <= 0xFFFFFFFuLL )
        v3 = (v8 >> 60 << 28) | v8 & 0xFFFFFFF;
      v17 = v3;
      v9 = SMKM_STORE_MGR<SM_TRAITS>::SmpPageEvict(v8, &v17, NextForwardRunClearCapped);
      for ( i = v6; ; v9 = SMKM_STORE_MGR<SM_TRAITS>::SmpPageEvict(v10, &v17, i) )
      {
        i -= v9;
        if ( !i )
          break;
        v17 += v9;
      }
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 192), &LockHandle);
      RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(a1 + 128) + 24LL), v7, v6);
      v12 = *(_QWORD *)(a1 + 128);
      *(_DWORD *)(a1 + 160) -= v6;
      RtlClearBits((PRTL_BITMAP)(v12 + 8), v7, v6);
      *(_QWORD *)(a1 + 24) += v6;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( !*(_DWORD *)(a1 + 160) )
        break;
      v4 = v7 + v6;
    }
    while ( v7 + (unsigned int)v6 < v16[0] );
    v13 = (void *)MiDerefPageFileSpaceBitmaps(a1, v15, 0LL);
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
  }
}
