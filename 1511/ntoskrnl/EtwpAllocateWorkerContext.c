/*
 * XREFs of EtwpAllocateWorkerContext @ 0x1400F47E4
 * Callers:
 *     EtwpStartLogger @ 0x1404CB420 (EtwpStartLogger.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpAllocateWorkerContext(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *PoolWithTag; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x4C777445u);
  if ( !PoolWithTag )
    return 3221225495LL;
  *PoolWithTag = a2;
  PoolWithTag[1] = a3;
  *a1 = PoolWithTag;
  return 0LL;
}
