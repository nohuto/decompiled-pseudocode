/*
 * XREFs of IsMiniportDriverCCDSupport @ 0x1C017AE44
 * Callers:
 *     DxgkConvertDisplayConfigCScalingToDdiScaling @ 0x1C017A490 (DxgkConvertDisplayConfigCScalingToDdiScaling.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0009468 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00A3C10 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
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
  unsigned __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v3 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v10);
  v5 = 0;
  v6 = v3;
  if ( v3 )
  {
    v7 = *((_QWORD *)v3 + 266);
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
