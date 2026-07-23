/*
 * XREFs of IovpCompleteRequest2 @ 0x14070B208
 * Callers:
 *     IovpLocalCompletionRoutine @ 0x140701424 (IovpLocalCompletionRoutine.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MdlInvariantPostProcessing1 @ 0x140222DAC (MdlInvariantPostProcessing1.c)
 *     ViErrorReport1 @ 0x14022348C (ViErrorReport1.c)
 *     ViErrorReport6 @ 0x140223630 (ViErrorReport6.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x140223AAC (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x140223AEC (ViIrpDatabaseReleaseLockExclusive.c)
 *     VfUtilAddressRangeRemoveCheckEmpty @ 0x140702C4C (VfUtilAddressRangeRemoveCheckEmpty.c)
 *     VfMajorAdvanceIrpStatus @ 0x14070E3E4 (VfMajorAdvanceIrpStatus.c)
 *     VfMajorVerifyFinalIrpStack @ 0x14070E70C (VfMajorVerifyFinalIrpStack.c)
 *     VfMajorVerifyIrpStackUpward @ 0x14070E844 (VfMajorVerifyIrpStackUpward.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140716B8C (VfIrpDatabaseEntryReleaseLock.c)
 *     ViWdIrpBeforeCompletionRoutine @ 0x140716FDC (ViWdIrpBeforeCompletionRoutine.c)
 *     IovpSessionDataDereference @ 0x140717948 (IovpSessionDataDereference.c)
 *     IovpSessionDataReference @ 0x1407179AC (IovpSessionDataReference.c)
 */

