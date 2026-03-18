/*
 * XREFs of ?_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C00C9458
 * Callers:
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJXZ @ 0x1C00C9B50 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJXZ.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C00CA2D8 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C00C9124 (-_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C00CA76C (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?_ReadOneBlockMonitorDescriptorFromRegistry@DXGMONITOR@@CAJPEAXIPEAPEAU_MONITORDESCRIPTOR@1@@Z @ 0x1C018443C (-_ReadOneBlockMonitorDescriptorFromRegistry@DXGMONITOR@@CAJPEAXIPEAPEAU_MONITORDESCRIPTOR@1@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorDescriptorsFromRegistry(
        DXGMONITOR *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct _DEVICE_OBJECT *v5; // rcx
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rsi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdi
  int v19; // eax
  struct DXGMONITOR::_MONITORDESCRIPTOR *v20; // r14
  __int64 v21; // rax
  struct DXGMONITOR::_MONITORDESCRIPTOR *v22; // r14
  int v23; // eax
  struct DXGMONITOR::_MONITORDESCRIPTOR *v24; // r15
  __int64 v25; // rax
  unsigned int v26; // edi
  __int64 v27; // rax
  SIZE_T v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // r15
  __int64 v31; // rax
  __int64 i; // r8
  int v33; // edx
  struct DXGMONITOR::_MONITORDESCRIPTOR *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  struct DXGMONITOR::_MONITORDESCRIPTOR *v37; // [rsp+20h] [rbp-50h] BYREF
  HANDLE Handle; // [rsp+28h] [rbp-48h] BYREF
  void *DeviceRegKey; // [rsp+30h] [rbp-40h] BYREF
  struct _UNICODE_STRING v40; // [rsp+38h] [rbp-38h] BYREF
  __int128 v41; // [rsp+48h] [rbp-28h] BYREF
  __int64 v42; // [rsp+58h] [rbp-18h]
  int v43; // [rsp+60h] [rbp-10h]

  if ( (*((_BYTE *)this + 24) & 1) == 0 )
  {
    v15 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !*((_QWORD *)this + 5) )
  {
    v16 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v16);
  }
  if ( *((_DWORD *)this + 94) != 1 )
  {
    v17 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v17);
  }
  v5 = (struct _DEVICE_OBJECT *)*((_QWORD *)this + 5);
  DeviceRegKey = 0LL;
  Handle = 0LL;
  v43 = *(_DWORD *)L"E";
  v41 = *(_OWORD *)L"EDID_OVERRIDE";
  v40.Buffer = (wchar_t *)&v41;
  v42 = *(_QWORD *)L"RRIDE";
  *(_DWORD *)&v40.Length = 1835034;
  v6 = IoOpenDeviceRegistryKey(v5, 1u, 0xF003Fu, &DeviceRegKey);
  v8 = v6;
  if ( v6 < 0 || (v9 = DxgkOpenRegistrySubkey(&Handle, 0x20019u, DeviceRegKey, &v40), v8 = v9, v9 < 0) )
  {
    v13 = WdLogNewEntry5_WdDmmEvent(v7);
    *(_QWORD *)(v13 + 24) = v8;
    WdLogEvent5_WdDmmEvent(v13);
    goto LABEL_10;
  }
  v18 = 0LL;
  if ( *((_DWORD *)this + 28) )
  {
    while ( 1 )
    {
      v37 = 0LL;
      v19 = DXGMONITOR::_ReadOneBlockMonitorDescriptorFromRegistry(Handle, v18, &v37);
      LODWORD(v8) = v19;
      if ( v19 == -1073741801 )
        break;
      if ( v19 >= 0 )
      {
        v20 = v37;
        if ( !v37 )
        {
          v21 = WdLogNewEntry5_WdAssertion(v7, v10, v11, v12);
          WdLogEvent5_WdAssertion(v21);
        }
        v7 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v18);
        *(_QWORD *)v20 = v7;
        *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v18) = v20;
        ++*((_DWORD *)this + 29);
      }
      v18 = (unsigned int)(v18 + 1);
      if ( (unsigned int)v18 >= *((_DWORD *)this + 28) )
        goto LABEL_24;
    }
  }
  else
  {
LABEL_24:
    v22 = 0LL;
    while ( (unsigned int)v18 <= 0xFE )
    {
      v37 = 0LL;
      v23 = DXGMONITOR::_ReadOneBlockMonitorDescriptorFromRegistry(Handle, v18, &v37);
      LODWORD(v18) = v18 + 1;
      LODWORD(v8) = v23;
      if ( v23 < 0 )
      {
        LODWORD(v8) = 0;
        break;
      }
      v24 = v37;
      if ( !v37 )
      {
        v25 = WdLogNewEntry5_WdAssertion(v7, v10, v11, v12);
        WdLogEvent5_WdAssertion(v25);
      }
      *(_QWORD *)v24 = v22;
      v22 = v24;
    }
    v26 = v18 - 1;
    if ( v22 )
    {
      if ( v26 <= *((_DWORD *)this + 28) )
      {
        v27 = WdLogNewEntry5_WdAssertion(v7, v10, v11, v12);
        WdLogEvent5_WdAssertion(v27);
      }
      v28 = 8LL * v26;
      if ( !is_mul_ok(v26, 8uLL) )
        v28 = -1LL;
      v30 = operator new[](v28, 0x4D677844u, PagedPool);
      if ( !v30 )
      {
        v31 = WdLogNewEntry5_WdError(v29);
        WdLogEvent5_WdError(v31);
        LODWORD(v8) = -1073741801;
        goto LABEL_10;
      }
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 28); i = (unsigned int)(i + 1) )
        v30[i] = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * i);
      v33 = 1;
      do
      {
        v34 = v22;
        v35 = v26 - v33++;
        v30[v35] = v22;
        v22 = *(struct DXGMONITOR::_MONITORDESCRIPTOR **)v22;
        *(_QWORD *)v34 = 0LL;
        ++*((_DWORD *)this + 28);
        ++*((_DWORD *)this + 29);
      }
      while ( v22 );
      operator delete(*((void **)this + 15));
      *((_QWORD *)this + 15) = v30;
    }
    if ( v26 != *((_DWORD *)this + 28) )
    {
      v36 = WdLogNewEntry5_WdAssertion(v7, v10, v11, v12);
      WdLogEvent5_WdAssertion(v36);
    }
  }
LABEL_10:
  if ( Handle )
    ZwClose(Handle);
  if ( DeviceRegKey )
    ZwClose(DeviceRegKey);
  if ( (int)v8 < 0 )
    DXGMONITOR::_CleanupRegistryOverridedMonitorDescriptors(this, v10, v11, v12);
  return (unsigned int)v8;
}
