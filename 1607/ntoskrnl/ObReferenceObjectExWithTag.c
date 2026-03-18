/*
 * XREFs of ObReferenceObjectExWithTag @ 0x140096540
 * Callers:
 *     ObFastReferenceObject @ 0x14000F760 (ObFastReferenceObject.c)
 *     MiReferenceControlAreaFile @ 0x140026690 (MiReferenceControlAreaFile.c)
 *     MiEmptyPageAccessLog @ 0x140027640 (MiEmptyPageAccessLog.c)
 *     MiMakeSystemCacheRangeValid @ 0x140031890 (MiMakeSystemCacheRangeValid.c)
 *     MiCompleteProtoPteFault @ 0x140039AF0 (MiCompleteProtoPteFault.c)
 *     MiLogPageAccess @ 0x140048940 (MiLogPageAccess.c)
 *     ObFastReplaceObject @ 0x1400CCF54 (ObFastReplaceObject.c)
 *     ObpCreateHandle @ 0x140419C20 (ObpCreateHandle.c)
 *     MiCreateSection @ 0x14042CD40 (MiCreateSection.c)
 *     ObInitializeFastReference @ 0x1404724AC (ObInitializeFastReference.c)
 *     PspInsertThread @ 0x140516750 (PspInsertThread.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1401FEDC0 (ObpPushStackInfo.c)
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
