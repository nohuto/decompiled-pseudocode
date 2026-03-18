/*
 * XREFs of HUBPDO_EvtDeviceProcessQueryInterfaceRequest @ 0x1C0013C20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000F66C (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000F8F0 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceProcessQueryInterfaceRequest(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  _QWORD *v5; // r10
  __int64 v6; // r8
  unsigned int v7; // edi
  unsigned __int8 v8; // cl
  __int64 v9; // rax
  __int64 v10; // rcx
  char v11; // al
  __int64 v12; // rdx

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00570C0);
  v5 = (_QWORD *)v4;
  v6 = *(_QWORD *)(v4 + 24);
  if ( (*(_DWORD *)(v6 + 1616) & 2) != 0 )
  {
    *(_DWORD *)a3 = 66388104;
    *(_QWORD *)(a3 + 16) = HUBFDO_GetPortStatusForDebuggingComplete;
    *(_QWORD *)(a3 + 8) = v4;
    *(_QWORD *)(a3 + 24) = HUBFDO_GetPortStatusForDebuggingComplete;
    v7 = 0;
    v8 = *(_BYTE *)(*(_QWORD *)v6 + 200LL) + 1;
    *(_BYTE *)(a3 + 32) = v8;
    *(_BYTE *)(a3 + 52) = BYTE1(*(_DWORD *)(v6 + 1616)) & 1;
    v9 = *(_QWORD *)v6;
    *(_OWORD *)(a3 + 96) = *(_OWORD *)(*(_QWORD *)v6 + 264LL);
    *(_OWORD *)(a3 + 112) = *(_OWORD *)(v9 + 280);
    if ( v8 == 1 )
    {
      *(_WORD *)(a3 + 112) = *(_WORD *)(*(_QWORD *)(v6 + 8) + 200LL);
    }
    else if ( v8 > 1u )
    {
      *(_WORD *)(a3 + 2LL * v8 + 110) = *(_WORD *)(*(_QWORD *)(v6 + 8) + 200LL);
    }
    *(_DWORD *)(a3 + 48) = *(_DWORD *)(v6 + 156);
    *(_BYTE *)(a3 + 53) = (*(_DWORD *)(v6 + 1616) & 0x1000) != 0;
    *(_QWORD *)(a3 + 40) = *(_QWORD *)(v6 + 24);
    *(_QWORD *)(a3 + 64) = HUBPDO_ParentInterfaceWasDeviceProgrammingLostOnResume;
    *(_QWORD *)(a3 + 56) = HUBPDO_ParentInterfaceWasHubResetOnResume;
    *(_QWORD *)(a3 + 72) = *(_QWORD *)(v6 + 8) + 1368LL;
    *(_QWORD *)(a3 + 88) = HUBPDO_GetHubSymbolicLinkName;
    v10 = *(_QWORD *)(v6 + 8);
    if ( (*(_DWORD *)(v10 + 204) & 0x10) != 0 )
    {
      *(_WORD *)(a3 + 80) = *(_WORD *)(v10 + 212);
      *(_WORD *)(a3 + 82) = *(_WORD *)(*(_QWORD *)(v6 + 8) + 214LL);
      v11 = *(_BYTE *)(a3 + 52);
      if ( (*(_DWORD *)(v5[2] + 40LL) & 0x2000000) != 0 )
        v11 = 0;
      *(_BYTE *)(a3 + 52) = v11;
    }
    v12 = *(_QWORD *)(a3 + 128);
    v5[8] = v12;
    WPP_RECORDER_SF_qq(
      *(_QWORD *)(*(_QWORD *)(v6 + 8) + 1432LL),
      4u,
      5u,
      0x4Fu,
      (__int64)&WPP_14d924a2bc5654d18a61d41b78717f36_Traceguids,
      v5[3],
      v12);
  }
  else
  {
    WPP_RECORDER_SF_q(
      *(_QWORD *)(*(_QWORD *)(v6 + 8) + 1432LL),
      2u,
      v6,
      0x4Eu,
      (__int64)&WPP_14d924a2bc5654d18a61d41b78717f36_Traceguids,
      v4);
    return (unsigned int)-1073741823;
  }
  return v7;
}
