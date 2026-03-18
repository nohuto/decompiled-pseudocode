/*
 * XREFs of IovpCompleteRequest2 @ 0x1407404B4
 * Callers:
 *     IovpLocalCompletionRoutine @ 0x1407358A8 (IovpLocalCompletionRoutine.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     RtlStringCbPrintfA @ 0x14016326C (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     VfUtilDbgPrint @ 0x14025A0F4 (VfUtilDbgPrint.c)
 *     MdlInvariantPostProcessing1 @ 0x14025AA6C (MdlInvariantPostProcessing1.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x14025B248 (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x14025B370 (ViIrpDatabaseReleaseLockExclusive.c)
 *     VfUtilAddressRangeRemoveCheckEmpty @ 0x140737754 (VfUtilAddressRangeRemoveCheckEmpty.c)
 *     IovpValidateStatusInformation @ 0x140740C68 (IovpValidateStatusInformation.c)
 *     VfMajorAdvanceIrpStatus @ 0x140743BC4 (VfMajorAdvanceIrpStatus.c)
 *     VfMajorVerifyFinalIrpStack @ 0x140743EEC (VfMajorVerifyFinalIrpStack.c)
 *     VfMajorVerifyIrpStackUpward @ 0x140744024 (VfMajorVerifyIrpStackUpward.c)
 *     ViErrorDisplayDescription @ 0x140744384 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1407443D4 (ViErrorFinishReport.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x14074AC7C (VfIrpDatabaseEntryReleaseLock.c)
 *     ViWdIrpBeforeCompletionRoutine @ 0x14074B138 (ViWdIrpBeforeCompletionRoutine.c)
 *     IovpSessionDataDereference @ 0x14074BB7C (IovpSessionDataDereference.c)
 *     IovpSessionDataReference @ 0x14074BBE0 (IovpSessionDataReference.c)
 */

void __fastcall IovpCompleteRequest2(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r15
  __int64 v5; // rdi
  volatile signed __int32 *v6; // rcx
  unsigned __int8 CurrentIrql; // si
  __int64 v8; // r13
  __int64 v9; // rcx
  int v10; // eax
  int v11; // esi
  BOOL v12; // r14d
  _BYTE *v13; // r12
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // eax
  const void *v17; // rsi
  __int64 **v18; // r14
  __int64 *v19; // rsi
  __int64 v20; // rax
  int v21; // edx
  __int64 v22; // rax
  unsigned __int64 v24; // rbx
  _DWORD *v25; // rax
  unsigned int v26; // ebx
  _QWORD *v27; // rcx
  unsigned __int8 v28[4]; // [rsp+30h] [rbp-B8h] BYREF
  int v29; // [rsp+34h] [rbp-B4h] BYREF
  unsigned int v30; // [rsp+38h] [rbp-B0h]
  char pszDest[96]; // [rsp+40h] [rbp-A8h] BYREF

  v2 = *(_DWORD **)a2;
  if ( *(_QWORD *)a2 )
  {
    v5 = *(_QWORD *)(a2 + 8);
    v6 = (volatile signed __int32 *)(v5 + 8);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v6);
    }
    else if ( _interlockedbittestandset64(v6, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(v6);
    }
    *(_BYTE *)(v5 + 16) = CurrentIrql;
    if ( *(_QWORD *)(v5 + 248) )
      ViWdIrpBeforeCompletionRoutine();
    v29 = *(_DWORD *)(a1 + 48);
    v8 = (__int64)&v2[30 * *(char *)(a1 + 67) - 10];
    v9 = *(_QWORD *)(v8 + 8);
    v10 = *(_DWORD *)(v9 + 4);
    if ( (v10 & 0x40000000) != 0 )
    {
      v11 = 0;
    }
    else
    {
      v11 = 1;
      *(_DWORD *)(v9 + 4) = v10 | 0x40000000;
    }
    v12 = v8 == v9;
    v13 = (_BYTE *)(*(_QWORD *)(a1 + 184) - 72LL);
    if ( *(_BYTE *)(a1 + 67) <= *(_BYTE *)(a1 + 66)
      && (unsigned __int8)(*v13 - 3) <= 1u
      && *(_QWORD *)(a1 + 8)
      && (MmVerifierData & 0x6000) != 0 )
    {
      MdlInvariantPostProcessing1(v5, a1, *(_QWORD *)(a1 + 184) - 72LL);
    }
    VfMajorVerifyIrpStackUpward(v5, (_DWORD)v13, v8, v11, v12);
    v16 = v2[8];
    v30 = v29;
    if ( (v16 & 2) == 0 && (*(_DWORD *)(v8 + 4) & 0x4000000) != 0 && !*(_BYTE *)(a1 + 65) )
    {
      if ( (*(_DWORD *)(a1 + 16) & 0x800) != 0 )
      {
        v17 = *(const void **)(v8 + 40);
        ViErrorDisplayDescription(574LL, v14, v15);
        if ( RtlStringCbPrintfA(
               pszDest,
               0x57uLL,
               "CulpritAddress = %p, Irp = %p, Status = 0x%x.\n",
               v17,
               (const void *)a1,
               v29) >= 0 )
          VfUtilDbgPrint(pszDest);
        ViErrorFinishReport(574LL, v17, a1, v29);
      }
      v2[8] |= 2u;
    }
    v18 = (__int64 **)(v8 + 16);
    while ( *v18 != (__int64 *)v18 )
    {
      v19 = *v18;
      v20 = **v18;
      if ( (__int64 **)(*v18)[1] != v18 || *(__int64 **)(v20 + 8) != v19 )
        __fastfail(3u);
      *v18 = (__int64 *)v20;
      *(_QWORD *)(v20 + 8) = v18;
      *((_DWORD *)v19 - 2) |= 0x40000000u;
      *((_DWORD *)v19 + 6) = v29;
      if ( *(_BYTE *)(a1 + 65) )
        *((_DWORD *)v19 - 2) |= 0x2000000u;
      IovpValidateStatusInformation(v5, v19[5], v19 + 6, *(_QWORD *)(a2 + 32));
      if ( (*(_DWORD *)(v5 + 56) & 0x20) == 0 )
      {
        if ( (unsigned int)VfMajorAdvanceIrpStatus(v13, v30, &v29) )
        {
          *((_DWORD *)v19 - 2) |= 0x8000000u;
          *((_DWORD *)v19 + 7) = v29;
        }
      }
    }
    *(_DWORD *)(a1 + 48) = v29;
    memset((void *)v8, 0, 0x78uLL);
    *(_QWORD *)(v8 + 24) = v8 + 16;
    *v18 = (__int64 *)v18;
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
        ViIrpDatabaseAcquireLockExclusive(v28);
        v24 = *(_QWORD *)v5;
        (*(void (__fastcall **)(__int64, _QWORD, __int64))(v5 + 48))(v5, *(_QWORD *)v5, 1LL);
        *(_QWORD *)v5 = 0LL;
        VfUtilAddressRangeRemoveCheckEmpty(
          (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (v24 >> 12))),
          v24);
        ViIrpDatabaseReleaseLockExclusive(v28[0]);
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
}
