/*
 * XREFs of ?ToString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180011BD0
 * Callers:
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180014360 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x180014C88 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 *     ?GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@H@Z @ 0x18007C690 (-GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@H@Z.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x180018630 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x180069968 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

__int64 __fastcall CAudioEndpointId::ToString(_QWORD *a1, _QWORD *a2)
{
  unsigned int v3; // r12d
  __int64 v4; // rsi
  volatile signed __int32 *v5; // r14
  __int64 v6; // r15
  struct ATL::IAtlStringMgr *(__fastcall *v7)(ATL::CAtlStringMgr *__hidden); // rdi
  ATL::CAtlException *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  ATL::CAtlException *v14; // [rsp+48h] [rbp-30h] BYREF
  __int64 v15; // [rsp+90h] [rbp+18h]
  int v16; // [rsp+90h] [rbp+18h]

  v3 = 0;
  try
  {
    v4 = *a1 - 24LL;
    v5 = (volatile signed __int32 *)(*a2 - 24LL);
    if ( (volatile signed __int32 *)v4 != v5 )
    {
      if ( *((int *)v5 + 4) >= 0 && (v6 = *(_QWORD *)v4, *(_QWORD *)v4 == *(_QWORD *)v5) )
      {
        v7 = *(struct ATL::IAtlStringMgr *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(*(_QWORD *)v6 + 32LL);
        if ( v7 != ATL::CAtlStringMgr::Clone )
          v6 = (__int64)v7((ATL::CAtlStringMgr *)v6);
        if ( *(int *)(v4 + 16) >= 0 && v6 == *(_QWORD *)v4 )
        {
          v15 = v4;
          _InterlockedIncrement((volatile signed __int32 *)(v4 + 16));
        }
        else
        {
          v10 = (**(__int64 (__fastcall ***)(__int64, _QWORD, __int64))v6)(v6, *(unsigned int *)(v4 + 8), 2LL);
          v15 = v10;
          if ( !v10 )
            ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(0LL, v11, v12, v13);
          *(_DWORD *)(v10 + 8) = *(_DWORD *)(v4 + 8);
          memcpy_s(
            (void *const)(v10 + 24),
            2LL * (*(_DWORD *)(v4 + 8) + 1),
            (const void *const)(v4 + 24),
            2LL * (*(_DWORD *)(v4 + 8) + 1));
        }
        if ( _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF) <= 1 )
          (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v5 + 8LL))(*(_QWORD *)v5, v5);
        *a2 = v15 + 24;
      }
      else
      {
        ATL::CSimpleStringT<unsigned short,0>::SetString(a2, *a1, *(unsigned int *)(*a1 - 16LL));
      }
    }
  }
  catch ( ATL::CAtlException *v14 )
  {
    v9 = v14;
    if ( *(_DWORD *)v14 == -1073741571 )
      _resetstkoflw();
    v16 = *(_DWORD *)v9;
    v3 = *(_DWORD *)v9;
    if ( v16 < 0
      && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        13LL,
        &WPP_c170edd1854f90c7cdf4fa9bb21811dc_Traceguids,
        (unsigned int)v16);
    }
  }
  return v3;
}
