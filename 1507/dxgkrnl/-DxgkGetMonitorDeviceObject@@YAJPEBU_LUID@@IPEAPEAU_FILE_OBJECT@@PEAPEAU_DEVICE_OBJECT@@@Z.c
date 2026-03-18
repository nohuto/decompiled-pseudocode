/*
 * XREFs of ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C00A8F40
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C008ABA8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     MonitorGetDeviceObject @ 0x1C00A9050 (MonitorGetDeviceObject.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00A9150 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 */

__int64 __fastcall DxgkGetMonitorDeviceObject(
        const struct _LUID *a1,
        __int64 a2,
        struct _FILE_OBJECT **a3,
        struct _DEVICE_OBJECT **a4)
{
  __int64 v4; // r14
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  DXGADAPTER *v20; // rbx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdi
  unsigned int DeviceObject; // ebx
  __int64 v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rax
  struct _LUID v34; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v35[56]; // [rsp+28h] [rbp-50h] BYREF
  unsigned int v36; // [rsp+80h] [rbp+8h] BYREF

  v4 = (unsigned int)a2;
  if ( !a1 || !a3 || !a4 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    DeviceObject = -1073741811;
    v32[3] = -1073741811LL;
    goto LABEL_16;
  }
  v34 = *a1;
  v8 = DxgkConvertLegacyQDCAdapterAndIdToActual(&v34, (unsigned int)a2, &v34, &v36);
  v13 = v8;
  if ( v8 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v10, v9, v11, v12);
    v15 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v34);
    v20 = v15;
    if ( v15 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v35, v15, 0LL);
      DXGADAPTER::ReleaseReference(v20);
      if ( *((_QWORD *)v20 + 247) )
      {
        v22 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v35);
        v27 = v22;
        if ( v22 < 0 )
        {
          v33 = WdLogNewEntry5_WdWarning(v24, v23, v25, v26);
          *(_QWORD *)(v33 + 24) = v20;
          *(_QWORD *)(v33 + 32) = v27;
          WdLogEvent5_WdWarning(v33);
          DeviceObject = v27;
        }
        else
        {
          DeviceObject = MonitorGetDeviceObject(v20, v36, a3, a4);
        }
      }
      else
      {
        v30 = WdLogNewEntry5_WdError(v21);
        *(_QWORD *)(v30 + 24) = v20;
        DeviceObject = -1073741811;
        *(_QWORD *)(v30 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v30);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v35);
      return DeviceObject;
    }
    v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
    DeviceObject = -1073741811;
    v32[3] = v34.LowPart;
    v32[4] = v34.HighPart;
    v32[5] = -1073741811LL;
LABEL_16:
    WdLogEvent5_WdWarning(v32);
    return DeviceObject;
  }
  v31 = (_QWORD *)WdLogNewEntry5_WdError(v10);
  v31[3] = a1->LowPart;
  v31[4] = a1->HighPart;
  v31[5] = v4;
  v31[6] = v13;
  WdLogEvent5_WdError(v31);
  return (unsigned int)v13;
}
