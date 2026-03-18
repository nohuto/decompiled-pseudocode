/*
 * XREFs of PspSetContextThreadInternal @ 0x140517374
 * Callers:
 *     PspInitializeThunkContext @ 0x140459784 (PspInitializeThunkContext.c)
 *     PspWow64SetContextThread @ 0x140518F20 (PspWow64SetContextThread.c)
 *     NtSetContextThread @ 0x14067FE74 (NtSetContextThread.c)
 *     PsSetContextThread @ 0x14067FF84 (PsSetContextThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x140682394 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140013B70 (KiLeaveGuardedRegionUnsafe.c)
 *     KeWaitForGate @ 0x140097C98 (KeWaitForGate.c)
 *     KeInitializeGate @ 0x1400AF81C (KeInitializeGate.c)
 *     KeInsertQueueApc @ 0x1400C9FD0 (KeInsertQueueApc.c)
 *     KeInitializeApc @ 0x1400F0F58 (KeInitializeApc.c)
 *     KeVerifyContextRecord @ 0x1400F2FB0 (KeVerifyContextRecord.c)
 *     RtlGetExtendedContextLength @ 0x1400F4858 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1400F490C (RtlInitializeExtendedContext.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     PspGetSetContextSpecialApc @ 0x140166C60 (PspGetSetContextSpecialApc.c)
 *     __chkstk @ 0x140167650 (__chkstk.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     RtlpReadExtendedContext @ 0x140517E70 (RtlpReadExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x1405187CC (RtlpSanitizeContextFlags.c)
 *     EtwTiLogSetContextThread @ 0x1406A5D34 (EtwTiLogSetContextThread.c)
 */

__int64 __fastcall PspSetContextThreadInternal(__int64 a1, __int64 a2, char a3, char a4, char a5)
{
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v10; // rax
  __int64 result; // rax
  unsigned __int64 v12; // rax
  void *v13; // rsp
  int v14; // edx
  int v15; // ecx
  int v16; // ebx
  char v17; // dl
  __int64 v18; // rcx
  __int64 *v19; // [rsp+20h] [rbp-20h]
  unsigned int v20; // [rsp+40h] [rbp+0h] BYREF
  unsigned int v21; // [rsp+44h] [rbp+4h]
  __int64 v22; // [rsp+48h] [rbp+8h] BYREF
  _BYTE v23[64]; // [rsp+50h] [rbp+10h] BYREF
  __int64 v24; // [rsp+90h] [rbp+50h] BYREF
  __int64 v25; // [rsp+98h] [rbp+58h] BYREF
  char v26; // [rsp+A8h] [rbp+68h]
  char v27; // [rsp+A9h] [rbp+69h]
  int v28; // [rsp+ACh] [rbp+6Ch]
  _BYTE v29[24]; // [rsp+B0h] [rbp+70h] BYREF
  unsigned int *v30; // [rsp+C8h] [rbp+88h]

  v7 = a2;
  CurrentThread = KeGetCurrentThread();
  if ( a3 )
  {
    v10 = a2 + 48;
    if ( (unsigned __int64)(a2 + 48) >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    v20 = *(_DWORD *)v10;
  }
  else
  {
    v20 = *(_DWORD *)(a2 + 48);
  }
  LOBYTE(a2) = a3;
  result = RtlpSanitizeContextFlags(&v20, a2);
  if ( (int)result >= 0 )
  {
    if ( a3 )
    {
      result = RtlGetExtendedContextLength(v20);
      if ( (int)result < 0 )
        return result;
      v12 = v21 + 15LL;
      if ( v12 <= v21 )
        v12 = 0xFFFFFFFFFFFFFF0LL;
      v13 = alloca(v12 & 0xFFFFFFFFFFFFFFF0uLL);
      v30 = &v20;
      memset(&v20, 0, v21);
      result = RtlInitializeExtendedContext((__int64)v30, v20, &v22);
      if ( (int)result < 0 )
        return result;
      v30 = (unsigned int *)(v22 - 1232);
      LOBYTE(v14) = 1;
      result = RtlpReadExtendedContext(v15, v14, v22, v20, v7, 0LL);
      if ( (int)result < 0 )
        return result;
    }
    else
    {
      v30 = (unsigned int *)v7;
    }
    if ( a4 )
    {
      if ( (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
        return (unsigned int)-1073741776;
      if ( (struct _KTHREAD *)a1 == CurrentThread )
      {
        v16 = KeVerifyContextRecord((__int64)CurrentThread, (__int64)v30);
        if ( v16 < 0 )
          return (unsigned int)v16;
      }
    }
    v26 = a4;
    v17 = (v27 ^ (2 * a5)) & 2 ^ v27;
    if ( (struct _KTHREAD *)a1 == CurrentThread )
    {
      v24 = 1LL;
      v25 = a1;
      v27 = v17 & 0xFE;
      --CurrentThread->SpecialApcDisable;
      v19 = &v25;
      PspGetSetContextSpecialApc((__int64)v23, 0LL, 0LL, &v24);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    else
    {
      v27 = v17 | 1;
      KeInitializeGate((__int64)v29);
      KeInitializeApc((__int64)v23, a1, 0, (__int64)PspGetSetContextSpecialApc, 0LL, 0LL, 0, 0LL);
      if ( !(unsigned __int8)KeInsertQueueApc((__int64)v23, 1LL, a1, 2u) )
        return (unsigned int)-1073741823;
      KeWaitForGate((__int64)v29, 0);
    }
    v16 = v28;
    if ( v28 >= 0 && a3 == 1 && a4 == 1 )
    {
      LOBYTE(v18) = KeGetCurrentThread()->PreviousMode;
      EtwTiLogSetContextThread(v18, a1, v30, v20, v19);
    }
    return (unsigned int)v16;
  }
  return result;
}
