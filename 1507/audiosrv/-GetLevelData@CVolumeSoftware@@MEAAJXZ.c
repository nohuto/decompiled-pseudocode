/*
 * XREFs of ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x18006E890
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x18003F4AC (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x180067CCC (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMM@Z @ 0x180067D6C (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMM@Z.c)
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x180067E40 (--0CVolumeUnit@@QEAA@XZ.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x18006F158 (-LoadVolumeState@CVolumeSoftware@@AEAAJXZ.c)
 */

__int64 __fastcall CVolumeSoftware::GetLevelData(CVolumeSoftware *this)
{
  CVolumeSoftware *v1; // rbx
  _QWORD *v3; // rdx
  int VolumeState; // edi
  unsigned int i; // esi
  __int64 v6; // rdx
  float v7; // xmm3_4
  int *v8; // rbx
  _QWORD v9[7]; // [rsp+0h] [rbp-A8h] BYREF
  ATL::CAtlException *v10; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v11[80]; // [rsp+40h] [rbp-68h] BYREF

  v9[6] = -2LL;
  v1 = this;
  if ( !*((_DWORD *)this + 17) )
    return 0LL;
  VolumeState = CVolumeSoftware::LoadVolumeState(this);
  if ( VolumeState < 0 )
  {
    VolumeState = 0;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_S(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x4Eu,
        (__int64)&WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
        *((const wchar_t **)v1 + 2));
    }
    for ( i = 0; i < *((_DWORD *)v1 + 17); ++i )
    {
      CVolumeUnit::CVolumeUnit((CVolumeUnit *)v11, (__int64)v3);
      if ( *((_DWORD *)v1 + 34) == 4 )
        v7 = FLOAT_30_0;
      else
        v7 = 0.0;
      CVolumeUnit::SetDBRange((__int64)v11, v6, -96.0, v7, SLODWORD(FLOAT_1_5));
      CVolumeUnit::SetDB((CVolumeUnit *)v11, 0.0);
      VolumeState = 0;
      try
      {
        ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow((__int64)v1 + 32, i, (__int64)v11);
      }
      catch ( ATL::CAtlException *v10 )
      {
        v3 = v9;
        v8 = (int *)v10;
        if ( *(_DWORD *)v10 == -1073741571 )
          _resetstkoflw();
        VolumeState = *v8;
        if ( *v8 < 0 )
          goto LABEL_18;
        v1 = this;
      }
    }
    *((_DWORD *)v1 + 16) = 0;
    if ( VolumeState >= 0 )
      return (unsigned int)VolumeState;
LABEL_18:
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x4Fu,
        (__int64)&WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
        VolumeState);
    }
  }
  return (unsigned int)VolumeState;
}
