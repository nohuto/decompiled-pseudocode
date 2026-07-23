/*
 * XREFs of PspGetContextThreadInternal @ 0x140450184
 * Callers:
 *     PspInitializeThunkContext @ 0x14044FD4C (PspInitializeThunkContext.c)
 *     NtCreateUserProcess @ 0x140509350 (NtCreateUserProcess.c)
 *     PspWowGetContextThread @ 0x140530EB8 (PspWowGetContextThread.c)
 *     NtGetContextThread @ 0x140551004 (NtGetContextThread.c)
 *     PspWowSetContextThread @ 0x14056AA80 (PspWowSetContextThread.c)
 *     PsGetContextThread @ 0x1406C4028 (PsGetContextThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x1406C6604 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14000CF3C (KeInsertQueueApc.c)
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
 *     RtlpWriteExtendedContext @ 0x14053112C (RtlpWriteExtendedContext.c)
 */

NTSTATUS __fastcall PspGetContextThreadInternal(__int64 a1, __int64 a2, char a3, char a4, char a5)
{
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  NTSTATUS result; // eax
  PCONTEXT_EX v11; // rsi
  char v12; // cl
  __int16 v13; // ax
  ULONG *v14; // rcx
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

  v7 = a2;
  memset(v23, 0, sizeof(v23));
  CurrentThread = KeGetCurrentThread();
  if ( a3 )
  {
    v14 = (ULONG *)(a2 + 48);
    if ( a2 + 48 >= MmUserProbeAddress )
      v14 = (ULONG *)MmUserProbeAddress;
    ContextFlags = *v14;
  }
  else
  {
    ContextFlags = *(_DWORD *)(a2 + 48);
  }
  LOBYTE(a2) = a3;
  result = RtlpSanitizeContextFlags(&ContextFlags, a2);
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
      v11 = ContextEx;
      v23[15] = (char *)ContextEx - 1232;
      result = RtlpReadExtendedContext(v19, 0, (_DWORD)ContextEx, ContextFlags, v7, (__int64)v24);
      if ( result < 0 )
        return result;
    }
    else
    {
      v23[15] = v7;
      v11 = (PCONTEXT_EX)(v7 + 1232);
    }
    if ( a4 && (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
    {
      return -1073741776;
    }
    else
    {
      LOBYTE(v23[11]) = a4;
      v12 = (BYTE1(v23[11]) ^ (2 * a5)) & 2 ^ BYTE1(v23[11]);
      if ( (struct _KTHREAD *)a1 == CurrentThread )
      {
        v23[8] = 0LL;
        v23[9] = a1;
        BYTE1(v23[11]) = v12 & 0xFE;
        --CurrentThread->SpecialApcDisable;
        PspGetSetContextSpecialApc((__int64)v23, 0LL, 0LL, &v23[8]);
        v13 = CurrentThread->SpecialApcDisable + 1;
        CurrentThread->SpecialApcDisable = v13;
        if ( !v13
          && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      else
      {
        BYTE1(v23[11]) = v12 | 1;
        KeInitializeGate((__int64)&v23[12]);
        KeInitializeApc((__int64)v23, a1, 0, (__int64)PspGetSetContextSpecialApc, 0LL, 0LL, 0, 0LL);
        if ( !KeInsertQueueApc((__int64)v23, 0LL, a1, 2) )
          return -1073741823;
        KeWaitForGate(&v23[12], 0);
      }
      result = HIDWORD(v23[11]);
      if ( v23[11] >= 0 && v23[15] != v7 )
        return RtlpWriteExtendedContext(
                 v23[15],
                 (int)v7 + 1232,
                 (unsigned int)v24,
                 *(_DWORD *)(v23[15] + 48LL),
                 (__int64)v11);
    }
  }
  return result;
}
