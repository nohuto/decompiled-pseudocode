/*
 * XREFs of CiSystemUpdateThreadTag @ 0x1C0002750
 * Callers:
 *     CiSchedulerSetTaskIndexThreadTag @ 0x1C0001180 (CiSchedulerSetTaskIndexThreadTag.c)
 *     CiSchedulerAddThread @ 0x1C0002340 (CiSchedulerAddThread.c)
 *     CiSchedulerRemoveThread @ 0x1C00025F0 (CiSchedulerRemoveThread.c)
 * Callees:
 *     CiLogThreadBuffering @ 0x1C0003A28 (CiLogThreadBuffering.c)
 */

__int64 __fastcall CiSystemUpdateThreadTag(__int64 a1, unsigned int a2)
{
  if ( byte_1C0007298 )
    CiLogThreadBuffering(a1, a2 == 1);
  return KeUpdateThreadTag(*(_QWORD *)(a1 + 96), a2);
}
