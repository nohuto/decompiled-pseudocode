/*
 * XREFs of IovpCompleteRequest4 @ 0x1407408D4
 * Callers:
 *     IovpLocalCompletionRoutine @ 0x1407358A8 (IovpLocalCompletionRoutine.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     RtlStringCbPrintfA @ 0x14016326C (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     VfUtilDbgPrint @ 0x14025A0F4 (VfUtilDbgPrint.c)
 *     MdlInvariantPostDriverCompletion @ 0x14025A994 (MdlInvariantPostDriverCompletion.c)
 *     ViErrorDisplayDescription @ 0x140744384 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1407443D4 (ViErrorFinishReport.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x14074AC7C (VfIrpDatabaseEntryReleaseLock.c)
 */

void __fastcall IovpCompleteRequest4(__int64 a1, __int64 a2, const void *a3, _QWORD *a4)
{
  int v5; // ebp
  __int64 v7; // rdi
  volatile signed __int32 *v8; // rcx
  unsigned __int8 CurrentIrql; // si
  _BYTE *v10; // rsi
  char pszDest[64]; // [rsp+30h] [rbp-78h] BYREF

  v5 = a2;
  if ( *a4 )
  {
    v7 = a4[1];
    v8 = (volatile signed __int32 *)(v7 + 8);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v8);
    }
    else if ( _interlockedbittestandset64(v8, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(v8);
    }
    *(_BYTE *)(v7 + 16) = CurrentIrql;
    if ( v5 != -1073741802 )
    {
      v10 = *(_BYTE **)(a1 + 184);
      if ( *(_BYTE *)(a1 + 67) <= *(_BYTE *)(a1 + 66)
        && (unsigned __int8)(*v10 - 3) <= 1u
        && *(_QWORD *)(a1 + 8)
        && (MmVerifierData & 0x6000) != 0 )
      {
        MdlInvariantPostDriverCompletion(v7, a1);
      }
      if ( *(_QWORD *)(v7 + 216) && *(int *)(v7 + 56) >= 0 && (v10[3] & 1) == 0 )
      {
        ViErrorDisplayDescription(552LL, a2, a3);
        if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a3, (const void *)a1) >= 0 )
          VfUtilDbgPrint(pszDest);
        ViErrorFinishReport(552LL, a3, a1, 0LL);
        *(_BYTE *)(*(_QWORD *)(a1 + 184) + 3LL) |= 1u;
      }
    }
    VfIrpDatabaseEntryReleaseLock(v7);
  }
}
