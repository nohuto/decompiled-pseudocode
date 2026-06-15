/*
 * XREFs of ?GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x180079030
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000AFD0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x18000C610 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18000C9B4 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18002EF60 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     MIDL_user_allocate @ 0x180030500 (MIDL_user_allocate.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?EscapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180032228 (-EscapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@AT.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     ?ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800844A8 (-ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsC.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAudioSession::GetStreamSwitchId(const wchar_t **this, unsigned __int16 **a2)
{
  void **v2; // r14
  int v4; // esi
  unsigned int v5; // eax
  unsigned __int16 *v6; // rbx
  size_t v7; // rdi
  char *v8; // rax
  const wchar_t *v10; // [rsp+30h] [rbp-58h] BYREF
  const wchar_t *v11; // [rsp+38h] [rbp-50h] BYREF
  const wchar_t *v12[2]; // [rsp+40h] [rbp-48h] BYREF
  ATL::CAtlException *v13; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int16 *v15; // [rsp+A0h] [rbp+18h] BYREF
  const wchar_t *v16; // [rsp+A8h] [rbp+20h] BYREF

  v12[1] = (const wchar_t *)-2LL;
  v2 = (void **)a2;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x14u,
      (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      this[88]);
  }
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(v12);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v11);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v10);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v16);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v15);
  v4 = CAudioSessionInstanceId::ToStreamSwitchString(this + 79, v12);
  if ( v4 < 0 )
  {
    v6 = v15;
  }
  else
  {
    try
    {
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
        (wchar_t *const *)&v11,
        L"%d",
        *((unsigned int *)this + 58));
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
        (wchar_t *const *)&v10,
        L"%d",
        *((unsigned int *)this + 57));
      v5 = (*((__int64 (__fastcall **)(char *))this[3] + 4))((char *)this + 24);
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
        (wchar_t *const *)&v16,
        L"%d",
        v5);
      CAudioIdentifier::EscapeIdentifierString(v12);
      CAudioIdentifier::EscapeIdentifierString(&v11);
      CAudioIdentifier::EscapeIdentifierString(&v10);
      CAudioIdentifier::EscapeIdentifierString(&v16);
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
        &v15,
        L"%s|%s|%s|%s",
        v12[0],
        v11,
        v10,
        v16);
    }
    catch ( ATL::CAtlException *v13 )
    {
      v2 = (void **)a2;
      v4 = *(_DWORD *)v13;
    }
    v6 = v15;
    if ( v4 >= 0 )
    {
      v7 = 2LL * (*((_DWORD *)v15 - 4) + 1);
      v8 = (char *)MIDL_user_allocate(v7);
      *v2 = v8;
      if ( v8 )
      {
        v4 = StringCbCopyW(v8, v7, (char *)v6);
        if ( v4 >= 0 )
          goto LABEL_17;
        operator delete(*v2);
        *v2 = 0LL;
      }
      else
      {
        v4 = -2147024882;
      }
    }
  }
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x15u,
      (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      v4);
  }
LABEL_17:
  ATL::CStringData::Release((ATL::CStringData *)(v6 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v16 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v10 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v11 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v12[0] - 12));
  return (unsigned int)v4;
}
