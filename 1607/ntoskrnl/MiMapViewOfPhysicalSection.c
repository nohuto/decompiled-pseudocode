/*
 * XREFs of MiMapViewOfPhysicalSection @ 0x140573180
 * Callers:
 *     MiMapViewOfSection @ 0x140431EE0 (MiMapViewOfSection.c)
 * Callees:
 *     MiIsPfn @ 0x14000F720 (MiIsPfn.c)
 *     MiIsProcessCfgEnabled @ 0x140013E84 (MiIsProcessCfgEnabled.c)
 *     MiCheckForConflictingVadExistence @ 0x140013E98 (MiCheckForConflictingVadExistence.c)
 *     MiUnlockVad @ 0x140014020 (MiUnlockVad.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1400141A4 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiDeleteVad @ 0x140028450 (MiDeleteVad.c)
 *     MiLockVad @ 0x14002BB30 (MiLockVad.c)
 *     MiReferenceVad @ 0x14002BEFC (MiReferenceVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x14002BF10 (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14002CB50 (UNLOCK_ADDRESS_SPACE.c)
 *     MiDereferenceIoPages @ 0x14009B770 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x14009BB00 (MiReferenceIoPages.c)
 *     MiInsertViewOfPhysicalSection @ 0x140146DB8 (MiInsertViewOfPhysicalSection.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiCommitVadCfgBits @ 0x140428720 (MiCommitVadCfgBits.c)
 *     MiInsertVadCharges @ 0x14042ED10 (MiInsertVadCharges.c)
 *     MiAdvanceVadHint @ 0x140435A80 (MiAdvanceVadHint.c)
 *     MiSelectUserAddress @ 0x1404A67C0 (MiSelectUserAddress.c)
 */

