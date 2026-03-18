/*
 * XREFs of IsMiniportDriverCCDSupport @ 0x1C0152094
 * Callers:
 *     DxgkConvertDisplayConfigCScalingToDdiScaling @ 0x1C0151820 (DxgkConvertDisplayConfigCScalingToDdiScaling.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002434 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C008ABA8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 */

_BOOL8 __fastcall IsMiniportDriverCCDSupport(struct _LUID *a1, __int64 a2, __int64 a3, __int64 a4)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v6; // rax
  __int64 v7; // rcx
  BOOL v8; // ebx
  DXGADAPTER *v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rax

  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2, a3, a4);
  v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1);
  v8 = 0;
  v9 = v6;
  if ( v6 )
  {
    v10 = *((_QWORD *)v6 + 247);
    if ( v10 )
      v8 = (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(v10 + 16)) >= 1105;
    DXGADAPTER::ReleaseReference(v9);
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v11 + 24) = a1->HighPart;
    *(_QWORD *)(v11 + 32) = a1->LowPart;
    WdLogEvent5_WdError(v11);
  }
  return v8;
}
