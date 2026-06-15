/*
 * XREFs of ?Initialize@CAppInstanceId@@QEAAJPEBG@Z @ 0x180083878
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x180083C18 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x180083FE4 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x18000A920 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000AFD0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18000C9B4 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x180017680 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x1800177B0 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x18007BCE8 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ??9ATL@@YA_NPEBDAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z @ 0x180083150 (--9ATL@@YA_NPEBDAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z.c)
 *     ?GetAt@?$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z @ 0x1800832C0 (-GetAt@-$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAppInstanceId::Initialize(CAppInstanceId *this, char *a2)
{
  CAppInstanceId *v3; // r12
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // esi
  char *v7; // rdx
  volatile signed __int32 *v8; // rcx
  volatile signed __int32 *v9; // r15
  volatile signed __int32 *v10; // r13
  __int64 v11; // r8
  char *v12; // rdx
  volatile signed __int32 *v13; // rcx
  wchar_t *v14; // rbx
  volatile signed __int32 *v15; // r15
  volatile signed __int32 *v16; // r13
  __int64 v17; // r8
  __int64 *v18; // rax
  unsigned __int16 *v19; // rcx
  char v20; // di
  int *v22; // rbx
  __int64 v23; // r8
  wchar_t *String; // [rsp+20h] [rbp-78h] BYREF
  wchar_t *v25; // [rsp+28h] [rbp-70h] BYREF
  int *v26; // [rsp+30h] [rbp-68h] BYREF
  __int64 v27; // [rsp+38h] [rbp-60h] BYREF
  wchar_t *EndPtr; // [rsp+40h] [rbp-58h] BYREF
  __int64 v29; // [rsp+48h] [rbp-50h] BYREF
  __int64 v30[2]; // [rsp+50h] [rbp-48h] BYREF
  ATL::CAtlException *v31; // [rsp+60h] [rbp-38h] BYREF
  int v33; // [rsp+B0h] [rbp+18h] BYREF
  int v34; // [rsp+B8h] [rbp+20h]

  v30[1] = -2LL;
  v3 = this;
  v34 = 0;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v26);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v25);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&String);
  v6 = 0;
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v26, a2, v4, v5);
  }
  catch ( ATL::CAtlException *v31 )
  {
    v22 = (int *)v31;
    if ( *(_DWORD *)v31 == -1073741571 )
      _resetstkoflw();
    v33 = *v22;
    v6 = v33;
    if ( v33 < 0 )
      goto LABEL_32;
    v3 = this;
  }
  v33 = 0;
  v7 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                  (__int64 *)&v26,
                  &v29,
                  v23,
                  &v33);
  v8 = (volatile signed __int32 *)(v7 - 24);
  v9 = (volatile signed __int32 *)(v25 - 12);
  if ( v7 - 24 != (char *)(v25 - 12) )
  {
    if ( *((int *)v9 + 4) >= 0 && *(_QWORD *)v8 == *(_QWORD *)v9 )
    {
      v10 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v8);
      if ( _InterlockedExchangeAdd(v9 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v9 + 8LL))(*(_QWORD *)v9, v9);
      v25 = (wchar_t *)(v10 + 6);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&v25, v7, *((_DWORD *)v7 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v29 - 24));
  if ( v33 == -1 )
  {
    v6 = -2147467259;
LABEL_32:
    v14 = String;
    goto LABEL_33;
  }
  v12 = (char *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                   (__int64 *)&v26,
                   &v27,
                   v11,
                   &v33);
  v13 = (volatile signed __int32 *)(v12 - 24);
  v14 = String;
  v15 = (volatile signed __int32 *)(String - 12);
  if ( v12 - 24 != (char *)(String - 12) )
  {
    if ( *((int *)v15 + 4) >= 0 && *(_QWORD *)v13 == *(_QWORD *)v15 )
    {
      v16 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v13);
      if ( _InterlockedExchangeAdd(v15 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v15 + 8LL))(*(_QWORD *)v15, v15);
      v14 = (wchar_t *)(v16 + 6);
      String = (wchar_t *)(v16 + 6);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&String, v12, *((_DWORD *)v12 - 4));
      v14 = String;
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v27 - 24));
  if ( v33 == -1
    || ((v18 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                 (__int64 *)&v26,
                 v30,
                 v17,
                 &v33),
         v34 = 1,
         ATL::operator!=(v19, v18))
     || v33 != -1
      ? (v20 = 1)
      : (v20 = 0),
        ATL::CStringData::Release((ATL::CStringData *)(v30[0] - 24)),
        v20) )
  {
    v6 = -2147467259;
LABEL_33:
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x14u,
        (__int64)&WPP_c170edd1854f90c7cdf4fa9bb21811dc_Traceguids,
        v6);
    }
    goto LABEL_37;
  }
  if ( *((_DWORD *)v14 - 4) == 1 && (unsigned __int16)ATL::CSimpleStringT<unsigned short,0>::GetAt(&String) == 35 )
  {
    *((_DWORD *)v3 + 2) = 1;
    *(_DWORD *)v3 = 0;
  }
  else
  {
    *(_DWORD *)v3 = wcstoul(v14, &EndPtr, 10);
  }
  *((_DWORD *)v3 + 1) = wcstoul(v25, &EndPtr, 10);
LABEL_37:
  ATL::CStringData::Release((ATL::CStringData *)(v14 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v25 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v26 - 6));
  return v6;
}
