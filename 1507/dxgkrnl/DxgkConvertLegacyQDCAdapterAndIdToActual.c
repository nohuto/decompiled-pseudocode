/*
 * XREFs of DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00A9150
 * Callers:
 *     ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C00A8F40 (-DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C01518F0 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     DxgkIsVirtualModeDisabledForPath @ 0x1C0062720 (DxgkIsVirtualModeDisabledForPath.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkIsAdapterDwmCloneEnabled @ 0x1C0129EC4 (DxgkIsAdapterDwmCloneEnabled.c)
 *     ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x1C013F478 (-FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z.c)
 */

__int64 __fastcall DxgkConvertLegacyQDCAdapterAndIdToActual(
        struct _LUID *a1,
        __int64 a2,
        struct _LUID *a3,
        unsigned int *a4)
{
  unsigned int v6; // edi
  struct DXGGLOBAL *Global; // rbp
  __int64 result; // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _LUID v15; // rbx
  unsigned int v16; // edi
  __int64 v17; // rax
  struct _LUID v18; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+58h] [rbp+10h] BYREF

  *a3 = *a1;
  *a4 = a2;
  v6 = a2;
  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2, (__int64)a3, (__int64)a4);
  if ( (v6 & 0xF0000000) == 0 )
    return 0LL;
  LODWORD(result) = ((__int64 (__fastcall *)(_QWORD, _QWORD))DxgkIsAdapterDwmCloneEnabled)(*a1, &v19);
  v10 = (int)result;
  if ( (int)result < 0 )
    return (unsigned int)result;
  if ( !v19 )
    return 0LL;
  if ( (int)DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(
              (struct DXGGLOBAL *)((char *)Global + 808),
              v6 >> 28,
              &v18,
              &v19) < 0 )
  {
    v17 = WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
    *(_QWORD *)(v17 + 24) = v6 >> 28;
    *(_QWORD *)(v17 + 32) = v10;
    return 0LL;
  }
  v15 = v18;
  v16 = v6 & 0xFFFFFFF;
  result = DxgkIsVirtualModeDisabledForPath(v18, v16, (__int64)&v19, 0LL);
  if ( (int)result >= 0 )
  {
    if ( !(_BYTE)v19 )
    {
      *a3 = v15;
      *a4 = v16;
    }
    return 0LL;
  }
  return result;
}
