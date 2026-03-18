/*
 * XREFs of ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C00BA120
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00A3C10 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     MonitorGetDeviceObject @ 0x1C00BA238 (MonitorGetDeviceObject.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00BA730 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 */

__int64 __fastcall DxgkGetMonitorDeviceObject(
        const struct _LUID *a1,
        __int64 a2,
        struct _FILE_OBJECT **a3,
        struct _DEVICE_OBJECT **a4)
{
  __int64 v4; // r14
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  DXGADAPTER *v17; // rbx
  DXGADAPTER *v18; // rdx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdi
  unsigned int DeviceObject; // ebx
  __int64 v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rax
  struct _LUID v32; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int64 v33; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v34[80]; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v35; // [rsp+A0h] [rbp+8h] BYREF

  v4 = (unsigned int)a2;
  if ( !a1 || !a3 || !a4 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    DeviceObject = -1073741811;
    v30[3] = -1073741811LL;
    goto LABEL_16;
  }
  v32 = *a1;
  v8 = DxgkConvertLegacyQDCAdapterAndIdToActual(&v32, (unsigned int)a2, &v32, &v35);
  v10 = v8;
  if ( v8 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v9);
    v12 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v32, &v33);
    v17 = v12;
    if ( v12 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v34, v12, 0LL);
      DXGADAPTER::ReleaseReference(v18);
      if ( *((_QWORD *)v17 + 266) )
      {
        v20 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v34);
        v25 = v20;
        if ( v20 < 0 )
        {
          v31 = WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
          *(_QWORD *)(v31 + 24) = v17;
          *(_QWORD *)(v31 + 32) = v25;
          WdLogEvent5_WdWarning(v31);
          DeviceObject = v25;
        }
        else
        {
          DeviceObject = MonitorGetDeviceObject(v17, v35, a3, a4);
        }
      }
      else
      {
        v28 = WdLogNewEntry5_WdError(v19);
        *(_QWORD *)(v28 + 24) = v17;
        DeviceObject = -1073741811;
        *(_QWORD *)(v28 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v28);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v34);
      return DeviceObject;
    }
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
    DeviceObject = -1073741811;
    v30[3] = v32.LowPart;
    v30[4] = v32.HighPart;
    v30[5] = -1073741811LL;
LABEL_16:
    WdLogEvent5_WdWarning(v30);
    return DeviceObject;
  }
  v29 = (_QWORD *)WdLogNewEntry5_WdError(v9);
  v29[3] = a1->LowPart;
  v29[4] = a1->HighPart;
  v29[5] = v4;
  v29[6] = v10;
  WdLogEvent5_WdError(v29);
  return (unsigned int)v10;
}
