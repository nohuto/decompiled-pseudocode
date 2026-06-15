/*
 * XREFs of ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x180083C18
 * Callers:
 *     ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x18007A70C (-ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z.c)
 * Callees:
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x18000A920 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000AFD0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x18000BF90 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18000C9B4 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x18000D408 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x180017680 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x1800177B0 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ??9ATL@@YA_NAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z @ 0x180076EC0 (--9ATL@@YA_NAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x18007BCE8 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x180083390 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAppInstanceId@@QEAAJPEBG@Z @ 0x180083878 (-Initialize@CAppInstanceId@@QEAAJPEBG@Z.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800845D8 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAudioSessionInstanceId::Initialize(
        CAudioSessionInstanceId *this,
        const unsigned __int16 *a2,
        char *a3)
{
  CAudioSessionInstanceId *v4; // r14
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // esi
  char *v8; // rdx
  volatile signed __int32 *v9; // rcx
  volatile signed __int32 *v10; // r15
  volatile signed __int32 *v11; // r13
  __int64 v12; // r8
  char *v13; // rdx
  volatile signed __int32 *v14; // rcx
  volatile signed __int32 *v15; // r15
  volatile signed __int32 *v16; // r13
  __int64 v17; // r8
  __int64 *v18; // rax
  bool v19; // bl
  WCHAR *v20; // rdx
  int *v22; // rbx
  __int64 v23; // r8
  unsigned __int16 *v24; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int16 *v25; // [rsp+28h] [rbp-70h] BYREF
  int *v26; // [rsp+30h] [rbp-68h] BYREF
  int v27; // [rsp+38h] [rbp-60h]
  __int64 v28; // [rsp+40h] [rbp-58h] BYREF
  __int64 v29; // [rsp+48h] [rbp-50h] BYREF
  __int64 v30[2]; // [rsp+50h] [rbp-48h] BYREF
  ATL::CAtlException *v31; // [rsp+60h] [rbp-38h] BYREF
  ATL::CAtlException *v32; // [rsp+68h] [rbp-30h] BYREF
  int v35; // [rsp+B8h] [rbp+20h] BYREF

  v30[1] = -2LL;
  v4 = this;
  v27 = 0;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v25);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v24);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v26);
  v7 = 0;
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v26, a3, v5, v6);
  }
  catch ( ATL::CAtlException *v31 )
  {
    v22 = (int *)v31;
    if ( *(_DWORD *)v31 == -1073741571 )
      _resetstkoflw();
    v35 = *v22;
    v7 = v35;
    if ( v35 < 0 )
      goto LABEL_29;
    v4 = this;
  }
  v35 = 0;
  v8 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                  (__int64 *)&v26,
                  &v28,
                  v23,
                  &v35);
  v9 = (volatile signed __int32 *)(v8 - 24);
  v10 = (volatile signed __int32 *)(v25 - 12);
  if ( v8 - 24 != (char *)(v25 - 12) )
  {
    if ( *((int *)v10 + 4) >= 0 && *(_QWORD *)v9 == *(_QWORD *)v10 )
    {
      v11 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v9);
      if ( _InterlockedExchangeAdd(v10 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v10 + 8LL))(*(_QWORD *)v10, v10);
      v25 = (unsigned __int16 *)(v11 + 6);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&v25, v8, *((_DWORD *)v8 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v28 - 24));
  if ( v35 == -1 )
    goto LABEL_23;
  v13 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                   (__int64 *)&v26,
                   &v29,
                   v12,
                   &v35);
  v14 = (volatile signed __int32 *)(v13 - 24);
  v15 = (volatile signed __int32 *)(v24 - 12);
  if ( v13 - 24 != (char *)(v24 - 12) )
  {
    if ( *((int *)v15 + 4) >= 0 && *(_QWORD *)v14 == *(_QWORD *)v15 )
    {
      v16 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v14);
      if ( _InterlockedExchangeAdd(v15 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v15 + 8LL))(*(_QWORD *)v15, v15);
      v24 = (unsigned __int16 *)(v16 + 6);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&v24, v13, *((_DWORD *)v13 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v29 - 24));
  if ( v35 == -1 )
    goto LABEL_23;
  v18 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          (__int64 *)&v26,
          v30,
          v17,
          &v35);
  v19 = 1;
  v27 = 1;
  if ( !ATL::operator!=((unsigned __int16 **)v18, v20) )
    v19 = v35 != -1;
  ATL::CStringData::Release((ATL::CStringData *)(v30[0] - 24));
  if ( v19 )
  {
LABEL_23:
    v7 = -2147467259;
LABEL_29:
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x17u,
        (__int64)&WPP_c170edd1854f90c7cdf4fa9bb21811dc_Traceguids,
        v7);
    }
    goto LABEL_33;
  }
  try
  {
    CAudioIdentifier::UnescapeIdentifierString(&v25);
    CAudioIdentifier::UnescapeIdentifierString(&v24);
  }
  catch ( ATL::CAtlException *v32 )
  {
    v35 = *(_DWORD *)v32;
    v4 = this;
    v7 = v35;
  }
  if ( v7 < 0 )
    goto LABEL_29;
  v7 = CAudioEndpointId::Initialize(v4, a2);
  if ( v7 < 0 )
    goto LABEL_29;
  v7 = CAppAudioSessionId::Initialize((CAudioSessionInstanceId *)((char *)v4 + 8), (char *)v25);
  if ( v7 < 0 )
    goto LABEL_29;
  v7 = CAppInstanceId::Initialize((CAudioSessionInstanceId *)((char *)v4 + 56), (char *)v24);
  if ( v7 < 0 )
    goto LABEL_29;
  v7 = CAudioSessionInstanceId::CalculateStaticId(v4);
  if ( v7 < 0 )
    goto LABEL_29;
LABEL_33:
  ATL::CStringData::Release((ATL::CStringData *)(v26 - 6));
  ATL::CStringData::Release((ATL::CStringData *)(v24 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v25 - 12));
  return (unsigned int)v7;
}
