/*
 * XREFs of ?ReleaseCachedRemoteSaDevice@CSaProvider@@UEAAJK@Z @ 0x18002E390
 * Callers:
 *     ?OnADGInactivityTimerFired@CAudioDGProcess@@AEAAXXZ @ 0x180001D28 (-OnADGInactivityTimerFired@CAudioDGProcess@@AEAAXXZ.c)
 *     VADServerUserSessionChanged @ 0x18002BC60 (VADServerUserSessionChanged.c)
 * Callees:
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x18000A920 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000AFD0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18000C9B4 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x180017680 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     ?GetKeyAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@@2@@ATL@@QEBAAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@H@Z @ 0x18007456C (-GetKeyAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpo.c)
 *     ?RemoveAllSaDevicesForEndpoint@CSaProvider@@IEAAXPEAV?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@@2@@ATL@@PEBG@Z @ 0x180075478 (-RemoveAllSaDevicesForEndpoint@CSaProvider@@IEAAXPEAV-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV.c)
 */

__int64 __fastcall CSaProvider::ReleaseCachedRemoteSaDevice(CSaProvider *this, unsigned int a2)
{
  unsigned int v4; // r15d
  __int64 v5; // rbx
  volatile signed __int32 *v7; // r14
  char *v8; // rdx
  volatile signed __int32 *v9; // rcx
  volatile signed __int32 *v10; // r15
  __int64 v11; // rcx
  volatile signed __int32 *v12; // r14
  char *v13; // rdx
  volatile signed __int32 *v14; // rcx
  volatile signed __int32 *v15; // rax
  __int64 v16; // rcx
  volatile signed __int32 *v17; // [rsp+60h] [rbp+8h] BYREF
  volatile signed __int32 *v18; // [rsp+70h] [rbp+18h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+78h] [rbp+20h]

  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v17);
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      33LL,
      &WPP_78ac755cf0ad3a5554bdc1a2f719929e_Traceguids,
      a2);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( a2 == -2 )
  {
    if ( *((int *)this + 36) <= 0 )
      goto LABEL_7;
    v5 = (__int64)v17;
    do
    {
      v7 = (volatile signed __int32 *)(v5 - 24);
      v8 = *(char **)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointSaDeviceLists *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointSaDeviceLists *>>::GetKeyAt(
                       (char *)this + 128,
                       0LL);
      v9 = (volatile signed __int32 *)(v8 - 24);
      if ( v8 - 24 != (char *)(v5 - 24) )
      {
        if ( *((int *)v7 + 4) >= 0 && *(_QWORD *)v9 == *(_QWORD *)v7 )
        {
          v10 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v9);
          if ( _InterlockedExchangeAdd(v7 + 4, 0xFFFFFFFF) <= 1 )
            (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v7 + 8LL))(*(_QWORD *)v7, v7);
          v5 = (__int64)(v10 + 6);
          v17 = v10 + 6;
        }
        else
        {
          ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&v17, v8, *((_DWORD *)v8 - 4));
          v5 = (__int64)v17;
        }
      }
      v11 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_S(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          34LL,
          &WPP_78ac755cf0ad3a5554bdc1a2f719929e_Traceguids,
          v5);
      }
      CSaProvider::RemoveAllSaDevicesForEndpoint(v11, (char *)this + 128, v5);
    }
    while ( *((int *)this + 36) > 0 );
  }
  else
  {
    v4 = 0;
    if ( *((int *)this + 36) <= 0 )
    {
LABEL_7:
      v5 = (__int64)v17;
      goto LABEL_8;
    }
    v5 = (__int64)v17;
    while ( 1 )
    {
      v12 = (volatile signed __int32 *)(v5 - 24);
      v13 = *(char **)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointSaDeviceLists *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointSaDeviceLists *>>::GetKeyAt(
                        (char *)this + 128,
                        v4);
      v14 = (volatile signed __int32 *)(v13 - 24);
      if ( v13 - 24 != (char *)(v5 - 24) )
      {
        if ( *((int *)v12 + 4) >= 0 && *(_QWORD *)v14 == *(_QWORD *)v12 )
        {
          v15 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v14);
          v18 = v15;
          if ( _InterlockedExchangeAdd(v12 + 4, 0xFFFFFFFF) <= 1 )
          {
            (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v12 + 8LL))(*(_QWORD *)v12, v12);
            v15 = v18;
          }
          v5 = (__int64)(v15 + 6);
          v17 = v15 + 6;
        }
        else
        {
          ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&v17, v13, *((_DWORD *)v13 - 4));
          v5 = (__int64)v17;
        }
      }
      if ( (unsigned int)GetSessionIdFromEndpointId(v5) == a2 )
        break;
      if ( (signed int)++v4 >= *((_DWORD *)this + 36) )
        goto LABEL_8;
    }
    v16 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_S(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        35LL,
        &WPP_78ac755cf0ad3a5554bdc1a2f719929e_Traceguids,
        v5);
    }
    CSaProvider::RemoveAllSaDevicesForEndpoint(v16, (char *)this + 128, v5);
  }
LABEL_8:
  LeaveCriticalSection(lpCriticalSection);
  ATL::CStringData::Release((ATL::CStringData *)(v5 - 24));
  return 0LL;
}
