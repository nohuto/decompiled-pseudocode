/*
 * XREFs of ?ToString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180005E40
 * Callers:
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180011930 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@@Z @ 0x180063D80 (-GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@@Z.c)
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x180066A08 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x180012A64 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x180036CBA (_invalid_parameter_noinfo.c)
 *     memset @ 0x180036D30 (memset.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x180053FB8 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

__int64 __fastcall CAudioEndpointId::ToString(__int64 *a1, _QWORD *a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rdi
  volatile signed __int32 *v7; // rsi
  __int64 v8; // rcx
  struct ATL::IAtlStringMgr *(__fastcall *v9)(ATL::CAtlStringMgr *__hidden); // rax
  int *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  const void *v14; // r12
  __int64 v15; // rcx
  void *v16; // rax
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // [rsp+20h] [rbp-78h]
  ATL::CAtlException *v22; // [rsp+68h] [rbp-30h] BYREF
  int v23; // [rsp+B0h] [rbp+18h]

  v4 = 0;
  try
  {
    v5 = *a1;
    v6 = *a1 - 24;
    v7 = (volatile signed __int32 *)(*a2 - 24LL);
    if ( (volatile signed __int32 *)v6 == v7 )
      return v4;
    if ( *((int *)v7 + 4) < 0 || (v8 = *(_QWORD *)v6, *(_QWORD *)v6 != *(_QWORD *)v7) )
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(a2, v5, *(unsigned int *)(v5 - 16));
      return v4;
    }
    v9 = *(struct ATL::IAtlStringMgr *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(*(_QWORD *)v8 + 32LL);
    if ( v9 != ATL::CAtlStringMgr::Clone )
      v8 = ((__int64 (__fastcall *)(__int64, struct ATL::IAtlStringMgr *(__fastcall *)(ATL::CAtlStringMgr *__hidden), __int64))v9)(
             v8,
             ATL::CAtlStringMgr::Clone,
             a3);
    if ( *(int *)(v6 + 16) >= 0 && v8 == *(_QWORD *)v6 )
    {
      v21 = v6;
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 16));
LABEL_10:
      if ( _InterlockedExchangeAdd(v7 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v7 + 8LL))(*(_QWORD *)v7);
      *a2 = v21 + 24;
      return v4;
    }
    v12 = (**(__int64 (__fastcall ***)(__int64, _QWORD, __int64))v8)(v8, *(unsigned int *)(v6 + 8), 2LL);
    v13 = v12;
    v21 = v12;
    if ( !v12 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
    *(_DWORD *)(v12 + 8) = *(_DWORD *)(v6 + 8);
    v14 = (const void *)(v6 + 24);
    v15 = *(_DWORD *)(v6 + 8) + 1;
    v16 = (void *)(v12 + 24);
    v17 = 2 * v15;
    v18 = 2 * v15;
    if ( !(2 * v15) )
      goto LABEL_10;
    if ( v13 == -24 )
    {
      *(_DWORD *)_o__errno(v15, -24LL) = 22;
    }
    else
    {
      if ( v14 && v18 >= v17 )
      {
        memcpy_0(v16, v14, 2 * v15);
        goto LABEL_10;
      }
      memset(v16, 0, 2 * v15);
      if ( v14 )
      {
        if ( v18 >= v17 )
          goto LABEL_10;
        *(_DWORD *)_o__errno(v20, v19) = 34;
      }
      else
      {
        *(_DWORD *)_o__errno(v20, v19) = 22;
      }
    }
    invalid_parameter_noinfo();
    goto LABEL_10;
  }
  catch ( ATL::CAtlException *v22 )
  {
    v11 = (int *)v22;
    if ( *(_DWORD *)v22 == -1073741571 )
      _o__resetstkoflw();
    v23 = *v11;
    v4 = *v11;
    if ( v23 < 0 )
      AudSrvTraceLoggingErrorHelper("CAudioEndpointId::ToString", 0xBCu, v23);
  }
  return v4;
}
