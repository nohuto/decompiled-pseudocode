/*
 * XREFs of ?ToString@CAppAudioSessionId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18002A1D0
 * Callers:
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180011930 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x180066A08 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 *     ?ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180066B30 (-ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsC.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x180012A64 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x180036CBA (_invalid_parameter_noinfo.c)
 *     memset @ 0x180036D30 (memset.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x180053FB8 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

__int64 __fastcall CAppAudioSessionId::ToString(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  char *v6; // rdx
  char *v7; // rdi
  volatile signed __int32 *v8; // rsi
  __int64 v9; // rcx
  struct ATL::IAtlStringMgr *(__fastcall *v10)(ATL::CAtlStringMgr *); // rax
  int *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  const void *v16; // r12
  __int64 v17; // rcx
  void *v18; // rax
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // [rsp+20h] [rbp-88h]
  ATL::CAtlException *v24; // [rsp+70h] [rbp-38h] BYREF
  int v25; // [rsp+C0h] [rbp+18h]

  v5 = 0;
  try
  {
    v6 = *(char **)(a1 + 32);
    v7 = v6 - 24;
    v8 = (volatile signed __int32 *)(*a2 - 24LL);
    if ( v6 - 24 == (char *)v8 )
      return v5;
    if ( *((int *)v8 + 4) < 0 || (v9 = *(_QWORD *)v7, *(_QWORD *)v7 != *(_QWORD *)v8) )
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(a2, v6, *((_DWORD *)v6 - 4));
      return v5;
    }
    v10 = *(struct ATL::IAtlStringMgr *(__fastcall **)(ATL::CAtlStringMgr *))(*(_QWORD *)v9 + 32LL);
    if ( v10 != ATL::CAtlStringMgr::Clone )
      v9 = ((__int64 (__fastcall *)(__int64, struct ATL::IAtlStringMgr *(__fastcall *)(ATL::CAtlStringMgr *), __int64, __int64))v10)(
             v9,
             ATL::CAtlStringMgr::Clone,
             a3,
             a4);
    if ( *((int *)v7 + 4) >= 0 && v9 == *(_QWORD *)v7 )
    {
      v23 = (__int64)v7;
      _InterlockedIncrement((volatile signed __int32 *)v7 + 4);
LABEL_10:
      if ( _InterlockedExchangeAdd(v8 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v8 + 8LL))(*(_QWORD *)v8);
      *a2 = v23 + 24;
      return v5;
    }
    v13 = (**(__int64 (__fastcall ***)(__int64, _QWORD, __int64))v9)(v9, *((unsigned int *)v7 + 2), 2LL);
    v15 = v13;
    v23 = v13;
    if ( !v13 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v14, 0LL);
    *(_DWORD *)(v13 + 8) = *((_DWORD *)v7 + 2);
    v16 = v7 + 24;
    v17 = *((_DWORD *)v7 + 2) + 1;
    v18 = (void *)(v13 + 24);
    v19 = 2 * v17;
    v20 = 2 * v17;
    if ( !(2 * v17) )
      goto LABEL_10;
    if ( v15 == -24 )
    {
      *(_DWORD *)_o__errno(v17, -24LL) = 22;
    }
    else
    {
      if ( v16 && v20 >= v19 )
      {
        memcpy_0(v18, v16, 2 * v17);
        goto LABEL_10;
      }
      memset(v18, 0, 2 * v17);
      if ( v16 )
      {
        if ( v20 >= v19 )
          goto LABEL_10;
        *(_DWORD *)_o__errno(v22, v21) = 34;
      }
      else
      {
        *(_DWORD *)_o__errno(v22, v21) = 22;
      }
    }
    invalid_parameter_noinfo();
    goto LABEL_10;
  }
  catch ( ATL::CAtlException *v24 )
  {
    v12 = (int *)v24;
    if ( *(_DWORD *)v24 == -1073741571 )
      _o__resetstkoflw();
    v25 = *v12;
    v5 = *v12;
    if ( v25 < 0 )
      AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::ToString", 512, v25);
  }
  return v5;
}
