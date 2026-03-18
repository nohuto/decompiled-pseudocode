/*
 * XREFs of ObReferenceObjectExWithTag @ 0x14010B640
 * Callers:
 *     ObFastReferenceObject @ 0x14004E430 (ObFastReferenceObject.c)
 *     ObFastReplaceObject @ 0x1400864A0 (ObFastReplaceObject.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x140088960 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MiCompleteProtoPteFault @ 0x1400BA8F0 (MiCompleteProtoPteFault.c)
 *     MiEmptyPageAccessLog @ 0x1400D71E0 (MiEmptyPageAccessLog.c)
 *     PspInsertThread @ 0x140423090 (PspInsertThread.c)
 *     ObInitializeFastReference @ 0x14046A3B8 (ObInitializeFastReference.c)
 *     ObpCreateHandle @ 0x140492D10 (ObpCreateHandle.c)
 *     MiCreateSection @ 0x1404B3940 (MiCreateSection.c)
 * Callees:
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall ObReferenceObjectExWithTag(__int64 a1, int a2)
{
  volatile signed __int64 *v2; // rbx
  unsigned __int64 v3; // rdi
  __int64 v4; // rax

  v2 = (volatile signed __int64 *)(a1 - 48);
  v3 = a2;
  if ( ObpTraceFlags )
    ObpPushStackInfo(a1 - 48);
  v4 = _InterlockedExchangeAdd64(v2, v3);
  if ( v4 <= 0 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(v2 + 6), 0x10uLL, v4 + v3);
  return v3 + v4;
}
