/*
 * XREFs of RaidPowerPassToMiniPort @ 0x1C000AA40
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C000A980 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterStopOnPowerdown @ 0x1C000BD20 (RaidAdapterStopOnPowerdown.c)
 * Callees:
 *     RaSrbSetMiniportContext @ 0x1C0002F38 (RaSrbSetMiniportContext.c)
 *     RaAdapterStartPowerIo @ 0x1C000AB9C (RaAdapterStartPowerIo.c)
 *     RaInitializePower @ 0x1C0015458 (RaInitializePower.c)
 *     WPP_SF_qqq @ 0x1C002B17C (WPP_SF_qqq.c)
 *     WPP_SF_qqqq @ 0x1C002C73C (WPP_SF_qqqq.c)
 *     WPP_SF_qqqD @ 0x1C0033270 (WPP_SF_qqqD.c)
 */

__int64 __fastcall RaidPowerPassToMiniPort(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // r14
  __int64 v7; // rdx
  int v8; // r15d
  int v9; // ebp
  __int64 v10; // rcx
  _WORD *v11; // rbx
  PDEVICE_OBJECT *v12; // r9
  bool v13; // zf
  __int64 v14; // r8
  struct _DEVICE_OBJECT *v15; // r9
  unsigned int started; // ebp
  __int64 v17; // r8
  __int64 Timer_high; // rdx
  int v20; // eax
  __int64 v21; // rcx
  char *v22; // rcx
  __int64 v23; // rax
  char v24; // [rsp+40h] [rbp-48h] BYREF
  __int64 v25; // [rsp+48h] [rbp-40h]
  __int64 v26; // [rsp+50h] [rbp-38h]
  __int64 v27; // [rsp+58h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 64);
  v5 = *(_QWORD *)(a2 + 184);
  v7 = 1LL;
  v8 = a1;
  v9 = 256;
  if ( *(_DWORD *)v3 == 1 )
    v3 = *(_QWORD *)(v3 + 24);
  v10 = *(_QWORD *)(v3 + 4632);
  v11 = (_WORD *)(v3 + 4464);
  v12 = &WPP_GLOBAL_Control;
  if ( v10 )
    goto LABEL_4;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_qqq(
      WPP_GLOBAL_Control->AttachedDevice,
      58LL,
      &WPP_a3dcb199dfb635f773f8f8e69f1de7fa_Traceguids,
      a2,
      v3 + 4464,
      v3);
  }
  RaInitializePower(v3, v7, a3, v12);
  v10 = *(_QWORD *)(v3 + 4632);
  if ( v10 )
  {
LABEL_4:
    v13 = *(_BYTE *)(v3 + 4641) == 0;
    v26 = v10 + 16;
    v14 = v10 + 1056;
    *(_BYTE *)(v3 + 4640) = 1;
    v27 = v10 + 800;
    if ( !v13 )
      v9 = 2304;
    v25 = v10 + 1056;
    if ( *(_BYTE *)(v3 + 402) == 1 )
    {
      *(_QWORD *)(v3 + 4560) = 0LL;
      *v11 = 8;
      *(_WORD *)(v3 + 4500) = 2;
      *(_QWORD *)(v3 + 4544) = a2;
      *(_BYTE *)(v3 + 4466) = 40;
      *(_DWORD *)(v3 + 4472) = 1397899864;
      *(_DWORD *)(v3 + 4476) = 1;
      *(_DWORD *)(v3 + 4480) = 168;
      *(_DWORD *)(v3 + 4484) = 36;
      *(_DWORD *)(v3 + 4488) = v9;
      v20 = *(_DWORD *)(v3 + 5688);
      *(_DWORD *)(v3 + 4516) = 128;
      *(_DWORD *)(v3 + 4504) = v20;
      *(_QWORD *)(v3 + 4528) = 0LL;
      *(_QWORD *)(v3 + 4520) = 1LL;
      *(_DWORD *)(v3 + 4584) = 144;
      v21 = v3 + 4464 + *(unsigned int *)(v3 + 4516);
      *(_WORD *)v21 = 1;
      *(_DWORD *)(v21 + 4) = 4;
      *(_WORD *)(v21 + 2) = *(_WORD *)(v3 + 56);
      *(_WORD *)(v21 + 8) = 0;
      *(_BYTE *)(v21 + 10) = 0;
      v22 = (char *)v11 + *(unsigned int *)(v3 + 4584);
      *(_DWORD *)v22 = 97;
      *((_DWORD *)v22 + 1) = 12;
      *((_DWORD *)v22 + 4) = *(_DWORD *)(v5 + 32);
      *((_DWORD *)v22 + 3) = *(_DWORD *)(v5 + 24);
      v22[8] = 1;
    }
    else
    {
      *(_QWORD *)(v3 + 4512) = 0LL;
      *v11 = 88;
      *(_BYTE *)(v3 + 4466) = 36;
      *(_QWORD *)(v3 + 4488) = 0LL;
      *(_DWORD *)(v3 + 4480) = 0;
      *(_DWORD *)(v3 + 4528) = *(_DWORD *)(v5 + 32);
      *(_DWORD *)(v3 + 4472) = *(_DWORD *)(v5 + 24);
      *(_DWORD *)(v3 + 4476) = v9;
      *(_DWORD *)(v3 + 4484) = *(_DWORD *)(v3 + 5688);
      *(_DWORD *)(v3 + 4468) = 1;
    }
    RaSrbSetMiniportContext(v3, v3 + 4464, v14);
    if ( WPP_GLOBAL_Control != v15
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      if ( *(_BYTE *)(v3 + 4466) == 40 )
        v23 = *(_QWORD *)(v3 + 4568);
      else
        v23 = *(_QWORD *)(v3 + 4520);
      WPP_SF_qqqq(
        WPP_GLOBAL_Control->AttachedDevice,
        60LL,
        &WPP_a3dcb199dfb635f773f8f8e69f1de7fa_Traceguids,
        a2,
        v3 + 4464,
        v23,
        v3);
    }
    started = RaAdapterStartPowerIo(v8, a2, (int)v3 + 4464, (unsigned int)&v24, a3);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      Timer_high = HIDWORD(WPP_GLOBAL_Control->Timer);
      if ( (Timer_high & 4) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        WPP_SF_qqqD(WPP_GLOBAL_Control->AttachedDevice, Timer_high, v17, a2, v3 + 4464, v3, started);
    }
    return started;
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_qqq(
        WPP_GLOBAL_Control->AttachedDevice,
        59LL,
        &WPP_a3dcb199dfb635f773f8f8e69f1de7fa_Traceguids,
        a2,
        v3 + 4464,
        v3);
    }
    return 3221225495LL;
  }
}
