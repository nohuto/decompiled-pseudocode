/*
 * XREFs of ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x18007EB78
 * Callers:
 *     AudioSessionManagerGetExistingSession @ 0x18007BC80 (AudioSessionManagerGetExistingSession.c)
 *     ?GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@H@Z @ 0x18007C690 (-GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@H@Z.c)
 * Callees:
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x180011AE0 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180014360 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800183F4 (--4-$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180018760 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x1800191BC (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18002C240 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ??9ATL@@YA_NAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z @ 0x180071908 (--9ATL@@YA_NAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x180076F78 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x18007E214 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAppInstanceId@@QEAAJPEBG@Z @ 0x18007E5C0 (-Initialize@CAppInstanceId@@QEAAJPEBG@Z.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18007F030 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CAudioSessionInstanceId::Initialize(CAudioSessionInstanceId *this, unsigned __int16 *a2)
{
  CAudioSessionInstanceId *v3; // rdi
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ebx
  __int64 *v7; // rax
  __int64 v8; // r8
  __int64 *v9; // rax
  __int64 v10; // r8
  __int64 *v11; // rax
  __int64 v12; // r8
  __int64 *v13; // rax
  bool v14; // si
  __int64 v15; // rdx
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
  v6 = 0;
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v19, a2, v4, v5);
  }
  catch ( ATL::CAtlException *v24 )
  {
    v17 = (int *)v24;
    if ( *(_DWORD *)v24 == -1073741571 )
      _resetstkoflw();
    v27 = *v17;
    v6 = v27;
    if ( v27 < 0 )
      goto LABEL_17;
    v3 = this;
  }
  v27 = 0;
  v7 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
         &v19,
         &v28,
         v18,
         &v27);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&v22, v7);
  ATL::CStringData::Release((ATL::CStringData *)(v28 - 24));
  if ( v27 == -1 )
    goto LABEL_5;
  v9 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
         &v19,
         &v28,
         v8,
         &v27);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&v21, v9);
  ATL::CStringData::Release((ATL::CStringData *)(v28 - 24));
  if ( v27 == -1 )
    goto LABEL_5;
  v11 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v19,
          &v28,
          v10,
          &v27);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&v20, v11);
  ATL::CStringData::Release((ATL::CStringData *)(v28 - 24));
  if ( v27 == -1 )
    goto LABEL_5;
  v13 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v19,
          v23,
          v12,
          &v27);
  v14 = 1;
  LODWORD(v28) = 1;
  if ( !ATL::operator!=((unsigned __int16 **)v13, v15) )
    v14 = v27 != -1;
  ATL::CStringData::Release((ATL::CStringData *)(v23[0] - 24));
  if ( v14 )
  {
LABEL_5:
    v6 = -2147467259;
LABEL_17:
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x16u,
        (__int64)&WPP_c170edd1854f90c7cdf4fa9bb21811dc_Traceguids,
        v6);
    }
    goto LABEL_21;
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
    v6 = v27;
  }
  if ( v6 < 0 )
    goto LABEL_17;
  v6 = CAudioEndpointId::Initialize(v3, v22);
  if ( v6 < 0 )
    goto LABEL_17;
  v6 = CAppAudioSessionId::Initialize((CAudioSessionInstanceId *)((char *)v3 + 8), v21);
  if ( v6 < 0 )
    goto LABEL_17;
  v6 = CAppInstanceId::Initialize((CAudioSessionInstanceId *)((char *)v3 + 56), v20);
  if ( v6 < 0 )
    goto LABEL_17;
  v6 = CAudioSessionInstanceId::CalculateStaticId(v3);
  if ( v6 < 0 )
    goto LABEL_17;
LABEL_21:
  ATL::CStringData::Release((ATL::CStringData *)(v19 - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v20 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v21 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v22 - 12));
  return (unsigned int)v6;
}
