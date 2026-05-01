/*
 * XREFs of ??$_delete@VAppEnergyInformationForUser@@@tlx@@YAXPEAVAppEnergyInformationForUser@@@Z @ 0x18004F864
 * Callers:
 *     ?GetOrCreateEnergyInformationForUser@AppEnergyInformation@@IEAAJKPEAU_SID@@PEAPEAVAppEnergyInformationForUser@@@Z @ 0x1800361E4 (-GetOrCreateEnergyInformationForUser@AppEnergyInformation@@IEAAJKPEAU_SID@@PEAPEAVAppEnergyInfor.c)
 *     ??1AppEnergyInformation@@UEAA@XZ @ 0x18004FB40 (--1AppEnergyInformation@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
