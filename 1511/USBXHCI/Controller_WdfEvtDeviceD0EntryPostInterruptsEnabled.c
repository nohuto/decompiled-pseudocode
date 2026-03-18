/*
 * XREFs of Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0007410
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0004570 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0005540 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006B30 (WPP_RECORDER_SF_d.c)
 *     Controller_Start @ 0x1C0006CD8 (Controller_Start.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00079B0 (WPP_RECORDER_SF_qd.c)
 *     Wmi_CreateControllerCapabilities @ 0x1C0007A80 (Wmi_CreateControllerCapabilities.c)
 *     Command_D0EntryPostInterruptsEnabled @ 0x1C0007DD8 (Command_D0EntryPostInterruptsEnabled.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C0007E70 (WPP_RECORDER_SF_qLL.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     Template_pqqh @ 0x1C001FFA4 (Template_pqqh.c)
 *     Template_pqqq @ 0x1C0020030 (Template_pqqq.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C00270A4 (RootHub_RestoreU1U2Timeouts.c)
 *     WPP_RECORDER_SF_dDd @ 0x1C002830C (WPP_RECORDER_SF_dDd.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled(__int64 a1, unsigned int a2)
{
  unsigned int v2; // edi
  __int64 v4; // r13
  char v5; // al
  int v6; // edx
  int v7; // r8d
  char v8; // si
  int v9; // edx
  int v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // esi
  __int64 v13; // r14
  __int64 v14; // rdi
  __int64 v15; // rbp
  int *v16; // rdi
  KIRQL v17; // r12
  int v18; // ebx
  int v19; // eax
  int v20; // ecx
  int v21; // r8d
  __int64 v23; // rcx
  char v24; // al
  int v25; // edx
  int v26; // r8d
  int v27; // r9d
  unsigned __int16 v28; // di
  __int64 v29; // rcx
  int v30; // ebx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  signed __int32 v34[10]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v35; // [rsp+28h] [rbp-50h]
  __int64 v36; // [rsp+30h] [rbp-48h]
  char v38; // [rsp+90h] [rbp+18h]

  v2 = a2;
  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C00412A0)
                 + 8);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(WdfDriverGlobals, a1);
  v8 = v5;
  v38 = v5;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceObject & 8) != 0 )
    Template_pqqh(
      *(unsigned __int8 *)(v4 + 348),
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_POST_INTERRUPTS_START,
      v7,
      *(_QWORD *)(v4 + 8),
      v2,
      v5,
      *(_BYTE *)(v4 + 348));
  LOBYTE(v6) = 4;
  WPP_RECORDER_SF_qLL(
    *(_QWORD *)(v4 + 64),
    v6,
    3,
    75,
    (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids,
    a1,
    v2,
    *(_DWORD *)(v4 + 300));
  LOBYTE(v9) = 4;
  WPP_RECORDER_SF_qd(
    *(_QWORD *)(v4 + 64),
    v9,
    3,
    119,
    (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids,
    v4,
    v2);
  v10 = Controller_Start((__int64 *)v4);
  v11 = v10;
  if ( v10 < 0 )
  {
    v23 = *(_QWORD *)(v4 + 64);
    LODWORD(v35) = v10;
    WPP_RECORDER_SF_d(v23, 2u, 3u, 0x4Cu, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids, v35);
    goto LABEL_14;
  }
  v12 = 1;
  v13 = *(_QWORD *)(v4 + 120);
  if ( !*(_DWORD *)(v13 + 16) )
    goto LABEL_10;
  do
  {
    v14 = v12 - 1;
    v15 = *(_QWORD *)(v13 + 48) + 56 * v14;
    v16 = (int *)(*(_QWORD *)(v13 + 40) + 16 * v14);
    v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v15 + 16));
    v18 = *v16;
    if ( *(_BYTE *)(v15 + 1) == 3
      && (*v16 & 0x1E0) == 0
      && (*v16 & 0x400000) != 0
      && (*(_QWORD *)(*(_QWORD *)(v13 + 8) + 232LL) & 0x80000LL) != 0 )
    {
      RootHub_RestoreU1U2Timeouts(v13, v12);
    }
    if ( (v18 & 0x1E0) != 0x1E0 || *(_BYTE *)(v15 + 6) == 1 )
      goto LABEL_7;
    v24 = *(_BYTE *)(v15 + 1);
    *(_BYTE *)(v15 + 6) = 1;
    if ( v24 != 2 )
    {
      if ( v24 == 3 )
      {
        v29 = *(_QWORD *)(v13 + 8);
        LODWORD(v36) = v18;
        LODWORD(v35) = v12;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(v29 + 64),
          3u,
          0xAu,
          0xC8u,
          (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
          v35,
          v36);
        v30 = v18 & 0xE40C200 | 0x10000;
        v31 = *(_QWORD *)(v13 + 8);
        LODWORD(v35) = v30;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v31 + 64),
          4u,
          0xAu,
          0xC9u,
          (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids,
          v35);
        *v16 = v30;
        _InterlockedOr(v34, 0);
        v32 = *(_QWORD *)(v13 + 8);
        LODWORD(v35) = *v16;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v32 + 64),
          4u,
          0xAu,
          0xCAu,
          (__int64)&WPP_74476d3289e885da7183fd44797dd225_Traceguids);
      }
LABEL_7:
      KeReleaseSpinLock((PKSPIN_LOCK)(v15 + 16), v17);
      goto LABEL_8;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v15 + 16), v17);
    if ( *(int *)(v15 + 40) <= 0 )
      v28 = 50;
    else
      v28 = *(_WORD *)(v15 + 44);
    WPP_RECORDER_SF_dDd(*(_QWORD *)(*(_QWORD *)(v13 + 8) + 64LL), v25, v26, v27, v34[8], v12, v18, v28);
    ExSetTimer(*(_QWORD *)(v15 + 32), -10000LL * v28, 0LL, 0LL);
LABEL_8:
    ++v12;
  }
  while ( v12 <= *(_DWORD *)(v13 + 16) );
  v2 = a2;
LABEL_10:
  v19 = Command_D0EntryPostInterruptsEnabled(*(_QWORD *)(v4 + 112), v2);
  v11 = v19;
  if ( v19 < 0 )
  {
    v33 = *(_QWORD *)(v4 + 64);
    LODWORD(v35) = v19;
    WPP_RECORDER_SF_d(v33, 2u, 3u, 0x4Eu, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids, v35);
  }
  else if ( (*(_BYTE *)(v4 + 232) & 0x10) != 0 )
  {
    v11 = -1073741637;
    WPP_RECORDER_SF_(*(_QWORD *)(v4 + 64), 2u, 3u, 0x4Fu, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids);
  }
  else
  {
    Wmi_CreateControllerCapabilities(*(_QWORD *)(v4 + 128));
  }
  v8 = v38;
LABEL_14:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceObject & 8) != 0 )
    Template_pqqq(
      v20,
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_POST_INTERRUPTS_COMPLETE,
      v21,
      *(_QWORD *)(v4 + 8),
      v2,
      v8,
      v11);
  return v11;
}
