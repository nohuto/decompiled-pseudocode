/*
 * XREFs of FsRtlpOplockDequeueRH @ 0x1400C9C04
 * Callers:
 *     FsRtlpOplockCleanup @ 0x140035F48 (FsRtlpOplockCleanup.c)
 *     FsRtlCheckOplockEx @ 0x140037050 (FsRtlCheckOplockEx.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x1400C9A68 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1400C9C44 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1400CA474 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockEnqueueRH @ 0x1400CAEBC (FsRtlpOplockEnqueueRH.c)
 *     FsRtlUninitializeOplock @ 0x1400E3B68 (FsRtlUninitializeOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14012DDB4 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpOplockFsctrlInternal @ 0x14048EA24 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     IoGetOplockFullFoExt @ 0x140036368 (IoGetOplockFullFoExt.c)
 */

_QWORD *__fastcall FsRtlpOplockDequeueRH(__int64 a1)
{
  __int64 OplockFullFoExt; // rax
  _QWORD *v2; // r9
  __int64 v3; // rcx
  _QWORD *result; // rax

  OplockFullFoExt = IoGetOplockFullFoExt(*(_QWORD *)(a1 + 24));
  if ( OplockFullFoExt )
    *(_QWORD *)(OplockFullFoExt + 40) = 0LL;
  v3 = *v2;
  result = (_QWORD *)v2[1];
  if ( *(_QWORD **)(*v2 + 8LL) != v2 || (_QWORD *)*result != v2 )
    __fastfail(3u);
  *result = v3;
  *(_QWORD *)(v3 + 8) = result;
  return result;
}
