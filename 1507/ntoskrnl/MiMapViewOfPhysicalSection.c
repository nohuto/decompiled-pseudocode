/*
 * XREFs of MiMapViewOfPhysicalSection @ 0x1405B2C58
 * Callers:
 *     MiMapViewOfSection @ 0x1404BA540 (MiMapViewOfSection.c)
 * Callees:
 *     MiCommitVadCfgBits @ 0x14000FE10 (MiCommitVadCfgBits.c)
 *     MiIsProcessCfgEnabled @ 0x140010004 (MiIsProcessCfgEnabled.c)
 *     MiCheckForConflictingVadExistence @ 0x140010018 (MiCheckForConflictingVadExistence.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140010380 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiUnlockVad @ 0x1400894F0 (MiUnlockVad.c)
 *     MiLockVad @ 0x140089660 (MiLockVad.c)
 *     MiReferenceVad @ 0x1400896D4 (MiReferenceVad.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140089E40 (UNLOCK_ADDRESS_SPACE.c)
 *     LOCK_ADDRESS_SPACE @ 0x14008A330 (LOCK_ADDRESS_SPACE.c)
 *     MiDeleteVad @ 0x14008B8E0 (MiDeleteVad.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiDereferenceIoPages @ 0x140116398 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140116704 (MiReferenceIoPages.c)
 *     MiInsertViewOfPhysicalSection @ 0x14016A030 (MiInsertViewOfPhysicalSection.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiSelectUserAddress @ 0x1404B59C4 (MiSelectUserAddress.c)
 *     MiAdvanceVadHint @ 0x1404B5C80 (MiAdvanceVadHint.c)
 *     MiInsertVadCharges @ 0x1404B8410 (MiInsertVadCharges.c)
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
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbp
  int inserted; // edi
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // r9
  int v25; // eax
  int v26; // edi
  unsigned __int64 v27; // r13
  BOOL v28; // eax
  __int64 v29; // r10
  ULONG_PTR v30; // r11
  __int64 v32; // rax
  unsigned __int64 v33; // r14
  BOOL v34; // eax
  ULONG_PTR v35; // r9
  ULONG_PTR v36; // r10
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdi
  int v40; // esi
  __int64 v41; // rcx
  int v42; // [rsp+40h] [rbp-78h] BYREF
  __int64 i; // [rsp+48h] [rbp-70h]
  __int64 v44; // [rsp+50h] [rbp-68h] BYREF
  struct _KTHREAD *v45; // [rsp+58h] [rbp-60h]
  __int64 v46; // [rsp+60h] [rbp-58h]
  unsigned __int64 v47; // [rsp+68h] [rbp-50h]
  unsigned __int64 v48; // [rsp+70h] [rbp-48h]
  unsigned __int64 v49; // [rsp+78h] [rbp-40h]
  int v53; // [rsp+F0h] [rbp+38h]

  if ( (a7 & 0x20002000) != 0 )
    return 3221225719LL;
  v11 = a5 >> 3;
  if ( a5 >> 3 == 2 || (a5 & 5) == 5 || a5 == 24 )
    return 3221225541LL;
  CurrentThread = KeGetCurrentThread();
  v42 = 0;
  v45 = CurrentThread;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x6C646156u);
  v14 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x88uLL);
  *(_DWORD *)(v14 + 64) &= ~0x4000000u;
  v44 = 0LL;
  v46 = -1LL;
  *(_QWORD *)(v14 + 72) = &qword_14034E7C0;
  v15 = *(_DWORD *)(v14 + 48) & 0xFFFFFF01;
  *(_QWORD *)(v14 + 40) = 0LL;
  *(_QWORD *)(v14 + 16) = -2LL;
  *(_DWORD *)(v14 + 48) = v15 | (8 * (a5 & 0x1F)) | 1;
  v16 = *a3 >> 12;
  *(_QWORD *)(v14 + 80) = v16;
  *(_QWORD *)(v14 + 88) = v16;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, a1, v17, v18);
  if ( (*(_DWORD *)(a1 + 772) & 0x20) != 0 )
  {
    inserted = -1073741558;
  }
  else if ( *a2 )
  {
    v22 = *a2 ^ (unsigned __int16)(*a2 ^ *(_WORD *)a3);
    v21 = (v22 + *a4 - 1LL) | 0xFFF;
    if ( (v22 >= 0x10000 || *(_QWORD *)(a1 + 1784)) && !MiCheckForConflictingVadExistence() )
      goto LABEL_10;
    inserted = -1073741800;
  }
  else
  {
    v19 = *a4 + (unsigned __int16)*(_DWORD *)a3;
    inserted = MiSelectUserAddress(
                 a7,
                 a6,
                 *(_DWORD *)a4 + (unsigned int)(unsigned __int16)*(_DWORD *)a3,
                 0x10000LL,
                 a5,
                 &v42,
                 &v44);
    if ( inserted >= 0 )
    {
      v21 = (v44 + v19 - 1) | 0xFFF;
      v22 = (unsigned __int16)*(_DWORD *)a3 + v44;
LABEL_10:
      v23 = v21 >> 12;
      *(_BYTE *)(v14 + 32) = v22 >> 44;
      *(_BYTE *)(v14 + 33) = v21 >> 44;
      v49 = v22 >> 12;
      v48 = v21 >> 12;
      v24 = v16
          + ((unsigned int)(v21 >> 12) | ((unsigned __int64)(unsigned __int8)(v21 >> 44) << 32))
          - ((unsigned int)(v22 >> 12) | ((unsigned __int64)(unsigned __int8)(v22 >> 44) << 32));
      *(_DWORD *)(v14 + 24) = v22 >> 12;
      *(_DWORD *)(v14 + 28) = v21 >> 12;
      v47 = v24;
      if ( v11 == 3 && (a5 & 7) != 0 )
        v25 = 2;
      else
        v25 = v11 != 1;
      v44 = 0LL;
      v26 = MiPlatformCacheAttributes[v25 + 6];
      v27 = v16;
      v53 = v26;
      for ( i = -1LL; v27 <= v24; ++v27 )
      {
        v28 = MI_IS_PFN(v27);
        if ( !v28 )
        {
          if ( !v29 )
            v30 = v27;
          v44 = ++v29;
          i = v30;
        }
        if ( (v28 || v27 == v24) && v29 )
        {
          inserted = MiReferenceIoPages(1, v30, v29, v26, 0LL, 0LL);
          if ( inserted < 0 )
            goto LABEL_40;
          v24 = v47;
          v32 = i + v44 - 1;
          v26 = v53;
          i = -1LL;
          v46 = v32;
          v44 = 0LL;
        }
      }
      inserted = MiInsertVadCharges(v14, (struct _KPROCESS *)a1, v23, v24);
      if ( inserted >= 0 )
      {
        MiInsertViewOfPhysicalSection(a1, v14);
        if ( v42 == 1 )
          MiAdvanceVadHint(v49, v48);
        *a4 = v21 - v22 + 1;
        if ( (a5 & 2) != 0 && MiIsProcessCfgEnabled() )
        {
          v39 = (__int64)v45;
          MiLockVad((__int64)v45, v14, v37, v38);
          UNLOCK_ADDRESS_SPACE_UNORDERED(v39, a1);
          v40 = MiCommitVadCfgBits(v14, 0LL, a8);
          if ( v40 < 0 )
          {
            MiReferenceVad(v14);
            MiDeleteVad(v41, 0);
            return (unsigned int)v40;
          }
          MiUnlockVad(v39, v14);
        }
        else
        {
          UNLOCK_ADDRESS_SPACE((__int64)v45, a1);
        }
        *a2 = v22;
        return 0LL;
      }
    }
  }
LABEL_40:
  UNLOCK_ADDRESS_SPACE((__int64)v45, a1);
  v33 = v46;
  if ( v46 != -1 )
  {
    while ( v16 <= v33 )
    {
      v34 = MI_IS_PFN(v16);
      if ( !v34 )
      {
        if ( !v35 )
          v36 = v16;
        ++v35;
      }
      if ( (v34 || v16 == v33) && v35 )
        MiDereferenceIoPages(1, v36, v35);
      ++v16;
    }
  }
  ExFreePoolWithTag((PVOID)v14, 0);
  return (unsigned int)inserted;
}
