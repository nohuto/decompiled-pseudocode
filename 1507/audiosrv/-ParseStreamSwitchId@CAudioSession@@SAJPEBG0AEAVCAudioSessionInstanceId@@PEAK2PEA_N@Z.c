/*
 * XREFs of ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x18007A70C
 * Callers:
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x180080C80 (AudioSessionManagerGetSessionForStreamSwitch.c)
 * Callees:
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x18000A920 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000AFD0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18000C9B4 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x180017680 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x1800177B0 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ??9ATL@@YA_NAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z @ 0x180076EC0 (--9ATL@@YA_NAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x18007BCE8 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x180083C18 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800845D8 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
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
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // esi
  char *v10; // rdx
  volatile signed __int32 *v11; // rcx
  volatile signed __int32 *v12; // r12
  volatile signed __int32 *v13; // r13
  __int64 v14; // r8
  char *v15; // rdx
  volatile signed __int32 *v16; // rcx
  volatile signed __int32 *v17; // r12
  volatile signed __int32 *v18; // r13
  __int64 v19; // r8
  char *v20; // rdx
  volatile signed __int32 *v21; // rcx
  volatile signed __int32 *v22; // r12
  volatile signed __int32 *v23; // r13
  __int64 v24; // r8
  char *v25; // rdx
  volatile signed __int32 *v26; // rcx
  volatile signed __int32 *v27; // r12
  volatile signed __int32 *v28; // r13
  __int64 v29; // r8
  unsigned __int16 **v30; // rax
  bool v31; // bl
  WCHAR *v32; // rdx
  ATL::CAtlException *v34; // rbx
  __int64 v35; // r8
  int v36; // [rsp+20h] [rbp-A8h] BYREF
  int *v37; // [rsp+28h] [rbp-A0h] BYREF
  wchar_t *v38; // [rsp+30h] [rbp-98h] BYREF
  wchar_t *v39; // [rsp+38h] [rbp-90h] BYREF
  wchar_t *String; // [rsp+40h] [rbp-88h] BYREF
  unsigned __int16 *v41; // [rsp+48h] [rbp-80h] BYREF
  int v42; // [rsp+50h] [rbp-78h]
  __int64 v43; // [rsp+58h] [rbp-70h] BYREF
  __int64 v44; // [rsp+60h] [rbp-68h] BYREF
  __int64 v45; // [rsp+68h] [rbp-60h] BYREF
  __int64 v46; // [rsp+70h] [rbp-58h] BYREF
  _QWORD v47[2]; // [rsp+78h] [rbp-50h] BYREF
  ATL::CAtlException *v48; // [rsp+88h] [rbp-40h] BYREF
  ATL::CAtlException *v49; // [rsp+90h] [rbp-38h] BYREF

  v47[1] = -2LL;
  v42 = 0;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v37);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v41);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&String);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v39);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v38);
  v9 = 0;
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v37, a2, v7, v8);
  }
  catch ( ATL::CAtlException *v48 )
  {
    v34 = v48;
    if ( *(_DWORD *)v48 == -1073741571 )
      _resetstkoflw();
    v36 = *(_DWORD *)v34;
    v9 = v36;
    if ( v36 < 0 )
      goto LABEL_42;
  }
  v36 = 0;
  v10 = *(char **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                    &v37,
                    &v43,
                    v35,
                    &v36);
  v11 = (volatile signed __int32 *)(v10 - 24);
  v12 = (volatile signed __int32 *)(v41 - 12);
  if ( v10 - 24 != (char *)(v41 - 12) )
  {
    if ( *((int *)v12 + 4) >= 0 && *(_QWORD *)v11 == *(_QWORD *)v12 )
    {
      v13 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v11);
      if ( _InterlockedExchangeAdd(v12 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v12 + 8LL))(*(_QWORD *)v12, v12);
      v41 = (unsigned __int16 *)(v13 + 6);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&v41, v10, *((_DWORD *)v10 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v43 - 24));
  if ( v36 == -1 )
    goto LABEL_38;
  v15 = *(char **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                    &v37,
                    &v45,
                    v14,
                    &v36);
  v16 = (volatile signed __int32 *)(v15 - 24);
  v17 = (volatile signed __int32 *)(String - 12);
  if ( v15 - 24 != (char *)(String - 12) )
  {
    if ( *((int *)v17 + 4) >= 0 && *(_QWORD *)v16 == *(_QWORD *)v17 )
    {
      v18 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v16);
      if ( _InterlockedExchangeAdd(v17 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v17 + 8LL))(*(_QWORD *)v17, v17);
      String = (wchar_t *)(v18 + 6);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&String, v15, *((_DWORD *)v15 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v45 - 24));
  if ( v36 == -1 )
    goto LABEL_38;
  v20 = *(char **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                    &v37,
                    v47,
                    v19,
                    &v36);
  v21 = (volatile signed __int32 *)(v20 - 24);
  v22 = (volatile signed __int32 *)(v39 - 12);
  if ( v20 - 24 != (char *)(v39 - 12) )
  {
    if ( *((int *)v22 + 4) >= 0 && *(_QWORD *)v21 == *(_QWORD *)v22 )
    {
      v23 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v21);
      if ( _InterlockedExchangeAdd(v22 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v22 + 8LL))(*(_QWORD *)v22, v22);
      v39 = (wchar_t *)(v23 + 6);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&v39, v20, *((_DWORD *)v20 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v47[0] - 24LL));
  if ( v36 == -1 )
    goto LABEL_38;
  v25 = *(char **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                    &v37,
                    &v46,
                    v24,
                    &v36);
  v26 = (volatile signed __int32 *)(v25 - 24);
  v27 = (volatile signed __int32 *)(v38 - 12);
  if ( v25 - 24 != (char *)(v38 - 12) )
  {
    if ( *((int *)v27 + 4) >= 0 && *(_QWORD *)v26 == *(_QWORD *)v27 )
    {
      v28 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v26);
      if ( _InterlockedExchangeAdd(v27 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v27 + 8LL))(*(_QWORD *)v27, v27);
      v38 = (wchar_t *)(v28 + 6);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&v38, v25, *((_DWORD *)v25 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v46 - 24));
  if ( v36 == -1 )
    goto LABEL_38;
  v30 = (unsigned __int16 **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                               &v37,
                               &v44,
                               v29,
                               &v36);
  v31 = 1;
  v42 = 1;
  if ( !ATL::operator!=(v30, v32) )
    v31 = v36 != -1;
  ATL::CStringData::Release((ATL::CStringData *)(v44 - 24));
  if ( v31 )
  {
LABEL_38:
    v9 = -2147467259;
  }
  else
  {
    try
    {
      CAudioIdentifier::UnescapeIdentifierString(&v41);
      CAudioIdentifier::UnescapeIdentifierString(&String);
      CAudioIdentifier::UnescapeIdentifierString(&v39);
      CAudioIdentifier::UnescapeIdentifierString(&v38);
    }
    catch ( ATL::CAtlException *v49 )
    {
      v36 = *(_DWORD *)v49;
      v9 = v36;
    }
    if ( v9 >= 0 )
    {
      v9 = CAudioSessionInstanceId::Initialize(a3, a1, v41);
      if ( v9 >= 0 )
      {
        *a4 = wcstoul(String, 0LL, 10);
        *a5 = wcstoul(v39, 0LL, 10);
        *a6 = wcstoul(v38, 0LL, 10) != 0;
        goto LABEL_46;
      }
    }
  }
LABEL_42:
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x16u,
      (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      v9);
  }
LABEL_46:
  ATL::CStringData::Release((ATL::CStringData *)(v38 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v39 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(String - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v41 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v37 - 6));
  return (unsigned int)v9;
}
