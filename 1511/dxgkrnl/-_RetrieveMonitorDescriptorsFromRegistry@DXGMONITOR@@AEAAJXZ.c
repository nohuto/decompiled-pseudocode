/*
 * XREFs of ?_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C00E0E80
 * Callers:
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJXZ @ 0x1C00E15E8 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJXZ.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C00E1DD0 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C00E0894 (-_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C00E23E4 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?_ReadOneBlockMonitorDescriptorFromRegistry@DXGMONITOR@@CAJPEAXIPEAPEAU_MONITORDESCRIPTOR@1@@Z @ 0x1C0188AEC (-_ReadOneBlockMonitorDescriptorFromRegistry@DXGMONITOR@@CAJPEAXIPEAPEAU_MONITORDESCRIPTOR@1@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorDescriptorsFromRegistry(DXGMONITOR *this)
{
  struct _DEVICE_OBJECT *v2; // rcx
  NTSTATUS v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rsi
  int v6; // eax
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  int v13; // eax
  struct DXGMONITOR::_MONITORDESCRIPTOR *v14; // r14
  __int64 v15; // rax
  struct DXGMONITOR::_MONITORDESCRIPTOR *v16; // r14
  int v17; // eax
  struct DXGMONITOR::_MONITORDESCRIPTOR *v18; // r15
  __int64 v19; // rax
  unsigned int v20; // edi
  __int64 v21; // rax
  SIZE_T v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // r15
  __int64 v25; // rax
  __int64 i; // r8
  int v27; // edx
  struct DXGMONITOR::_MONITORDESCRIPTOR *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  struct DXGMONITOR::_MONITORDESCRIPTOR *v31; // [rsp+20h] [rbp-50h] BYREF
  HANDLE Handle; // [rsp+28h] [rbp-48h] BYREF
  void *DeviceRegKey; // [rsp+30h] [rbp-40h] BYREF
  struct _UNICODE_STRING v34; // [rsp+38h] [rbp-38h] BYREF
  __int128 v35; // [rsp+48h] [rbp-28h] BYREF
  __int64 v36; // [rsp+58h] [rbp-18h]
  int v37; // [rsp+60h] [rbp-10h]

  if ( (*((_BYTE *)this + 24) & 1) == 0 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !*((_QWORD *)this + 5) )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( *((_DWORD *)this + 94) != 1 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v11);
  }
  v2 = (struct _DEVICE_OBJECT *)*((_QWORD *)this + 5);
  DeviceRegKey = 0LL;
  Handle = 0LL;
  v37 = *(_DWORD *)L"E";
  v35 = *(_OWORD *)L"EDID_OVERRIDE";
  v34.Buffer = (wchar_t *)&v35;
  v36 = *(_QWORD *)L"RRIDE";
  *(_DWORD *)&v34.Length = 1835034;
  v3 = IoOpenDeviceRegistryKey(v2, 1u, 0xF003Fu, &DeviceRegKey);
  v5 = v3;
  if ( v3 < 0 || (v6 = DxgkOpenRegistrySubkey(&Handle, 0x20019u, DeviceRegKey, &v34), v5 = v6, v6 < 0) )
  {
    v7 = WdLogNewEntry5_WdDmmEvent(v4);
    *(_QWORD *)(v7 + 24) = v5;
    WdLogEvent5_WdDmmEvent(v7);
    goto LABEL_10;
  }
  v12 = 0LL;
  if ( *((_DWORD *)this + 28) )
  {
    while ( 1 )
    {
      v31 = 0LL;
      v13 = DXGMONITOR::_ReadOneBlockMonitorDescriptorFromRegistry(Handle, v12, &v31);
      LODWORD(v5) = v13;
      if ( v13 == -1073741801 )
        break;
      if ( v13 >= 0 )
      {
        v14 = v31;
        if ( !v31 )
        {
          v15 = WdLogNewEntry5_WdAssertion(v4);
          WdLogEvent5_WdAssertion(v15);
        }
        v4 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v12);
        *(_QWORD *)v14 = v4;
        *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v12) = v14;
        ++*((_DWORD *)this + 29);
      }
      v12 = (unsigned int)(v12 + 1);
      if ( (unsigned int)v12 >= *((_DWORD *)this + 28) )
        goto LABEL_24;
    }
  }
  else
  {
LABEL_24:
    v16 = 0LL;
    while ( (unsigned int)v12 <= 0xFE )
    {
      v31 = 0LL;
      v17 = DXGMONITOR::_ReadOneBlockMonitorDescriptorFromRegistry(Handle, v12, &v31);
      LODWORD(v12) = v12 + 1;
      LODWORD(v5) = v17;
      if ( v17 < 0 )
      {
        LODWORD(v5) = 0;
        break;
      }
      v18 = v31;
      if ( !v31 )
      {
        v19 = WdLogNewEntry5_WdAssertion(v4);
        WdLogEvent5_WdAssertion(v19);
      }
      *(_QWORD *)v18 = v16;
      v16 = v18;
    }
    v20 = v12 - 1;
    if ( v16 )
    {
      if ( v20 <= *((_DWORD *)this + 28) )
      {
        v21 = WdLogNewEntry5_WdAssertion(v4);
        WdLogEvent5_WdAssertion(v21);
      }
      v22 = 8LL * v20;
      if ( !is_mul_ok(v20, 8uLL) )
        v22 = -1LL;
      v24 = operator new[](v22, 0x4D677844u, PagedPool);
      if ( !v24 )
      {
        v25 = WdLogNewEntry5_WdError(v23);
        WdLogEvent5_WdError(v25);
        LODWORD(v5) = -1073741801;
        goto LABEL_10;
      }
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 28); i = (unsigned int)(i + 1) )
        v24[i] = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * i);
      v27 = 1;
      do
      {
        v28 = v16;
        v29 = v20 - v27++;
        v24[v29] = v16;
        v16 = *(struct DXGMONITOR::_MONITORDESCRIPTOR **)v16;
        *(_QWORD *)v28 = 0LL;
        ++*((_DWORD *)this + 28);
        ++*((_DWORD *)this + 29);
      }
      while ( v16 );
      operator delete(*((void **)this + 15));
      *((_QWORD *)this + 15) = v24;
    }
    if ( v20 != *((_DWORD *)this + 28) )
    {
      v30 = WdLogNewEntry5_WdAssertion(v4);
      WdLogEvent5_WdAssertion(v30);
    }
  }
LABEL_10:
  if ( Handle )
    ZwClose(Handle);
  if ( DeviceRegKey )
    ZwClose(DeviceRegKey);
  if ( (int)v5 < 0 )
    DXGMONITOR::_CleanupRegistryOverridedMonitorDescriptors(this);
  return (unsigned int)v5;
}
