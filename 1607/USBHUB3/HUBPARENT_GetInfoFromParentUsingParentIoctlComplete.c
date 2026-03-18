/*
 * XREFs of HUBPARENT_GetInfoFromParentUsingParentIoctlComplete @ 0x1C0006C30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C00097E0 (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00355C0 (memset.c)
 */

__int64 __fastcall HUBPARENT_GetInfoFromParentUsingParentIoctlComplete(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // rbx
  _QWORD *v10; // rsi
  int v11; // eax
  __int64 v12; // rdx
  _QWORD v14[18]; // [rsp+30h] [rbp-98h] BYREF

  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1392))(WdfDriverGlobals);
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v5,
         off_1C00580C0);
  v7 = *(_DWORD *)(a3 + 8);
  v8 = v6;
  if ( v7 >= 0 )
  {
    v9 = *(_QWORD *)(v6 + 2392);
    memset(v14, 0, 0x88uLL);
    v14[0] = 0x100000088LL;
    v10 = (_QWORD *)(v8 + 32);
    v14[4] = v9;
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01015 + 1336))(
           WdfDriverGlobals,
           *(_QWORD *)(v8 + 16),
           0LL,
           v8 + 32);
    if ( v7 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD *))(WdfFunctions_01015 + 1344))(
              WdfDriverGlobals,
              *v10,
              v14);
      v7 = v11;
      if ( v11 >= 0 )
      {
        if ( (*(_DWORD *)(v8 + 2440) & 1) != 0 )
          _InterlockedOr((volatile signed __int32 *)(v8 + 40), 0x8000u);
      }
      else
      {
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v8 + 2464),
          2u,
          3u,
          0x15u,
          (__int64)&WPP_d887d9a76eb73ffd9207a7a58ef2b697_Traceguids,
          v11);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, *v10);
      }
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, a1);
  v12 = 2038LL;
  if ( v7 >= 0 )
    v12 = 2042LL;
  return HUBSM_AddEvent(v8 + 1208, v12);
}
