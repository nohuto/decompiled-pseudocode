/*
 * XREFs of ?Release@CStringData@ATL@@QEAAXXZ @ 0x140016230
 * Callers:
 *     ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x1400161B0 (-Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ?RemoveAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAHH@Z @ 0x1400163E8 (-RemoveAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSyste.c)
 *     ??_G?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z @ 0x140025880 (--_G-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z.c)
 *     ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x1400258A4 (--1-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x14002937C (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CStringData::Release(ATL::CStringData *this)
{
  void (__fastcall *v1)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *); // rax
  ATL::CAtlStringMgr *v3; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 4, 0xFFFFFFFF) <= 1 )
  {
    v1 = *(void (__fastcall **)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *))(**(_QWORD **)this + 8LL);
    v3 = *(ATL::CAtlStringMgr **)this;
    if ( v1 == ATL::CAtlStringMgr::Free )
      ATL::CAtlStringMgr::Free(v3, this);
    else
      v1(v3, this);
  }
}
