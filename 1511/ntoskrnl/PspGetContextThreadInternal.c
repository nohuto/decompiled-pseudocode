/*
 * XREFs of PspGetContextThreadInternal @ 0x1403EFE2C
 * Callers:
 *     PspInitializeThunkContext @ 0x14044603C (PspInitializeThunkContext.c)
 *     NtCreateUserProcess @ 0x14044741C (NtCreateUserProcess.c)
 *     PspWow64SetContextThread @ 0x1404A4990 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1404A4C94 (PspWow64GetContextThread.c)
 *     NtGetContextThread @ 0x1404B4944 (NtGetContextThread.c)
 *     PsGetContextThread @ 0x140641B08 (PsGetContextThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x140643914 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
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
 *     RtlpWriteExtendedContext @ 0x1404A4F08 (RtlpWriteExtendedContext.c)
 */

__int64 __fastcall PspGetContextThreadInternal(__int64 a1, __int64 a2, char a3, char a4, char a5)
{
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // r15
  __int64 result; // rax
  __int64 v11; // rdi
  char v12; // dl
  unsigned int *v13; // rcx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  void *v16; // rsp
  void *v17; // rsp
  int v18; // ecx
  unsigned int v19; // [rsp+40h] [rbp+0h] BYREF
  unsigned int v20; // [rsp+44h] [rbp+4h]
  __int64 v21; // [rsp+48h] [rbp+8h] BYREF
  _QWORD v22[48]; // [rsp+50h] [rbp+10h] BYREF
  _BYTE v23[24]; // [rsp+1D0h] [rbp+190h] BYREF

  v7 = a2;
  memset(v22, 0, sizeof(v22));
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
      result = RtlGetExtendedContextLength(v19);
      if ( (int)result < 0 )
        return result;
      v14 = v20 + 15LL;
      if ( v14 <= v20 )
        v14 = 0xFFFFFFFFFFFFFF0LL;
      v15 = v14 & 0xFFFFFFFFFFFFFFF0uLL;
      v16 = alloca(v15);
      v17 = alloca(v15);
      v22[15] = &v19;
      result = RtlInitializeExtendedContext((__int64)&v19, v19, &v21);
      if ( (int)result < 0 )
        return result;
      v11 = v21;
      v22[15] = v21 - 1232;
      result = RtlpReadExtendedContext(v18, 0, v21, v19, v7, (__int64)v23);
      if ( (int)result < 0 )
        return result;
    }
    else
    {
      v22[15] = v7;
      v11 = v7 + 1232;
    }
    if ( a4 && (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
    {
      return 3221225520LL;
    }
    else
    {
      LOBYTE(v22[11]) = a4;
      v12 = (BYTE1(v22[11]) ^ (2 * a5)) & 2 ^ BYTE1(v22[11]);
      if ( (struct _KTHREAD *)a1 == CurrentThread )
      {
        v22[8] = 0LL;
        v22[9] = a1;
        BYTE1(v22[11]) = v12 & 0xFE;
        --CurrentThread->SpecialApcDisable;
        PspGetSetContextSpecialApc((__int64)v22, 0LL, 0LL, &v22[8]);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      }
      else
      {
        BYTE1(v22[11]) = v12 | 1;
        KeInitializeGate((__int64)&v22[12]);
        KeInitializeApc((__int64)v22, a1, 0, (__int64)PspGetSetContextSpecialApc, 0LL, 0LL, 0, 0LL);
        if ( !(unsigned __int8)KeInsertQueueApc((__int64)v22, 0LL, a1, 2) )
          return 3221225473LL;
        KeWaitForGate((__int64)&v22[12], 0);
      }
      result = HIDWORD(v22[11]);
      if ( v22[11] >= 0 && v22[15] != v7 )
        return RtlpWriteExtendedContext(v22[15], (int)v7 + 1232, (unsigned int)v23, *(_DWORD *)(v22[15] + 48LL), v11);
    }
  }
  return result;
}