void __fastcall IovpCompleteRequest2(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r14
  __int64 v5; // rdi
  __int64 v6; // r13
  __int64 v7; // rcx
  int v8; // eax
  int v9; // esi
  BOOL v10; // ebp
  _BYTE *v11; // r12
  int v12; // eax
  __int64 **v13; // rbp
  __int64 *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r8
  int v17; // eax
  unsigned __int8 v18; // al
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  int v21; // edx
  __int64 v22; // rax
  unsigned __int64 v24; // rbx
  _DWORD *v25; // rax
  unsigned int v26; // ebx
  _QWORD *v27; // rcx
  unsigned int v28; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v29; // [rsp+80h] [rbp+18h] BYREF

  v2 = *(_DWORD **)a2;
  if ( !*(_QWORD *)a2 )
    return;
  v5 = *(_QWORD *)(a2 + 8);
  *(_BYTE *)(v5 + 16) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 8));
  if ( *(_QWORD *)(v5 + 248) )
    ViWdIrpBeforeCompletionRoutine();
  v29 = *(_DWORD *)(a1 + 48);
  v6 = (__int64)&v2[30 * *(char *)(a1 + 67) - 10];
  v7 = *(_QWORD *)(v6 + 8);
  v8 = *(_DWORD *)(v7 + 4);
  if ( (v8 & 0x40000000) != 0 )
  {
    v9 = 0;
  }
  else
  {
    v9 = 1;
    *(_DWORD *)(v7 + 4) = v8 | 0x40000000;
  }
  v10 = v6 == v7;
  v11 = (_BYTE *)(*(_QWORD *)(a1 + 184) - 72LL);
  if ( *(_BYTE *)(a1 + 67) <= *(_BYTE *)(a1 + 66)
    && (unsigned __int8)(*v11 - 3) <= 1u
    && *(_QWORD *)(a1 + 8)
    && (MmVerifierData & 0x6000) != 0 )
  {
    MdlInvariantPostProcessing1(v5, a1, *(_QWORD *)(a1 + 184) - 72LL);
  }
  VfMajorVerifyIrpStackUpward(v5, (_DWORD)v11, v6, v9, v10);
  v12 = v2[8];
  v28 = v29;
  if ( (v12 & 2) == 0 && (*(_DWORD *)(v6 + 4) & 0x4000000) != 0 && !*(_BYTE *)(a1 + 65) )
  {
    if ( (*(_DWORD *)(a1 + 16) & 0x800) != 0 )
      ViErrorReport6(574LL, *(const void **)(v6 + 40), (const void *)a1, v29);
    v2[8] |= 2u;
  }
  v13 = (__int64 **)(v6 + 16);
  while ( *v13 != (__int64 *)v13 )
  {
    v14 = *v13;
    v15 = **v13;
    if ( (__int64 **)(*v13)[1] != v13 || *(__int64 **)(v15 + 8) != v14 )
      __fastfail(3u);
    *v13 = (__int64 *)v15;
    *(_QWORD *)(v15 + 8) = v13;
    *((_DWORD *)v14 - 2) |= 0x40000000u;
    *((_DWORD *)v14 + 6) = v29;
    if ( *(_BYTE *)(a1 + 65) )
      *((_DWORD *)v14 - 2) |= 0x2000000u;
    v16 = v14[5];
    if ( (*(_BYTE *)(v16 + 16) & 0x70) == 0x70 )
    {
      v17 = *(_DWORD *)(v16 + 48);
      if ( v17 != -2147483626 && (v17 & 0xC0000000) != 0xC0000000 )
      {
        v18 = *((_BYTE *)v14 + 48);
        if ( v18 == 3 || v18 == 5 || v18 == 7 || v18 == 10 )
          goto LABEL_35;
        if ( v18 <= 0xBu )
          goto LABEL_38;
        if ( v18 <= 0xDu )
        {
LABEL_35:
          v19 = *((unsigned int *)v14 + 14);
        }
        else
        {
          if ( v18 > 0xFu )
          {
            if ( v18 != 25 )
              goto LABEL_38;
            goto LABEL_35;
          }
          v20 = *(_QWORD *)(v5 + 200);
          if ( !v20 || v20 != *(_QWORD *)(v16 + 24) )
            goto LABEL_38;
          v19 = *(unsigned int *)(v5 + 208);
        }
        if ( *(_QWORD *)(v16 + 56) > v19 )
          ViErrorReport1(0x312u, *(const void **)(a2 + 32), (const void *)v16);
      }
    }
LABEL_38:
    if ( (*(_DWORD *)(v5 + 56) & 0x20) == 0 )
    {
      if ( (unsigned int)VfMajorAdvanceIrpStatus(v11, v28, &v29) )
      {
        *((_DWORD *)v14 - 2) |= 0x8000000u;
        *((_DWORD *)v14 + 7) = v29;
      }
    }
  }
  *(_DWORD *)(a1 + 48) = v29;
  memset((void *)v6, 0, 0x78uLL);
  *(_QWORD *)(v6 + 24) = v6 + 16;
  *v13 = (__int64 *)v13;
  v21 = *(unsigned __int8 *)(v5 + 184);
  *(_BYTE *)(v5 + 186) = *(_BYTE *)(a1 + 67) + 1;
  if ( v21 == *(char *)(a1 + 67) )
  {
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    VfMajorVerifyFinalIrpStack(v5, *(_QWORD *)(a1 + 184) - 72LL);
    v22 = *(_QWORD *)v2;
    *(_DWORD *)(v22 + 56) &= ~1u;
    *(_QWORD *)(v22 + 240) = 0LL;
    IovpSessionDataDereference(v2);
    if ( (*(_DWORD *)(v5 + 24))-- == 1 )
    {
      ViIrpDatabaseAcquireLockExclusive((KIRQL *)&v28);
      v24 = *(_QWORD *)v5;
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(v5 + 48))(v5, *(_QWORD *)v5, 1LL);
      *(_QWORD *)v5 = 0LL;
      VfUtilAddressRangeRemoveCheckEmpty(
        (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (v24 >> 12))),
        v24);
      ViIrpDatabaseReleaseLockExclusive(v28);
    }
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 20));
    v25 = *(_DWORD **)(v5 + 224);
    if ( v25 )
    {
      v26 = 0;
      if ( *v25 )
      {
        do
        {
          v27 = (_QWORD *)(32LL * v26 + *(_QWORD *)(*(_QWORD *)(v5 + 224) + 8LL));
          if ( *v27 )
            memset(v27, 0, 0x20uLL);
          ++v26;
        }
        while ( v26 < **(_DWORD **)(v5 + 224) );
      }
      *(_QWORD *)(*(_QWORD *)(v5 + 224) + 16LL) = 0LL;
    }
  }
  else
  {
    IovpSessionDataReference(v2);
    _InterlockedAdd((volatile signed __int32 *)(v5 + 20), 1u);
  }
  VfIrpDatabaseEntryReleaseLock(v5);
  --*(_DWORD *)(a2 + 20);
}
