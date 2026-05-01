/*
 * XREFs of ??$_delete@VAppEnergyInformationForUser@@@tlx@@YAXPEAVAppEnergyInformationForUser@@@Z @ 0x1800487D8
 * Callers:
 *     ?GetOrCreateEnergyInformationForUser@AppEnergyInformation@@IEAAJKPEAU_SID@@PEAPEAVAppEnergyInformationForUser@@@Z @ 0x180049C38 (-GetOrCreateEnergyInformationForUser@AppEnergyInformation@@IEAAJKPEAU_SID@@PEAPEAVAppEnergyInfor.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180024D70 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall tlx::_delete<AppEnergyInformationForUser>(_QWORD *Block)
{
  void *v2; // rcx

  if ( Block )
  {
    v2 = (void *)Block[1];
    if ( v2 )
    {
      operator delete(v2);
      Block[1] = 0LL;
    }
    operator delete(Block);
  }
}
