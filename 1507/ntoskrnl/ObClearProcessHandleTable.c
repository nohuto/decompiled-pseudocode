/*
 * XREFs of ObClearProcessHandleTable @ 0x14055AC34
 * Callers:
 *     PspRundownSingleProcess @ 0x140508838 (PspRundownSingleProcess.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ObReferenceProcessHandleTable @ 0x1404249F8 (ObReferenceProcessHandleTable.c)
 *     ExSweepHandleTable @ 0x140508B40 (ExSweepHandleTable.c)
 */

void __fastcall ObClearProcessHandleTable(struct _EX_RUNDOWN_REF *BugCheckParameter1)
{
  char v2; // di
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rtt
  _BYTE v5[48]; // [rsp+28h] [rbp-40h] BYREF

  v2 = 0;
  v3 = ObReferenceProcessHandleTable(BugCheckParameter1);
  if ( v3 )
  {
    if ( (struct _EX_RUNDOWN_REF *)KeGetCurrentThread()->ApcState.Process != BugCheckParameter1 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v5);
      v2 = 1;
    }
    ExSweepHandleTable(v3, 1u);
    if ( v2 == 1 )
      KiUnstackDetachProcess((struct _KTHREAD *)v5, 0);
    _m_prefetchw(&BugCheckParameter1[92]);
    v4 = BugCheckParameter1[92].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v4 != _InterlockedCompareExchange64((volatile signed __int64 *)&BugCheckParameter1[92], v4 - 2, v4) )
      ExfReleaseRundownProtection(BugCheckParameter1 + 92);
  }
}
