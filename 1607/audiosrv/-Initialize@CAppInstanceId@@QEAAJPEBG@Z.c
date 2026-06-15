/*
 * XREFs of ?Initialize@CAppInstanceId@@QEAAJPEBG@Z @ 0x180065F20
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800661D4 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x1800664A4 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000D410 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800129B0 (--4-$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180012B18 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18005021C (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x18005F618 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ??9ATL@@YA_NPEBDAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z @ 0x1800658E4 (--9ATL@@YA_NPEBDAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z.c)
 *     ?GetAt@?$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z @ 0x180065AF0 (-GetAt@-$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAppInstanceId::Initialize(CAppInstanceId *this, char *a2)
{
  CAppInstanceId *v3; // r14
  unsigned int v4; // esi
  __int64 *v5; // rax
  __int64 v6; // r8
  __int64 *v7; // rax
  __int64 v8; // r8
  __int64 *v9; // rax
  unsigned __int16 *v10; // rcx
  char v11; // bl
  wchar_t *v12; // rbx
  wchar_t *v13; // rdi
  int *v15; // rbx
  __int64 v16; // r8
  __int64 v17; // [rsp+20h] [rbp-58h] BYREF
  wchar_t *String; // [rsp+28h] [rbp-50h] BYREF
  wchar_t *v19; // [rsp+30h] [rbp-48h] BYREF
  __int64 v20; // [rsp+38h] [rbp-40h] BYREF
  wchar_t *EndPtr[2]; // [rsp+40h] [rbp-38h] BYREF
  ATL::CAtlException *v22; // [rsp+50h] [rbp-28h] BYREF
  int v24; // [rsp+90h] [rbp+18h] BYREF
  __int64 v25; // [rsp+98h] [rbp+20h] BYREF

  EndPtr[1] = (wchar_t *)-2LL;
  v3 = this;
  LODWORD(v25) = 0;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v17);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v19);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&String);
  v4 = 0;
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v17, a2);
  }
  catch ( ATL::CAtlException *v22 )
  {
    v15 = (int *)v22;
    if ( *(_DWORD *)v22 == -1073741571 )
      _o__resetstkoflw();
    v24 = *v15;
    v4 = v24;
    if ( v24 < 0 )
      goto LABEL_17;
    v3 = this;
  }
  v24 = 0;
  v5 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
         &v17,
         &v25,
         v16,
         &v24);
  ATL::CSimpleStringT<unsigned short,0>::operator=(&v19, v5);
  ATL::CStringData::Release((ATL::CStringData *)(v25 - 24));
  if ( v24 == -1
    || (v7 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
               &v17,
               &v25,
               v6,
               &v24),
        ATL::CSimpleStringT<unsigned short,0>::operator=(&String, v7),
        ATL::CStringData::Release((ATL::CStringData *)(v25 - 24)),
        v24 == -1)
    || ((v9 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                &v17,
                &v20,
                v8,
                &v24),
         LODWORD(v25) = 1,
         ATL::operator!=(v10, v9))
     || v24 != -1
      ? (v11 = 1)
      : (v11 = 0),
        ATL::CStringData::Release((ATL::CStringData *)(v20 - 24)),
        v11) )
  {
    v4 = -2147467259;
LABEL_17:
    AudSrvTraceLoggingErrorHelper("CAppInstanceId::Initialize", 624, v4);
    v13 = v19;
    v12 = String;
    goto LABEL_18;
  }
  v12 = String;
  if ( *((_DWORD *)String - 4) == 1 && (unsigned __int16)ATL::CSimpleStringT<unsigned short,0>::GetAt(&String) == 35 )
  {
    *((_DWORD *)v3 + 2) = 1;
    *(_DWORD *)v3 = 0;
  }
  else
  {
    *(_DWORD *)v3 = wcstoul(v12, EndPtr, 10);
  }
  v13 = v19;
  *((_DWORD *)v3 + 1) = wcstoul(v19, EndPtr, 10);
LABEL_18:
  ATL::CStringData::Release((ATL::CStringData *)(v12 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v13 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v17 - 24));
  return v4;
}
