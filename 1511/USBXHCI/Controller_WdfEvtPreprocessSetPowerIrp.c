/*
 * XREFs of Controller_WdfEvtPreprocessSetPowerIrp @ 0x1C0004DF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C0005610 (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006B30 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     Crashdump_ProcessSystemPowerAction @ 0x1C0035434 (Crashdump_ProcessSystemPowerAction.c)
 */

__int64 __fastcall Controller_WdfEvtPreprocessSetPowerIrp(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rbx
  unsigned int v8; // ecx
  unsigned int v9; // edx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  int v14; // edx
  unsigned int v15; // ebx

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00412A0);
  v5 = *(_QWORD *)(a2 + 184);
  v6 = v4;
  v7 = *(_QWORD *)(v4 + 8);
  if ( *(_DWORD *)(v5 + 16) )
    goto LABEL_12;
  v8 = *(_DWORD *)(v5 + 8);
  v9 = (v8 >> 8) & 0xF;
  if ( v9 == 1 )
  {
    v10 = ((v8 & 0xF0000) == 327680) + 1;
LABEL_9:
    *(_DWORD *)(v7 + 300) = v10;
    goto LABEL_10;
  }
  if ( v9 <= 1 )
    goto LABEL_10;
  if ( v9 <= 4 )
  {
    v10 = 4 - ((v8 & 0xF000) != 20480);
    goto LABEL_9;
  }
  if ( v9 != 5 )
  {
    if ( v9 != 6 )
      goto LABEL_10;
    v10 = ((v8 & 0xF000) != 20480) + 5;
    goto LABEL_9;
  }
  *(_DWORD *)(v7 + 300) = 5;
LABEL_10:
  LOBYTE(v9) = 4;
  WPP_RECORDER_SF_L(
    *(_QWORD *)(v6 + 16),
    v9,
    3,
    194,
    (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids,
    *(_DWORD *)(v7 + 300));
  v11 = *(_QWORD *)(v7 + 304);
  if ( v11 )
    Crashdump_ProcessSystemPowerAction(v11, *(unsigned int *)(v7 + 300));
LABEL_12:
  v12 = WdfFunctions_01015;
  ++*(_BYTE *)(a2 + 67);
  *(_QWORD *)(a2 + 184) += 72LL;
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(v12 + 272))(WdfDriverGlobals, a1, a2);
  v15 = v13;
  if ( v13 < 0 )
  {
    LOBYTE(v14) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(v6 + 16), v14, 3, 195, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids, v13);
  }
  return v15;
}
