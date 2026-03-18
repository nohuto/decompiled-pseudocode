/*
 * XREFs of MiMakeSystemAddressValid @ 0x140015DAC
 * Callers:
 *     MiCopyToUserVa @ 0x140014B50 (MiCopyToUserVa.c)
 *     MiDeleteVad @ 0x1400288D0 (MiDeleteVad.c)
 *     MiGetNextPageTable @ 0x1400438F0 (MiGetNextPageTable.c)
 *     MiWriteDemandZeroPte @ 0x14007BCA0 (MiWriteDemandZeroPte.c)
 *     MiCaptureDeleteHierarchy @ 0x1400961C0 (MiCaptureDeleteHierarchy.c)
 *     MiSplitPrivatePage @ 0x1400988C0 (MiSplitPrivatePage.c)
 *     MiMakeProtoLeafValid @ 0x140098CDC (MiMakeProtoLeafValid.c)
 *     MiGetWorkingSetInfoList @ 0x1400B79E0 (MiGetWorkingSetInfoList.c)
 *     NtLockVirtualMemory @ 0x1400BAEC8 (NtLockVirtualMemory.c)
 *     MiBuildForkPte @ 0x1400BCCA0 (MiBuildForkPte.c)
 *     MiProtectPrivateMemory @ 0x1400E1040 (MiProtectPrivateMemory.c)
 *     MiUpdateForkMaps @ 0x140109E0C (MiUpdateForkMaps.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14010E214 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x140146848 (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1401E15E8 (MiUpdatePrivateDemandZeroView.c)
 *     MiCreatePageTablesForPhysicalRange @ 0x1401EFE1C (MiCreatePageTablesForPhysicalRange.c)
 *     MiInsertLargeUserMapping @ 0x1401F566C (MiInsertLargeUserMapping.c)
 *     MiWriteLargePde @ 0x1401F5FA8 (MiWriteLargePde.c)
 *     MiHandleForkTransitionPte @ 0x1401F71F0 (MiHandleForkTransitionPte.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x14002E930 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002EA30 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     MiIsAddressValid @ 0x140037540 (MiIsAddressValid.c)
 *     MmAccessFault @ 0x14003E7A0 (MmAccessFault.c)
 *     MiFlushTbList @ 0x1400E0490 (MiFlushTbList.c)
 *     ExReleaseSpinLockShared @ 0x1400EA240 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400EB1D0 (ExAcquireSpinLockShared.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     MmFlushAllFilesystemPages @ 0x1401E5DD4 (MmFlushAllFilesystemPages.c)
 */

__int64 __fastcall MiMakeSystemAddressValid(
        ULONG_PTR BugCheckParameter4,
        __int64 a2,
        unsigned int a3,
        KIRQL a4,
        char a5)
{
  _KPROCESS *Process; // r13
  __int64 result; // rax
  __int64 v11; // rdx
  ULONG_PTR v12; // rbp
  unsigned __int16 *v13; // rcx
  volatile LONG *SharedVm; // rax
  int v15; // eax
  ULONG_PTR v16; // rbx
  volatile LONG *v17; // rbx
  __int64 v18; // rdx

  Process = KeGetCurrentThread()->ApcState.Process;
  result = MiIsAddressValid(BugCheckParameter4, a2);
  if ( !(_BYTE)result )
  {
    v12 = ((unsigned __int64)a3 << 57) | 0x100000000000002LL;
    do
    {
      if ( a2 )
        MiFlushTbList(a2);
      v13 = &Process[1].IdealNode[12];
      if ( (a5 & 1) != 0 )
      {
        LOBYTE(v11) = a4;
        MiUnlockWorkingSetExclusive(v13, v11);
      }
      else
      {
        SharedVm = (volatile LONG *)MiGetSharedVm(v13);
        ExReleaseSpinLockShared(SharedVm, a4);
      }
      v15 = MmAccessFault(v12, BugCheckParameter4);
      v16 = v15;
      if ( v15 < 0 )
      {
        MmFlushAllFilesystemPages(1LL);
        KeBugCheckEx(0x7Au, 1uLL, v16, (ULONG_PTR)Process, BugCheckParameter4);
      }
      v17 = (volatile LONG *)MiGetSharedVm(&Process[1].IdealNode[12]);
      if ( (a5 & 1) != 0 )
      {
        ExAcquireSpinLockExclusive(v17);
        *((_DWORD *)v17 + 1) = 0;
      }
      else
      {
        ExAcquireSpinLockShared(v17);
        if ( *((_DWORD *)v17 + 1) )
          _InterlockedExchange(v17 + 1, 0);
      }
      result = MiIsAddressValid(BugCheckParameter4, v18);
    }
    while ( !(_BYTE)result );
  }
  return result;
}
