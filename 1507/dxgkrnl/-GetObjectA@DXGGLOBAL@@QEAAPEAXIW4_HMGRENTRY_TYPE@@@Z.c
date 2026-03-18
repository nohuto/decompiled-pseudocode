/*
 * XREFs of ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C0004848
 * Callers:
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00682F4 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C007B838 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C007BD88 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAI@Z @ 0x1C011E4C4 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAI@Z.c)
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x1C012D0CC (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
 *     DxgkCheckSharedResourceAccess @ 0x1C012E3E0 (DxgkCheckSharedResourceAccess.c)
 *     DxgkGetSharedResourceAdapterLuid @ 0x1C012EBD0 (DxgkGetSharedResourceAdapterLuid.c)
 *     ?ConfigureSharedResourceWithSharedHandle@DXGDEVICE@@QEAAJEPEAXIE@Z @ 0x1C0134FD8 (-ConfigureSharedResourceWithSharedHandle@DXGDEVICE@@QEAAJEPEAXIE@Z.c)
 *     ?AbandonKeyedMutex@DXGGLOBAL@@QEAAJI@Z @ 0x1C014BB7C (-AbandonKeyedMutex@DXGGLOBAL@@QEAAJI@Z.c)
 *     ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C014CEDC (-OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z.c)
 *     ?DestroyGlobal@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C01615E0 (-DestroyGlobal@DXGSWAPCHAIN@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGGLOBAL::GetObjectA(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v6; // ecx
  __int64 v7; // r8
  int v8; // edx
  __int64 v10; // rax

  if ( *(struct _KTHREAD **)(a1 + 144) != KeGetCurrentThread() )
  {
    v10 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v10 + 24) = 606LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v6 = (a2 >> 6) & 0xFFFFFF;
  if ( v6 < *(_DWORD *)(a1 + 192)
    && (v7 = *(_QWORD *)(a1 + 176),
        v8 = *(_DWORD *)(v7 + 16LL * v6 + 8),
        ((a2 >> 26) & 0x30) == (*(_BYTE *)(v7 + 16LL * v6 + 8) & 0x30))
    && (v8 & 0x1000) == 0
    && (v8 & 0xF) != 0
    && a3 == (*(_DWORD *)(v7 + 16LL * v6 + 8) & 0xF) )
  {
    return *(_QWORD *)(v7 + 16LL * v6);
  }
  else
  {
    return 0LL;
  }
}
