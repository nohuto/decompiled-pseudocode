/*
 * XREFs of MiMapLockedPagesInUserSpace @ 0x14055EF68
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x1400ABA30 (MmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     MiCheckForConflictingVadExistence @ 0x140010018 (MiCheckForConflictingVadExistence.c)
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     MiUnlockVad @ 0x1400894F0 (MiUnlockVad.c)
 *     MiLockVad @ 0x140089660 (MiLockVad.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140089E40 (UNLOCK_ADDRESS_SPACE.c)
 *     LOCK_ADDRESS_SPACE @ 0x14008A330 (LOCK_ADDRESS_SPACE.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiDereferenceIoPages @ 0x140116398 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140116704 (MiReferenceIoPages.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1401356DC (MiMapLockedPagesInUserSpaceHelper.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiAdvanceVadHint @ 0x1404B5C80 (MiAdvanceVadHint.c)
 *     MiFindEmptyAddressRange @ 0x1404B61A0 (MiFindEmptyAddressRange.c)
 *     MiInsertVadCharges @ 0x1404B8410 (MiInsertVadCharges.c)
 */

unsigned __int64 MiMapLockedPagesInUserSpace(__int64 a1, __int16 a2, int a3, ...)
{
  unsigned __int64 *v3; // r14
  unsigned __int64 *v5; // rbx
  unsigned __int64 v6; // r12
  PVOID PoolWithTag; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // rbp
  __int64 v10; // r9
  int v11; // eax
  unsigned int v12; // r13d
  __int64 v13; // rcx
  struct _KTHREAD *CurrentThread; // r8
  unsigned __int64 v15; // rdi
  int v16; // eax
  __int64 Process; // r15
  NTSTATUS EmptyAddressRange; // ebx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // r9
  ULONG_PTR v23; // r10
  unsigned __int64 *v24; // r11
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rdi
  ULONG_PTR v30; // r9
  int v31; // [rsp+40h] [rbp-78h]
  unsigned __int64 i; // [rsp+48h] [rbp-70h]
  unsigned __int64 *v33; // [rsp+50h] [rbp-68h]
  __int64 v34; // [rsp+58h] [rbp-60h]
  unsigned __int64 v35; // [rsp+60h] [rbp-58h]
  int v37; // [rsp+C8h] [rbp+10h] BYREF
  int v38; // [rsp+D0h] [rbp+18h]
  unsigned __int64 v39; // [rsp+D8h] [rbp+20h] BYREF
  va_list va; // [rsp+D8h] [rbp+20h]
  __int64 v41; // [rsp+E0h] [rbp+28h]
  va_list va1; // [rsp+E8h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v39 = va_arg(va1, _QWORD);
  v41 = va_arg(va1, _QWORD);
  v38 = a3;
  v3 = (unsigned __int64 *)(a1 + 48);
  v5 = (unsigned __int64 *)(a1 + 48);
  v6 = ((a2 & 0xFFF) + 4095LL + (unsigned __int64)*(unsigned int *)(a1 + 40)) >> 12;
  v33 = (unsigned __int64 *)(a1 + 48);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x6C646156u);
  v8 = 0LL;
  v9 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    RtlRaiseStatus(-1073741670);
  memset(PoolWithTag, 0, 0x88uLL);
  v11 = v41 & 0x80000000;
  *(_QWORD *)(v9 + 16) = -2LL;
  *(_QWORD *)(v9 + 40) = 0LL;
  v35 = 0LL;
  v12 = v11 != 0 ? 0xFFFFFFFD : 0;
  *(_DWORD *)(v9 + 48) = *(_DWORD *)(v9 + 48) & 0xFFFFFF01 | (8 * ((v11 != 0 ? 1 : 4) & 0x1F)) | 0x8001;
  v13 = (unsigned int)(a3 + 6);
  CurrentThread = KeGetCurrentThread();
  v15 = v39;
  v16 = MiPlatformCacheAttributes[v13];
  v34 = (__int64)CurrentThread;
  Process = (__int64)CurrentThread->ApcState.Process;
  v37 = 0;
  v31 = v16;
  if ( v39 )
  {
    if ( (v39 & 0xFFF) != 0
      || v39 < 0x10000 && !*(_QWORD *)(Process + 1784)
      || (v8 = (v6 << 12) + v39 - 1, v8 <= v39)
      || (char *)v8 > (char *)MmHighestUserAddress - 0x10000 )
    {
      EmptyAddressRange = -1073741503;
      goto LABEL_35;
    }
  }
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process, (__int64)CurrentThread, v10);
  if ( (*(_DWORD *)(Process + 772) & 0x20) != 0 )
  {
    EmptyAddressRange = -1073741558;
    goto LABEL_24;
  }
  if ( !v15 )
  {
    EmptyAddressRange = MiFindEmptyAddressRange(
                          v6 << 12,
                          0x10000LL,
                          (char *)MmHighestUserAddress - 0x10000,
                          (unsigned __int8)v12 + 4,
                          (unsigned __int64 *)va,
                          &v37);
    if ( EmptyAddressRange >= 0 )
    {
      v15 = v39;
      v8 = v39 + (v6 << 12) - 1;
      v5 = v3;
      goto LABEL_7;
    }
LABEL_24:
    UNLOCK_ADDRESS_SPACE(v34, Process);
    if ( v35 )
    {
      v28 = 1LL;
      v29 = (v35 - (unsigned __int64)v3 + 8) >> 3;
      if ( (unsigned __int64)v3 > v35 )
        v29 = 0LL;
      while ( v28 <= v29 )
      {
        if ( !MI_IS_PFN(*v3) )
          MiDereferenceIoPages(1, v30, 1uLL);
        ++v3;
        ++v28;
      }
    }
LABEL_35:
    ExFreePoolWithTag((PVOID)v9, 0);
    RtlRaiseStatus(EmptyAddressRange);
  }
  if ( MiCheckForConflictingVadExistence() )
  {
    EmptyAddressRange = -1073741800;
    goto LABEL_24;
  }
LABEL_7:
  v20 = v8 >> 12;
  v21 = 0LL;
  *(_DWORD *)(v9 + 24) = v15 >> 12;
  *(_BYTE *)(v9 + 32) = v15 >> 44;
  *(_DWORD *)(v9 + 28) = v20;
  *(_BYTE *)(v9 + 33) = BYTE4(v20);
  for ( i = 0LL; v21 < v6; v33 = v5 )
  {
    if ( !MI_IS_PFN(*v5) )
    {
      EmptyAddressRange = MiReferenceIoPages(1, v23, 1LL, v31, v24, v24);
      if ( EmptyAddressRange < 0 )
        goto LABEL_24;
      v5 = v33;
      v22 = i;
      v35 = (unsigned __int64)v33;
    }
    v21 = v22 + 1;
    ++v5;
    i = v21;
  }
  EmptyAddressRange = MiInsertVadCharges(v9, (struct _KPROCESS *)Process, v19, v21);
  if ( EmptyAddressRange < 0 )
    goto LABEL_24;
  MiLockVad(v34, v9, v25, v26);
  MiMapLockedPagesInUserSpaceHelper(v15, v3, 0LL, v38, v6, v9, v41);
  MiUnlockVad(v34, v9);
  if ( v37 == 1 )
    MiAdvanceVadHint(v15 >> 12, v20);
  UNLOCK_ADDRESS_SPACE(v34, Process);
  return v15 + *(unsigned int *)(a1 + 44);
}
