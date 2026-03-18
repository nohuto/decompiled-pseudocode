/*
 * XREFs of HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl @ 0x1C001D3DC
 * Callers:
 *     HUBHSM_GettingRootHub20PortsInfo @ 0x1C0007F90 (HUBHSM_GettingRootHub20PortsInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C00091B0 (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0034640 (memset.c)
 */

void __fastcall HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl(__int64 a1)
{
  unsigned int v2; // edx
  __int64 v3; // rcx
  __int64 v4; // rsi
  int v5; // eax
  int v6; // ebx
  unsigned __int16 v7; // r9
  __int64 v8; // rbx
  _QWORD *v9; // r8
  unsigned int v10; // r9d
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  __int64 v13; // [rsp+28h] [rbp-61h]
  _QWORD v14[16]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v15; // [rsp+F0h] [rbp+67h] BYREF
  __int64 v16; // [rsp+F8h] [rbp+6Fh] BYREF
  __int64 v17; // [rsp+100h] [rbp+77h] BYREF
  __int64 v18; // [rsp+108h] [rbp+7Fh] BYREF

  v17 = 0LL;
  v15 = 0LL;
  if ( !*(_WORD *)(a1 + 104) )
  {
    *(_QWORD *)(a1 + 136) = 0LL;
    v2 = 2042;
    v3 = a1 + 1184;
    goto LABEL_22;
  }
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  memset(v14, 0, 0x38uLL);
  v14[4] = *(_QWORD *)(a1 + 16);
  LODWORD(v14[0]) = 56;
  v14[3] = 0x100000001LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
         WdfDriverGlobals,
         v14,
         v4,
         &v15);
  v6 = v5;
  if ( v5 < 0 )
  {
    v15 = 0LL;
    v7 = 41;
LABEL_15:
    LODWORD(v13) = v5;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2440),
      2u,
      3u,
      v7,
      (__int64)&WPP_72e76ab2a811890e773caa2aa06155f7_Traceguids,
      v13);
    goto LABEL_16;
  }
  v8 = 28LL * *(unsigned __int16 *)(a1 + 104);
  memset(v14, 0, 0x38uLL);
  v14[4] = *(_QWORD *)(a1 + 16);
  LODWORD(v14[0]) = 56;
  v14[3] = 0x100000001LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, __int64, __int64 *, __int64))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         v14,
         (unsigned int)ExDefaultNonPagedPoolType,
         1882409045LL,
         v8,
         &v17,
         a1 + 136);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 42;
    goto LABEL_15;
  }
  memset(v14, 0, 0x38uLL);
  v14[4] = v15;
  LODWORD(v14[0]) = 56;
  v14[3] = 0x100000001LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, __int64, __int64 *, __int64 *))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         v14,
         (unsigned int)ExDefaultNonPagedPoolType,
         1882409045LL,
         16LL,
         &v18,
         &v16);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 43;
    goto LABEL_15;
  }
  v9 = *(_QWORD **)(a1 + 136);
  v10 = 0;
  *(_DWORD *)v16 = 16;
  *(_WORD *)(v16 + 4) = *(_WORD *)(a1 + 104);
  *(_WORD *)(v16 + 6) = 20;
  *(_QWORD *)(v16 + 8) = v9;
  v11 = *(unsigned __int16 *)(v16 + 4);
  v12 = &v9[v11];
  if ( (_WORD)v11 )
  {
    do
    {
      *v9 = v12;
      ++v10;
      *((_WORD *)v12 + 1) = 0;
      ++v9;
      v12 = (_QWORD *)((char *)v12 + 20);
    }
    while ( v10 < *(unsigned __int16 *)(v16 + 4) );
  }
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(WdfFunctions_01015 + 1528))(
         WdfDriverGlobals,
         v4,
         v15,
         4788239LL,
         v18,
         0LL,
         0LL,
         0LL,
         0LL,
         0LL);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 44;
    goto LABEL_15;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64, __int64, __int64), __int64))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    v15,
    HUBUCX_GetRootHub20PortsInfoUsingUCXIoctlComplete,
    a1);
  if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
          WdfDriverGlobals,
          v15,
          v4,
          0LL) )
  {
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v15);
    v6 = v5;
    v7 = 45;
    goto LABEL_15;
  }
LABEL_16:
  if ( v6 >= 0 )
    return;
  if ( v15 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v17 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    *(_QWORD *)(a1 + 136) = 0LL;
  }
  v3 = a1 + 1184;
  v2 = 2038;
LABEL_22:
  HUBSM_AddEvent(v3, v2);
}
