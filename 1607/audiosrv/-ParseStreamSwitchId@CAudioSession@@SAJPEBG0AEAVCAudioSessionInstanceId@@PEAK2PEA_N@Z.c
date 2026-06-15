/*
 * XREFs of ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x18005DF00
 * Callers:
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x180063590 (AudioSessionManagerGetSessionForStreamSwitch.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000D410 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800129B0 (--4-$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180012B18 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18005021C (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ??9ATL@@YA_NAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z @ 0x18005A3F4 (--9ATL@@YA_NAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x18005F618 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800661D4 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180066C3C (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CAudioSession::ParseStreamSwitchId(
        const unsigned __int16 *a1,
        char *a2,
        struct CAudioSessionInstanceId *a3,
        unsigned int *a4,
        unsigned int *a5,
        bool *a6)
{
  int v7; // r14d
  __int64 *v8; // rax
  __int64 v9; // r8
  __int64 *v10; // rax
  __int64 v11; // r8
  __int64 *v12; // rax
  __int64 v13; // r8
  __int64 *v14; // rax
  __int64 v15; // r8
  __int64 v16; // rax
  bool v17; // bl
  WCHAR *v18; // rdx
  wchar_t *v19; // rbx
  wchar_t *v20; // rdi
  wchar_t *v21; // rsi
  int *v23; // rbx
  __int64 v24; // r8
  int v25; // [rsp+20h] [rbp-88h] BYREF
  __int64 v26; // [rsp+28h] [rbp-80h] BYREF
  __int64 v27; // [rsp+30h] [rbp-78h] BYREF
  wchar_t *String; // [rsp+38h] [rbp-70h] BYREF
  wchar_t *v29; // [rsp+40h] [rbp-68h] BYREF
  wchar_t *v30; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int16 *v31; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v32[2]; // [rsp+58h] [rbp-50h] BYREF
  ATL::CAtlException *v33; // [rsp+68h] [rbp-40h] BYREF
  ATL::CAtlException *v34; // [rsp+70h] [rbp-38h] BYREF

  v32[1] = -2LL;
  LODWORD(v26) = 0;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v27);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v31);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&String);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v29);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v30);
  v7 = 0;
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v27, a2);
  }
  catch ( ATL::CAtlException *v33 )
  {
    v23 = (int *)v33;
    if ( *(_DWORD *)v33 == -1073741571 )
      _o__resetstkoflw();
    v25 = *v23;
    v7 = v25;
    if ( v25 < 0 )
      goto LABEL_15;
  }
  v25 = 0;
  v8 = (__int64 *)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                    &v27,
                    &v26,
                    v24,
                    &v25);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&v31, v8);
  ATL::CStringData::Release((ATL::CStringData *)(v26 - 24));
  if ( v25 == -1 )
    goto LABEL_4;
  v10 = (__int64 *)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                     &v27,
                     &v26,
                     v9,
                     &v25);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&String, v10);
  ATL::CStringData::Release((ATL::CStringData *)(v26 - 24));
  if ( v25 == -1 )
    goto LABEL_4;
  v12 = (__int64 *)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                     &v27,
                     &v26,
                     v11,
                     &v25);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&v29, v12);
  ATL::CStringData::Release((ATL::CStringData *)(v26 - 24));
  if ( v25 == -1 )
    goto LABEL_4;
  v14 = (__int64 *)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                     &v27,
                     &v26,
                     v13,
                     &v25);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&v30, v14);
  ATL::CStringData::Release((ATL::CStringData *)(v26 - 24));
  if ( v25 == -1 )
    goto LABEL_4;
  v16 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v27,
          v32,
          v15,
          &v25);
  v17 = 1;
  LODWORD(v26) = 1;
  if ( !ATL::operator!=(v16, v18) )
    v17 = v25 != -1;
  ATL::CStringData::Release((ATL::CStringData *)(v32[0] - 24LL));
  if ( v17 )
  {
LABEL_4:
    v7 = -2147467259;
LABEL_15:
    AudSrvTraceLoggingErrorHelper("CAudioSession::ParseStreamSwitchId", 683, v7);
    v19 = String;
    v20 = v29;
    v21 = v30;
    goto LABEL_16;
  }
  try
  {
    CAudioIdentifier::UnescapeIdentifierString(&v31);
    CAudioIdentifier::UnescapeIdentifierString(&String);
    CAudioIdentifier::UnescapeIdentifierString(&v29);
    CAudioIdentifier::UnescapeIdentifierString(&v30);
  }
  catch ( ATL::CAtlException *v34 )
  {
    v25 = *(_DWORD *)v34;
    v7 = v25;
  }
  if ( v7 < 0 )
    goto LABEL_15;
  v7 = CAudioSessionInstanceId::Initialize(a3, a1, v31);
  if ( v7 < 0 )
    goto LABEL_15;
  v19 = String;
  *a4 = wcstoul(String, 0LL, 10);
  v20 = v29;
  *a5 = wcstoul(v29, 0LL, 10);
  v21 = v30;
  *a6 = wcstoul(v30, 0LL, 10) != 0;
LABEL_16:
  ATL::CStringData::Release((ATL::CStringData *)(v21 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v20 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v19 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v31 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v27 - 24));
  return (unsigned int)v7;
}
