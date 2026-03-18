/*
 * XREFs of MiMakeSystemAddressValid @ 0x1400B82F0
 * Callers:
 *     MiBuildForkPte @ 0x14001DDD8 (MiBuildForkPte.c)
 *     MiSplitPrivatePage @ 0x14001E7D0 (MiSplitPrivatePage.c)
 *     MiMakeProtoLeafValid @ 0x14001EF04 (MiMakeProtoLeafValid.c)
 *     MiDecommitPages @ 0x14005ADD0 (MiDecommitPages.c)
 *     MiSetProtectionOnSection @ 0x14005BC70 (MiSetProtectionOnSection.c)
 *     MiGetNextPageTable @ 0x14005F080 (MiGetNextPageTable.c)
 *     MiProtectPrivateMemory @ 0x1400614B0 (MiProtectPrivateMemory.c)
 *     MiDeleteVad @ 0x14006AE10 (MiDeleteVad.c)
 *     MiCopyToUserVa @ 0x1400B55D0 (MiCopyToUserVa.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x1400BA994 (MiWorkingSetInfoCheckPageTable.c)
 *     MiWriteDemandZeroPte @ 0x1400BAC24 (MiWriteDemandZeroPte.c)
 *     MiSetReadOnlyOnSectionView @ 0x1400BB050 (MiSetReadOnlyOnSectionView.c)
 *     NtLockVirtualMemory @ 0x1400BB80C (NtLockVirtualMemory.c)
 *     MiCaptureDeleteHierarchy @ 0x1400D65A4 (MiCaptureDeleteHierarchy.c)
 *     MiUpdateForkMaps @ 0x1400FE6FC (MiUpdateForkMaps.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140103E00 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x14013BD7C (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1401CEB88 (MiUpdatePrivateDemandZeroView.c)
 *     MiCreatePageTablesForPhysicalRange @ 0x1401DF0D8 (MiCreatePageTablesForPhysicalRange.c)
 *     MiMapUserLargePages @ 0x1401E1F60 (MiMapUserLargePages.c)
 *     MiWriteLargePde @ 0x1401E2CA4 (MiWriteLargePde.c)
 *     MiHandleForkTransitionPte @ 0x1401E4E64 (MiHandleForkTransitionPte.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MmFlushAllFilesystemPages @ 0x1401D5180 (MmFlushAllFilesystemPages.c)
 */

__int64 __fastcall MiMakeSystemAddressValid(__int64 BugCheckParameter1, __int64 a2, __int64 a3, KIRQL a4, char a5)
{
  unsigned int v6; // esi
  _KPROCESS *Process; // rbp
  unsigned __int64 v10; // r13
  __int64 v11; // rdx
  __int64 result; // rax
  volatile LONG *v13; // rcx
  int v14; // eax
  ULONG_PTR v15; // rsi
  volatile LONG *v16; // rcx
  unsigned int v17; // [rsp+30h] [rbp-78h]
  ULONG_PTR v18; // [rsp+38h] [rbp-70h]
  unsigned __int64 v19; // [rsp+40h] [rbp-68h]
  unsigned __int64 v20; // [rsp+48h] [rbp-60h]
  __int64 v21; // [rsp+50h] [rbp-58h]

  v6 = a3;
  v17 = a3;
  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = (BugCheckParameter1 >> 47) + 1;
  while ( 1 )
  {
    v11 = 0x98000000000LL;
    if ( v10 <= 1 )
    {
      v18 = (((unsigned __int64)BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v19 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v20 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v21 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      LODWORD(result) = 4;
      while ( 1 )
      {
        result = (unsigned int)(result - 1);
        v11 = *(&v18 + result);
        if ( (*(_QWORD *)v11 & 1) == 0 )
          goto LABEL_10;
        if ( (unsigned int)result <= 1 && (*(_QWORD *)v11 & 0x80u) != 0LL )
          break;
        if ( !(_DWORD)result )
          return result;
      }
      if ( (_DWORD)result )
        return result;
    }
LABEL_10:
    if ( a2 )
      MiFlushTbList(a2, (_KPROCESS *)v11);
    v13 = (volatile LONG *)&Process[1].IdealNode[12];
    if ( (a5 & 1) != 0 )
      MiUnlockWorkingSetExclusive((__int64)v13, a4, a3);
    else
      ExReleaseSpinLockShared(v13, a4);
    v14 = MmAccessFault(((unsigned __int64)v6 << 57) | 0x100000000000002LL, BugCheckParameter1, 0, 0LL);
    v15 = v14;
    if ( v14 < 0 )
    {
      MmFlushAllFilesystemPages(1LL);
      KeBugCheckEx(0x7Au, 1uLL, v15, (ULONG_PTR)Process, BugCheckParameter1);
    }
    v16 = (volatile LONG *)&Process[1].IdealNode[12];
    if ( (a5 & 1) != 0 )
      ExAcquireSpinLockExclusive(v16);
    else
      ExAcquireSpinLockShared(v16);
    v6 = v17;
  }
}
