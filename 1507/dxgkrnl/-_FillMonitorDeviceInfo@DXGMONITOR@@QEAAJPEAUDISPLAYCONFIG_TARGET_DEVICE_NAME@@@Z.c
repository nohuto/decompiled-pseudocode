/*
 * XREFs of ?_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C00981D8
 * Callers:
 *     MonitorFillMonitorDeviceInfo @ 0x1C009FA5C (MonitorFillMonitorDeviceInfo.c)
 * Callees:
 *     EDIDV1_FillProductIdManufacturerName @ 0x1C00089B8 (EDIDV1_FillProductIdManufacturerName.c)
 *     EDIDV1_ObtainDisplayConfigFriendlyName @ 0x1C0008A84 (EDIDV1_ObtainDisplayConfigFriendlyName.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?DxgkConvertStringToWideString@@YAJPEAD_KPEAG@Z @ 0x1C00B0720 (-DxgkConvertStringToWideString@@YAJPEAD_KPEAG@Z.c)
 */

__int64 __fastcall DXGMONITOR::_FillMonitorDeviceInfo(
        DXGMONITOR *this,
        struct DISPLAYCONFIG_TARGET_DEVICE_NAME *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // ebx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r14
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r14
  int v16; // eax
  __int64 result; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rax
  char SourceString[48]; // [rsp+20h] [rbp-58h] BYREF

  v4 = 0;
  if ( !a2 )
  {
    v18 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v18);
  }
  if ( *((_QWORD *)this + 16) )
  {
    memset((char *)a2 + 36, 0, 0x80uLL);
    v7 = EDIDV1_ObtainDisplayConfigFriendlyName((_QWORD *)(*((_QWORD *)this + 16) + 24LL), SourceString);
    v9 = v7;
    if ( v7 < 0 )
    {
      v19 = WdLogNewEntry5_WdDmmEvent(v8);
      *(_QWORD *)(v19 + 24) = *((_QWORD *)this + 16) + 24LL;
      *(_QWORD *)(v19 + 32) = v9;
      WdLogEvent5_WdDmmEvent(v19);
    }
    else
    {
      v10 = DxgkConvertStringToWideString(SourceString, 0x80uLL, (unsigned __int16 *)a2 + 18);
      v15 = v10;
      if ( v10 >= 0 )
      {
        v16 = 1;
LABEL_7:
        *((_DWORD *)a2 + 5) ^= (*((_DWORD *)a2 + 5) ^ v16) & 1;
        result = EDIDV1_FillProductIdManufacturerName((_QWORD *)(*((_QWORD *)this + 16) + 24LL));
        LOBYTE(v4) = (int)result >= 0;
        *((_DWORD *)a2 + 5) ^= (*((_DWORD *)a2 + 5) ^ (4 * v4)) & 4;
        return result;
      }
      v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
      v20[3] = SourceString;
      v20[4] = (char *)a2 + 36;
      v20[5] = v15;
    }
    v16 = 0;
    goto LABEL_7;
  }
  return 3223126017LL;
}
