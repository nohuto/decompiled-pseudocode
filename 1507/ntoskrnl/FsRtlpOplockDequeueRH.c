/*
 * XREFs of FsRtlpOplockDequeueRH @ 0x14006DB24
 * Callers:
 *     FsRtlpRemoveAndBreakRHIrp @ 0x14006D8EC (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlCheckOplockEx @ 0x140070120 (FsRtlCheckOplockEx.c)
 *     FsRtlpOplockCleanup @ 0x140070B48 (FsRtlpOplockCleanup.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140072918 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x140073144 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockEnqueueRH @ 0x140073C48 (FsRtlpOplockEnqueueRH.c)
 *     FsRtlUninitializeOplock @ 0x140122A5C (FsRtlUninitializeOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14015CAE0 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1404A5A14 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     IoGetOplockFullFoExt @ 0x140070F68 (IoGetOplockFullFoExt.c)
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
