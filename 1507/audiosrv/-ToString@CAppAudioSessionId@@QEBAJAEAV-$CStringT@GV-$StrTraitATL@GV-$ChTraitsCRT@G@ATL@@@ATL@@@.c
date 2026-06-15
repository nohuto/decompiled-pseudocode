/*
 * XREFs of ?ToString@CAppAudioSessionId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18000CC38
 * Callers:
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x18000BF90 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x180036D68 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 *     ?ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800844A8 (-ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsC.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x180017680 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ @ 0x1800179D0 (-Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x18006AC58 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

__int64 __fastcall CAppAudioSessionId::ToString(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // r14d
  __int64 v4; // rdx
  volatile signed __int32 *v5; // rdi
  volatile signed __int32 *v6; // rsi
  struct ATL::IAtlStringMgr *(__fastcall *v7)(ATL::CAtlStringMgr *__hidden); // r15
  struct ATL::IAtlStringMgr *v8; // r15
  volatile signed __int32 *v9; // r15
  ATL::CAtlException *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  rsize_t v17; // rdx
  ATL::CAtlException *v18; // [rsp+28h] [rbp-20h] BYREF
  int v19; // [rsp+50h] [rbp+8h]

  v3 = 0;
  try
  {
    v4 = *(_QWORD *)(a1 + 32);
    v5 = (volatile signed __int32 *)(v4 - 24);
    v6 = (volatile signed __int32 *)(*a2 - 24LL);
    if ( (volatile signed __int32 *)(v4 - 24) != v6 )
    {
      if ( *((int *)v6 + 4) >= 0 && *(_QWORD *)v5 == *(_QWORD *)v6 )
      {
        v7 = *(struct ATL::IAtlStringMgr *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(**(_QWORD **)v5 + 32LL);
        if ( v7 == ATL::CAtlStringMgr::Clone )
          v8 = ATL::CAtlStringMgr::Clone(*(ATL::CAtlStringMgr **)v5);
        else
          v8 = v7(*(ATL::CAtlStringMgr **)v5);
        if ( *((int *)v5 + 4) >= 0 && v8 == *(struct ATL::IAtlStringMgr **)v5 )
        {
          v9 = v5;
          _InterlockedIncrement(v5 + 4);
        }
        else
        {
          v12 = (**(__int64 (__fastcall ***)(struct ATL::IAtlStringMgr *, _QWORD, __int64))v8)(
                  v8,
                  *((unsigned int *)v5 + 2),
                  2LL);
          v9 = (volatile signed __int32 *)v12;
          if ( !v12 )
            ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v14, v13, v15, v16, -2LL);
          *(_DWORD *)(v12 + 8) = *((_DWORD *)v5 + 2);
          v17 = 2LL * (*((_DWORD *)v5 + 2) + 1);
          memcpy_s((void *const)(v12 + 24), v17, (const void *const)(v5 + 6), v17);
        }
        if ( _InterlockedExchangeAdd(v6 + 4, 0xFFFFFFFF) <= 1 )
          (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v6 + 8LL))(*(_QWORD *)v6, v6);
        *a2 = v9 + 6;
      }
      else
      {
        ATL::CSimpleStringT<unsigned short,0>::SetString(a2, v4, *(unsigned int *)(v4 - 16));
      }
    }
  }
  catch ( ATL::CAtlException *v18 )
  {
    v11 = v18;
    if ( *(_DWORD *)v18 == -1073741571 )
      _resetstkoflw();
    v19 = *(_DWORD *)v11;
    v3 = *(_DWORD *)v11;
    if ( v19 < 0
      && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        19LL,
        &WPP_c170edd1854f90c7cdf4fa9bb21811dc_Traceguids,
        (unsigned int)v19);
    }
  }
  return v3;
}
