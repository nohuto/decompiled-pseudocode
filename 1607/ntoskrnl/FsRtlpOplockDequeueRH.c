/*
 * XREFs of FsRtlpOplockDequeueRH @ 0x140078518
 * Callers:
 *     FsRtlpRequestExclusiveOplock @ 0x14007704C (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x140077824 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpRequestShareableOplock @ 0x140077A14 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockEnqueueRH @ 0x1400783A0 (FsRtlpOplockEnqueueRH.c)
 *     FsRtlCheckOplockEx @ 0x14007A100 (FsRtlCheckOplockEx.c)
 *     FsRtlpOplockCleanup @ 0x14007AAF4 (FsRtlpOplockCleanup.c)
 *     FsRtlUninitializeOplock @ 0x14009F944 (FsRtlUninitializeOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14013493C (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1401B9874 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1404696E8 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     IoGetOplockFullFoExt @ 0x14007AFDC (IoGetOplockFullFoExt.c)
 */

_QWORD *__fastcall FsRtlpOplockDequeueRH(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 OplockFullFoExt; // rax
  _QWORD *v4; // r9
  __int64 v5; // rcx
  _QWORD *result; // rax

  OplockFullFoExt = IoGetOplockFullFoExt(*(_QWORD *)(a1 + 24), a2, a3, a1);
  if ( OplockFullFoExt )
    *(_QWORD *)(OplockFullFoExt + 40) = 0LL;
  v5 = *v4;
  result = (_QWORD *)v4[1];
  if ( *(_QWORD **)(*v4 + 8LL) != v4 || (_QWORD *)*result != v4 )
    __fastfail(3u);
  *result = v5;
  *(_QWORD *)(v5 + 8) = result;
  return result;
}
