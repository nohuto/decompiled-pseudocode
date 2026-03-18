/*
 * XREFs of DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00BC590
 * Callers:
 *     ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C00BC380 (-DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C0155B40 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C000C12C (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C001FF24 (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00A8EB0 (DxgkIsVirtualizationDisabledForTarget.c)
 *     DxgkIsAdapterVirtualTopologyEnabled @ 0x1C0130554 (DxgkIsAdapterVirtualTopologyEnabled.c)
 *     ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x1C01458E8 (-FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z.c)
 */

__int64 __fastcall DxgkConvertLegacyQDCAdapterAndIdToActual(
        struct _LUID *a1,
        unsigned int a2,
        struct _LUID *a3,
        unsigned int *a4)
{
  DXGADAPTERSOURCEHASH *v8; // rdi
  __int64 result; // rax
  __int64 v10; // rbx
  unsigned int v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int HashBitMask; // eax
  struct _LUID v17; // rbx
  __int64 v18; // rax
  bool v19; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v20; // [rsp+68h] [rbp+10h] BYREF
  struct _LUID v21; // [rsp+70h] [rbp+18h] BYREF

  *a3 = *a1;
  *a4 = a2;
  v8 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal((__int64)a1) + 952);
  if ( ((unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(v8) & a2) == 0 )
    return 0LL;
  LODWORD(result) = ((__int64 (__fastcall *)(_QWORD, _QWORD))DxgkIsAdapterVirtualTopologyEnabled)(*a1, &v20);
  v10 = (int)result;
  if ( (int)result < 0 )
    return (unsigned int)result;
  if ( !v20 )
    return 0LL;
  v11 = a2 >> DXGADAPTERSOURCEHASH::GetHashBitShift(v8);
  if ( (int)DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(v8, v11, &v21, &v20) < 0 )
  {
    v18 = WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
    *(_QWORD *)(v18 + 24) = v11;
    *(_QWORD *)(v18 + 32) = v10;
    return 0LL;
  }
  HashBitMask = DXGADAPTERSOURCEHASH::GetHashBitMask(v8);
  v17 = v21;
  result = DxgkIsVirtualizationDisabledForTarget(*(_QWORD *)&v21, a2 & ~HashBitMask, &v19, (bool *)&v20, 0LL);
  if ( (int)result >= 0 )
  {
    if ( !(_BYTE)v20 )
    {
      *a3 = v17;
      *a4 = a2 & ~(unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(v8);
    }
    return 0LL;
  }
  return result;
}
