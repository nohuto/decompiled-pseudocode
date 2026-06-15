/*
 * XREFs of ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18000BB70
 * Callers:
 *     ?GetNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEBAPEAVCNode@12@AEBVCAudioSessionInstanceId@@AEAI1AEAPEAV312@@Z @ 0x18000B7E0 (-GetNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x1800163D0 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x1800190D0 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18001A040 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?GetInstanceId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x180078A90 (-GetInstanceId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x180017680 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x18006AC58 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

__int64 __fastcall CAudioSessionInstanceId::ToString(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // r12d
  __int64 v4; // rdx
  __int64 v5; // rsi
  volatile signed __int32 *v6; // r14
  __int64 v7; // r15
  struct ATL::IAtlStringMgr *(__fastcall *v8)(ATL::CAtlStringMgr *__hidden); // rdi
  ATL::CAtlException *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  ATL::CAtlException *v15; // [rsp+50h] [rbp-38h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+18h]
  int v17; // [rsp+A0h] [rbp+18h]

  v3 = 0;
  try
  {
    v4 = *(_QWORD *)(a1 + 72);
    v5 = v4 - 24;
    v6 = (volatile signed __int32 *)(*a2 - 24LL);
    if ( (volatile signed __int32 *)(v4 - 24) != v6 )
    {
      if ( *((int *)v6 + 4) >= 0 && (v7 = *(_QWORD *)v5, *(_QWORD *)v5 == *(_QWORD *)v6) )
      {
        v8 = *(struct ATL::IAtlStringMgr *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(*(_QWORD *)v7 + 32LL);
        if ( v8 != ATL::CAtlStringMgr::Clone )
          v7 = (__int64)v8((ATL::CAtlStringMgr *)v7);
        if ( *(int *)(v5 + 16) >= 0 && v7 == *(_QWORD *)v5 )
        {
          v16 = v5;
          _InterlockedIncrement((volatile signed __int32 *)(v5 + 16));
        }
        else
        {
          v11 = (**(__int64 (__fastcall ***)(__int64, _QWORD, __int64))v7)(v7, *(unsigned int *)(v5 + 8), 2LL);
          v16 = v11;
          if ( !v11 )
            ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(0LL, v12, v13, v14, -2LL);
          *(_DWORD *)(v11 + 8) = *(_DWORD *)(v5 + 8);
          memcpy_s(
            (void *const)(v11 + 24),
            2LL * (*(_DWORD *)(v5 + 8) + 1),
            (const void *const)(v5 + 24),
            2LL * (*(_DWORD *)(v5 + 8) + 1));
        }
        if ( _InterlockedExchangeAdd(v6 + 4, 0xFFFFFFFF) <= 1 )
          (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v6 + 8LL))(*(_QWORD *)v6, v6);
        *a2 = v16 + 24;
      }
      else
      {
        ATL::CSimpleStringT<unsigned short,0>::SetString(a2, v4, *(unsigned int *)(v4 - 16));
      }
    }
  }
  catch ( ATL::CAtlException *v15 )
  {
    v10 = v15;
    if ( *(_DWORD *)v15 == -1073741571 )
      _resetstkoflw();
    v17 = *(_DWORD *)v10;
    v3 = *(_DWORD *)v10;
    if ( v17 < 0
      && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        27LL,
        &WPP_c170edd1854f90c7cdf4fa9bb21811dc_Traceguids,
        (unsigned int)v17);
    }
  }
  return v3;
}
