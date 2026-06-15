/*
 * XREFs of ?TsSessionIdAddEndpointVolumeReference@@YAJKPEBGMHPEAH1PEAM11@Z @ 0x18009FB48
 * Callers:
 *     ?ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z @ 0x1800A1358 (-ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18000A0E0 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?GetNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@AEBAPEAVCNode@12@PEBGAEAI1AEAPEAV312@@Z @ 0x18002F500 (-GetNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointV.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ??0CEndpointVolumeState@@QEAA@PEBGMH@Z @ 0x18009EA28 (--0CEndpointVolumeState@@QEAA@PEBGMH@Z.c)
 *     ??A?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@QEAAAEAPEAVCEndpointVolumeState@@PEBG@Z @ 0x18009EE3C (--A-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeS.c)
 *     WPP_SF_dSgd @ 0x1800A0660 (WPP_SF_dSgd.c)
 */

__int64 __fastcall TsSessionIdAddEndpointVolumeReference(
        DWORD a1,
        char *a2,
        float a3,
        int a4,
        int *a5,
        int *a6,
        float *a7,
        int *a8,
        int *a9)
{
  int *v9; // r15
  int *v12; // r12
  struct _RTL_CRITICAL_SECTION *v13; // rcx
  int *v14; // r13
  signed int v16; // ebx
  int v17; // eax
  __int64 *v18; // rbp
  int *v19; // rax
  CEndpointVolumeState *v20; // rdi
  unsigned __int16 *v21; // rax
  double v23; // [rsp+28h] [rbp-60h]
  struct TSSession *v24; // [rsp+40h] [rbp-48h] BYREF

  v9 = a5;
  v12 = a6;
  v13 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 24);
  v14 = a8;
  *a5 = 0;
  *v12 = 0;
  v16 = 0;
  *v14 = 0;
  v24 = 0LL;
  EnterCriticalSection(v13);
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 5u )
  {
    v23 = a3;
    WPP_SF_dSgd(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL), (__int64)a2, SLOBYTE(v23), a4);
  }
  v17 = TsSessionFromSessionId(a1, 1, 0LL, &v24);
  if ( v17 )
  {
    if ( v17 > 0 )
      v16 = (unsigned __int16)v17 | 0x80070000;
    else
      v16 = v17;
  }
  else
  {
    v18 = (__int64 *)((char *)v24 + 240);
    if ( ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::GetNode(
           (__int64 *)v24 + 30,
           a2,
           &a6,
           (unsigned int *)&a5,
           (unsigned __int16 **)&a8) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::operator[](
                                                                     v18,
                                                                     a2)
                                                      + 8LL));
    }
    else
    {
      v19 = (int *)operator new(0x40uLL);
      a5 = v19;
      if ( v19 )
        v20 = CEndpointVolumeState::CEndpointVolumeState(
                (CEndpointVolumeState *)v19,
                (const unsigned __int16 *)a2,
                a3,
                a4);
      else
        v20 = 0LL;
      if ( v20 )
      {
        v21 = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::operator[](
                v18,
                a2);
        *v9 = 1;
        *v12 = 1;
        *v14 = 1;
        *(_QWORD *)v21 = v20;
        *a7 = 1.0;
        *a9 = 0;
      }
      else
      {
        v16 = -2147024882;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( v16 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x26u,
      (__int64)&WPP_c40d8c8986032b8f982279e707239ad1_Traceguids,
      v16);
  }
  return 0LL;
}
