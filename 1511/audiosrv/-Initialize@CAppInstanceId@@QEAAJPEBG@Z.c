/*
 * XREFs of ?Initialize@CAppInstanceId@@QEAAJPEBG@Z @ 0x18007E5C0
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x18007E884 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x18007EB78 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800183F4 (--4-$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180018760 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x1800191BC (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18002C240 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x180076F78 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ??9ATL@@YA_NPEBDAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z @ 0x18007DFD4 (--9ATL@@YA_NPEBDAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z.c)
 *     ?GetAt@?$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z @ 0x18007E144 (-GetAt@-$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAppInstanceId::Initialize(CAppInstanceId *this, unsigned __int16 *a2)
{
  CAppInstanceId *v3; // rsi
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // edi
  __int64 *v7; // rax
  __int64 v8; // r8
  __int64 *v9; // rax
  __int64 v10; // r8
  __int64 *v11; // rax
  unsigned __int16 *v12; // rcx
  bool v13; // bl
  wchar_t *v14; // rbx
  int *v16; // rbx
  __int64 v17; // r8
  wchar_t *String; // [rsp+20h] [rbp-58h] BYREF
  __int64 v19; // [rsp+28h] [rbp-50h] BYREF
  wchar_t *v20; // [rsp+30h] [rbp-48h] BYREF
  __int64 v21; // [rsp+38h] [rbp-40h] BYREF
  wchar_t *EndPtr[2]; // [rsp+40h] [rbp-38h] BYREF
  ATL::CAtlException *v23; // [rsp+50h] [rbp-28h] BYREF
  int v25; // [rsp+90h] [rbp+18h] BYREF
  __int64 v26; // [rsp+98h] [rbp+20h] BYREF

  EndPtr[1] = (wchar_t *)-2LL;
  v3 = this;
  LODWORD(v26) = 0;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v19);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v20);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&String);
  v6 = 0;
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v19, a2, v4, v5);
  }
  catch ( ATL::CAtlException *v23 )
  {
    v16 = (int *)v23;
    if ( *(_DWORD *)v23 == -1073741571 )
      _resetstkoflw();
    v25 = *v16;
    v6 = v25;
    if ( v25 < 0 )
      goto LABEL_17;
    v3 = this;
  }
  v25 = 0;
  v7 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
         &v19,
         &v26,
         v17,
         &v25);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&v20, v7);
  ATL::CStringData::Release((ATL::CStringData *)(v26 - 24));
  if ( v25 != -1 )
  {
    v9 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
           &v19,
           &v26,
           v8,
           &v25);
    ATL::CSimpleStringT<unsigned short,0>::operator=(&String, v9);
    ATL::CStringData::Release((ATL::CStringData *)(v26 - 24));
    if ( v25 != -1 )
    {
      v11 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
              &v19,
              &v21,
              v10,
              &v25);
      LODWORD(v26) = 1;
      v13 = ATL::operator!=(v12, v11) || v25 != -1;
      ATL::CStringData::Release((ATL::CStringData *)(v21 - 24));
      if ( !v13 )
      {
        v14 = String;
        if ( *((_DWORD *)String - 4) == 1
          && (unsigned __int16)ATL::CSimpleStringT<unsigned short,0>::GetAt(&String) == 35 )
        {
          *((_DWORD *)v3 + 2) = 1;
          *(_DWORD *)v3 = 0;
        }
        else
        {
          *(_DWORD *)v3 = wcstoul(v14, EndPtr, 10);
        }
        *((_DWORD *)v3 + 1) = wcstoul(v20, EndPtr, 10);
        goto LABEL_22;
      }
    }
  }
  v6 = -2147467259;
LABEL_17:
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x14u, (__int64)&WPP_c170edd1854f90c7cdf4fa9bb21811dc_Traceguids, v6);
  }
  v14 = String;
LABEL_22:
  ATL::CStringData::Release((ATL::CStringData *)(v14 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v20 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v19 - 24));
  return v6;
}
