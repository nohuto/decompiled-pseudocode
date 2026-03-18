/*
 * XREFs of MiMapViewOfPhysicalSection @ 0x14053B280
 * Callers:
 *     MiMapViewOfSection @ 0x140419680 (MiMapViewOfSection.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE @ 0x14002E2D0 (UNLOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140037DA0 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiCommitVadCfgBits @ 0x140037DF0 (MiCommitVadCfgBits.c)
 *     MiIsProcessCfgEnabled @ 0x140037FE4 (MiIsProcessCfgEnabled.c)
 *     MiCheckForConflictingVadExistence @ 0x140037FF8 (MiCheckForConflictingVadExistence.c)
 *     MiUnlockVad @ 0x140038910 (MiUnlockVad.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400622C0 (LOCK_ADDRESS_SPACE.c)
 *     MiLockVad @ 0x140063AC0 (MiLockVad.c)
 *     MiReferenceVad @ 0x140063C70 (MiReferenceVad.c)
 *     MiDeleteVad @ 0x14006AE10 (MiDeleteVad.c)
 *     MiDereferenceIoPages @ 0x1400C1300 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x1400C16A0 (MiReferenceIoPages.c)
 *     MiInsertViewOfPhysicalSection @ 0x14013BD7C (MiInsertViewOfPhysicalSection.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiInsertVadCharges @ 0x140415EF0 (MiInsertVadCharges.c)
 *     MiSelectUserAddress @ 0x14047A0C0 (MiSelectUserAddress.c)
 *     MiAdvanceVadHint @ 0x14049D2A0 (MiAdvanceVadHint.c)
 */

__int64 __fastcall MiMapViewOfPhysicalSection(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 *a3,
        _QWORD *a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        unsigned __int8 *a8)
{
  unsigned int v11; // r13d
  struct _KTHREAD *CurrentThread; // rdi
  PVOID PoolWithTag; // rax
  __int64 v14; // rbx
  unsigned int v15; // eax
  unsigned __int64 v16; // rsi
  __int64 v17; // rbp
  int v18; // eax
  __int64 v19; // r10
  int inserted; // edi
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // r14
  int v23; // eax
  int v24; // edi
  unsigned __int64 v25; // r13
  BOOL v26; // eax
  unsigned __int64 v27; // r9
  __int64 v28; // r10
  ULONG_PTR v29; // r11
  __int64 v31; // rax
  unsigned __int64 v32; // r14
  BOOL v33; // eax
  ULONG_PTR v34; // r9
  ULONG_PTR v35; // r10
  __int64 v36; // rdi
  int v37; // esi
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // [rsp+40h] [rbp-78h] BYREF
  __int64 v41; // [rsp+48h] [rbp-70h]
  __int64 v42; // [rsp+50h] [rbp-68h] BYREF
  struct _KTHREAD *v43; // [rsp+58h] [rbp-60h]
  __int64 v44; // [rsp+60h] [rbp-58h]
  unsigned __int64 v45; // [rsp+68h] [rbp-50h]
  unsigned __int64 v46; // [rsp+70h] [rbp-48h]
  unsigned __int64 v47; // [rsp+78h] [rbp-40h]
  int v51; // [rsp+F0h] [rbp+38h]

  if ( (a7 & 0x20002000) != 0 )
    return 3221225719LL;
  v11 = a5 >> 3;
  if ( a5 >> 3 == 2 || (a5 & 5) == 5 || a5 == 24 )
    return 3221225541LL;
  CurrentThread = KeGetCurrentThread();
  v40 = 0;
  v43 = CurrentThread;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x6C646156u);
  v14 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x88uLL);
  *(_DWORD *)(v14 + 64) &= ~0x4000000u;
  *(_QWORD *)(v14 + 40) = 0LL;
  v42 = 0LL;
  v44 = -1LL;
  *(_QWORD *)(v14 + 72) = &qword_1402FE2C0;
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
    if ( (v22 >= 0x10000 || *(_QWORD *)(a1 + 1792)) && !MiCheckForConflictingVadExistence() )
    {
LABEL_10:
      *(_BYTE *)(v14 + 32) = v22 >> 44;
      *(_BYTE *)(v14 + 33) = v21 >> 44;
      v47 = v22 >> 12;
      v46 = v21 >> 12;
      *(_DWORD *)(v14 + 24) = v22 >> 12;
      *(_DWORD *)(v14 + 28) = v21 >> 12;
      v45 = v16
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
      v42 = v19;
      v24 = MiPlatformCacheAttributes[v23 + 6];
      v25 = v16;
      v51 = v24;
      v41 = -1LL;
      if ( v16 <= v16
                + ((unsigned int)(v21 >> 12) | ((unsigned __int64)(unsigned __int8)(v21 >> 44) << 32))
                - ((unsigned int)(v22 >> 12) | ((unsigned __int64)(unsigned __int8)(v22 >> 44) << 32)) )
      {
        do
        {
          v26 = MI_IS_PFN(v25);
          if ( !v26 )
          {
            if ( !v28 )
              v29 = v25;
            v42 = ++v28;
            v41 = v29;
          }
          if ( (v26 || v25 == v27) && v28 )
          {
            inserted = MiReferenceIoPages(1, v29, v28, v24, 0LL, 0LL);
            if ( inserted < 0 )
              goto LABEL_41;
            v27 = v45;
            v31 = v41 + v42 - 1;
            v24 = v51;
            v41 = -1LL;
            v44 = v31;
            v42 = 0LL;
          }
          ++v25;
        }
        while ( v25 <= v27 );
      }
      inserted = MiInsertVadCharges(v14, (struct _KPROCESS *)a1);
      if ( inserted >= 0 )
      {
        MiInsertViewOfPhysicalSection(a1, v14);
        if ( v40 == 1 )
          MiAdvanceVadHint(v47, v46, 0);
        *a4 = v21 - v22 + 1;
        if ( (a5 & 2) != 0 && MiIsProcessCfgEnabled() )
        {
          v36 = (__int64)v43;
          MiLockVad((__int64)v43, v14);
          UNLOCK_ADDRESS_SPACE_UNORDERED(v36, a1);
          v37 = MiCommitVadCfgBits(v14, 0LL, a8);
          if ( v37 < 0 )
          {
            MiReferenceVad(v14);
            MiDeleteVad(v38, 0, v39);
            return (unsigned int)v37;
          }
          MiUnlockVad(v36, v14);
        }
        else
        {
          UNLOCK_ADDRESS_SPACE((__int64)v43, a1);
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
    v18 = MiSelectUserAddress(
            a7,
            a6,
            *(_DWORD *)a4 + (unsigned int)(unsigned __int16)*(_DWORD *)a3,
            0x10000LL,
            a5,
            0,
            &v40,
            &v42);
    v19 = 0LL;
    inserted = v18;
    if ( v18 >= 0 )
    {
      v21 = (v42 + v17 - 1) | 0xFFF;
      v22 = (unsigned __int16)*(_DWORD *)a3 + v42;
      goto LABEL_10;
    }
  }
LABEL_41:
  UNLOCK_ADDRESS_SPACE((__int64)v43, a1);
  v32 = v44;
  if ( v44 != -1 )
  {
    while ( v16 <= v32 )
    {
      v33 = MI_IS_PFN(v16);
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
