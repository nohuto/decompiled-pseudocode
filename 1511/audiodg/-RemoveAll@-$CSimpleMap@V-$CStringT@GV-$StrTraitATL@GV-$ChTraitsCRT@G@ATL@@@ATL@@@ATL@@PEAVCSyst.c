/*
 * XREFs of ?RemoveAll@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAXXZ @ 0x1400188B8
 * Callers:
 *     _dynamic_atexit_destructor_for__SadMap__ @ 0x14001C010 (_dynamic_atexit_destructor_for__SadMap__.c)
 * Callees:
 *     ??_G?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z @ 0x140026AF4 (--_G-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z.c)
 */

void ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::RemoveAll()
{
  char *v0; // rcx
  int i; // ebx

  v0 = (char *)qword_140055BF0;
  if ( qword_140055BF0 )
  {
    for ( i = 0; i < dword_140055C00; ++i )
    {
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::`scalar deleting destructor'(&v0[8 * i]);
      v0 = (char *)qword_140055BF0;
    }
    free(v0);
    qword_140055BF0 = 0LL;
  }
  if ( qword_140055BF8 )
  {
    free(qword_140055BF8);
    qword_140055BF8 = 0LL;
  }
  dword_140055C00 = 0;
}
