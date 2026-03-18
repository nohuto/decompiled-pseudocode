/*
 * XREFs of Register_ControllerReset @ 0x1C0003B40
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C00014E0 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0004300 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_InternalReset @ 0x1C0015420 (Controller_InternalReset.c)
 *     Register_PrepareHardware @ 0x1C0049B90 (Register_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001300 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00023E0 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     Register_WaitForControllerReady @ 0x1C0003CC0 (Register_WaitForControllerReady.c)
 *     Register_SetClearSSICPortUnused @ 0x1C0003D74 (Register_SetClearSSICPortUnused.c)
 *     Controller_IsControllerAccessible @ 0x1C00042C8 (Controller_IsControllerAccessible.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     Etw_StartDeviceFail @ 0x1C0032F0C (Etw_StartDeviceFail.c)
 */

__int64 __fastcall Register_ControllerReset(__int64 a1, char a2)
{
  _DWORD *v4; // rdi
  int v5; // eax
  unsigned int v6; // esi
  unsigned int v7; // edx
  int v8; // ebp
  unsigned int v9; // esi
  unsigned int v10; // r14d
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // edi
  __int64 v15; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  void (*v22)(void); // rax
  signed __int32 v23[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v24; // [rsp+28h] [rbp-30h]
  __int64 v25; // [rsp+30h] [rbp-28h]
  union _LARGE_INTEGER Interval; // [rsp+60h] [rbp+8h] BYREF

  WPP_RECORDER_SF_(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    4u,
    5u,
    0x39u,
    (__int64)&WPP_2de19f2cb4872cb19c95fe21ff9793ee_Traceguids);
  if ( !(unsigned __int8)Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
    return 0LL;
  v4 = *(_DWORD **)(a1 + 32);
  v5 = Register_WaitForControllerReady(a1);
  v6 = v5;
  if ( v5 < 0 )
  {
    v17 = *(_QWORD *)(a1 + 8);
    LODWORD(v24) = v5;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v17 + 64),
      2u,
      5u,
      0x3Au,
      (__int64)&WPP_2de19f2cb4872cb19c95fe21ff9793ee_Traceguids,
      v24);
    return v6;
  }
  else if ( a2 || (v4[1] & 1) != 0 )
  {
    Register_SetClearSSICPortUnused(a1, 0LL);
    *v4 = 2;
    _InterlockedOr(v23, v7);
    v8 = 0;
    v9 = v7 + 1;
    v10 = 0;
    if ( (*v4 & 2) != 0 )
    {
      while ( v8 != 100 )
      {
        Interval.QuadPart = -10000LL * v9;
        KeDelayExecutionThread(0, 0, &Interval);
        v11 = *(_QWORD *)(a1 + 8);
        LODWORD(v25) = v9;
        LODWORD(v24) = v8;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(v11 + 64),
          4u,
          5u,
          0x3Fu,
          (__int64)&WPP_2de19f2cb4872cb19c95fe21ff9793ee_Traceguids,
          v24,
          v25);
        ++v8;
        v10 += v9;
        if ( v9 != 16 )
          v9 *= 2;
        if ( (*v4 & 2) == 0 )
          goto LABEL_10;
      }
      v18 = *(_QWORD *)(a1 + 8);
      LODWORD(v24) = v10;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v18 + 64),
        1u,
        5u,
        0x3Eu,
        (__int64)&WPP_2de19f2cb4872cb19c95fe21ff9793ee_Traceguids,
        v24);
      Etw_StartDeviceFail(*(_QWORD *)(a1 + 8), v19, 3LL);
      return 3221225473LL;
    }
    else
    {
LABEL_10:
      v12 = *(_QWORD *)(a1 + 8);
      LODWORD(v24) = v10;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v12 + 64),
        4u,
        5u,
        0x3Cu,
        (__int64)&WPP_2de19f2cb4872cb19c95fe21ff9793ee_Traceguids,
        v24);
      if ( v10 > 0x32 )
      {
        v20 = *(_QWORD *)(a1 + 8);
        LODWORD(v24) = v10;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v20 + 64),
          2u,
          5u,
          0x3Du,
          (__int64)&WPP_2de19f2cb4872cb19c95fe21ff9793ee_Traceguids,
          v24);
      }
      v13 = Register_WaitForControllerReady(a1);
      v14 = v13;
      if ( v13 < 0 )
      {
        v21 = *(_QWORD *)(a1 + 8);
        LODWORD(v24) = v13;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v21 + 64),
          2u,
          5u,
          0x40u,
          (__int64)&WPP_2de19f2cb4872cb19c95fe21ff9793ee_Traceguids,
          v24);
      }
      else
      {
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 240LL) & 0x10) != 0 )
        {
          Interval.QuadPart = -1000000LL;
          KeDelayExecutionThread(0, 0, &Interval);
        }
        v15 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL);
        if ( v15 )
        {
          v22 = *(void (**)(void))(v15 + 32);
          if ( v22 )
            v22();
        }
      }
      return v14;
    }
  }
  else
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      2u,
      5u,
      0x3Bu,
      (__int64)&WPP_2de19f2cb4872cb19c95fe21ff9793ee_Traceguids);
    return 3221225473LL;
  }
}
