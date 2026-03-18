/*
 * XREFs of ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C00BC380
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C00971C0 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     MonitorGetDeviceObject @ 0x1C00BC490 (MonitorGetDeviceObject.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00BC590 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
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
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdi
  unsigned int DeviceObject; // ebx
  __int64 v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rax
  struct _LUID v31; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v32[56]; // [rsp+28h] [rbp-50h] BYREF
  unsigned int v33; // [rsp+80h] [rbp+8h] BYREF

  v4 = (unsigned int)a2;
  if ( !a1 || !a3 || !a4 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    DeviceObject = -1073741811;
    v29[3] = -1073741811LL;
    goto LABEL_16;
  }
  v31 = *a1;
  v8 = DxgkConvertLegacyQDCAdapterAndIdToActual(&v31, (unsigned int)a2, &v31, &v33);
  v10 = v8;
  if ( v8 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v9);
    v12 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v31);
    v17 = v12;
    if ( v12 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v32, v12, 0LL);
      DXGADAPTER::ReleaseReference(v17);
      if ( *((_QWORD *)v17 + 248) )
      {
        v19 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v32);
        v24 = v19;
        if ( v19 < 0 )
        {
          v30 = WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
          *(_QWORD *)(v30 + 24) = v17;
          *(_QWORD *)(v30 + 32) = v24;
          WdLogEvent5_WdWarning(v30);
          DeviceObject = v24;
        }
        else
        {
          DeviceObject = MonitorGetDeviceObject(v17, v33, a3, a4);
        }
      }
      else
      {
        v27 = WdLogNewEntry5_WdError(v18);
        *(_QWORD *)(v27 + 24) = v17;
        DeviceObject = -1073741811;
        *(_QWORD *)(v27 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v27);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v32);
      return DeviceObject;
    }
    v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
    DeviceObject = -1073741811;
    v29[3] = v31.LowPart;
    v29[4] = v31.HighPart;
    v29[5] = -1073741811LL;
LABEL_16:
    WdLogEvent5_WdWarning(v29);
    return DeviceObject;
  }
  v28 = (_QWORD *)WdLogNewEntry5_WdError(v9);
  v28[3] = a1->LowPart;
  v28[4] = a1->HighPart;
  v28[5] = v4;
  v28[6] = v10;
  WdLogEvent5_WdError(v28);
  return (unsigned int)v10;
}
