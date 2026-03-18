/*
 * XREFs of VfAfterCallDriver @ 0x140740DEC
 * Callers:
 *     IovCallDriver @ 0x140734C6C (IovCallDriver.c)
 *     IovpCallDriverNoIrpTracking @ 0x140735520 (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x1407355F4 (IovpCallDriverWithStackBuffer.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140048A30 (KeAreInterruptsEnabled.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     RtlStringCbPrintfA @ 0x14016326C (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     VfUtilDbgPrint @ 0x14025A0F4 (VfUtilDbgPrint.c)
 *     VfBugCheckNoStackUsage @ 0x14025AF78 (VfBugCheckNoStackUsage.c)
 *     IovpCallDriver2 @ 0x14073FD1C (IovpCallDriver2.c)
 *     ViErrorDisplayDescription @ 0x140744384 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1407443D4 (ViErrorFinishReport.c)
 *     VfDeadlockAfterCallDriver @ 0x14074F4A0 (VfDeadlockAfterCallDriver.c)
 */

void __fastcall VfAfterCallDriver(__int64 a1, int *a2, unsigned int a3)
{
  __int64 v3; // rsi
  unsigned int v6; // r8d
  unsigned __int8 CurrentIrql; // bp
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int8 v10; // bp
  unsigned __int8 v11; // si
  __int64 v12; // rdi
  ULONG *v13; // rcx
  __int64 v14; // rax
  ULONG_PTR CombinedApcDisable; // rcx
  const void *v16; // rdi
  const void *v17; // rbx
  char pszDest[64]; // [rsp+30h] [rbp-68h] BYREF

  v3 = 0LL;
  if ( a1 )
  {
    if ( !(unsigned __int8)KeAreInterruptsEnabled() )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented((volatile signed __int32 *)&VfBugcheckTmpDataLock);
      }
      else if ( _interlockedbittestandset64((volatile signed __int32 *)&VfBugcheckTmpDataLock, 0LL) )
      {
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&VfBugcheckTmpDataLock);
      }
      *(_BYTE *)(a1 + 157) = CurrentIrql;
      *(_QWORD *)&VfBugcheckTmpData = 196LL;
      qword_140763038 = *(_QWORD *)(a1 + 48);
      BugCheckParameter1 = 193LL;
      qword_140763040 = 0LL;
      BugCheckParameter4 = 0LL;
      VfBugCheckNoStackUsage();
    }
    VfDeadlockAfterCallDriver(v6);
    if ( *(_BYTE *)(a1 + 156) != KeGetCurrentIrql() )
    {
      v10 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented((volatile signed __int32 *)&VfBugcheckTmpDataLock);
      }
      else if ( _interlockedbittestandset64((volatile signed __int32 *)&VfBugcheckTmpDataLock, 0LL) )
      {
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&VfBugcheckTmpDataLock);
      }
      qword_140763038 = *(_QWORD *)(a1 + 48);
      *(_BYTE *)(a1 + 157) = v10;
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
      v11 = KeGetCurrentIrql();
      v12 = 2LL;
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented((volatile signed __int32 *)&VfBugcheckTmpDataLock);
      }
      else if ( _interlockedbittestandset64((volatile signed __int32 *)&VfBugcheckTmpDataLock, 0LL) )
      {
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&VfBugcheckTmpDataLock);
      }
      *(_BYTE *)(a1 + 157) = v11;
      v13 = &VfBugcheckTmpData;
      v14 = 196LL;
      do
      {
        *(_QWORD *)v13 = v14++;
        v13 += 2;
        --v12;
      }
      while ( v12 );
      qword_140763038 = *(_QWORD *)(a1 + 48);
      CombinedApcDisable = KeGetCurrentThread()->CombinedApcDisable;
      BugCheckParameter4 = *(unsigned int *)(a1 + 188);
      qword_140763040 = CombinedApcDisable;
      VfBugCheckNoStackUsage();
    }
    if ( (MmVerifierData & 0x10) != 0 && (*(_DWORD *)(a1 + 152) & 2) != 0 && *a2 == 259 )
    {
      v16 = *(const void **)(a1 + 168);
      v17 = *(const void **)(a1 + 176);
      ViErrorDisplayDescription(775LL, v8, v9);
      if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", v17, v16) >= 0 )
        VfUtilDbgPrint(pszDest);
      ViErrorFinishReport(775LL, v17, v16, 0LL);
    }
    else if ( (*(_DWORD *)(a1 + 152) & 1) != 0 )
    {
      IovpCallDriver2(a1, a2, v9);
    }
  }
  else
  {
    VfDeadlockAfterCallDriver(a3);
  }
}
