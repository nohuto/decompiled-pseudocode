/*
 * XREFs of ObReferenceObjectExWithTag @ 0x1400D5D80
 * Callers:
 *     ObFastReplaceObject @ 0x14000D374 (ObFastReplaceObject.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x14003ABE0 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     ObFastReferenceObject @ 0x140043350 (ObFastReferenceObject.c)
 *     MiCompleteProtoPteFault @ 0x140054EB0 (MiCompleteProtoPteFault.c)
 *     MiEmptyPageAccessLog @ 0x14006DE20 (MiEmptyPageAccessLog.c)
 *     PspInsertThread @ 0x1403EF330 (PspInsertThread.c)
 *     MiCreateSection @ 0x1403F80B0 (MiCreateSection.c)
 *     ObpCreateHandle @ 0x14040CFA0 (ObpCreateHandle.c)
 *     ObInitializeFastReference @ 0x14044F95C (ObInitializeFastReference.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1401E6504 (ObpPushStackInfo.c)
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
