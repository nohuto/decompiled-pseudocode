/*
 * XREFs of ?ToString@CAppAudioSessionId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180011D80
 * Callers:
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180014360 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x180014C88 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 *     ?ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18007EF00 (-ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsC.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x180018630 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x180069968 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

__int64 __fastcall CAppAudioSessionId::ToString(__int64 a1, _QWORD *a2)
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
    v4 = *(_QWORD *)(a1 + 32);
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
            ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(0LL, v12, v13, v14);
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
      && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        19LL,
        &WPP_c170edd1854f90c7cdf4fa9bb21811dc_Traceguids,
        (unsigned int)v17);
    }
  }
  return v3;
}
