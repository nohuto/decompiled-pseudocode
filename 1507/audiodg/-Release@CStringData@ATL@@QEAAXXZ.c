/*
 * XREFs of ?Release@CStringData@ATL@@QEAAXXZ @ 0x1400142C4
 * Callers:
 *     ?RemoveAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAHH@Z @ 0x14001155C (-RemoveAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSyste.c)
 *     ??_G?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z @ 0x140026970 (--_G-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z.c)
 *     ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x140026994 (--1-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x14002A158 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 * Callees:
 *     ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z @ 0x140011220 (-Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
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
