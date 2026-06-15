/*
 * XREFs of ?UpdateDuckingGainForId@CStreamClassPolicyManager@@UEAAJKPEBGMPEA_N@Z @ 0x18000D9B0
 * Callers:
 *     ?HandleDuckingIdGainChanged@CApplicationManager@@QEAAJPEAUDuckingGainValueChangedContext@@@Z @ 0x18001BAA0 (-HandleDuckingIdGainChanged@CApplicationManager@@QEAAJPEAUDuckingGainValueChangedContext@@@Z.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18000A0E0 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000AFD0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?GetValueAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAI@2@@ATL@@QEBAAEAPEAIH@Z @ 0x18000B04C (-GetValueAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV-$C.c)
 *     ?CheckImplicitLoad@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@AEAA_NPEBX@Z @ 0x18000CA04 (-CheckImplicitLoad@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@AEAA_NPEBX@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x180017680 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x1800178C8 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CStreamClassPolicyManager::UpdateDuckingGainForId(
        CStreamClassPolicyManager *this,
        DWORD a2,
        const unsigned __int16 *a3,
        float a4,
        bool *a5)
{
  unsigned int v7; // edi
  bool v8; // bp
  int v9; // eax
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // rbx
  unsigned __int16 **v13; // r9
  unsigned __int16 *v14; // rax
  __int64 v15; // r8
  unsigned __int16 v16; // cx
  int v17; // eax
  float *v18; // rsi
  __int64 v20; // [rsp+20h] [rbp-38h] BYREF
  struct TSSession *v21[3]; // [rsp+28h] [rbp-30h] BYREF

  v21[1] = (struct TSSession *)-2LL;
  v7 = 0;
  v21[0] = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  v8 = 1;
  v9 = TsSessionFromSessionId(a2, 1, 0LL, v21);
  if ( v9 )
  {
    if ( v9 > 0 )
      v7 = (unsigned __int16)v9 | 0x80070000;
    else
      v7 = v9;
  }
  else
  {
    ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v20, &ATL::g_strmgr);
    if ( !ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CheckImplicitLoad(
            (__int64)&v20,
            (__int64)a3) )
    {
      if ( a3 )
      {
        v10 = -1LL;
        do
          ++v10;
        while ( a3[v10] );
      }
      else
      {
        LODWORD(v10) = 0;
      }
      ATL::CSimpleStringT<unsigned short,0>::SetString(&v20, a3, (unsigned int)v10);
    }
    v11 = 0;
    v12 = v20;
    if ( *((int *)v21[0] + 88) <= 0 )
    {
LABEL_33:
      v11 = -1;
    }
    else
    {
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
        ++v11;
        ++v13;
        if ( v11 >= *((_DWORD *)v21[0] + 88) )
          goto LABEL_33;
      }
    }
    if ( v11 == -1 )
      v18 = 0LL;
    else
      v18 = *(float **)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *>>::GetValueAt(
                         (__int64)v21[0] + 336,
                         v11);
    ATL::CStringData::Release((ATL::CStringData *)(v12 - 24));
    if ( v18 )
    {
      if ( *v18 == a4 )
        v8 = 0;
      *a5 = v8;
      if ( v8 )
        *v18 = a4;
    }
    else
    {
      v7 = -2147024809;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( (v7 & 0x80000000) != 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      41LL,
      &WPP_c40d8c8986032b8f982279e707239ad1_Traceguids,
      v7);
  }
  return v7;
}
