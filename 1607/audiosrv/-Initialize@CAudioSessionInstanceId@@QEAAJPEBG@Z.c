/*
 * XREFs of ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x1800664A4
 * Callers:
 *     AudioSessionManagerGetExistingSession @ 0x180063440 (AudioSessionManagerGetExistingSession.c)
 *     ?GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@@Z @ 0x180063D80 (-GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x180005F40 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000D410 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180011930 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800129B0 (--4-$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180012B18 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18005021C (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ??9ATL@@YA_NAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z @ 0x18005A3F4 (--9ATL@@YA_NAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x18005F618 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x180065B18 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAppInstanceId@@QEAAJPEBG@Z @ 0x180065F20 (-Initialize@CAppInstanceId@@QEAAJPEBG@Z.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180066C3C (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CAudioSessionInstanceId::Initialize(CAudioSessionInstanceId *this, char *a2)
{
  CAudioSessionInstanceId *v3; // rdi
  int v4; // ebx
  __int64 *v5; // rax
  __int64 v6; // r8
  __int64 *v7; // rax
  __int64 v8; // r8
  __int64 *v9; // rax
  __int64 v10; // r8
  __int64 *v11; // rax
  bool v12; // si
  WCHAR *v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  int *v17; // rbx
  __int64 v18; // r8
  __int64 v19; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int16 *v20; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int16 *v21; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int16 *v22; // [rsp+38h] [rbp-40h] BYREF
  __int64 v23[2]; // [rsp+40h] [rbp-38h] BYREF
  ATL::CAtlException *v24; // [rsp+50h] [rbp-28h] BYREF
  ATL::CAtlException *v25; // [rsp+58h] [rbp-20h] BYREF
  int v27; // [rsp+90h] [rbp+18h] BYREF
  __int64 v28; // [rsp+98h] [rbp+20h] BYREF

  v23[1] = -2LL;
  v3 = this;
  LODWORD(v28) = 0;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v22);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v21);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v20);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v19);
  v4 = 0;
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v19, a2);
  }
  catch ( ATL::CAtlException *v24 )
  {
    v17 = (int *)v24;
    if ( *(_DWORD *)v24 == -1073741571 )
      _o__resetstkoflw();
    v27 = *v17;
    v4 = v27;
    if ( v27 < 0 )
      goto LABEL_17;
    v3 = this;
  }
  v27 = 0;
  v5 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
         &v19,
         &v28,
         v18,
         &v27);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&v22, v5);
  ATL::CStringData::Release((ATL::CStringData *)(v28 - 24));
  if ( v27 == -1 )
    goto LABEL_5;
  v7 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
         &v19,
         &v28,
         v6,
         &v27);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&v21, v7);
  ATL::CStringData::Release((ATL::CStringData *)(v28 - 24));
  if ( v27 == -1 )
    goto LABEL_5;
  v9 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
         &v19,
         &v28,
         v8,
         &v27);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&v20, v9);
  ATL::CStringData::Release((ATL::CStringData *)(v28 - 24));
  if ( v27 == -1 )
    goto LABEL_5;
  v11 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v19,
          v23,
          v10,
          &v27);
  v12 = 1;
  LODWORD(v28) = 1;
  if ( !ATL::operator!=((__int64)v11, v13) )
    v12 = v27 != -1;
  ATL::CStringData::Release((ATL::CStringData *)(v23[0] - 24));
  if ( v12 )
  {
LABEL_5:
    v4 = -2147467259;
LABEL_17:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Initialize", 777, v4);
    goto LABEL_18;
  }
  try
  {
    CAudioIdentifier::UnescapeIdentifierString(&v22);
    CAudioIdentifier::UnescapeIdentifierString(&v21);
    CAudioIdentifier::UnescapeIdentifierString(&v20);
  }
  catch ( ATL::CAtlException *v25 )
  {
    v27 = *(_DWORD *)v25;
    v3 = this;
    v4 = v27;
  }
  if ( v4 < 0 )
    goto LABEL_17;
  v4 = CAudioEndpointId::Initialize(v3, v22);
  if ( v4 < 0 )
    goto LABEL_17;
  v4 = CAppAudioSessionId::Initialize((CAudioSessionInstanceId *)((char *)v3 + 8), (char *)v21);
  if ( v4 < 0 )
    goto LABEL_17;
  v4 = CAppInstanceId::Initialize((CAudioSessionInstanceId *)((char *)v3 + 56), (char *)v20);
  if ( v4 < 0 )
    goto LABEL_17;
  v4 = CAudioSessionInstanceId::CalculateStaticId(v3, v14, v15);
  if ( v4 < 0 )
    goto LABEL_17;
LABEL_18:
  ATL::CStringData::Release((ATL::CStringData *)(v19 - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v20 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v21 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v22 - 12));
  return (unsigned int)v4;
}
