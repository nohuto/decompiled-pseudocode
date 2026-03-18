/*
 * XREFs of ?_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x1C00C9BCC
 * Callers:
 *     MonitorGetMonitorDescriptorIDs @ 0x1C00DD70C (MonitorGetMonitorDescriptorIDs.c)
 * Callees:
 *     EDIDV1_IsEDIDBaseBlock @ 0x1C00086F8 (EDIDV1_IsEDIDBaseBlock.c)
 *     EDIDV1_ObtainMonitorManufacturerName @ 0x1C000A7A4 (EDIDV1_ObtainMonitorManufacturerName.c)
 *     EDIDV1_ObtainMonitorProductCodeID @ 0x1C000A808 (EDIDV1_ObtainMonitorProductCodeID.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     ?_GetHWMonitorBaseEDIDBlock@DXGMONITOR@@AEAAJPEAPEAX@Z @ 0x1C0097EDC (-_GetHWMonitorBaseEDIDBlock@DXGMONITOR@@AEAAJPEAPEAX@Z.c)
 *     ?DxgkConvertStringToWideString@@YAJPEAD_KPEAG@Z @ 0x1C00B0720 (-DxgkConvertStringToWideString@@YAJPEAD_KPEAG@Z.c)
 *     MonitorLogBadEDID @ 0x1C01827DC (MonitorLogBadEDID.c)
 */

__int64 __fastcall DXGMONITOR::_GetMonitorDescriptorIDs(
        DXGMONITOR *this,
        struct _DXGK_GENERIC_DESCRIPTOR *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  _QWORD *v7; // rbx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  void *v21; // [rsp+20h] [rbp-48h] BYREF
  char SourceString[24]; // [rsp+28h] [rbp-40h] BYREF

  if ( !a2 )
  {
    v18 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v18);
  }
  a2->HardwareId[0] = 0;
  a2->InstanceId[0] = 0;
  a2->CompatibleId[0] = 0;
  a2->DeviceText[0] = 0;
  v21 = 0LL;
  result = DXGMONITOR::_GetHWMonitorBaseEDIDBlock(this, &v21, a3, a4);
  if ( (int)result >= 0 )
  {
    v7 = v21;
    result = EDIDV1_IsEDIDBaseBlock(v21);
    if ( (int)result >= 0 )
    {
      v8 = EDIDV1_ObtainMonitorManufacturerName(v7);
      v13 = v8;
      if ( v8 < 0 || (v14 = EDIDV1_ObtainMonitorProductCodeID(v7), v13 = v14, v14 < 0) )
      {
        v19 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
        *(_QWORD *)(v19 + 24) = v7;
        *(_QWORD *)(v19 + 32) = v13;
        WdLogEvent5_WdWarning(v19);
        MonitorLogBadEDID(v7, (unsigned int)v13);
        return (unsigned int)v13;
      }
      else
      {
        SourceString[7] = 0;
        v15 = DxgkConvertStringToWideString(SourceString, 0x66uLL, a2->HardwareId, v12);
        v17 = v15;
        if ( v15 < 0 )
        {
          v20 = WdLogNewEntry5_WdError(v16);
          *(_QWORD *)(v20 + 24) = v17;
          WdLogEvent5_WdError(v20);
          return (unsigned int)v17;
        }
        else
        {
          return 0LL;
        }
      }
    }
  }
  return result;
}
