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

int __fastcall PspSetContextThreadInternal(__int64 a1, CONTEXT *a2, char a3, char a4, char a5)
{
  CONTEXT *v7; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  int result; // eax
  char v11; // dl
  ULONG *p_ContextFlags; // r9
  ULONG v13; // r14d
  unsigned __int64 v14; // rax
  void *v15; // rsp
  int v16; // edx
  int v17; // ecx
  ULONG ContextFlags; // [rsp+40h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+44h] [rbp+4h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+48h] [rbp+8h] BYREF
  _BYTE v21[64]; // [rsp+50h] [rbp+10h] BYREF
  _QWORD v22[3]; // [rsp+90h] [rbp+50h] BYREF
  char v23; // [rsp+A8h] [rbp+68h]
  char v24; // [rsp+A9h] [rbp+69h]
  int v25; // [rsp+ACh] [rbp+6Ch]
  _BYTE v26[24]; // [rsp+B0h] [rbp+70h] BYREF
  PCONTEXT Context; // [rsp+C8h] [rbp+88h]

  v7 = a2;
  CurrentThread = KeGetCurrentThread();
  if ( a3 )
  {
    p_ContextFlags = &a2->ContextFlags;
    if ( (unsigned __int64)&a2->ContextFlags >= MmUserProbeAddress )
      p_ContextFlags = (ULONG *)MmUserProbeAddress;
    ContextFlags = *p_ContextFlags;
  }
  else
  {
    ContextFlags = a2->ContextFlags;
  }
  LOBYTE(a2) = a3;
  result = RtlpSanitizeContextFlags(&ContextFlags, a2);
  if ( result >= 0 )
  {
    if ( a3 )
    {
      v13 = ContextFlags;
      result = RtlGetExtendedContextLength(ContextFlags, &ContextLength);
      if ( result < 0 )
        return result;
      v14 = ContextLength + 15LL;
      if ( v14 <= ContextLength )
        v14 = 0xFFFFFFFFFFFFFF0LL;
      v15 = alloca(v14 & 0xFFFFFFFFFFFFFFF0uLL);
      Context = (PCONTEXT)&ContextFlags;
      memset(&ContextFlags, 0, ContextLength);
      result = RtlInitializeExtendedContext(Context, v13, &ContextEx);
      if ( result < 0 )
        return result;
      Context = (PCONTEXT)&ContextEx[-39].XState;
      LOBYTE(v16) = 1;
      result = RtlpReadExtendedContext(v17, v16, (_DWORD)ContextEx, v13, (__int64)v7, 0LL);
      if ( result < 0 )
        return result;
    }
    else
    {
      Context = v7;
    }
    if ( !a4 )
      goto LABEL_10;
    if ( (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
      return -1073741776;
    if ( (struct _KTHREAD *)a1 != CurrentThread
      || (result = KeVerifyContextRecord((__int64)CurrentThread, (__int64)Context), result >= 0) )
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
          return -1073741823;
        KeWaitForGate((__int64)v26, 0);
      }
      return v25;
    }
  }
  return result;
}
