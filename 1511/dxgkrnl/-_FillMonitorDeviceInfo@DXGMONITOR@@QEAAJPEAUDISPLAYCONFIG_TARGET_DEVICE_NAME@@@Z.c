/*
 * XREFs of ?_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C009C9BC
 * Callers:
 *     MonitorFillMonitorDeviceInfo @ 0x1C00ABA10 (MonitorFillMonitorDeviceInfo.c)
 * Callees:
 *     EDIDV1_ObtainDisplayConfigFriendlyName @ 0x1C0001314 (EDIDV1_ObtainDisplayConfigFriendlyName.c)
 *     EDIDV1_FillProductIdManufacturerName @ 0x1C000144C (EDIDV1_FillProductIdManufacturerName.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?DxgkConvertStringToWideString@@YAJPEAD_KPEAG@Z @ 0x1C00C4338 (-DxgkConvertStringToWideString@@YAJPEAD_KPEAG@Z.c)
 */

__int64 __fastcall DXGMONITOR::_FillMonitorDeviceInfo(DXGMONITOR *this, struct DISPLAYCONFIG_TARGET_DEVICE_NAME *a2)
{
  int v2; // ebx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // r14
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r14
  int v14; // eax
  __int64 result; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax
  char SourceString[48]; // [rsp+20h] [rbp-58h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v16 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v16);
  }
  if ( *((_QWORD *)this + 16) )
  {
    memset((char *)a2 + 36, 0, 0x80uLL);
    v5 = EDIDV1_ObtainDisplayConfigFriendlyName(*((_QWORD *)this + 16) + 24LL, SourceString);
    v7 = v5;
    if ( v5 < 0 )
    {
      v17 = WdLogNewEntry5_WdDmmEvent(v6);
      *(_QWORD *)(v17 + 24) = *((_QWORD *)this + 16) + 24LL;
      *(_QWORD *)(v17 + 32) = v7;
      WdLogEvent5_WdDmmEvent(v17);
    }
    else
    {
      v8 = DxgkConvertStringToWideString(SourceString, 0x80uLL, (unsigned __int16 *)a2 + 18);
      v13 = v8;
      if ( v8 >= 0 )
      {
        v14 = 1;
LABEL_7:
        *((_DWORD *)a2 + 5) ^= (*((_DWORD *)a2 + 5) ^ v14) & 1;
        result = EDIDV1_FillProductIdManufacturerName(*((_QWORD *)this + 16) + 24LL, (__int64)a2 + 28, (__int64)a2 + 30);
        LOBYTE(v2) = (int)result >= 0;
        *((_DWORD *)a2 + 5) ^= (*((_DWORD *)a2 + 5) ^ (4 * v2)) & 4;
        return result;
      }
      v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
      v18[3] = SourceString;
      v18[4] = (char *)a2 + 36;
      v18[5] = v13;
    }
    v14 = 0;
    goto LABEL_7;
  }
  return 3223126017LL;
}
