/*
 * XREFs of ?ToString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18000D2A8
 * Callers:
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x18000BF90 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x180036D68 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 *     ?GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@H@Z @ 0x1800813D0 (-GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@H@Z.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x180017680 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ @ 0x1800179D0 (-Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x18006AC58 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

__int64 __fastcall CAudioEndpointId::ToString(_QWORD *a1, _QWORD *a2)
{
  unsigned int v3; // r14d
  volatile signed __int32 *v4; // rdi
  volatile signed __int32 *v5; // rsi
  struct ATL::IAtlStringMgr *(__fastcall *v6)(ATL::CAtlStringMgr *__hidden); // r15
  struct ATL::IAtlStringMgr *v7; // r15
  volatile signed __int32 *v8; // r15
  ATL::CAtlException *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  rsize_t v16; // rdx
  ATL::CAtlException *v17; // [rsp+28h] [rbp-20h] BYREF
  int v18; // [rsp+50h] [rbp+8h]

  v3 = 0;
  try
  {
    v4 = (volatile signed __int32 *)(*a1 - 24LL);
    v5 = (volatile signed __int32 *)(*a2 - 24LL);
    if ( v4 != v5 )
    {
      if ( *((int *)v5 + 4) >= 0 && *(_QWORD *)v4 == *(_QWORD *)v5 )
      {
        v6 = *(struct ATL::IAtlStringMgr *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(**(_QWORD **)v4 + 32LL);
        if ( v6 == ATL::CAtlStringMgr::Clone )
          v7 = ATL::CAtlStringMgr::Clone(*(ATL::CAtlStringMgr **)v4);
        else
          v7 = v6(*(ATL::CAtlStringMgr **)v4);
        if ( *((int *)v4 + 4) >= 0 && v7 == *(struct ATL::IAtlStringMgr **)v4 )
        {
          v8 = v4;
          _InterlockedIncrement(v4 + 4);
        }
        else
        {
          v11 = (**(__int64 (__fastcall ***)(struct ATL::IAtlStringMgr *, _QWORD, __int64))v7)(
                  v7,
                  *((unsigned int *)v4 + 2),
                  2LL);
          v8 = (volatile signed __int32 *)v11;
          if ( !v11 )
            ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v13, v12, v14, v15);
          *(_DWORD *)(v11 + 8) = *((_DWORD *)v4 + 2);
          v16 = 2LL * (*((_DWORD *)v4 + 2) + 1);
          memcpy_s((void *const)(v11 + 24), v16, (const void *const)(v4 + 6), v16);
        }
        if ( _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF) <= 1 )
          (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v5 + 8LL))(*(_QWORD *)v5, v5);
        *a2 = v8 + 6;
      }
      else
      {
        ATL::CSimpleStringT<unsigned short,0>::SetString(a2, *a1, *(unsigned int *)(*a1 - 16LL));
      }
    }
  }
  catch ( ATL::CAtlException *v17 )
  {
    v10 = v17;
    if ( *(_DWORD *)v17 == -1073741571 )
      _resetstkoflw();
    v18 = *(_DWORD *)v10;
    v3 = *(_DWORD *)v10;
    if ( v18 < 0
      && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        13LL,
        &WPP_c170edd1854f90c7cdf4fa9bb21811dc_Traceguids,
        (unsigned int)v18);
    }
  }
  return v3;
}