__int64 __fastcall MiMapViewOfPhysicalSection(
        __int64 a1,
        unsigned __int64 *a2,
        _QWORD *a3,
        _QWORD *a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  unsigned int v11; // r13d
  struct _KTHREAD *CurrentThread; // rdi
  PVOID PoolWithTag; // rax
  unsigned __int64 v14; // rbx
  unsigned int v15; // eax
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rbp
  int v18; // eax
  __int64 v19; // r10
  int inserted; // edi
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // r14
  int v23; // eax
  int v24; // edi
  unsigned __int64 v25; // r13
  BOOL IsPfn; // eax
  unsigned __int64 v27; // r9
  __int64 v28; // r10
  __int64 v29; // r11
  __int64 v31; // rax
  unsigned __int64 v32; // r14
  BOOL v33; // eax
  ULONG_PTR v34; // r9
  __int64 v35; // r10
  __int64 v36; // rdi
  int v37; // esi
  __int64 v38; // rcx
  int v39; // [rsp+40h] [rbp-78h] BYREF
  __int64 v40; // [rsp+48h] [rbp-70h]
  __int64 v41; // [rsp+50h] [rbp-68h] BYREF
  struct _KTHREAD *v42; // [rsp+58h] [rbp-60h]
  __int64 v43; // [rsp+60h] [rbp-58h]
  unsigned __int64 v44; // [rsp+68h] [rbp-50h]
  unsigned __int64 v45; // [rsp+70h] [rbp-48h]
  unsigned __int64 v46; // [rsp+78h] [rbp-40h]
  int v50; // [rsp+F0h] [rbp+38h]

  if ( (a7 & 0x20002000) != 0 )
    return 3221225719LL;
  v11 = a5 >> 3;
  if ( a5 >> 3 == 2 || (a5 & 5) == 5 || a5 == 24 )
    return 3221225541LL;
  CurrentThread = KeGetCurrentThread();
  v39 = 0;
  v42 = CurrentThread;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x6C646156u);
  v14 = (unsigned __int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x88uLL);
  *(_DWORD *)(v14 + 64) &= ~0x4000000u;
  *(_QWORD *)(v14 + 40) = 0LL;
  v41 = 0LL;
  v43 = -1LL;
  *(_QWORD *)(v14 + 72) = &qword_1403265C0;
  v15 = *(_DWORD *)(v14 + 48) & 0xFFFFFF01;
  *(_QWORD *)(v14 + 16) = -2LL;
  *(_DWORD *)(v14 + 48) = v15 | (8 * (a5 & 0x1F)) | 1;
  v16 = *a3 >> 12;
  *(_QWORD *)(v14 + 80) = v16;
  *(_QWORD *)(v14 + 88) = v16;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
  if ( (*(_DWORD *)(a1 + 772) & 0x20) != 0 )
  {
    inserted = -1073741558;
  }
  else if ( *a2 )
  {
    v22 = *a2 ^ (unsigned __int16)(*a2 ^ *(_WORD *)a3);
    v21 = (v22 + *a4 - 1LL) | 0xFFF;
    if ( (v22 >= 0x10000 || *(_QWORD *)(a1 + 1808)) && !MiCheckForConflictingVadExistence() )
    {
LABEL_10:
      *(_BYTE *)(v14 + 32) = v22 >> 44;
      *(_BYTE *)(v14 + 33) = v21 >> 44;
      v46 = v22 >> 12;
      v45 = v21 >> 12;
      *(_DWORD *)(v14 + 24) = v22 >> 12;
      *(_DWORD *)(v14 + 28) = v21 >> 12;
      v44 = v16
          + ((unsigned int)(v21 >> 12) | ((unsigned __int64)(unsigned __int8)(v21 >> 44) << 32))
          - ((unsigned int)(v22 >> 12) | ((unsigned __int64)(unsigned __int8)(v22 >> 44) << 32));
      if ( v11 == 3 && (a5 & 7) != 0 )
      {
        v23 = 2;
      }
      else
      {
        v23 = 1;
        if ( v11 == 1 )
          v23 = v19;
      }
      v41 = v19;
      v24 = MiPlatformCacheAttributes[v23 + 6];
      v25 = v16;
      v50 = v24;
      v40 = -1LL;
      if ( v16 <= v16
                + ((unsigned int)(v21 >> 12) | ((unsigned __int64)(unsigned __int8)(v21 >> 44) << 32))
                - ((unsigned int)(v22 >> 12) | ((unsigned __int64)(unsigned __int8)(v22 >> 44) << 32)) )
      {
        do
        {
          IsPfn = MiIsPfn(v25);
          if ( !IsPfn )
          {
            if ( !v28 )
              v29 = v25;
            v41 = ++v28;
            v40 = v29;
          }
          if ( (v25 == v27 || IsPfn) && v28 )
          {
            inserted = MiReferenceIoPages(1, v29, v28, v24, 0LL, 0LL);
            if ( inserted < 0 )
              goto LABEL_41;
            v27 = v44;
            v31 = v40 + v41 - 1;
            v24 = v50;
            v40 = -1LL;
            v43 = v31;
            v41 = 0LL;
          }
          ++v25;
        }
        while ( v25 <= v27 );
      }
      inserted = MiInsertVadCharges(v14, (struct _KPROCESS *)a1);
      if ( inserted >= 0 )
      {
        MiInsertViewOfPhysicalSection(a1, v14);
        if ( v39 == 1 )
          MiAdvanceVadHint(v46, v45, 0);
        *a4 = v21 - v22 + 1;
        if ( (a5 & 2) != 0 && MiIsProcessCfgEnabled() )
        {
          v36 = (__int64)v42;
          MiLockVad((__int64)v42, v14);
          UNLOCK_ADDRESS_SPACE_UNORDERED(v36, a1);
          v37 = MiCommitVadCfgBits(v14, 0LL, a8);
          if ( v37 < 0 )
          {
            MiReferenceVad(v14);
            MiDeleteVad(v38, 0);
            return (unsigned int)v37;
          }
          MiUnlockVad(v36, v14);
        }
        else
        {
          UNLOCK_ADDRESS_SPACE((__int64)v42, a1);
        }
        *a2 = v22;
        return 0LL;
      }
      goto LABEL_41;
    }
    inserted = -1073741800;
  }
  else
  {
    v17 = *a4 + (unsigned __int16)*(_DWORD *)a3;
    v18 = MiSelectUserAddress(a7, a6, v17, 0x10000uLL, a5, 0, &v39, &v41);
    v19 = 0LL;
    inserted = v18;
    if ( v18 >= 0 )
    {
      v21 = (v41 + v17 - 1) | 0xFFF;
      v22 = (unsigned __int16)*(_DWORD *)a3 + v41;
      goto LABEL_10;
    }
  }
LABEL_41:
  UNLOCK_ADDRESS_SPACE((__int64)v42, a1);
  v32 = v43;
  if ( v43 != -1 )
  {
    while ( v16 <= v32 )
    {
      v33 = MiIsPfn(v16);
      if ( !v33 )
      {
        if ( !v34 )
          v35 = v16;
        ++v34;
      }
      if ( (v33 || v16 == v32) && v34 )
        MiDereferenceIoPages(1, v35, v34);
      ++v16;
    }
  }
  ExFreePoolWithTag((PVOID)v14, 0);
  return (unsigned int)inserted;
}
