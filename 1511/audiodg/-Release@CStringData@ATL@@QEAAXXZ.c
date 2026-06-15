/*
 * XREFs of ?Release@CStringData@ATL@@QEAAXXZ @ 0x140002ECC
 * Callers:
 *     ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x140002A38 (-Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x140002B58 (-Fork@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?RemoveAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAHH@Z @ 0x140002F54 (-RemoveAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSyste.c)
 *     ??_G?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z @ 0x140026AF4 (--_G-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z.c)
 *     ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x140026B18 (--1-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x14002A6B4 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 * Callees:
 *     ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z @ 0x140002D40 (-Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

void __fastcall ATL::CStringData::Release(ATL::CStringData *this)
{
  void (__fastcall *v1)(ATL::CAtlStringMgr *, struct ATL::CStringData *); // rsi

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 4, 0xFFFFFFFF) <= 1 )
  {
    v1 = *(void (__fastcall **)(ATL::CAtlStringMgr *, struct ATL::CStringData *))(**(_QWORD **)this + 8LL);
    if ( v1 == ATL::CAtlStringMgr::Free )
      ATL::CAtlStringMgr::Free(*(ATL::CAtlStringMgr **)this, this);
    else
      v1(*(ATL::CAtlStringMgr **)this, this);
  }
}
