/*
 * XREFs of PspGetContextThreadInternal @ 0x140517A04
 * Callers:
 *     PspInitializeThunkContext @ 0x140459784 (PspInitializeThunkContext.c)
 *     NtCreateUserProcess @ 0x14045AB40 (NtCreateUserProcess.c)
 *     NtGetContextThread @ 0x1404DB588 (NtGetContextThread.c)
 *     PspWow64GetContextThread @ 0x140518BB8 (PspWow64GetContextThread.c)
 *     PspWow64SetContextThread @ 0x140518F20 (PspWow64SetContextThread.c)
 *     PsGetContextThread @ 0x14067FF6C (PsGetContextThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x140682394 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140013B70 (KiLeaveGuardedRegionUnsafe.c)
 *     KeWaitForGate @ 0x140097C98 (KeWaitForGate.c)
 *     KeInitializeGate @ 0x1400AF81C (KeInitializeGate.c)
 *     KeInsertQueueApc @ 0x1400C9FD0 (KeInsertQueueApc.c)
 *     KeInitializeApc @ 0x1400F0F58 (KeInitializeApc.c)
 *     RtlGetExtendedContextLength @ 0x1400F4858 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1400F490C (RtlInitializeExtendedContext.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     PspGetSetContextSpecialApc @ 0x140166C60 (PspGetSetContextSpecialApc.c)
 *     __chkstk @ 0x140167650 (__chkstk.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     RtlpReadExtendedContext @ 0x140517E70 (RtlpReadExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x1405187CC (RtlpSanitizeContextFlags.c)
 *     RtlpWriteExtendedContext @ 0x140518E70 (RtlpWriteExtendedContext.c)
 */

__int64 __fastcall PspGetContextThreadInternal(__int64 a1, __int64 a2, char a3, char a4, char a5)
{
  __int64 v9; // rdx
  struct _KTHREAD *CurrentThread; // r15
  __int64 result; // rax
  __int64 v12; // rdi
  char v13; // dl
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  void *v17; // rsp
  void *v18; // rsp
  int v19; // ecx
  unsigned int v20; // [rsp+40h] [rbp+0h] BYREF
  unsigned int v21; // [rsp+44h] [rbp+4h]
  __int64 v22; // [rsp+48h] [rbp+8h] BYREF
  _QWORD v23[48]; // [rsp+50h] [rbp+10h] BYREF
  _BYTE v24[24]; // [rsp+1D0h] [rbp+190h] BYREF

  memset(v23, 0, sizeof(v23));
  CurrentThread = KeGetCurrentThread();
  if ( a3 )
  {
    v14 = a2 + 48;
    if ( (unsigned __int64)(a2 + 48) >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    v20 = *(_DWORD *)v14;
  }
  else
  {
    v20 = *(_DWORD *)(a2 + 48);
  }
  LOBYTE(v9) = a3;
  result = RtlpSanitizeContextFlags(&v20, v9);
  if ( (int)result >= 0 )
  {
    if ( a3 )
    {
      result = RtlGetExtendedContextLength(v20);
      if ( (int)result < 0 )
        return result;
      v15 = v21 + 15LL;
      if ( v15 <= v21 )
        v15 = 0xFFFFFFFFFFFFFF0LL;
      v16 = v15 & 0xFFFFFFFFFFFFFFF0uLL;
      v17 = alloca(v16);
      v18 = alloca(v16);
      v23[15] = &v20;
      result = RtlInitializeExtendedContext((__int64)&v20, v20, &v22);
      if ( (int)result < 0 )
        return result;
      v12 = v22;
      v23[15] = v22 - 1232;
      result = RtlpReadExtendedContext(v19, 0, v22, v20, a2, (__int64)v24);
      if ( (int)result < 0 )
        return result;
    }
    else
    {
      v23[15] = a2;
      v12 = a2 + 1232;
    }
    if ( a4 && (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
      return 3221225520LL;
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
        return 3221225473LL;
      KeWaitForGate((__int64)&v23[12], 0);
    }
    result = HIDWORD(v23[11]);
    if ( v23[11] >= 0 && v23[15] != a2 )
      return RtlpWriteExtendedContext(v23[15], (int)a2 + 1232, (unsigned int)v24, *(_DWORD *)(v23[15] + 48LL), v12);
  }
  return result;
}
