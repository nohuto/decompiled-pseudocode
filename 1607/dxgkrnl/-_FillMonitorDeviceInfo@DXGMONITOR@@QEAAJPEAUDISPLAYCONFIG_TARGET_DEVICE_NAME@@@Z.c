/*
 * XREFs of ?_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C007B50C
 * Callers:
 *     MonitorFillMonitorDeviceInfo @ 0x1C00C3834 (MonitorFillMonitorDeviceInfo.c)
 * Callees:
 *     EDIDV1_FillProductIdManufacturerName @ 0x1C000A3FC (EDIDV1_FillProductIdManufacturerName.c)
 *     EDIDV1_ObtainDisplayConfigFriendlyName @ 0x1C000A43C (EDIDV1_ObtainDisplayConfigFriendlyName.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?DxgkConvertStringToWideString@@YAJPEAD_KPEAG@Z @ 0x1C00D9A58 (-DxgkConvertStringToWideString@@YAJPEAD_KPEAG@Z.c)
 */

__int64 __fastcall DXGMONITOR::_FillMonitorDeviceInfo(DXGMONITOR *this, struct DISPLAYCONFIG_TARGET_DEVICE_NAME *a2)
{
  int v2; // ebx
  int v5; // eax
  __int64 v6; // r14
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r14
  int v13; // eax
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax
  char SourceString[48]; // [rsp+20h] [rbp-58h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v15 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v15);
  }
  if ( *((_QWORD *)this + 16) )
  {
    memset((char *)a2 + 36, 0, 0x80uLL);
    v5 = EDIDV1_ObtainDisplayConfigFriendlyName((_QWORD *)(*((_QWORD *)this + 16) + 24LL), SourceString);
    v6 = v5;
    if ( v5 < 0 )
    {
      v16 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v16 + 24) = *((_QWORD *)this + 16) + 24LL;
      *(_QWORD *)(v16 + 32) = v6;
      WdLogEvent5_WdDmmEvent(v16);
    }
    else
    {
      v7 = DxgkConvertStringToWideString(SourceString, 0x80uLL, (unsigned __int16 *)a2 + 18);
      v12 = v7;
      if ( v7 >= 0 )
      {
        v13 = 1;
LABEL_7:
        *((_DWORD *)a2 + 5) ^= (*((_DWORD *)a2 + 5) ^ v13) & 1;
        result = EDIDV1_FillProductIdManufacturerName((_QWORD *)(*((_QWORD *)this + 16) + 24LL));
        LOBYTE(v2) = (int)result >= 0;
        *((_DWORD *)a2 + 5) ^= (*((_DWORD *)a2 + 5) ^ (4 * v2)) & 4;
        return result;
      }
      v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
      v17[3] = SourceString;
      v17[4] = (char *)a2 + 36;
      v17[5] = v12;
    }
    v13 = 0;
    goto LABEL_7;
  }
  return 3223126017LL;
}
