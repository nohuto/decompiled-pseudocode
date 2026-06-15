/*
 * XREFs of ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x180083FE4
 * Callers:
 *     AudioSessionManagerGetExistingSession @ 0x180080AF0 (AudioSessionManagerGetExistingSession.c)
 *     ?GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@H@Z @ 0x1800813D0 (-GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@H@Z.c)
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

// Hidden C++ exception states: #wind=8
__int64 __fastcall CAudioSessionInstanceId::Initialize(CAudioSessionInstanceId *this, char *a2)
{
  CAudioSessionInstanceId *v3; // r15
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // esi
  char *v7; // rdx
  volatile signed __int32 *v8; // rcx
  volatile signed __int32 *v9; // r12
  volatile signed __int32 *v10; // r13
  __int64 v11; // r8
  char *v12; // rdx
  volatile signed __int32 *v13; // rcx
  volatile signed __int32 *v14; // r12
  volatile signed __int32 *v15; // r13
  __int64 v16; // r8
  char *v17; // rdx
  volatile signed __int32 *v18; // rcx
  volatile signed __int32 *v19; // r12
  volatile signed __int32 *v20; // r13
  __int64 v21; // r8
  __int64 *v22; // rax
  bool v23; // bl
  WCHAR *v24; // rdx
  int *v26; // rbx
  __int64 v27; // r8
  unsigned __int16 *v28; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int16 *v29; // [rsp+28h] [rbp-80h] BYREF
  int *v30; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int16 *v31; // [rsp+38h] [rbp-70h] BYREF
  __int64 v32; // [rsp+40h] [rbp-68h] BYREF
  __int64 v33; // [rsp+48h] [rbp-60h] BYREF
  __int64 v34; // [rsp+50h] [rbp-58h] BYREF
  __int64 v35[2]; // [rsp+58h] [rbp-50h] BYREF
  ATL::CAtlException *v36; // [rsp+68h] [rbp-40h] BYREF
  ATL::CAtlException *v37; // [rsp+70h] [rbp-38h] BYREF
  int v39; // [rsp+C0h] [rbp+18h] BYREF
  int v40; // [rsp+C8h] [rbp+20h]

  v35[1] = -2LL;
  v3 = this;
  v40 = 0;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v31);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v29);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v28);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v30);
  v6 = 0;
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v30, a2, v4, v5);
  }
  catch ( ATL::CAtlException *v36 )
  {
    v26 = (int *)v36;
    if ( *(_DWORD *)v36 == -1073741571 )
      _resetstkoflw();
    v39 = *v26;
    v6 = v39;
    if ( v39 < 0 )
      goto LABEL_38;
    v3 = this;
  }
  v39 = 0;
  v7 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                  (__int64 *)&v30,
                  v35,
                  v27,
                  &v39);
  v8 = (volatile signed __int32 *)(v7 - 24);
  v9 = (volatile signed __int32 *)(v31 - 12);
  if ( v7 - 24 != (char *)(v31 - 12) )
  {
    if ( *((int *)v9 + 4) >= 0 && *(_QWORD *)v8 == *(_QWORD *)v9 )
    {
      v10 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v8);
      if ( _InterlockedExchangeAdd(v9 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v9 + 8LL))(*(_QWORD *)v9, v9);
      v31 = (unsigned __int16 *)(v10 + 6);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&v31, v7, *((_DWORD *)v7 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v35[0] - 24));
  if ( v39 == -1 )
    goto LABEL_12;
  v12 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                   (__int64 *)&v30,
                   &v32,
                   v11,
                   &v39);
  v13 = (volatile signed __int32 *)(v12 - 24);
  v14 = (volatile signed __int32 *)(v29 - 12);
  if ( v12 - 24 != (char *)(v29 - 12) )
  {
    if ( *((int *)v14 + 4) >= 0 && *(_QWORD *)v13 == *(_QWORD *)v14 )
    {
      v15 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v13);
      if ( _InterlockedExchangeAdd(v14 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v14 + 8LL))(*(_QWORD *)v14, v14);
      v29 = (unsigned __int16 *)(v15 + 6);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&v29, v12, *((_DWORD *)v12 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v32 - 24));
  if ( v39 == -1 )
    goto LABEL_12;
  v17 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                   (__int64 *)&v30,
                   &v34,
                   v16,
                   &v39);
  v18 = (volatile signed __int32 *)(v17 - 24);
  v19 = (volatile signed __int32 *)(v28 - 12);
  if ( v17 - 24 != (char *)(v28 - 12) )
  {
    if ( *((int *)v19 + 4) >= 0 && *(_QWORD *)v18 == *(_QWORD *)v19 )
    {
      v20 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v18);
      if ( _InterlockedExchangeAdd(v19 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v19 + 8LL))(*(_QWORD *)v19, v19);
      v28 = (unsigned __int16 *)(v20 + 6);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&v28, v17, *((_DWORD *)v17 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v34 - 24));
  if ( v39 == -1 )
    goto LABEL_12;
  v22 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          (__int64 *)&v30,
          &v33,
          v21,
          &v39);
  v23 = 1;
  v40 = 1;
  if ( !ATL::operator!=((unsigned __int16 **)v22, v24) )
    v23 = v39 != -1;
  ATL::CStringData::Release((ATL::CStringData *)(v33 - 24));
  if ( v23 )
  {
LABEL_12:
    v6 = -2147467259;
LABEL_38:
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x16u,
        (__int64)&WPP_c170edd1854f90c7cdf4fa9bb21811dc_Traceguids,
        v6);
    }
    goto LABEL_42;
  }
  try
  {
    CAudioIdentifier::UnescapeIdentifierString(&v31);
    CAudioIdentifier::UnescapeIdentifierString(&v29);
    CAudioIdentifier::UnescapeIdentifierString(&v28);
  }
  catch ( ATL::CAtlException *v37 )
  {
    v39 = *(_DWORD *)v37;
    v3 = this;
    v6 = v39;
  }
  if ( v6 < 0 )
    goto LABEL_38;
  v6 = CAudioEndpointId::Initialize(v3, v31);
  if ( v6 < 0 )
    goto LABEL_38;
  v6 = CAppAudioSessionId::Initialize((CAudioSessionInstanceId *)((char *)v3 + 8), (char *)v29);
  if ( v6 < 0 )
    goto LABEL_38;
  v6 = CAppInstanceId::Initialize((CAudioSessionInstanceId *)((char *)v3 + 56), (char *)v28);
  if ( v6 < 0 )
    goto LABEL_38;
  v6 = CAudioSessionInstanceId::CalculateStaticId(v3);
  if ( v6 < 0 )
    goto LABEL_38;
LABEL_42:
  ATL::CStringData::Release((ATL::CStringData *)(v30 - 6));
  ATL::CStringData::Release((ATL::CStringData *)(v28 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v29 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v31 - 12));
  return (unsigned int)v6;
}
