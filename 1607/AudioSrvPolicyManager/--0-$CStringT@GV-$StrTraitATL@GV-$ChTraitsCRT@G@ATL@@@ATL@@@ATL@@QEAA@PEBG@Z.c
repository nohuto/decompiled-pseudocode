/*
 * XREFs of ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x1800104C8
 * Callers:
 *     ?GetActiveStreamCountStatsForEndpoint@CProcess@@IEAAJPEBGHPEAPEAI@Z @ 0x18000E19C (-GetActiveStreamCountStatsForEndpoint@CProcess@@IEAAJPEBGHPEAPEAI@Z.c)
 *     ?UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJKHPEAH@Z @ 0x180019EAC (-UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJKHPEAH@Z.c)
 *     ?GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@@@Z @ 0x18001AEC8 (-GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@.c)
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001BCF4 (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionUpdateDuckingGainForId@@YAJKPEBGMPEA_N@Z @ 0x18001DCC0 (-TsSessionUpdateDuckingGainForId@@YAJKPEBGMPEA_N@Z.c)
 *     ?NewNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@AEAAPEAVCNode@12@PEBGII@Z @ 0x18001F46C (-NewNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointV.c)
 * Callees:
 *     ??4?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBG@Z @ 0x1800094F4 (--4-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBG@Z.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x1800105CC (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 *     ?_AtlGetStringResourceImage@ATL@@YAPEBUATLSTRINGRESOURCEIMAGE@1@PEAUHINSTANCE__@@PEAUHRSRC__@@I@Z @ 0x180010D10 (-_AtlGetStringResourceImage@ATL@@YAPEBUATLSTRINGRESOURCEIMAGE@1@PEAUHINSTANCE__@@PEAUHRSRC__@@I@.c)
 *     ?GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z @ 0x18002241C (-GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
int **__fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
        int **a1,
        char *a2)
{
  ATL::CAtlBaseModule *v4; // rcx
  unsigned int v5; // ebp
  HMODULE HInstanceAt; // rbx
  int v7; // esi
  HRSRC Resource; // rax
  ATL::CAtlBaseModule *v9; // rcx

  *a1 = (int *)(((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24);
  if ( !a2 || ((unsigned __int64)a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::operator=(a1, a2);
  }
  else
  {
    v5 = (unsigned __int16)a2;
    HInstanceAt = ATL::CAtlBaseModule::GetHInstanceAt(v4, 0);
    v7 = 1;
    if ( HInstanceAt )
    {
      while ( 1 )
      {
        Resource = FindResourceExW(HInstanceAt, (LPCWSTR)6, (LPCWSTR)(unsigned __int16)((v5 >> 4) + 1), 0);
        if ( Resource )
        {
          if ( ATL::_AtlGetStringResourceImage(HInstanceAt, Resource, v5) )
            break;
        }
        HInstanceAt = ATL::CAtlBaseModule::GetHInstanceAt(v9, v7++);
        if ( !HInstanceAt )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      HInstanceAt = 0LL;
    }
    if ( HInstanceAt )
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
        a1,
        HInstanceAt,
        v5);
  }
  return a1;
}
