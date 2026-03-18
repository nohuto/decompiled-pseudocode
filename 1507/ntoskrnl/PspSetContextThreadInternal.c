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

__int64 __fastcall PspSetContextThreadInternal(__int64 a1, __int64 a2, char a3, char a4, char a5)
{
  __int64 v7; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 result; // rax
  char v11; // cl
  __int16 v12; // ax
  unsigned int *v13; // r9
  unsigned int v14; // r14d
  unsigned __int64 v15; // rax
  void *v16; // rsp
  int v17; // edx
  int v18; // ecx
  unsigned int v19; // [rsp+40h] [rbp+0h] BYREF
  unsigned int v20; // [rsp+44h] [rbp+4h]
  __int64 v21; // [rsp+48h] [rbp+8h] BYREF
  _BYTE v22[64]; // [rsp+50h] [rbp+10h] BYREF
  _QWORD v23[3]; // [rsp+90h] [rbp+50h] BYREF
  char v24; // [rsp+A8h] [rbp+68h]
  char v25; // [rsp+A9h] [rbp+69h]
  unsigned int v26; // [rsp+ACh] [rbp+6Ch]
  _DWORD v27[6]; // [rsp+B0h] [rbp+70h] BYREF
  unsigned int *v28; // [rsp+C8h] [rbp+88h]

  v7 = a2;
  CurrentThread = KeGetCurrentThread();
  if ( a3 )
  {
    v13 = (unsigned int *)(a2 + 48);
    if ( a2 + 48 >= MmUserProbeAddress )
      v13 = (unsigned int *)MmUserProbeAddress;
    v19 = *v13;
  }
  else
  {
    v19 = *(_DWORD *)(a2 + 48);
  }
  LOBYTE(a2) = a3;
  result = RtlpSanitizeContextFlags(&v19, a2);
  if ( (int)result >= 0 )
  {
    if ( a3 )
    {
      v14 = v19;
      result = RtlGetExtendedContextLength(v19);
      if ( (int)result < 0 )
        return result;
      v15 = v20 + 15LL;
      if ( v15 <= v20 )
        v15 = 0xFFFFFFFFFFFFFF0LL;
      v16 = alloca(v15 & 0xFFFFFFFFFFFFFFF0uLL);
      v28 = &v19;
      memset(&v19, 0, v20);
      result = RtlInitializeExtendedContext((__int64)v28, v14, &v21);
      if ( (int)result < 0 )
        return result;
      v28 = (unsigned int *)(v21 - 1232);
      LOBYTE(v17) = 1;
      result = RtlpReadExtendedContext(v18, v17, v21, v14, v7, 0LL);
      if ( (int)result < 0 )
        return result;
    }
    else
    {
      v28 = (unsigned int *)v7;
    }
    if ( !a4 )
      goto LABEL_10;
    if ( (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
      return 3221225520LL;
    if ( (struct _KTHREAD *)a1 != CurrentThread
      || (result = KeVerifyContextRecord((__int64)CurrentThread, (__int64)v28), (int)result >= 0) )
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
          return 3221225473LL;
        KeWaitForGate(v27, 0);
      }
      return v26;
    }
  }
  return result;
}
