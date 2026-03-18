/*
 * XREFs of Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0005AD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002180 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0004D90 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C0005110 (WPP_RECORDER_SF_qLL.c)
 *     Command_D0EntryPostInterruptsEnabled @ 0x1C00051FC (Command_D0EntryPostInterruptsEnabled.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00056E0 (WPP_RECORDER_SF_qd.c)
 *     Controller_Start @ 0x1C0005CF0 (Controller_Start.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 *     Wmi_CreateControllerCapabilities @ 0x1C0008090 (Wmi_CreateControllerCapabilities.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     Template_pqqh @ 0x1C001C894 (Template_pqqh.c)
 *     Template_pqqq @ 0x1C001C928 (Template_pqqq.c)
 *     RootHub_RestoreU1U2Timeouts @ 0x1C0023C58 (RootHub_RestoreU1U2Timeouts.c)
 *     WPP_RECORDER_SF_dDd @ 0x1C0024F1C (WPP_RECORDER_SF_dDd.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled(__int64 a1, int a2)
{
  int v2; // edi
  __int64 v4; // r13
  char v5; // al
  int v6; // r8d
  char v7; // si
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // edx
  unsigned int v12; // ebx
  unsigned int v13; // esi
  __int64 v14; // r14
  __int64 v15; // rdi
  __int64 v16; // rbp
  int *v17; // rdi
  KIRQL v18; // r12
  int v19; // ebx
  int v20; // eax
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  char v25; // al
  int v26; // edx
  int v27; // r8d
  int v28; // r9d
  unsigned __int16 v29; // di
  __int64 v30; // rcx
  int v31; // ebx
  int v32; // edx
  int v33; // edx
  signed __int32 v34[10]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v35; // [rsp+28h] [rbp-60h]
  __int64 v36; // [rsp+30h] [rbp-58h]
  __int64 v37; // [rsp+38h] [rbp-50h]
  __int128 v38; // [rsp+40h] [rbp-48h]
  char v40; // [rsp+A0h] [rbp+18h]

  v2 = a2;
  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C0045318)
                 + 8);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(WdfDriverGlobals, a1);
  v7 = v5;
  v40 = v5;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    Template_pqqh(
      *(unsigned __int8 *)(v4 + 356),
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_POST_INTERRUPTS_START,
      v6,
      *(_QWORD *)(v4 + 8),
      v2,
      v5,
      *(_BYTE *)(v4 + 356));
  v8 = *(_QWORD *)(v4 + 64);
  LODWORD(v37) = *(_DWORD *)(v4 + 308);
  LODWORD(v36) = v2;
  WPP_RECORDER_SF_qLL(v8, 4u, 3u, 0x4Bu, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids, a1, v36, v37);
  v9 = *(_QWORD *)(v4 + 64);
  LODWORD(v36) = v2;
  v35 = v4;
  WPP_RECORDER_SF_qd(v9, 4u, 3u, 0x77u, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids);
  v10 = Controller_Start(v4);
  v12 = v10;
  if ( v10 < 0 )
  {
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(v4 + 64), v11, 3, 76, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids, v10);
    goto LABEL_14;
  }
  v13 = 1;
  v14 = *(_QWORD *)(v4 + 120);
  if ( !*(_DWORD *)(v14 + 16) )
    goto LABEL_10;
  do
  {
    v15 = v13 - 1;
    v16 = *(_QWORD *)(v14 + 48) + 56 * v15;
    v17 = (int *)(*(_QWORD *)(v14 + 40) + 16 * v15);
    v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v16 + 16));
    v19 = *v17;
    if ( *(_BYTE *)(v16 + 1) == 3 && (*v17 & 0x1E0) == 0 && (*v17 & 0x400000) != 0 )
    {
      v38 = *(_OWORD *)(*(_QWORD *)(v14 + 8) + 232LL);
      if ( (v38 & 0x80000) != 0 )
        RootHub_RestoreU1U2Timeouts(v14, v13);
    }
    if ( (v19 & 0x1E0) != 0x1E0 || *(_BYTE *)(v16 + 6) == 1 )
      goto LABEL_7;
    v25 = *(_BYTE *)(v16 + 1);
    *(_BYTE *)(v16 + 6) = 1;
    if ( v25 != 2 )
    {
      if ( v25 == 3 )
      {
        v30 = *(_QWORD *)(v14 + 8);
        LODWORD(v36) = v19;
        LODWORD(v35) = v13;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(v30 + 64),
          3u,
          0xAu,
          0xC8u,
          (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
          v35,
          v36);
        v31 = v19 & 0xE40C200 | 0x10000;
        LOBYTE(v32) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v14 + 8) + 64LL),
          v32,
          10,
          201,
          (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
          v31);
        *v17 = v31;
        _InterlockedOr(v34, 0);
        LOBYTE(v33) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v14 + 8) + 64LL),
          v33,
          10,
          202,
          (__int64)&WPP_7e59a4b77b4b3d34ba00f857e05af51b_Traceguids,
          *v17);
      }
LABEL_7:
      KeReleaseSpinLock((PKSPIN_LOCK)(v16 + 16), v18);
      goto LABEL_8;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v16 + 16), v18);
    if ( *(int *)(v16 + 40) <= 0 )
      v29 = 50;
    else
      v29 = *(_WORD *)(v16 + 44);
    WPP_RECORDER_SF_dDd(*(_QWORD *)(*(_QWORD *)(v14 + 8) + 64LL), v26, v27, v28, v34[8], v13, v19, v29);
    ExSetTimer(*(_QWORD *)(v16 + 32), -10000LL * v29, 0LL, 0LL);
LABEL_8:
    ++v13;
  }
  while ( v13 <= *(_DWORD *)(v14 + 16) );
  v2 = a2;
LABEL_10:
  v20 = Command_D0EntryPostInterruptsEnabled(*(_QWORD *)(v4 + 112), v2);
  v12 = v20;
  if ( v20 < 0 )
  {
    LOBYTE(v21) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(v4 + 64), v21, 3, 78, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids, v20);
  }
  else if ( (*(_BYTE *)(v4 + 232) & 0x10) != 0 )
  {
    v12 = -1073741637;
    WPP_RECORDER_SF_(*(_QWORD *)(v4 + 64), 2u, 3u, 0x4Fu, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids);
  }
  else
  {
    Wmi_CreateControllerCapabilities(*(_QWORD *)(v4 + 128));
  }
  v7 = v40;
LABEL_14:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    Template_pqqq(
      v22,
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_ENTRY_POST_INTERRUPTS_COMPLETE,
      v23,
      *(_QWORD *)(v4 + 8),
      v2,
      v7,
      v12);
  return v12;
}
