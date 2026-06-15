/*
 * XREFs of ?CallConstructors@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@CAXPEAVCVolumeUnit@@_K@Z @ 0x180026B04
 * Callers:
 *     ?SetCount@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x1800269F0 (-SetCount@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z.c)
 * Callees:
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x180027244 (--0CVolumeUnit@@QEAA@XZ.c)
 */

void __fastcall ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::CallConstructors(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v4; // rbx
  CVolumeUnit *v5; // rcx
  unsigned __int64 j; // rax
  unsigned __int64 i; // [rsp+48h] [rbp+10h]

  try
  {
    v4 = 0LL;
    for ( i = 0LL; v4 < a2; i = v4 )
    {
      v5 = (CVolumeUnit *)(a1 + 56 * v4);
      if ( v5 )
        CVolumeUnit::CVolumeUnit(v5);
      ++v4;
    }
  }
  catch ( ... )
  {
    for ( j = i; j; --j )
      ;
    throw;
  }
}
