/*
 * XREFs of PspSetContextThreadInternal @ 0x1404FA764
 * Callers:
 *     PspInitializeThunkContext @ 0x140458654 (PspInitializeThunkContext.c)
 *     PspWow64SetContextThread @ 0x1404FC310 (PspWow64SetContextThread.c)
 *     NtSetContextThread @ 0x14067FF58 (NtSetContextThread.c)
 *     PsSetContextThread @ 0x140680068 (PsSetContextThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x140682478 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeWaitForGate @ 0x140097498 (KeWaitForGate.c)
 *     KeInitializeGate @ 0x1400ADD84 (KeInitializeGate.c)
 *     KeInsertQueueApc @ 0x1400C7E70 (KeInsertQueueApc.c)
 *     KeInitializeApc @ 0x1400EEDA8 (KeInitializeApc.c)
 *     KeVerifyContextRecord @ 0x1400F0E00 (KeVerifyContextRecord.c)
 *     RtlGetExtendedContextLength @ 0x1400F26A8 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1400F275C (RtlInitializeExtendedContext.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PspGetSetContextSpecialApc @ 0x1401671D0 (PspGetSetContextSpecialApc.c)
 *     __chkstk @ 0x140167BC0 (__chkstk.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     RtlpReadExtendedContext @ 0x1404FB260 (RtlpReadExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x1404FBBBC (RtlpSanitizeContextFlags.c)
 *     EtwTiLogSetContextThread @ 0x1406A5E6C (EtwTiLogSetContextThread.c)
 */

NTSTATUS __fastcall PspSetContextThreadInternal(__int64 a1, CONTEXT *a2, char a3, char a4, char a5)
{
  CONTEXT *v7; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 p_ContextFlags; // rax
  NTSTATUS result; // eax
  unsigned __int64 v12; // rax
  void *v13; // rsp
  int v14; // edx
  int v15; // ecx
  int v16; // ebx
  char v17; // dl
  __int64 v18; // rcx
  __int64 *v19; // [rsp+20h] [rbp-20h]
  ULONG ContextFlags; // [rsp+40h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+44h] [rbp+4h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+48h] [rbp+8h] BYREF
  _BYTE v23[64]; // [rsp+50h] [rbp+10h] BYREF
  __int64 v24; // [rsp+90h] [rbp+50h] BYREF
  __int64 v25; // [rsp+98h] [rbp+58h] BYREF
  char v26; // [rsp+A8h] [rbp+68h]
  char v27; // [rsp+A9h] [rbp+69h]
  int v28; // [rsp+ACh] [rbp+6Ch]
  _BYTE v29[24]; // [rsp+B0h] [rbp+70h] BYREF
  PCONTEXT Context; // [rsp+C8h] [rbp+88h]

  v7 = a2;
  CurrentThread = KeGetCurrentThread();
  if ( a3 )
  {
    p_ContextFlags = (__int64)&a2->ContextFlags;
    if ( (unsigned __int64)&a2->ContextFlags >= 0x7FFFFFFF0000LL )
      p_ContextFlags = 0x7FFFFFFF0000LL;
    ContextFlags = *(_DWORD *)p_ContextFlags;
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
      result = RtlGetExtendedContextLength(ContextFlags, &ContextLength);
      if ( result < 0 )
        return result;
      v12 = ContextLength + 15LL;
      if ( v12 <= ContextLength )
        v12 = 0xFFFFFFFFFFFFFF0LL;
      v13 = alloca(v12 & 0xFFFFFFFFFFFFFFF0uLL);
      Context = (PCONTEXT)&ContextFlags;
      memset(&ContextFlags, 0, ContextLength);
      result = RtlInitializeExtendedContext(Context, ContextFlags, &ContextEx);
      if ( result < 0 )
        return result;
      Context = (PCONTEXT)&ContextEx[-39].XState;
      LOBYTE(v14) = 1;
      result = RtlpReadExtendedContext(v15, v14, (_DWORD)ContextEx, ContextFlags, (__int64)v7, 0LL);
      if ( result < 0 )
        return result;
    }
    else
    {
      Context = v7;
    }
    if ( a4 )
    {
      if ( (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
        return -1073741776;
      if ( (struct _KTHREAD *)a1 == CurrentThread )
      {
        v16 = KeVerifyContextRecord((__int64)CurrentThread, (__int64)Context);
        if ( v16 < 0 )
          return v16;
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
        return -1073741823;
      KeWaitForGate((__int64)v29, 0);
    }
    v16 = v28;
    if ( v28 >= 0 && a3 == 1 && a4 == 1 )
    {
      LOBYTE(v18) = KeGetCurrentThread()->PreviousMode;
      EtwTiLogSetContextThread(v18, a1, Context, ContextFlags, v19);
    }
    return v16;
  }
  return result;
}
