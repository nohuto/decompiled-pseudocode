/*
 * XREFs of ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x1400164B0
 * Callers:
 *     ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x1400161B0 (-Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x140016698 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x1400172E0 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x1400292D8 (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x140029510 (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
        _QWORD *a1,
        __int64 a2)
{
  struct ATL::CStringData *(__fastcall *v4)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *NilString; // rax
  unsigned __int16 v6; // dx
  __int64 v7; // rax
  HINSTANCE StringResourceInstance; // rax

  v4 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
  if ( v4 == ATL::CAtlStringMgr::GetNilString )
    NilString = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    NilString = v4((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  *a1 = (char *)NilString + 24;
  if ( !a2 )
  {
    LODWORD(v7) = 0;
LABEL_7:
    ATL::CSimpleStringT<unsigned short,0>::SetString(a1, a2, (unsigned int)v7);
    return a1;
  }
  if ( (a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( *(_WORD *)(a2 + 2 * v7) );
    goto LABEL_7;
  }
  StringResourceInstance = ATL::AtlFindStringResourceInstance((unsigned __int16)a2, v6);
  if ( StringResourceInstance )
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
      a1,
      StringResourceInstance,
      (unsigned __int16)a2);
  return a1;
}
