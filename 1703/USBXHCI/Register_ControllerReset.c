/*
 * XREFs of Register_ControllerReset @ 0x1C0006120
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0003E90 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0005290 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_InternalReset @ 0x1C001B1A8 (Controller_InternalReset.c)
 *     Register_PrepareHardware @ 0x1C004ED78 (Register_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002180 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0004D90 (WPP_RECORDER_SF_dd.c)
 *     Register_WaitForControllerReady @ 0x1C00062BC (Register_WaitForControllerReady.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 *     Controller_IsControllerAccessible @ 0x1C000642C (Controller_IsControllerAccessible.c)
 *     Register_SetClearSSICPortUnused @ 0x1C000804C (Register_SetClearSSICPortUnused.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     Etw_StartDeviceFail @ 0x1C00312E4 (Etw_StartDeviceFail.c)
 */

__int64 __fastcall Register_ControllerReset(__int64 a1, char a2)
{
  _DWORD *v4; // r14
  int v5; // eax
  int v6; // edx
  unsigned int v7; // edi
  unsigned int v8; // edx
  unsigned int v9; // ebp
  unsigned int v10; // esi
  unsigned int v11; // edi
  __int64 v12; // rcx
  int v13; // edx
  int v14; // eax
  int v15; // edx
  unsigned int v16; // edi
  __int64 v17; // rcx
  __int64 v19; // rdx
  void (*v20)(void); // rax
  signed __int32 v21[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v22; // [rsp+28h] [rbp-30h]
  __int64 v23; // [rsp+30h] [rbp-28h]
  union _LARGE_INTEGER Interval; // [rsp+60h] [rbp+8h] BYREF

  WPP_RECORDER_SF_(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    4u,
    5u,
    0x39u,
    (__int64)&WPP_f8b782a53c8b302afa62a8c5f226bdbd_Traceguids);
  if ( !(unsigned __int8)Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
    return 0LL;
  v4 = *(_DWORD **)(a1 + 32);
  v5 = Register_WaitForControllerReady(a1);
  v7 = v5;
  if ( v5 < 0 )
  {
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      v6,
      5,
      58,
      (__int64)&WPP_f8b782a53c8b302afa62a8c5f226bdbd_Traceguids,
      v5);
    return v7;
  }
  else if ( a2 || (v4[1] & 1) != 0 )
  {
    Register_SetClearSSICPortUnused(a1, 0LL);
    *v4 = 2;
    _InterlockedOr(v21, v8);
    v9 = v8 + 1;
    v10 = 0;
    if ( (_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a1 + 8) + 232LL), 8).m128i_u8[0] & 2) != 0 )
    {
      Interval.QuadPart = -10000LL;
      KeDelayExecutionThread(0, v8, &Interval);
      v10 = v9;
      v9 = 2;
    }
    v11 = v10;
    if ( (*v4 & 2) != 0 )
    {
      while ( v10 != 100 )
      {
        Interval.QuadPart = -10000LL * v9;
        KeDelayExecutionThread(0, 0, &Interval);
        v12 = *(_QWORD *)(a1 + 8);
        LODWORD(v23) = v9;
        LODWORD(v22) = v10;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(v12 + 64),
          4u,
          5u,
          0x3Fu,
          (__int64)&WPP_f8b782a53c8b302afa62a8c5f226bdbd_Traceguids,
          v22,
          v23);
        ++v10;
        v11 += v9;
        if ( v9 != 16 )
          v9 *= 2;
        if ( (*v4 & 2) == 0 )
          goto LABEL_12;
      }
      LOBYTE(v8) = 1;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
        v8,
        5,
        62,
        (__int64)&WPP_f8b782a53c8b302afa62a8c5f226bdbd_Traceguids,
        v11);
      Etw_StartDeviceFail(*(_QWORD *)(a1 + 8), v19, 3LL);
      return 3221225473LL;
    }
    else
    {
LABEL_12:
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
        v8,
        5,
        60,
        (__int64)&WPP_f8b782a53c8b302afa62a8c5f226bdbd_Traceguids,
        v11);
      if ( v11 > 0x32 )
      {
        LOBYTE(v13) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
          v13,
          5,
          61,
          (__int64)&WPP_f8b782a53c8b302afa62a8c5f226bdbd_Traceguids,
          v11);
      }
      v14 = Register_WaitForControllerReady(a1);
      v16 = v14;
      if ( v14 < 0 )
      {
        LOBYTE(v15) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
          v15,
          5,
          64,
          (__int64)&WPP_f8b782a53c8b302afa62a8c5f226bdbd_Traceguids,
          v14);
      }
      else
      {
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 248LL) & 0x10) != 0 )
        {
          Interval.QuadPart = -1000000LL;
          KeDelayExecutionThread(0, 0, &Interval);
        }
        v17 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL);
        if ( v17 )
        {
          v20 = *(void (**)(void))(v17 + 32);
          if ( v20 )
            v20();
        }
      }
      return v16;
    }
  }
  else
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      2u,
      5u,
      0x3Bu,
      (__int64)&WPP_f8b782a53c8b302afa62a8c5f226bdbd_Traceguids);
    return 3221225473LL;
  }
}
