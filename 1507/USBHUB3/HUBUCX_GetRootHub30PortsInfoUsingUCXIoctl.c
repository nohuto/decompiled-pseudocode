/*
 * XREFs of HUBUCX_GetRootHub30PortsInfoUsingUCXIoctl @ 0x1C001D80C
 * Callers:
 *     HUBHSM_GettingRootHub30PortsInfo @ 0x1C0007FB0 (HUBHSM_GettingRootHub30PortsInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C00091B0 (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0034640 (memset.c)
 */

void __fastcall HUBUCX_GetRootHub30PortsInfoUsingUCXIoctl(__int64 a1)
{
  unsigned int v2; // edx
  __int64 v3; // rcx
  __int64 v4; // rsi
  int v5; // eax
  int v6; // ebx
  unsigned __int16 v7; // r9
  __int64 v8; // rbx
  _QWORD *v9; // r8
  unsigned int v10; // r11d
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  _QWORD *v13; // r10
  __int64 v14; // [rsp+28h] [rbp-61h]
  _QWORD v15[16]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v16; // [rsp+F0h] [rbp+67h] BYREF
  __int64 v17; // [rsp+F8h] [rbp+6Fh] BYREF
  __int64 v18; // [rsp+100h] [rbp+77h] BYREF
  __int64 v19; // [rsp+108h] [rbp+7Fh] BYREF

  v19 = 0LL;
  v16 = 0LL;
  if ( !*(_WORD *)(a1 + 106) )
  {
    *(_QWORD *)(a1 + 144) = 0LL;
    v2 = 2042;
    v3 = a1 + 1184;
    goto LABEL_22;
  }
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  memset(v15, 0, 0x38uLL);
  v15[4] = *(_QWORD *)(a1 + 16);
  LODWORD(v15[0]) = 56;
  v15[3] = 0x100000001LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
         WdfDriverGlobals,
         v15,
         v4,
         &v16);
  v6 = v5;
  if ( v5 < 0 )
  {
    v16 = 0LL;
    v7 = 47;
LABEL_15:
    LODWORD(v14) = v5;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2440),
      2u,
      3u,
      v7,
      (__int64)&WPP_72e76ab2a811890e773caa2aa06155f7_Traceguids,
      v14);
    goto LABEL_16;
  }
  v8 = 224LL * *(unsigned __int16 *)(a1 + 106);
  memset(v15, 0, 0x38uLL);
  v15[4] = *(_QWORD *)(a1 + 16);
  LODWORD(v15[0]) = 56;
  v15[3] = 0x100000001LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, __int64, __int64 *, __int64))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         v15,
         (unsigned int)ExDefaultNonPagedPoolType,
         1882409045LL,
         v8,
         &v19,
         a1 + 144);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 48;
    goto LABEL_15;
  }
  memset(v15, 0, 0x38uLL);
  v15[4] = v16;
  LODWORD(v15[0]) = 56;
  v15[3] = 0x100000001LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, __int64, __int64 *, __int64 *))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         v15,
         (unsigned int)ExDefaultNonPagedPoolType,
         1882409045LL,
         16LL,
         &v18,
         &v17);
  v6 = v5;
  if ( v5 < 0 )
  {
    v18 = 0LL;
    v7 = 49;
    goto LABEL_15;
  }
  v9 = *(_QWORD **)(a1 + 144);
  v10 = 0;
  *(_DWORD *)v17 = 16;
  *(_WORD *)(v17 + 4) = *(_WORD *)(a1 + 106);
  *(_WORD *)(v17 + 6) = 24;
  *(_QWORD *)(v17 + 8) = v9;
  v11 = *(unsigned __int16 *)(v17 + 4);
  v12 = &v9[v11];
  v13 = &v12[3 * v11];
  if ( (_WORD)v11 )
  {
    do
    {
      *v9 = v12;
      ++v10;
      v12[2] = v13;
      ++v9;
      *((_WORD *)v12 + 1) = 0;
      v13 += 24;
      *((_DWORD *)v12 + 3) = 48;
      v12 += 3;
    }
    while ( v10 < *(unsigned __int16 *)(v17 + 4) );
  }
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(WdfFunctions_01015 + 1528))(
         WdfDriverGlobals,
         v4,
         v16,
         4788243LL,
         v18,
         0LL,
         0LL,
         0LL,
         0LL,
         0LL);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 50;
    goto LABEL_15;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64, __int64, __int64), __int64))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    v16,
    HUBUCX_GetRootHub30PortsInfoUsingUCXIoctlComplete,
    a1);
  if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
          WdfDriverGlobals,
          v16,
          v4,
          0LL) )
  {
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v16);
    v6 = v5;
    v7 = 51;
    goto LABEL_15;
  }
LABEL_16:
  if ( v6 >= 0 )
    return;
  if ( v16 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v19 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    *(_QWORD *)(a1 + 144) = 0LL;
  }
  v3 = a1 + 1184;
  v2 = 2038;
LABEL_22:
  HUBSM_AddEvent(v3, v2);
}
