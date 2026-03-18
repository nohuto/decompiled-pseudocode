/*
 * XREFs of PspSetContextThreadInternal @ 0x1403EFC88
 * Callers:
 *     PspInitializeThunkContext @ 0x14044603C (PspInitializeThunkContext.c)
 *     PspWow64SetContextThread @ 0x1404A4990 (PspWow64SetContextThread.c)
 *     NtSetContextThread @ 0x140641A1C (NtSetContextThread.c)
 *     PsSetContextThread @ 0x140641B20 (PsSetContextThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x140643914 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     KeVerifyContextRecord @ 0x14002B21C (KeVerifyContextRecord.c)
 *     RtlGetExtendedContextLength @ 0x14002B348 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x14002B3FC (RtlInitializeExtendedContext.c)
 *     KeInitializeApc @ 0x14002C320 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1400313A0 (KeInsertQueueApc.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeWaitForGate @ 0x1400DEBE8 (KeWaitForGate.c)
 *     KeInitializeGate @ 0x1400EF318 (KeInitializeGate.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PspGetSetContextSpecialApc @ 0x14015B7C0 (PspGetSetContextSpecialApc.c)
 *     __chkstk @ 0x14015C1E0 (__chkstk.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     RtlpReadExtendedContext @ 0x1403F00B0 (RtlpReadExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x1403F035C (RtlpSanitizeContextFlags.c)
 */

__int64 __fastcall PspSetContextThreadInternal(__int64 a1, __int64 a2, char a3, char a4, char a5)
{
  __int64 v7; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 result; // rax
  char v11; // dl
  unsigned int *v12; // r9
  unsigned int v13; // r14d
  unsigned __int64 v14; // rax
  void *v15; // rsp
  int v16; // edx
  int v17; // ecx
  unsigned int v18; // [rsp+40h] [rbp+0h] BYREF
  unsigned int v19; // [rsp+44h] [rbp+4h]
  __int64 v20; // [rsp+48h] [rbp+8h] BYREF
  _BYTE v21[64]; // [rsp+50h] [rbp+10h] BYREF
  _QWORD v22[3]; // [rsp+90h] [rbp+50h] BYREF
  char v23; // [rsp+A8h] [rbp+68h]
  char v24; // [rsp+A9h] [rbp+69h]
  unsigned int v25; // [rsp+ACh] [rbp+6Ch]
  _BYTE v26[24]; // [rsp+B0h] [rbp+70h] BYREF
  unsigned int *v27; // [rsp+C8h] [rbp+88h]

  v7 = a2;
  CurrentThread = KeGetCurrentThread();
  if ( a3 )
  {
    v12 = (unsigned int *)(a2 + 48);
    if ( a2 + 48 >= MmUserProbeAddress )
      v12 = (unsigned int *)MmUserProbeAddress;
    v18 = *v12;
  }
  else
  {
    v18 = *(_DWORD *)(a2 + 48);
  }
  LOBYTE(a2) = a3;
  result = RtlpSanitizeContextFlags(&v18, a2);
  if ( (int)result >= 0 )
  {
    if ( a3 )
    {
      v13 = v18;
      result = RtlGetExtendedContextLength(v18);
      if ( (int)result < 0 )
        return result;
      v14 = v19 + 15LL;
      if ( v14 <= v19 )
        v14 = 0xFFFFFFFFFFFFFF0LL;
      v15 = alloca(v14 & 0xFFFFFFFFFFFFFFF0uLL);
      v27 = &v18;
      memset(&v18, 0, v19);
      result = RtlInitializeExtendedContext((__int64)v27, v13, &v20);
      if ( (int)result < 0 )
        return result;
      v27 = (unsigned int *)(v20 - 1232);
      LOBYTE(v16) = 1;
      result = RtlpReadExtendedContext(v17, v16, v20, v13, v7, 0LL);
      if ( (int)result < 0 )
        return result;
    }
    else
    {
      v27 = (unsigned int *)v7;
    }
    if ( !a4 )
      goto LABEL_10;
    if ( (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
      return 3221225520LL;
    if ( (struct _KTHREAD *)a1 != CurrentThread
      || (result = KeVerifyContextRecord((__int64)CurrentThread, (__int64)v27), (int)result >= 0) )
    {
LABEL_10:
      v23 = a4;
      v11 = (v24 ^ (2 * a5)) & 2 ^ v24;
      if ( (struct _KTHREAD *)a1 == CurrentThread )
      {
        v22[0] = 1LL;
        v22[1] = a1;
        v24 = v11 & 0xFE;
        --CurrentThread->SpecialApcDisable;
        PspGetSetContextSpecialApc((__int64)v21, 0LL, 0LL, v22);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      }
      else
      {
        v24 = v11 | 1;
        KeInitializeGate((__int64)v26);
        KeInitializeApc((__int64)v21, a1, 0, (__int64)PspGetSetContextSpecialApc, 0LL, 0LL, 0, 0LL);
        if ( !(unsigned __int8)KeInsertQueueApc((__int64)v21, 1LL, a1, 2) )
          return 3221225473LL;
        KeWaitForGate((__int64)v26, 0);
      }
      return v25;
    }
  }
  return result;
}
