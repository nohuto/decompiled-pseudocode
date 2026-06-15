/*
 * XREFs of ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x180083390
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x180083C18 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x180083FE4 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x18000A920 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000AFD0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18000C9B4 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x18000CF40 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x180017680 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x1800177B0 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x18007BCE8 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ??9ATL@@YA_NPEBDAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z @ 0x180083150 (--9ATL@@YA_NPEBDAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z.c)
 *     ?GetAt@?$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z @ 0x1800832C0 (-GetAt@-$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z.c)
 *     ?Init@?$CW2WEX@$0IA@@ATL@@AEAAXPEBG@Z @ 0x1800832E8 (-Init@-$CW2WEX@$0IA@@ATL@@AEAAXPEBG@Z.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800845D8 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAppAudioSessionId::Initialize(CAppAudioSessionId *this, char *a2)
{
  CAppAudioSessionId *v3; // rsi
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ebx
  char *v7; // rdx
  volatile signed __int32 *v8; // rcx
  volatile signed __int32 *v9; // r14
  volatile signed __int32 *v10; // r15
  __int64 v11; // r8
  char *v12; // rdx
  volatile signed __int32 *v13; // rcx
  volatile signed __int32 *v14; // r14
  volatile signed __int32 *v15; // r15
  __int64 v16; // r8
  __int64 *v17; // rax
  unsigned __int16 *v18; // rcx
  char v19; // bl
  volatile signed __int32 *v20; // rcx
  volatile signed __int32 *v21; // r14
  volatile signed __int32 *v22; // r15
  ATL::CAtlException *v24; // rbx
  __int64 v25; // r8
  ATL::CAtlException *v26; // rbx
  ATL::CAtlException *v27; // rbx
  int v28; // [rsp+20h] [rbp-1A8h] BYREF
  int v29; // [rsp+24h] [rbp-1A4h]
  unsigned __int16 *v30; // [rsp+28h] [rbp-1A0h] BYREF
  _WORD *v31; // [rsp+30h] [rbp-198h] BYREF
  int *v32; // [rsp+38h] [rbp-190h] BYREF
  int v33; // [rsp+40h] [rbp-188h]
  CAppAudioSessionId *v34; // [rsp+48h] [rbp-180h]
  __int64 v35; // [rsp+50h] [rbp-178h] BYREF
  __int64 v36; // [rsp+58h] [rbp-170h] BYREF
  __int64 v37; // [rsp+60h] [rbp-168h] BYREF
  ATL::CAtlException *v38; // [rsp+68h] [rbp-160h] BYREF
  ATL::CAtlException *v39; // [rsp+70h] [rbp-158h] BYREF
  ATL::CAtlException *v40[3]; // [rsp+78h] [rbp-150h] BYREF
  LPCOLESTR lpsz; // [rsp+90h] [rbp-138h] BYREF
  _BYTE v42[264]; // [rsp+98h] [rbp-130h] BYREF

  v40[1] = (ATL::CAtlException *)-2LL;
  v3 = this;
  v34 = this;
  v33 = 0;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v30);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v31);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v32);
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v32, a2, v4, v5);
  }
  catch ( ATL::CAtlException *v38 )
  {
    v24 = v38;
    if ( *(_DWORD *)v38 == -1073741571 )
      _resetstkoflw();
    v29 = *(_DWORD *)v24;
    v6 = v29;
    if ( v29 < 0 )
      goto LABEL_44;
    v3 = v34;
  }
  *((GUID *)v3 + 1) = GUID_00000000_0000_0000_0000_000000000000;
  v28 = 0;
  v7 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                  (__int64 *)&v32,
                  &v35,
                  v25,
                  &v28);
  v8 = (volatile signed __int32 *)(v7 - 24);
  v9 = (volatile signed __int32 *)(v30 - 12);
  if ( v7 - 24 != (char *)(v30 - 12) )
  {
    if ( *((int *)v9 + 4) >= 0 && *(_QWORD *)v8 == *(_QWORD *)v9 )
    {
      v10 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v8);
      if ( _InterlockedExchangeAdd(v9 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v9 + 8LL))(*(_QWORD *)v9, v9);
      v30 = (unsigned __int16 *)(v10 + 6);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&v30, v7, *((_DWORD *)v7 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v35 - 24));
  if ( v28 == -1 )
    goto LABEL_12;
  v12 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                   (__int64 *)&v32,
                   &v36,
                   v11,
                   &v28);
  v13 = (volatile signed __int32 *)(v12 - 24);
  v14 = (volatile signed __int32 *)(v31 - 12);
  if ( v12 - 24 != (char *)(v31 - 12) )
  {
    if ( *((int *)v14 + 4) >= 0 && *(_QWORD *)v13 == *(_QWORD *)v14 )
    {
      v15 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v13);
      if ( _InterlockedExchangeAdd(v14 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v14 + 8LL))(*(_QWORD *)v14, v14);
      v31 = v15 + 6;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&v31, v12, *((_DWORD *)v12 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v36 - 24));
  if ( v28 == -1
    || ((v17 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                 (__int64 *)&v32,
                 &v37,
                 v16,
                 &v28),
         v33 = 1,
         ATL::operator!=(v18, v17))
     || v28 != -1
      ? (v19 = 1)
      : (v19 = 0),
        ATL::CStringData::Release((ATL::CStringData *)(v37 - 24)),
        v19) )
  {
LABEL_12:
    v6 = -2147467259;
    goto LABEL_44;
  }
  if ( *((_DWORD *)v30 - 4) == 1 && (unsigned __int16)ATL::CSimpleStringT<unsigned short,0>::GetAt(&v30) == 35 )
  {
    *((_DWORD *)v3 + 10) = 1;
  }
  else
  {
    try
    {
      CAudioIdentifier::UnescapeIdentifierString(&v30);
    }
    catch ( ATL::CAtlException *v39 )
    {
      v26 = v39;
      if ( *(_DWORD *)v39 == -1073741571 )
        _resetstkoflw();
      v29 = *(_DWORD *)v26;
      v6 = v29;
      if ( v29 < 0 )
        goto LABEL_44;
      v3 = v34;
    }
  }
  try
  {
    CAudioIdentifier::UnescapeIdentifierString(&v31);
  }
  catch ( ATL::CAtlException *v40 )
  {
    v27 = v40[0];
    if ( *(_DWORD *)v40[0] == -1073741571 )
      _resetstkoflw();
    v29 = *(_DWORD *)v27;
    v6 = v29;
    if ( v29 < 0 )
      goto LABEL_44;
    v3 = v34;
  }
  lpsz = (LPCOLESTR)v42;
  ATL::CW2WEX<128>::Init((void **)&lpsz, v31);
  v6 = CLSIDFromString(lpsz, (LPCLSID)v3 + 1);
  if ( lpsz != (LPCOLESTR)v42 )
    free((void *)lpsz);
  if ( v6 < 0 )
    goto LABEL_44;
  v20 = (volatile signed __int32 *)(v30 - 12);
  v21 = (volatile signed __int32 *)(*(_QWORD *)v3 - 24LL);
  if ( v30 - 12 != (unsigned __int16 *)v21 )
  {
    if ( *((int *)v21 + 4) >= 0 && *(_QWORD *)v20 == *(_QWORD *)v21 )
    {
      v22 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v20);
      if ( _InterlockedExchangeAdd(v21 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v21 + 8LL))(*(_QWORD *)v21, v21);
      *(_QWORD *)v3 = v22 + 6;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)v3, v30, *((_DWORD *)v30 - 4));
    }
  }
  v6 = CAppAudioSessionId::CalculateStaticId((const void **)v3);
  if ( v6 < 0 )
  {
LABEL_44:
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x11u,
        (__int64)&WPP_c170edd1854f90c7cdf4fa9bb21811dc_Traceguids,
        v6);
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v32 - 6));
  ATL::CStringData::Release((ATL::CStringData *)(v31 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v30 - 12));
  return (unsigned int)v6;
}
