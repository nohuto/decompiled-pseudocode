/*
 * XREFs of ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x180065B18
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800661D4 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x1800664A4 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000D410 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800129B0 (--4-$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180012B18 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x18002A440 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x180036CBA (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18005021C (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x18005F618 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ??$AtlConvAllocMemory@G@ATL@@YAXPEAPEAGHPEAGH@Z @ 0x180065828 (--$AtlConvAllocMemory@G@ATL@@YAXPEAPEAGHPEAGH@Z.c)
 *     ??9ATL@@YA_NPEBDAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z @ 0x1800658E4 (--9ATL@@YA_NPEBDAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z.c)
 *     ?GetAt@?$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z @ 0x180065AF0 (-GetAt@-$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180066C3C (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAppAudioSessionId::Initialize(CAppAudioSessionId *this, char *a2)
{
  CAppAudioSessionId *v3; // rsi
  int v4; // ebx
  __int64 *v5; // rax
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 *v8; // rax
  __int64 v9; // r8
  __int64 *v10; // rax
  unsigned __int16 *v11; // rcx
  char v12; // r14
  int v13; // ebx
  __int64 v14; // rdx
  int *v16; // rbx
  __int64 v17; // r8
  int *v18; // rbx
  int *v19; // rbx
  int v20; // [rsp+20h] [rbp-198h] BYREF
  void *Src; // [rsp+28h] [rbp-190h] BYREF
  unsigned __int16 *v22; // [rsp+30h] [rbp-188h] BYREF
  __int64 v23; // [rsp+38h] [rbp-180h] BYREF
  __int64 v24; // [rsp+40h] [rbp-178h] BYREF
  CAppAudioSessionId *v25; // [rsp+48h] [rbp-170h]
  __int64 v26[2]; // [rsp+50h] [rbp-168h] BYREF
  ATL::CAtlException *v27; // [rsp+60h] [rbp-158h] BYREF
  ATL::CAtlException *v28; // [rsp+68h] [rbp-150h] BYREF
  ATL::CAtlException *v29; // [rsp+70h] [rbp-148h] BYREF
  LPCOLESTR lpsz; // [rsp+80h] [rbp-138h] BYREF
  _BYTE v31[264]; // [rsp+88h] [rbp-130h] BYREF

  v26[1] = -2LL;
  v3 = this;
  v25 = this;
  LODWORD(v23) = 0;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v22);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&Src);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v24);
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v24, a2);
  }
  catch ( ATL::CAtlException *v27 )
  {
    v16 = (int *)v27;
    if ( *(_DWORD *)v27 == -1073741571 )
      _o__resetstkoflw();
    v20 = *v16;
    v4 = v20;
    if ( v20 < 0 )
      goto LABEL_29;
    v3 = v25;
  }
  *((GUID *)v3 + 1) = GUID_00000000_0000_0000_0000_000000000000;
  v20 = 0;
  v5 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
         &v24,
         &v23,
         v17,
         &v20);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&v22, v5);
  ATL::CStringData::Release((ATL::CStringData *)(v23 - 24));
  v7 = -1LL;
  if ( v20 == -1 )
    goto LABEL_5;
  v8 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
         &v24,
         &v23,
         v6,
         &v20);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&Src, v8);
  ATL::CStringData::Release((ATL::CStringData *)(v23 - 24));
  if ( v20 == -1 )
    goto LABEL_5;
  v10 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v24,
          v26,
          v9,
          &v20);
  LODWORD(v23) = 1;
  if ( ATL::operator!=(v11, v10) || (v12 = 0, v20 != -1) )
    v12 = 1;
  ATL::CStringData::Release((ATL::CStringData *)(v26[0] - 24));
  if ( v12 )
  {
LABEL_5:
    v4 = -2147467259;
    goto LABEL_29;
  }
  if ( *((_DWORD *)v22 - 4) == 1 && (unsigned __int16)ATL::CSimpleStringT<unsigned short,0>::GetAt(&v22) == 35 )
  {
    *((_DWORD *)v3 + 10) = 1;
  }
  else
  {
    try
    {
      CAudioIdentifier::UnescapeIdentifierString(&v22);
    }
    catch ( ATL::CAtlException *v28 )
    {
      v18 = (int *)v28;
      if ( *(_DWORD *)v28 == -1073741571 )
        _o__resetstkoflw();
      v20 = *v18;
      v4 = v20;
      if ( v20 < 0 )
        goto LABEL_29;
      v7 = -1LL;
      v3 = v25;
    }
  }
  try
  {
    CAudioIdentifier::UnescapeIdentifierString(&Src);
  }
  catch ( ATL::CAtlException *v29 )
  {
    v19 = (int *)v29;
    if ( *(_DWORD *)v29 == -1073741571 )
      _o__resetstkoflw();
    v20 = *v19;
    v4 = v20;
    if ( v20 < 0 )
      goto LABEL_29;
    v7 = -1LL;
    v3 = v25;
  }
  lpsz = (LPCOLESTR)v31;
  if ( Src )
  {
    do
      ++v7;
    while ( *((_WORD *)Src + v7) );
    v13 = v7 + 1;
    ATL::AtlConvAllocMemory<unsigned short>((void **)&lpsz, v13, v31);
    if ( 2LL * v13 )
    {
      if ( !lpsz )
      {
        *(_DWORD *)_o__errno(0LL, v14) = 22;
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      memcpy_0((void *)lpsz, Src, 2LL * v13);
    }
  }
  else
  {
    lpsz = 0LL;
  }
  v4 = CLSIDFromString(lpsz, (LPCLSID)v3 + 1);
  if ( lpsz != (LPCOLESTR)v31 )
    free((void *)lpsz);
  if ( v4 < 0
    || (ATL::CSimpleStringT<unsigned short,0>::operator=(v3, (__int64 *)&v22),
        v4 = CAppAudioSessionId::CalculateStaticId(v3),
        v4 < 0) )
  {
LABEL_29:
    AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Initialize", 450, v4);
  }
  ATL::CStringData::Release((ATL::CStringData *)(v24 - 24));
  ATL::CStringData::Release((ATL::CStringData *)((char *)Src - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v22 - 12));
  return (unsigned int)v4;
}
