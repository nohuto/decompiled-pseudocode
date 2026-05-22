/*
 * XREFs of _MPCClickerProcessor::GetPoints_::_1_::dtor$0 @ 0x1800A0D15
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAA@XZ @ 0x18002EDA4 (--1-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@QEAA@XZ.c)
 */

void __fastcall MPCClickerProcessor::GetPoints_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::vector<PointData3D>::~vector<PointData3D>(*(_QWORD *)(a2 + 152));
  }
}
