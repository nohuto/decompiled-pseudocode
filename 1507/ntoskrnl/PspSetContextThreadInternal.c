/*
 * XREFs of PspSetContextThreadInternal @ 0x14044FFEC
 * Callers:
 *     PspInitializeThunkContext @ 0x14044FD4C (PspInitializeThunkContext.c)
 *     PspWowSetContextThread @ 0x14056AA80 (PspWowSetContextThread.c)
 *     NtSetContextThread @ 0x1406C3F3C (NtSetContextThread.c)
 *     PsSetContextThread @ 0x1406C4040 (PsSetContextThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x1406C6604 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14000CF3C (KeInsertQueueApc.c)
 *     KeVerifyContextRecord @ 0x14002055C (KeVerifyContextRecord.c)
 *     RtlGetExtendedContextLength @ 0x140020688 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x14002073C (RtlInitializeExtendedContext.c)
 *     KeInitializeApc @ 0x1400215A8 (KeInitializeApc.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     KeWaitForGate @ 0x140126304 (KeWaitForGate.c)
 *     KeInitializeGate @ 0x14012F290 (KeInitializeGate.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PspGetSetContextSpecialApc @ 0x14018B2A0 (PspGetSetContextSpecialApc.c)
 *     __chkstk @ 0x14018BCC0 (__chkstk.c)
 *     memset @ 0x140195A80 (memset.c)
 *     RtlpReadExtendedContext @ 0x14045047C (RtlpReadExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x140450724 (RtlpSanitizeContextFlags.c)
 */

int __fastcall PspSetContextThreadInternal(__int64 a1, CONTEXT *a2, char a3, char a4, char a5)
{
  CONTEXT *v7; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  int result; // eax
  char v11; // cl
  __int16 v12; // ax
  ULONG *p_ContextFlags; // r9
  ULONG v14; // r14d
  unsigned __int64 v15; // rax
  void *v16; // rsp
  int v17; // edx
  int v18; // ecx
  ULONG ContextFlags; // [rsp+40h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+44h] [rbp+4h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+48h] [rbp+8h] BYREF
  _BYTE v22[64]; // [rsp+50h] [rbp+10h] BYREF
  _QWORD v23[3]; // [rsp+90h] [rbp+50h] BYREF
  char v24; // [rsp+A8h] [rbp+68h]
  char v25; // [rsp+A9h] [rbp+69h]
  int v26; // [rsp+ACh] [rbp+6Ch]
  _DWORD v27[6]; // [rsp+B0h] [rbp+70h] BYREF
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
      v14 = ContextFlags;
      result = RtlGetExtendedContextLength(ContextFlags, &ContextLength);
      if ( result < 0 )
        return result;
      v15 = ContextLength + 15LL;
      if ( v15 <= ContextLength )
        v15 = 0xFFFFFFFFFFFFFF0LL;
      v16 = alloca(v15 & 0xFFFFFFFFFFFFFFF0uLL);
      Context = (PCONTEXT)&ContextFlags;
      memset(&ContextFlags, 0, ContextLength);
      result = RtlInitializeExtendedContext(Context, v14, &ContextEx);
      if ( result < 0 )
        return result;
      Context = (PCONTEXT)&ContextEx[-39].XState;
      LOBYTE(v17) = 1;
      result = RtlpReadExtendedContext(v18, v17, (_DWORD)ContextEx, v14, (__int64)v7, 0LL);
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
      v24 = a4;
      v11 = (v25 ^ (2 * a5)) & 2 ^ v25;
      if ( (struct _KTHREAD *)a1 == CurrentThread )
      {
        v23[0] = 1LL;
        v23[1] = a1;
        v25 = v11 & 0xFE;
        --CurrentThread->SpecialApcDisable;
        PspGetSetContextSpecialApc((__int64)v22, 0LL, 0LL, v23);
        v12 = CurrentThread->SpecialApcDisable + 1;
        CurrentThread->SpecialApcDisable = v12;
        if ( !v12
          && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      else
      {
        v25 = v11 | 1;
        KeInitializeGate((__int64)v27);
        KeInitializeApc((__int64)v22, a1, 0, (__int64)PspGetSetContextSpecialApc, 0LL, 0LL, 0, 0LL);
        if ( !KeInsertQueueApc((__int64)v22, 1LL, a1, 2) )
          return -1073741823;
        KeWaitForGate(v27, 0);
      }
      return v26;
    }
  }
  return result;
}
