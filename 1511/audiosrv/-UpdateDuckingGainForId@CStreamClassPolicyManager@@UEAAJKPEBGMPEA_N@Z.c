/*
 * XREFs of ?UpdateDuckingGainForId@CStreamClassPolicyManager@@UEAAJKPEBGMPEA_N@Z @ 0x18002A7A0
 * Callers:
 *     ?HandleDuckingIdGainChanged@CApplicationManager@@QEAAJPEAUDuckingGainValueChangedContext@@@Z @ 0x18001DD60 (-HandleDuckingIdGainChanged@CApplicationManager@@QEAAJPEAUDuckingGainValueChangedContext@@@Z.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x180018630 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180018850 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?CheckImplicitLoad@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@AEAA_NPEBX@Z @ 0x180019000 (-CheckImplicitLoad@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@AEAA_NPEBX@Z.c)
 *     ?GetValueAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAI@2@@ATL@@QEBAAEAPEAIH@Z @ 0x18002BC04 (-GetValueAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV-$C.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18002C240 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002C5A0 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CStreamClassPolicyManager::UpdateDuckingGainForId(
        CStreamClassPolicyManager *this,
        unsigned int a2,
        const unsigned __int16 *a3,
        float a4,
        bool *a5)
{
  unsigned int v7; // esi
  int v8; // eax
  __int64 v9; // rax
  int v10; // r9d
  int v11; // r10d
  __int64 v12; // rbx
  unsigned __int16 **v13; // r11
  unsigned __int16 *v14; // rax
  __int64 v15; // rdx
  unsigned __int16 v16; // cx
  int v17; // eax
  float *v18; // rdi
  __int64 v20; // [rsp+20h] [rbp-38h] BYREF
  struct TSSession *v21[3]; // [rsp+28h] [rbp-30h] BYREF

  v21[1] = (struct TSSession *)-2LL;
  v7 = 0;
  v21[0] = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  v8 = TsSessionFromSessionId(a2, 1, 0LL, v21);
  if ( v8 )
  {
    if ( v8 > 0 )
      v7 = (unsigned __int16)v8 | 0x80070000;
    else
      v7 = v8;
  }
  else
  {
    ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
      &v20,
      (volatile signed __int32 *)&ATL::g_strmgr);
    if ( !ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CheckImplicitLoad(
            (__int64)&v20,
            (__int64)a3) )
    {
      if ( a3 )
      {
        v9 = -1LL;
        do
          ++v9;
        while ( a3[v9] );
      }
      else
      {
        LODWORD(v9) = 0;
      }
      ATL::CSimpleStringT<unsigned short,0>::SetString(&v20, a3, v9);
    }
    v10 = 0;
    v11 = *((_DWORD *)v21[0] + 88);
    v12 = v20;
    if ( v11 <= 0 )
      goto LABEL_24;
    v13 = (unsigned __int16 **)*((_QWORD *)v21[0] + 42);
    while ( 1 )
    {
      if ( !v20 )
        ATL::AtlThrowImpl(-2147467259);
      v14 = *v13;
      v15 = v20 - (_QWORD)*v13;
      while ( 1 )
      {
        v16 = *v14;
        if ( *v14 != *(unsigned __int16 *)((char *)v14 + v15) )
          break;
        ++v14;
        if ( !v16 )
        {
          v17 = 0;
          goto LABEL_14;
        }
      }
      v17 = v16 < *(unsigned __int16 *)((char *)v14 + v15) ? -1 : 1;
LABEL_14:
      if ( !v17 )
        break;
      ++v10;
      ++v13;
      if ( v10 >= v11 )
        goto LABEL_24;
    }
    if ( v10 == -1 )
LABEL_24:
      v18 = 0LL;
    else
      v18 = *(float **)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *>>::GetValueAt(
                         (char *)v21[0] + 336,
                         (unsigned int)v10);
    ATL::CStringData::Release((ATL::CStringData *)(v12 - 24));
    if ( v18 )
    {
      if ( *v18 == a4 )
      {
        *a5 = 0;
      }
      else
      {
        *a5 = 1;
        *v18 = a4;
      }
    }
    else
    {
      v7 = -2147024809;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( (v7 & 0x80000000) != 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 41LL, &WPP_a039a10251cf52648c3361a61631dc40_Traceguids, v7);
  }
  return v7;
}
