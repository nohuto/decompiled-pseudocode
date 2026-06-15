/*
 * XREFs of ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x180075B4C
 * Callers:
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x18007BE10 (AudioSessionManagerGetSessionForStreamSwitch.c)
 * Callees:
 *     ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800183F4 (--4-$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180018760 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x1800191BC (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18002C240 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ??9ATL@@YA_NAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z @ 0x180071908 (--9ATL@@YA_NAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x180076F78 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x18007E884 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18007F030 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CAudioSession::ParseStreamSwitchId(
        const unsigned __int16 *a1,
        unsigned __int16 *a2,
        struct CAudioSessionInstanceId *a3,
        unsigned int *a4,
        unsigned int *a5,
        bool *a6)
{
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  __int64 *v10; // rax
  __int64 v11; // r8
  __int64 *v12; // rax
  __int64 v13; // r8
  __int64 *v14; // rax
  __int64 v15; // r8
  __int64 *v16; // rax
  __int64 v17; // r8
  unsigned __int16 **v18; // rax
  bool v19; // si
  __int64 v20; // rdx
  ATL::CAtlException *v22; // rbx
  __int64 v23; // r8
  int v24; // [rsp+20h] [rbp-78h] BYREF
  __int64 v25; // [rsp+28h] [rbp-70h] BYREF
  __int64 v26; // [rsp+30h] [rbp-68h] BYREF
  wchar_t *String; // [rsp+38h] [rbp-60h] BYREF
  wchar_t *v28; // [rsp+40h] [rbp-58h] BYREF
  wchar_t *v29; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int16 *v30; // [rsp+50h] [rbp-48h] BYREF
  __int64 v31; // [rsp+58h] [rbp-40h] BYREF
  ATL::CAtlException *v32[2]; // [rsp+60h] [rbp-38h] BYREF
  ATL::CAtlException *v33; // [rsp+70h] [rbp-28h] BYREF

  v32[1] = (ATL::CAtlException *)-2LL;
  LODWORD(v25) = 0;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v26);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v30);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&String);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v29);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v28);
  v9 = 0;
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v26, a2, v7, v8);
  }
  catch ( ATL::CAtlException *v32 )
  {
    v22 = v32[0];
    if ( *(_DWORD *)v32[0] == -1073741571 )
      _resetstkoflw();
    v24 = *(_DWORD *)v22;
    v9 = v24;
    if ( v24 < 0 )
      goto LABEL_15;
  }
  v24 = 0;
  v10 = (__int64 *)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                     &v26,
                     &v25,
                     v23,
                     &v24);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&v30, v10);
  ATL::CStringData::Release((ATL::CStringData *)(v25 - 24));
  if ( v24 == -1 )
    goto LABEL_4;
  v12 = (__int64 *)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                     &v26,
                     &v25,
                     v11,
                     &v24);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&String, v12);
  ATL::CStringData::Release((ATL::CStringData *)(v25 - 24));
  if ( v24 == -1 )
    goto LABEL_4;
  v14 = (__int64 *)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                     &v26,
                     &v25,
                     v13,
                     &v24);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&v29, v14);
  ATL::CStringData::Release((ATL::CStringData *)(v25 - 24));
  if ( v24 == -1 )
    goto LABEL_4;
  v16 = (__int64 *)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                     &v26,
                     &v25,
                     v15,
                     &v24);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&v28, v16);
  ATL::CStringData::Release((ATL::CStringData *)(v25 - 24));
  if ( v24 == -1 )
    goto LABEL_4;
  v18 = (unsigned __int16 **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                               &v26,
                               &v31,
                               v17,
                               &v24);
  v19 = 1;
  LODWORD(v25) = 1;
  if ( !ATL::operator!=(v18, v20) )
    v19 = v24 != -1;
  ATL::CStringData::Release((ATL::CStringData *)(v31 - 24));
  if ( v19 )
  {
LABEL_4:
    v9 = -2147467259;
  }
  else
  {
    try
    {
      CAudioIdentifier::UnescapeIdentifierString(&v30);
      CAudioIdentifier::UnescapeIdentifierString(&String);
      CAudioIdentifier::UnescapeIdentifierString(&v29);
      CAudioIdentifier::UnescapeIdentifierString(&v28);
    }
    catch ( ATL::CAtlException *v33 )
    {
      v24 = *(_DWORD *)v33;
      v9 = v24;
    }
    if ( v9 >= 0 )
    {
      v9 = CAudioSessionInstanceId::Initialize(a3, a1, v30);
      if ( v9 >= 0 )
      {
        *a4 = wcstoul(String, 0LL, 10);
        *a5 = wcstoul(v29, 0LL, 10);
        *a6 = wcstoul(v28, 0LL, 10) != 0;
        goto LABEL_19;
      }
    }
  }
LABEL_15:
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x16u, (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids, v9);
  }
LABEL_19:
  ATL::CStringData::Release((ATL::CStringData *)(v28 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v29 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(String - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v30 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v26 - 24));
  return (unsigned int)v9;
}
