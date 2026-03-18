/*
 * XREFs of CiSystemUpdateThreadTag @ 0x1C0001DD0
 * Callers:
 *     CiSchedulerSetTaskIndexThreadTag @ 0x1C0001060 (CiSchedulerSetTaskIndexThreadTag.c)
 *     CiSchedulerAddThread @ 0x1C0001740 (CiSchedulerAddThread.c)
 *     CiSchedulerRemoveThread @ 0x1C0001C60 (CiSchedulerRemoveThread.c)
 * Callees:
 *     CiLogThreadBuffering @ 0x1C0003F10 (CiLogThreadBuffering.c)
 */

__int64 __fastcall CiSystemUpdateThreadTag(__int64 a1, unsigned int a2)
{
  if ( byte_1C0007290 )
    CiLogThreadBuffering(a1, a2 == 1);
  return KeUpdateThreadTag(*(_QWORD *)(a1 + 96), a2);
}
