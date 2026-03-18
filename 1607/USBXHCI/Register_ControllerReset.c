/*
 * XREFs of Register_ControllerReset @ 0x1C0005790
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0003EE0 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0006D00 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_InternalReset @ 0x1C001EDC0 (Controller_InternalReset.c)
 *     Register_PrepareHardware @ 0x1C004CB40 (Register_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002070 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0004A10 (WPP_RECORDER_SF_dd.c)
 *     Register_WaitForControllerReady @ 0x1C0005AFC (Register_WaitForControllerReady.c)
 *     WPP_RECORDER_SF_d @ 0x1C0005BA0 (WPP_RECORDER_SF_d.c)
 *     Controller_IsControllerAccessible @ 0x1C0005C54 (Controller_IsControllerAccessible.c)
 *     Register_SetClearSSICPortUnused @ 0x1C0006CC8 (Register_SetClearSSICPortUnused.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     Etw_StartDeviceFail @ 0x1C00343FC (Etw_StartDeviceFail.c)
 */

__int64 __fastcall Register_ControllerReset(__int64 a1, char a2)
{
  _DWORD *v5; // r14
  int v6; // eax
  int v7; // edx
  unsigned int v8; // ebx
  unsigned int v9; // edx
  unsigned int v10; // ebx
  unsigned int v11; // esi
  unsigned int v12; // ebp
  __int64 v13; // rcx
  int v14; // edx
  int v15; // eax
  int v16; // edx
  unsigned int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
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
    (__int64)&WPP_ef89eabd84023d1aa8edcb6653799c28_Traceguids);
  if ( !(unsigned __int8)Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
    return 0LL;
  v5 = *(_DWORD **)(a1 + 32);
  v6 = Register_WaitForControllerReady(a1);
  v8 = v6;
  if ( v6 >= 0 )
  {
    if ( a2 || (v5[1] & 1) != 0 )
    {
      Register_SetClearSSICPortUnused(a1, 0LL);
      *v5 = 2;
      _InterlockedOr(v21, v9);
      v10 = v9 + 1;
      v11 = 0;
      v12 = 0;
      if ( (_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a1 + 8) + 232LL), 8).m128i_u8[0] & 2) != 0 )
      {
        Interval.QuadPart = -10000LL;
        KeDelayExecutionThread(0, v9, &Interval);
        v12 = v10;
        v11 = v10++;
      }
      if ( (*v5 & 2) != 0 )
      {
        while ( v11 != 100 )
        {
          Interval.QuadPart = -10000LL * v10;
          KeDelayExecutionThread(0, 0, &Interval);
          v13 = *(_QWORD *)(a1 + 8);
          LODWORD(v23) = v10;
          LODWORD(v22) = v11;
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(v13 + 64),
            4u,
            5u,
            0x3Fu,
            (__int64)&WPP_ef89eabd84023d1aa8edcb6653799c28_Traceguids,
            v22,
            v23);
          ++v11;
          v12 += v10;
          if ( v10 != 16 )
            v10 *= 2;
          if ( (*v5 & 2) == 0 )
            goto LABEL_15;
        }
        LOBYTE(v9) = 1;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
          v9,
          5,
          62,
          (__int64)&WPP_ef89eabd84023d1aa8edcb6653799c28_Traceguids,
          v12);
        Etw_StartDeviceFail(*(_QWORD *)(a1 + 8), v18, 3LL);
        return 3221225473LL;
      }
      else
      {
LABEL_15:
        LOBYTE(v9) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
          v9,
          5,
          60,
          (__int64)&WPP_ef89eabd84023d1aa8edcb6653799c28_Traceguids,
          v12);
        if ( v12 > 0x32 )
        {
          LOBYTE(v14) = 2;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
            v14,
            5,
            61,
            (__int64)&WPP_ef89eabd84023d1aa8edcb6653799c28_Traceguids,
            v12);
        }
        v15 = Register_WaitForControllerReady(a1);
        v17 = v15;
        if ( v15 >= 0 )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 248LL) & 0x10) != 0 )
          {
            Interval.QuadPart = -1000000LL;
            KeDelayExecutionThread(0, 0, &Interval);
          }
          v19 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL);
          if ( v19 )
          {
            v20 = *(void (**)(void))(v19 + 32);
            if ( v20 )
              v20();
          }
        }
        else
        {
          LOBYTE(v16) = 2;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
            v16,
            5,
            64,
            (__int64)&WPP_ef89eabd84023d1aa8edcb6653799c28_Traceguids,
            v15);
        }
        return v17;
      }
    }
    else
    {
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
        2u,
        5u,
        0x3Bu,
        (__int64)&WPP_ef89eabd84023d1aa8edcb6653799c28_Traceguids);
      return 3221225473LL;
    }
  }
  else
  {
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      v7,
      5,
      58,
      (__int64)&WPP_ef89eabd84023d1aa8edcb6653799c28_Traceguids,
      v6);
    return v8;
  }
}
