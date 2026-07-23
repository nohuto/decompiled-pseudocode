/*
 * XREFs of EtwpWriteProcessEvent @ 0x14045C5C0
 * Callers:
 *     EtwTraceProcess @ 0x14045C3DC (EtwTraceProcess.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     EtwpBuildProcessEvent @ 0x14045C730 (EtwpBuildProcessEvent.c)
 *     EtwpPsProvTraceProcess @ 0x14054BA48 (EtwpPsProvTraceProcess.c)
 */

void __fastcall EtwpWriteProcessEvent(
        ULONG_PTR BugCheckParameter1,
        __int16 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        PVOID TokenInformation)
{
  char v6; // r15
  __int64 v11; // [rsp+60h] [rbp-158h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-150h] BYREF
  _BYTE v13[48]; // [rsp+A0h] [rbp-118h] BYREF
  __int64 v14[18]; // [rsp+D0h] [rbp-E8h] BYREF

  v6 = 0;
  if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)BugCheckParameter1
    && ExAcquireRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 736)) )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v13);
    v6 = 1;
  }
  *a5 = 0LL;
  a5[1] = 0LL;
  EtwpBuildProcessEvent(
    (PEPROCESS)BugCheckParameter1,
    a3,
    (__int64)v14,
    (__int64)&v11,
    a4,
    (PANSI_STRING)&UnicodeString,
    (__int64)a5,
    TokenInformation);
  if ( v6 )
  {
    KiUnstackDetachProcess((struct _KTHREAD *)v13, 0);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 736));
  }
  if ( (dword_1402FD520 & 1) != 0 )
    EtwpPsProvTraceProcess((PEPROCESS)BugCheckParameter1, a2);
  EtwTraceKernelEvent((int)v14, v11, 1u, a2, 5249284);
  RtlFreeAnsiString(&UnicodeString);
}
