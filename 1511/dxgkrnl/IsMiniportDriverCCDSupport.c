/*
 * XREFs of IsMiniportDriverCCDSupport @ 0x1C015632C
 * Callers:
 *     DxgkConvertDisplayConfigCScalingToDdiScaling @ 0x1C0155A70 (DxgkConvertDisplayConfigCScalingToDdiScaling.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0003110 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C00971C0 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 */

_BOOL8 __fastcall IsMiniportDriverCCDSupport(struct _LUID *a1)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v3; // rax
  __int64 v4; // rcx
  BOOL v5; // ebx
  DXGADAPTER *v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax

  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v3 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1);
  v5 = 0;
  v6 = v3;
  if ( v3 )
  {
    v7 = *((_QWORD *)v3 + 248);
    if ( v7 )
      v5 = (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(v7 + 16)) >= 1105;
    DXGADAPTER::ReleaseReference(v6);
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v8 + 24) = a1->HighPart;
    *(_QWORD *)(v8 + 32) = a1->LowPart;
    WdLogEvent5_WdError(v8);
  }
  return v5;
}
