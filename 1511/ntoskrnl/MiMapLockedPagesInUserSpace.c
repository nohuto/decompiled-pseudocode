/*
 * XREFs of MiMapLockedPagesInUserSpace @ 0x1404E65E0
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x14004B6B0 (MmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14002E2D0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiCheckForConflictingVadExistence @ 0x140037FF8 (MiCheckForConflictingVadExistence.c)
 *     MiUnlockVad @ 0x140038910 (MiUnlockVad.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400622C0 (LOCK_ADDRESS_SPACE.c)
 *     MiLockVad @ 0x140063AC0 (MiLockVad.c)
 *     MiDereferenceIoPages @ 0x1400C1300 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x1400C16A0 (MiReferenceIoPages.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140103E00 (MiMapLockedPagesInUserSpaceHelper.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiInsertVadCharges @ 0x140415EF0 (MiInsertVadCharges.c)
 *     MiFindEmptyAddressRange @ 0x14047A1A0 (MiFindEmptyAddressRange.c)
 *     MiAdvanceVadHint @ 0x14049D2A0 (MiAdvanceVadHint.c)
 */

unsigned __int64 MiMapLockedPagesInUserSpace(__int64 a1, __int16 a2, int a3, ...)
{
  unsigned __int64 *v3; // r14
  unsigned __int64 *v5; // rbx
  unsigned __int64 v6; // r12
  PVOID PoolWithTag; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbp
  int v10; // eax
  unsigned int v11; // r13d
  __int64 v12; // rcx
  struct _KTHREAD *CurrentThread; // r8
  unsigned __int64 v14; // rdi
  int v15; // eax
  __int64 Process; // r15
  int EmptyAddressRange; // eax
  __int64 v18; // r11
  NTSTATUS inserted; // ebx
  unsigned __int64 v20; // rsi
  __int64 v21; // r9
  ULONG_PTR v22; // r10
  unsigned __int64 *v23; // r11
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rdi
  ULONG_PTR v27; // r9
  int v28; // [rsp+40h] [rbp-78h]
  __int64 v29; // [rsp+48h] [rbp-70h]
  unsigned __int64 *v30; // [rsp+50h] [rbp-68h]
  __int64 v31; // [rsp+58h] [rbp-60h]
  unsigned __int64 v32; // [rsp+60h] [rbp-58h]
  int v34; // [rsp+C8h] [rbp+10h] BYREF
  int v35; // [rsp+D0h] [rbp+18h]
  unsigned __int64 v36; // [rsp+D8h] [rbp+20h] BYREF
  va_list va; // [rsp+D8h] [rbp+20h]
  __int64 v38; // [rsp+E0h] [rbp+28h]
  va_list va1; // [rsp+E8h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v36 = va_arg(va1, _QWORD);
  v38 = va_arg(va1, _QWORD);
  v35 = a3;
  v3 = (unsigned __int64 *)(a1 + 48);
  v5 = (unsigned __int64 *)(a1 + 48);
  v6 = ((a2 & 0xFFF) + 4095LL + (unsigned __int64)*(unsigned int *)(a1 + 40)) >> 12;
  v30 = (unsigned __int64 *)(a1 + 48);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x6C646156u);
  v8 = 0LL;
  v9 = (unsigned __int64)PoolWithTag;
  if ( !PoolWithTag )
    RtlRaiseStatus(-1073741670);
  memset(PoolWithTag, 0, 0x88uLL);
  v10 = v38 & 0x80000000;
  *(_QWORD *)(v9 + 16) = -2LL;
  *(_QWORD *)(v9 + 40) = 0LL;
  v32 = 0LL;
  v11 = v10 != 0 ? 0xFFFFFFFD : 0;
  *(_DWORD *)(v9 + 48) = *(_DWORD *)(v9 + 48) & 0xFFFFFF01 | (8 * ((v10 != 0 ? 1 : 4) & 0x1F)) | 0x8001;
  v12 = (unsigned int)(a3 + 6);
  CurrentThread = KeGetCurrentThread();
  v14 = v36;
  v15 = MiPlatformCacheAttributes[v12];
  v31 = (__int64)CurrentThread;
  Process = (__int64)CurrentThread->ApcState.Process;
  v34 = 0;
  v28 = v15;
  if ( v36 )
  {
    if ( (v36 & 0xFFF) != 0
      || v36 < 0x10000 && !*(_QWORD *)(Process + 1792)
      || (v8 = (v6 << 12) + v36 - 1, v8 <= v36)
      || (char *)v8 > (char *)MmHighestUserAddress - 0x10000 )
    {
      inserted = -1073741503;
      goto LABEL_34;
    }
  }
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
  if ( (*(_DWORD *)(Process + 772) & 0x20) != 0 )
  {
    inserted = -1073741558;
    goto LABEL_26;
  }
  if ( !v14 )
  {
    EmptyAddressRange = MiFindEmptyAddressRange(
                          v6 << 12,
                          0x10000LL,
                          (char *)MmHighestUserAddress - 0x10000,
                          (unsigned __int8)v11 + 4,
                          0,
                          (unsigned __int64 *)va,
                          &v34);
    v18 = 0LL;
    inserted = EmptyAddressRange;
    if ( EmptyAddressRange >= 0 )
    {
      v14 = v36;
      v8 = v36 + (v6 << 12) - 1;
      v5 = v3;
      goto LABEL_7;
    }
LABEL_26:
    UNLOCK_ADDRESS_SPACE(v31, Process);
    if ( v32 )
    {
      v25 = 1LL;
      v26 = (v32 - (unsigned __int64)v3 + 8) >> 3;
      if ( (unsigned __int64)v3 > v32 )
        v26 = 0LL;
      while ( v25 <= v26 )
      {
        if ( !MI_IS_PFN(*v3) )
          MiDereferenceIoPages(1, v27, 1uLL);
        ++v3;
        ++v25;
      }
    }
LABEL_34:
    ExFreePoolWithTag((PVOID)v9, 0);
    RtlRaiseStatus(inserted);
  }
  if ( MiCheckForConflictingVadExistence() )
  {
    inserted = -1073741800;
    goto LABEL_26;
  }
LABEL_7:
  v20 = v8 >> 12;
  *(_DWORD *)(v9 + 24) = v14 >> 12;
  *(_BYTE *)(v9 + 32) = v14 >> 44;
  *(_DWORD *)(v9 + 28) = v20;
  *(_BYTE *)(v9 + 33) = BYTE4(v20);
  v29 = v18;
  if ( v6 )
  {
    do
    {
      if ( !MI_IS_PFN(*v5) )
      {
        inserted = MiReferenceIoPages(1, v22, 1LL, v28, v23, v23);
        if ( inserted < 0 )
          goto LABEL_26;
        v5 = v30;
        v21 = v29;
        v32 = (unsigned __int64)v30;
      }
      ++v5;
      v29 = v21 + 1;
      v30 = v5;
    }
    while ( v21 + 1 < v6 );
  }
  inserted = MiInsertVadCharges(v9, (struct _KPROCESS *)Process);
  if ( inserted < 0 )
    goto LABEL_26;
  MiLockVad(v31, v9);
  MiMapLockedPagesInUserSpaceHelper(v14, v3, 0LL, v35, v6, v9, v38);
  MiUnlockVad(v31, v9);
  if ( v34 == 1 )
    MiAdvanceVadHint(v14 >> 12, v20, 0);
  UNLOCK_ADDRESS_SPACE(v31, Process);
  return v14 + *(unsigned int *)(a1 + 44);
}
