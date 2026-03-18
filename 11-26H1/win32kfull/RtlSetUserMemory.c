/*
 * XREFs of RtlSetUserMemory @ 0x1403E227C
 * Callers:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1401AE33C (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1402819CC (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV-$umpt.c)
 *     ?ZeroUserMemory@UMPDOBJ@@QEAAXPEAX_K@Z @ 0x14034CF40 (-ZeroUserMemory@UMPDOBJ@@QEAAXPEAX_K@Z.c)
 *     RtlSetUserMemory$thunk$13760698665666989659 @ 0x140357080 (RtlSetUserMemory$thunk$13760698665666989659.c)
 * Callees:
 *     ProbeForRead_0 @ 0x140298384 (ProbeForRead_0.c)
 *     RtlSetVolatileMemory @ 0x14034FD20 (RtlSetVolatileMemory.c)
 */

void *__fastcall RtlSetUserMemory(void *a1, unsigned __int8 a2, SIZE_T a3)
{
  int v4; // esi

  v4 = a2;
  ProbeForRead_0(a1, a3, 1u);
  return RtlSetVolatileMemory(a1, v4, a3);
}
