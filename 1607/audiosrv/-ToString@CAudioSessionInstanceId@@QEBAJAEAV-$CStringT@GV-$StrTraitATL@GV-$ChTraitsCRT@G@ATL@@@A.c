/*
 * XREFs of ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800117D0
 * Callers:
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x18000C060 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x18000F460 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x1800104D0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?Hash@CAudioSessionInstanceIdTraits@@SAKAEBVCAudioSessionInstanceId@@@Z @ 0x18002BC3C (-Hash@CAudioSessionInstanceIdTraits@@SAKAEBVCAudioSessionInstanceId@@@Z.c)
 *     ?GetNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEBAPEAVCNode@12@AEBVCAudioSessionInstanceId@@AEAI1AEAPEAV312@@Z @ 0x18002BFDC (-GetNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@.c)
 *     ?GetInstanceId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x18005C290 (-GetInstanceId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x180012A64 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x180036CBA (_invalid_parameter_noinfo.c)
 *     memset @ 0x180036D30 (memset.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x180053FB8 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

__int64 __fastcall CAudioSessionInstanceId::ToString(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rdi
  volatile signed __int32 *v8; // rsi
  __int64 v9; // rcx
  struct ATL::IAtlStringMgr *(__fastcall *v10)(ATL::CAtlStringMgr *__hidden); // rax
  int *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  const void *v15; // r12
  __int64 v16; // rcx
  void *v17; // rax
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // [rsp+20h] [rbp-88h]
  ATL::CAtlException *v23; // [rsp+70h] [rbp-38h] BYREF
  int v24; // [rsp+C0h] [rbp+18h]

  v5 = 0;
  try
  {
    v6 = *(_QWORD *)(a1 + 72);
    v7 = v6 - 24;
    v8 = (volatile signed __int32 *)(*a2 - 24LL);
    if ( (volatile signed __int32 *)(v6 - 24) == v8 )
      return v5;
    if ( *((int *)v8 + 4) < 0 || (v9 = *(_QWORD *)v7, *(_QWORD *)v7 != *(_QWORD *)v8) )
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(a2, v6, *(unsigned int *)(v6 - 16));
      return v5;
    }
    v10 = *(struct ATL::IAtlStringMgr *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(*(_QWORD *)v9 + 32LL);
    if ( v10 != ATL::CAtlStringMgr::Clone )
      v9 = ((__int64 (__fastcall *)(__int64, struct ATL::IAtlStringMgr *(__fastcall *)(ATL::CAtlStringMgr *__hidden), __int64, __int64))v10)(
             v9,
             ATL::CAtlStringMgr::Clone,
             a3,
             a4);
    if ( *(int *)(v7 + 16) >= 0 && v9 == *(_QWORD *)v7 )
    {
      v22 = v7;
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 16));
LABEL_10:
      if ( _InterlockedExchangeAdd(v8 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v8 + 8LL))(*(_QWORD *)v8);
      *a2 = v22 + 24;
      return v5;
    }
    v13 = (**(__int64 (__fastcall ***)(__int64, _QWORD, __int64))v9)(v9, *(unsigned int *)(v7 + 8), 2LL);
    v14 = v13;
    v22 = v13;
    if ( !v13 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
    *(_DWORD *)(v13 + 8) = *(_DWORD *)(v7 + 8);
    v15 = (const void *)(v7 + 24);
    v16 = *(_DWORD *)(v7 + 8) + 1;
    v17 = (void *)(v13 + 24);
    v18 = 2 * v16;
    v19 = 2 * v16;
    if ( !(2 * v16) )
      goto LABEL_10;
    if ( v14 == -24 )
    {
      *(_DWORD *)_o__errno(v16, -24LL) = 22;
    }
    else
    {
      if ( v15 && v19 >= v18 )
      {
        memcpy_0(v17, v15, 2 * v16);
        goto LABEL_10;
      }
      memset(v17, 0, 2 * v16);
      if ( v15 )
      {
        if ( v19 >= v18 )
          goto LABEL_10;
        *(_DWORD *)_o__errno(v21, v20) = 34;
      }
      else
      {
        *(_DWORD *)_o__errno(v21, v20) = 22;
      }
    }
    invalid_parameter_noinfo();
    goto LABEL_10;
  }
  catch ( ATL::CAtlException *v23 )
  {
    v12 = (int *)v23;
    if ( *(_DWORD *)v23 == -1073741571 )
      _o__resetstkoflw();
    v24 = *v12;
    v5 = *v12;
    if ( v24 < 0 )
      AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::ToString", 0x416u, v24);
  }
  return v5;
}
