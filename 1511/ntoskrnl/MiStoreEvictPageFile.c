/*
 * XREFs of MiStoreEvictPageFile @ 0x1400ECEEC
 * Callers:
 *     MiStoreEvictThread @ 0x140142B00 (MiStoreEvictThread.c)
 * Callees:
 *     RtlClearBits @ 0x14003B430 (RtlClearBits.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlSetBits @ 0x140061410 (RtlSetBits.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlFindNextForwardRunClearCapped @ 0x1400B3380 (RtlFindNextForwardRunClearCapped.c)
 *     MiRefPageFileSpaceBitmaps @ 0x140109BC8 (MiRefPageFileSpaceBitmaps.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x140109C34 (MiDerefPageFileSpaceBitmaps.c)
 *     ?SmKeyConvert@@YAJPEAT_MM_STORE_KEY@@PEAT_SM_PAGE_KEY@@@Z @ 0x14010E9D0 (-SmKeyConvert@@YAJPEAT_MM_STORE_KEY@@PEAT_SM_PAGE_KEY@@@Z.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x14010FF18 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall MiStoreEvictPageFile(__int64 a1)
{
  unsigned int v2; // esi
  unsigned int v3; // eax
  unsigned int NextForwardRunClearCapped; // eax
  __int64 v5; // rdi
  ULONG v6; // r15d
  int v7; // eax
  __int64 v8; // rcx
  unsigned int i; // r14d
  __int64 v10; // rcx
  void *v11; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v13[24]; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v14[4]; // [rsp+50h] [rbp-10h] BYREF
  union _MM_STORE_KEY v15; // [rsp+90h] [rbp+30h] BYREF
  ULONG StartingIndex; // [rsp+98h] [rbp+38h] BYREF
  unsigned int v17; // [rsp+A0h] [rbp+40h] BYREF

  v2 = *(_WORD *)(a1 + 204) & 0xF;
  if ( *(_DWORD *)(a1 + 200) )
  {
    MiRefPageFileSpaceBitmaps(a1, v13);
    v3 = 0;
    do
    {
      NextForwardRunClearCapped = RtlFindNextForwardRunClearCapped((__int64)v14, v3, 0xFFFFFFFF, &StartingIndex);
      v5 = NextForwardRunClearCapped;
      if ( !NextForwardRunClearCapped )
        break;
      v6 = StartingIndex;
      v15.EntireKey = ((unsigned __int64)v2 << 60) | StartingIndex;
      SmKeyConvert(&v15, (union _SM_PAGE_KEY *)&v17);
      *(_DWORD *)&v15.0 = v17;
      v7 = SMKM_STORE_MGR<SM_TRAITS>::SmpPageEvict(v17, &v15, (unsigned int)v5);
      for ( i = v5; ; v7 = SMKM_STORE_MGR<SM_TRAITS>::SmpPageEvict(v8, &v15, i) )
      {
        i -= v7;
        if ( !i )
          break;
        *(_DWORD *)&v15.0 += v7;
      }
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 232), &LockHandle);
      RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(a1 + 112) + 24LL), v6, v5);
      v10 = *(_QWORD *)(a1 + 112);
      *(_DWORD *)(a1 + 200) -= v5;
      RtlClearBits((PRTL_BITMAP)(v10 + 8), v6, v5);
      *(_QWORD *)(a1 + 24) += v5;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( !*(_DWORD *)(a1 + 200) )
        break;
      v3 = v6 + v5;
    }
    while ( v6 + (unsigned int)v5 < v14[0] );
    v11 = (void *)MiDerefPageFileSpaceBitmaps(a1, v13, 0LL);
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
  }
}
