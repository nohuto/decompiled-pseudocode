/*
 * XREFs of ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x18007E214
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x18007E884 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x18007EB78 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x180012000 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800183F4 (--4-$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180018760 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x1800191BC (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18002C240 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x180076F78 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ??9ATL@@YA_NPEBDAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z @ 0x18007DFD4 (--9ATL@@YA_NPEBDAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z.c)
 *     ?GetAt@?$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z @ 0x18007E144 (-GetAt@-$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z.c)
 *     ?Init@?$CW2WEX@$0IA@@ATL@@AEAAXPEBG@Z @ 0x18007E16C (-Init@-$CW2WEX@$0IA@@ATL@@AEAAXPEBG@Z.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18007F030 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAppAudioSessionId::Initialize(CAppAudioSessionId *this, unsigned __int16 *a2)
{
  CAppAudioSessionId *v3; // rdi
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ebx
  __int64 *v7; // rax
  __int64 v8; // r8
  __int64 *v9; // rax
  __int64 v10; // r8
  __int64 *v11; // rax
  unsigned __int16 *v12; // rcx
  char v13; // bl
  int *v15; // rbx
  __int64 v16; // r8
  int *v17; // rbx
  int *v18; // rbx
  int v19; // [rsp+20h] [rbp-188h] BYREF
  unsigned __int16 *v20; // [rsp+28h] [rbp-180h] BYREF
  __int64 v21; // [rsp+30h] [rbp-178h] BYREF
  __int64 v22; // [rsp+38h] [rbp-170h] BYREF
  _WORD *v23; // [rsp+40h] [rbp-168h] BYREF
  CAppAudioSessionId *v24; // [rsp+48h] [rbp-160h]
  __int64 v25; // [rsp+50h] [rbp-158h] BYREF
  ATL::CAtlException *v26; // [rsp+58h] [rbp-150h] BYREF
  ATL::CAtlException *v27; // [rsp+60h] [rbp-148h] BYREF
  ATL::CAtlException *v28[3]; // [rsp+68h] [rbp-140h] BYREF
  LPCOLESTR lpsz; // [rsp+80h] [rbp-128h] BYREF
  _BYTE v30[264]; // [rsp+88h] [rbp-120h] BYREF

  v28[1] = (ATL::CAtlException *)-2LL;
  v3 = this;
  v24 = this;
  LODWORD(v22) = 0;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v20);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v23);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v21);
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v21, a2, v4, v5);
  }
  catch ( ATL::CAtlException *v26 )
  {
    v15 = (int *)v26;
    if ( *(_DWORD *)v26 == -1073741571 )
      _resetstkoflw();
    v19 = *v15;
    v6 = v19;
    if ( v19 < 0 )
      goto LABEL_23;
    v3 = v24;
  }
  *((GUID *)v3 + 1) = GUID_00000000_0000_0000_0000_000000000000;
  v19 = 0;
  v7 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
         &v21,
         &v22,
         v16,
         &v19);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&v20, v7);
  ATL::CStringData::Release((ATL::CStringData *)(v22 - 24));
  if ( v19 == -1
    || (v9 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
               &v21,
               &v22,
               v8,
               &v19),
        ATL::CSimpleStringT<unsigned short,0>::operator=(&v23, v9),
        ATL::CStringData::Release((ATL::CStringData *)(v22 - 24)),
        v19 == -1)
    || ((v11 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                 &v21,
                 &v25,
                 v10,
                 &v19),
         LODWORD(v22) = 1,
         ATL::operator!=(v12, v11))
     || v19 != -1
      ? (v13 = 1)
      : (v13 = 0),
        ATL::CStringData::Release((ATL::CStringData *)(v25 - 24)),
        v13) )
  {
    v6 = -2147467259;
    goto LABEL_23;
  }
  if ( *((_DWORD *)v20 - 4) == 1 && (unsigned __int16)ATL::CSimpleStringT<unsigned short,0>::GetAt(&v20) == 35 )
  {
    *((_DWORD *)v3 + 10) = 1;
  }
  else
  {
    try
    {
      CAudioIdentifier::UnescapeIdentifierString(&v20);
    }
    catch ( ATL::CAtlException *v27 )
    {
      v17 = (int *)v27;
      if ( *(_DWORD *)v27 == -1073741571 )
        _resetstkoflw();
      v19 = *v17;
      v6 = v19;
      if ( v19 < 0 )
        goto LABEL_23;
      v3 = v24;
    }
  }
  try
  {
    CAudioIdentifier::UnescapeIdentifierString(&v23);
  }
  catch ( ATL::CAtlException *v28 )
  {
    v18 = (int *)v28[0];
    if ( *(_DWORD *)v28[0] == -1073741571 )
      _resetstkoflw();
    v19 = *v18;
    v6 = v19;
    if ( v19 < 0 )
      goto LABEL_23;
    v3 = v24;
  }
  lpsz = (LPCOLESTR)v30;
  ATL::CW2WEX<128>::Init((void **)&lpsz, v23);
  v6 = CLSIDFromString(lpsz, (LPCLSID)v3 + 1);
  if ( lpsz != (LPCOLESTR)v30 )
    free((void *)lpsz);
  if ( v6 < 0
    || (ATL::CSimpleStringT<unsigned short,0>::operator=(v3, (__int64 *)&v20),
        v6 = CAppAudioSessionId::CalculateStaticId((const GUID *)v3),
        v6 < 0) )
  {
LABEL_23:
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x11u,
        (__int64)&WPP_c170edd1854f90c7cdf4fa9bb21811dc_Traceguids,
        v6);
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v21 - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v23 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v20 - 12));
  return (unsigned int)v6;
}
