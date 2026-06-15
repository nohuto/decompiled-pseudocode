/*
 * XREFs of ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800661D4
 * Callers:
 *     ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x18005DF00 (-ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z.c)
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

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAudioSessionInstanceId::Initialize(
        CAudioSessionInstanceId *this,
        const unsigned __int16 *a2,
        char *a3)
{
  CAudioSessionInstanceId *v4; // rdi
  int v5; // ebx
  __int64 *v6; // rax
  __int64 v7; // r8
  __int64 *v8; // rax
  __int64 v9; // r8
  __int64 *v10; // rax
  bool v11; // si
  WCHAR *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  int *v16; // rbx
  __int64 v17; // r8
  __int64 v18; // [rsp+20h] [rbp-58h] BYREF
  __int64 v19; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int16 *v20; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int16 *v21; // [rsp+38h] [rbp-40h] BYREF
  __int64 v22[2]; // [rsp+40h] [rbp-38h] BYREF
  ATL::CAtlException *v23; // [rsp+50h] [rbp-28h] BYREF
  ATL::CAtlException *v24; // [rsp+58h] [rbp-20h] BYREF
  int v27; // [rsp+98h] [rbp+20h] BYREF

  v22[1] = -2LL;
  v4 = this;
  LODWORD(v18) = 0;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v21);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v20);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v19);
  v5 = 0;
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v19, a3);
  }
  catch ( ATL::CAtlException *v23 )
  {
    v16 = (int *)v23;
    if ( *(_DWORD *)v23 == -1073741571 )
      _o__resetstkoflw();
    v27 = *v16;
    v5 = v27;
    if ( v27 < 0 )
      goto LABEL_15;
    v4 = this;
  }
  v27 = 0;
  v6 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
         &v19,
         &v18,
         v17,
         &v27);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&v21, v6);
  ATL::CStringData::Release((ATL::CStringData *)(v18 - 24));
  if ( v27 == -1 )
    goto LABEL_9;
  v8 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
         &v19,
         &v18,
         v7,
         &v27);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&v20, v8);
  ATL::CStringData::Release((ATL::CStringData *)(v18 - 24));
  if ( v27 == -1 )
    goto LABEL_9;
  v10 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v19,
          v22,
          v9,
          &v27);
  v11 = 1;
  LODWORD(v18) = 1;
  if ( !ATL::operator!=((__int64)v10, v12) )
    v11 = v27 != -1;
  ATL::CStringData::Release((ATL::CStringData *)(v22[0] - 24));
  if ( v11 )
  {
LABEL_9:
    v5 = -2147467259;
LABEL_15:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Initialize", 854, v5);
    goto LABEL_16;
  }
  try
  {
    CAudioIdentifier::UnescapeIdentifierString(&v21);
    CAudioIdentifier::UnescapeIdentifierString(&v20);
  }
  catch ( ATL::CAtlException *v24 )
  {
    v27 = *(_DWORD *)v24;
    v4 = this;
    v5 = v27;
  }
  if ( v5 < 0 )
    goto LABEL_15;
  v5 = CAudioEndpointId::Initialize(v4, a2);
  if ( v5 < 0 )
    goto LABEL_15;
  v5 = CAppAudioSessionId::Initialize((CAudioSessionInstanceId *)((char *)v4 + 8), (char *)v21);
  if ( v5 < 0 )
    goto LABEL_15;
  v5 = CAppInstanceId::Initialize((CAudioSessionInstanceId *)((char *)v4 + 56), (char *)v20);
  if ( v5 < 0 )
    goto LABEL_15;
  v5 = CAudioSessionInstanceId::CalculateStaticId(v4, v13, v14);
  if ( v5 < 0 )
    goto LABEL_15;
LABEL_16:
  ATL::CStringData::Release((ATL::CStringData *)(v19 - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v20 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v21 - 12));
  return (unsigned int)v5;
}
