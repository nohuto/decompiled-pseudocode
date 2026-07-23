/*
 * XREFs of MiStoreEvictPageFile @ 0x1400AE60C
 * Callers:
 *     MiStoreEvictThread @ 0x14014398C (MiStoreEvictThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlFindNextForwardRunClearCapped @ 0x1400177F0 (RtlFindNextForwardRunClearCapped.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlSetBits @ 0x140027FA0 (RtlSetBits.c)
 *     RtlClearBits @ 0x14002D260 (RtlClearBits.c)
 *     MiRefPageFileSpaceBitmaps @ 0x140117458 (MiRefPageFileSpaceBitmaps.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x1401174C4 (MiDerefPageFileSpaceBitmaps.c)
 *     ?SmKeyConvert@@YAJPEAT_MM_STORE_KEY@@PEAT_SM_PAGE_KEY@@@Z @ 0x14011BE64 (-SmKeyConvert@@YAJPEAT_MM_STORE_KEY@@PEAT_SM_PAGE_KEY@@@Z.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x14011DDCC (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall MiStoreEvictPageFile(__int64 a1)
{
  unsigned int v2; // esi
  unsigned int v3; // eax
  unsigned int NextForwardRunClearCapped; // eax
  __int64 v5; // rdi
  ULONG v6; // r15d
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int i; // r14d
  __int64 v11; // rcx
  void *v12; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v14[24]; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v15[4]; // [rsp+50h] [rbp-10h] BYREF
  union _MM_STORE_KEY v16; // [rsp+90h] [rbp+30h] BYREF
  ULONG StartingIndex; // [rsp+98h] [rbp+38h] BYREF
  int v18; // [rsp+A0h] [rbp+40h] BYREF

  v2 = *(_WORD *)(a1 + 204) & 0xF;
  if ( *(_DWORD *)(a1 + 200) )
  {
    MiRefPageFileSpaceBitmaps(a1, v14);
    v3 = 0;
    do
    {
      NextForwardRunClearCapped = RtlFindNextForwardRunClearCapped((__int64)v15, v3, 0xFFFFFFFF, &StartingIndex);
      v5 = NextForwardRunClearCapped;
      if ( !NextForwardRunClearCapped )
        break;
      v6 = StartingIndex;
      v16.EntireKey = ((unsigned __int64)v2 << 60) | StartingIndex;
      SmKeyConvert(&v16, (union _SM_PAGE_KEY *)&v18);
      *(_DWORD *)&v16.0 = v18;
      v8 = SMKM_STORE_MGR<SM_TRAITS>::SmpPageEvict(v7, &v16, (unsigned int)v5);
      for ( i = v5; ; v8 = SMKM_STORE_MGR<SM_TRAITS>::SmpPageEvict(v9, &v16, i) )
      {
        i -= v8;
        if ( !i )
          break;
        *(_DWORD *)&v16.0 += v8;
      }
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 232), &LockHandle);
      RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(a1 + 112) + 24LL), v6, v5);
      v11 = *(_QWORD *)(a1 + 112);
      *(_DWORD *)(a1 + 200) -= v5;
      RtlClearBits((PRTL_BITMAP)(v11 + 8), v6, v5);
      *(_QWORD *)(a1 + 24) += v5;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( !*(_DWORD *)(a1 + 200) )
        break;
      v3 = v6 + v5;
    }
    while ( v6 + (unsigned int)v5 < v15[0] );
    v12 = (void *)MiDerefPageFileSpaceBitmaps(a1, v14, 0LL);
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
  }
}
