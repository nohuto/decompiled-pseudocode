/*
 * XREFs of ?SetCount@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x1800269F0
 * Callers:
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x1800266A0 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x180026A60 (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     _ATL::CAtlArray_CVolumeUnit_ATL::CElementTraits_CVolumeUnit___::SetAtGrow_::_1_::catch$0 @ 0x18003B880 (_ATL--CAtlArray_CVolumeUnit_ATL--CElementTraits_CVolumeUnit___--SetAtGrow_--_1_--catch$0.c)
 * Callees:
 *     ?GrowBuffer@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@AEAA_N_K@Z @ 0x18002691C (-GrowBuffer@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@AEAA_N_K@Z.c)
 *     ?CallConstructors@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@CAXPEAVCVolumeUnit@@_K@Z @ 0x180026B04 (-CallConstructors@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@CAXPEAVC.c)
 */

char __fastcall ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetCount(void **a1, size_t a2)
{
  size_t v4; // rdx
  __int64 v5; // rcx
  void *v7; // rcx

  if ( !a2 )
  {
    v7 = *a1;
    if ( v7 )
    {
      free(v7);
      *a1 = 0LL;
    }
    a1[1] = 0LL;
    a1[2] = 0LL;
    return 1;
  }
  if ( a2 <= (unsigned __int64)a1[2] )
  {
    if ( a2 <= (unsigned __int64)a1[1] )
      goto LABEL_6;
    v4 = a2 - (_QWORD)a1[1];
    v5 = 56LL * (_QWORD)a1[1];
LABEL_5:
    ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::CallConstructors((char *)*a1 + v5, v4);
LABEL_6:
    a1[1] = (void *)a2;
    return 1;
  }
  if ( ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::GrowBuffer((__int64)a1, a2) )
  {
    v4 = a2 - (_QWORD)a1[1];
    v5 = 56LL * (_QWORD)a1[1];
    goto LABEL_5;
  }
  return 0;
}
