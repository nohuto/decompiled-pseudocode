/*
 * XREFs of VfAfterCallDriver @ 0x1406BF888
 * Callers:
 *     IovCallDriver @ 0x1406B4C6C (IovCallDriver.c)
 *     IovpCallDriverNoIrpTracking @ 0x1406B5390 (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x1406B5404 (IovpCallDriverWithStackBuffer.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAreInterruptsEnabled @ 0x1400840D0 (KeAreInterruptsEnabled.c)
 *     VfBugCheckNoStackUsage @ 0x14020B8DC (VfBugCheckNoStackUsage.c)
 *     ViErrorReport1 @ 0x14020BBA4 (ViErrorReport1.c)
 *     IovpCallDriver2 @ 0x1406BED48 (IovpCallDriver2.c)
 *     VfDeadlockAfterCallDriver @ 0x1406CBE0C (VfDeadlockAfterCallDriver.c)
 */

__int64 __fastcall VfAfterCallDriver(__int64 a1, int *a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 result; // rax
  unsigned int v7; // r8d
  ULONG *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  ULONG_PTR CombinedApcDisable; // rcx

  v3 = 0LL;
  if ( !a1 )
    return VfDeadlockAfterCallDriver(a3);
  if ( !(unsigned __int8)KeAreInterruptsEnabled() )
  {
    *(_BYTE *)(a1 + 157) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
    *(_QWORD *)&VfBugcheckTmpData = 196LL;
    qword_1406E0038 = *(_QWORD *)(a1 + 48);
    BugCheckParameter1 = 193LL;
    qword_1406E0040 = 0LL;
    BugCheckParameter4 = 0LL;
    VfBugCheckNoStackUsage();
  }
  VfDeadlockAfterCallDriver(v7);
  if ( *(_BYTE *)(a1 + 156) != KeGetCurrentIrql() )
  {
    *(_BYTE *)(a1 + 157) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
    qword_1406E0038 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)&VfBugcheckTmpData = 201LL;
    BugCheckParameter1 = 18LL;
    do
    {
      *((_QWORD *)&VfBugcheckTmpData + v3 + 3) = *(unsigned __int8 *)(a1 + v3 + 156);
      ++v3;
    }
    while ( v3 < 2 );
    VfBugCheckNoStackUsage();
  }
  if ( *(_DWORD *)(a1 + 188) != KeGetCurrentThread()->WaitBlock[3].SpareLong )
  {
    *(_BYTE *)(a1 + 157) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
    v8 = &VfBugcheckTmpData;
    v9 = 196LL;
    v10 = 2LL;
    do
    {
      *(_QWORD *)v8 = v9++;
      v8 += 2;
      --v10;
    }
    while ( v10 );
    qword_1406E0038 = *(_QWORD *)(a1 + 48);
    CombinedApcDisable = KeGetCurrentThread()->CombinedApcDisable;
    BugCheckParameter4 = *(unsigned int *)(a1 + 188);
    qword_1406E0040 = CombinedApcDisable;
    VfBugCheckNoStackUsage();
  }
  if ( (MmVerifierData & 0x10) != 0 && (*(_DWORD *)(a1 + 152) & 2) != 0 && *a2 == 259 )
    return ViErrorReport1(0x307u, *(const void **)(a1 + 176), *(const void **)(a1 + 168));
  result = *(unsigned int *)(a1 + 152);
  if ( (result & 1) != 0 )
    return (__int64)IovpCallDriver2(a1, a2);
  return result;
}
