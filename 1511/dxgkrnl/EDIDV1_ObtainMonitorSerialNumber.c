/*
 * XREFs of EDIDV1_ObtainMonitorSerialNumber @ 0x1C000E918
 * Callers:
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C009C328 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C00E00E0 (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 *     ?_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00E1588 (-_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C00E1F1C (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z.c)
 * Callees:
 *     ?EDID_V1_ComputeMonDescStringLength@@YA_KPEBU_EDID_V1_MONITOR_DESCRIPTOR_BLOCK@@@Z @ 0x1C0001414 (-EDID_V1_ComputeMonDescStringLength@@YA_KPEBU_EDID_V1_MONITOR_DESCRIPTOR_BLOCK@@@Z.c)
 *     EDIDV1_IsEDIDBaseBlock @ 0x1C000148C (EDIDV1_IsEDIDBaseBlock.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 */

__int64 __fastcall EDIDV1_ObtainMonitorSerialNumber(_QWORD *a1, char *a2)
{
  __int64 result; // rax
  __int64 v4; // r9
  unsigned __int16 v5; // dx
  __int64 v6; // r11
  __int64 v7; // rcx
  unsigned int v8; // r10d
  unsigned __int64 v9; // r8
  char v10; // al
  size_t v11; // rbx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  const void *v14; // r10
  char *v15; // rdx
  char v16; // cl

  result = EDIDV1_IsEDIDBaseBlock(a1);
  if ( (int)result >= 0 )
  {
    if ( a2 )
    {
      v5 = 0;
      v6 = 1LL;
      while ( 1 )
      {
        v7 = v4 + 18 * (v5 + 3LL);
        if ( !*(_WORD *)v7 && !*(_BYTE *)(v7 + 2) && *(_BYTE *)(v7 + 3) == 0xFF )
          break;
        if ( ++v5 >= 4u )
          goto LABEL_6;
      }
      v13 = EDID_V1_ComputeMonDescStringLength((const struct _EDID_V1_MONITOR_DESCRIPTOR_BLOCK *)v7);
      v11 = v13;
      if ( v14 && v13 )
      {
        if ( v13 > 0xD )
          v11 = 13LL;
        memmove(a2, v14, v11);
        goto LABEL_9;
      }
LABEL_6:
      v8 = *(_DWORD *)(v4 + 12);
      v9 = 0LL;
      do
      {
        v10 = a0123456789abcd[v8 % 0xA];
        v8 /= 0xAu;
        a2[v9] = v10;
        v9 += v6;
      }
      while ( v8 && v9 < 0xD );
      v11 = v9;
      v12 = v9 >> 1;
      if ( v12 )
      {
        v15 = &a2[v11 - v12];
        do
        {
          v16 = a2[v12 - 1];
          a2[v12 - 1] = *v15;
          *v15 = v16;
          v15 += v6;
          v12 -= v6;
        }
        while ( v12 );
      }
LABEL_9:
      a2[v11] = 0;
      result = 3221226021LL;
      if ( v11 )
        return 0LL;
    }
    else
    {
      return 3221225485LL;
    }
  }
  return result;
}
