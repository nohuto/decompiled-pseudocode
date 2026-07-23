/*
 * XREFs of PspGetContextThreadInternal @ 0x1404FADF4
 * Callers:
 *     PspInitializeThunkContext @ 0x140458654 (PspInitializeThunkContext.c)
 *     NtCreateUserProcess @ 0x140459A10 (NtCreateUserProcess.c)
 *     NtGetContextThread @ 0x1404BEB8C (NtGetContextThread.c)
 *     PspWow64GetContextThread @ 0x1404FBFA8 (PspWow64GetContextThread.c)
 *     PspWow64SetContextThread @ 0x1404FC310 (PspWow64SetContextThread.c)
 *     PsGetContextThread @ 0x140680050 (PsGetContextThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x140682478 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeWaitForGate @ 0x140097498 (KeWaitForGate.c)
 *     KeInitializeGate @ 0x1400ADD84 (KeInitializeGate.c)
 *     KeInsertQueueApc @ 0x1400C7E70 (KeInsertQueueApc.c)
 *     KeInitializeApc @ 0x1400EEDA8 (KeInitializeApc.c)
 *     RtlGetExtendedContextLength @ 0x1400F26A8 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1400F275C (RtlInitializeExtendedContext.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PspGetSetContextSpecialApc @ 0x1401671D0 (PspGetSetContextSpecialApc.c)
 *     __chkstk @ 0x140167BC0 (__chkstk.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     RtlpReadExtendedContext @ 0x1404FB260 (RtlpReadExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x1404FBBBC (RtlpSanitizeContextFlags.c)
 *     RtlpWriteExtendedContext @ 0x1404FC260 (RtlpWriteExtendedContext.c)
 */

NTSTATUS __fastcall PspGetContextThreadInternal(__int64 a1, __int64 a2, char a3, char a4, char a5)
{
  __int64 v9; // rdx
  struct _KTHREAD *CurrentThread; // r15
  NTSTATUS result; // eax
  PCONTEXT_EX v12; // rdi
  char v13; // dl
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  void *v17; // rsp
  void *v18; // rsp
  int v19; // ecx
  ULONG ContextFlags; // [rsp+40h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+44h] [rbp+4h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+48h] [rbp+8h] BYREF
  _QWORD v23[48]; // [rsp+50h] [rbp+10h] BYREF
  _BYTE v24[24]; // [rsp+1D0h] [rbp+190h] BYREF

  memset(v23, 0, sizeof(v23));
  CurrentThread = KeGetCurrentThread();
  if ( a3 )
  {
    v14 = a2 + 48;
    if ( (unsigned __int64)(a2 + 48) >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    ContextFlags = *(_DWORD *)v14;
  }
  else
  {
    ContextFlags = *(_DWORD *)(a2 + 48);
  }
  LOBYTE(v9) = a3;
  result = RtlpSanitizeContextFlags(&ContextFlags, v9);
  if ( result >= 0 )
  {
    if ( a3 )
    {
      result = RtlGetExtendedContextLength(ContextFlags, &ContextLength);
      if ( result < 0 )
        return result;
      v15 = ContextLength + 15LL;
      if ( v15 <= ContextLength )
        v15 = 0xFFFFFFFFFFFFFF0LL;
      v16 = v15 & 0xFFFFFFFFFFFFFFF0uLL;
      v17 = alloca(v16);
      v18 = alloca(v16);
      v23[15] = &ContextFlags;
      result = RtlInitializeExtendedContext((PCONTEXT)&ContextFlags, ContextFlags, &ContextEx);
      if ( result < 0 )
        return result;
      v12 = ContextEx;
      v23[15] = (char *)ContextEx - 1232;
      result = RtlpReadExtendedContext(v19, 0, (_DWORD)ContextEx, ContextFlags, a2, (__int64)v24);
      if ( result < 0 )
        return result;
    }
    else
    {
      v23[15] = a2;
      v12 = (PCONTEXT_EX)(a2 + 1232);
    }
    if ( a4 && (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
      return -1073741776;
    LOBYTE(v23[11]) = a4;
    v13 = (BYTE1(v23[11]) ^ (2 * a5)) & 2 ^ BYTE1(v23[11]);
    if ( (struct _KTHREAD *)a1 == CurrentThread )
    {
      v23[8] = 0LL;
      v23[9] = a1;
      BYTE1(v23[11]) = v13 & 0xFE;
      --CurrentThread->SpecialApcDisable;
      PspGetSetContextSpecialApc((__int64)v23, 0LL, 0LL, &v23[8]);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    else
    {
      BYTE1(v23[11]) = v13 | 1;
      KeInitializeGate((__int64)&v23[12]);
      KeInitializeApc((__int64)v23, a1, 0, (__int64)PspGetSetContextSpecialApc, 0LL, 0LL, 0, 0LL);
      if ( !(unsigned __int8)KeInsertQueueApc((__int64)v23, 0LL, a1, 2u) )
        return -1073741823;
      KeWaitForGate((__int64)&v23[12], 0);
    }
    result = HIDWORD(v23[11]);
    if ( v23[11] >= 0 && v23[15] != a2 )
      return RtlpWriteExtendedContext(
               v23[15],
               (int)a2 + 1232,
               (unsigned int)v24,
               *(_DWORD *)(v23[15] + 48LL),
               (__int64)v12);
  }
  return result;
}
