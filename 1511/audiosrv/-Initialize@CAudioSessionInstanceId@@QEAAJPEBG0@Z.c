/*
 * XREFs of ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x18007E884
 * Callers:
 *     ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x180075B4C (-ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z.c)
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

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAudioSessionInstanceId::Initialize(
        CAudioSessionInstanceId *this,
        const unsigned __int16 *a2,
        unsigned __int16 *a3)
{
  CAudioSessionInstanceId *v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebx
  __int64 *v8; // rax
  __int64 v9; // r8
  __int64 *v10; // rax
  __int64 v11; // r8
  __int64 *v12; // rax
  bool v13; // si
  __int64 v14; // rdx
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
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v20);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v21);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v19);
  v7 = 0;
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v19, a3, v5, v6);
  }
  catch ( ATL::CAtlException *v23 )
  {
    v16 = (int *)v23;
    if ( *(_DWORD *)v23 == -1073741571 )
      _resetstkoflw();
    v27 = *v16;
    v7 = v27;
    if ( v27 < 0 )
      goto LABEL_15;
    v4 = this;
  }
  v27 = 0;
  v8 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
         &v19,
         &v18,
         v17,
         &v27);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&v20, v8);
  ATL::CStringData::Release((ATL::CStringData *)(v18 - 24));
  if ( v27 == -1 )
    goto LABEL_9;
  v10 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v19,
          &v18,
          v9,
          &v27);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&v21, v10);
  ATL::CStringData::Release((ATL::CStringData *)(v18 - 24));
  if ( v27 == -1 )
    goto LABEL_9;
  v12 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v19,
          v22,
          v11,
          &v27);
  v13 = 1;
  LODWORD(v18) = 1;
  if ( !ATL::operator!=((unsigned __int16 **)v12, v14) )
    v13 = v27 != -1;
  ATL::CStringData::Release((ATL::CStringData *)(v22[0] - 24));
  if ( v13 )
  {
LABEL_9:
    v7 = -2147467259;
LABEL_15:
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x17u,
        (__int64)&WPP_c170edd1854f90c7cdf4fa9bb21811dc_Traceguids,
        v7);
    }
    goto LABEL_19;
  }
  try
  {
    CAudioIdentifier::UnescapeIdentifierString(&v20);
    CAudioIdentifier::UnescapeIdentifierString(&v21);
  }
  catch ( ATL::CAtlException *v24 )
  {
    v27 = *(_DWORD *)v24;
    v4 = this;
    v7 = v27;
  }
  if ( v7 < 0 )
    goto LABEL_15;
  v7 = CAudioEndpointId::Initialize(v4, a2);
  if ( v7 < 0 )
    goto LABEL_15;
  v7 = CAppAudioSessionId::Initialize((CAudioSessionInstanceId *)((char *)v4 + 8), v20);
  if ( v7 < 0 )
    goto LABEL_15;
  v7 = CAppInstanceId::Initialize((CAudioSessionInstanceId *)((char *)v4 + 56), v21);
  if ( v7 < 0 )
    goto LABEL_15;
  v7 = CAudioSessionInstanceId::CalculateStaticId(v4);
  if ( v7 < 0 )
    goto LABEL_15;
LABEL_19:
  ATL::CStringData::Release((ATL::CStringData *)(v19 - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v21 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v20 - 12));
  return (unsigned int)v7;
}
