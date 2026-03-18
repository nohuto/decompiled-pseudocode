/*
 * XREFs of ?UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z @ 0x1C00B57D8
 * Callers:
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00A9BAC (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@@Z @ 0x1C00B8CFC (-RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEA.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C00934AC (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00B87DC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::UpdateOneCddPrimaryPrivateDriverData(
        ADAPTER_DISPLAY *this,
        __int64 a2,
        ADAPTER_RENDER **a3,
        __int64 a4)
{
  int v4; // r12d
  __int64 v6; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  UINT v16; // eax
  ADAPTER_RENDER *v17; // rcx
  __int64 v18; // r8
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v19; // [rsp+20h] [rbp-59h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v20; // [rsp+50h] [rbp-29h] BYREF
  _DWORD v21[3]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v22; // [rsp+8Ch] [rbp+13h]
  int v23; // [rsp+94h] [rbp+1Bh]

  v4 = a2;
  v6 = *((_QWORD *)this + 14);
  v8 = 1008LL * (unsigned int)a2;
  v9 = *(_QWORD *)(v6 + v8 + 88);
  if ( v9 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 40) + 56LL);
    if ( !*(_DWORD *)(v6 + v8 + 900) )
      goto LABEL_10;
    if ( !a3[248] )
    {
      v13 = WdLogNewEntry5_WdAssertion(v6, a2, a3, a4);
      *(_QWORD *)(v13 + 24) = 24340LL;
      WdLogEvent5_WdAssertion(v13);
    }
    if ( (*(_DWORD *)(v10 + 12) & 4) == 0 )
    {
      memset(&v20, 0, sizeof(v20));
      v20.hAllocation = *(HANDLE *)(*(_QWORD *)(v9 + 48) + 16LL);
      if ( (int)ADAPTER_RENDER::DdiDescribeAllocation(a3[248], &v20) >= 0 )
      {
        v12 = *((_QWORD *)this + 14);
        if ( v20.PrivateDriverFormatAttribute == *(_DWORD *)(v12 + v8 + 952) )
          return;
        memset(&v19, 0, sizeof(v19));
        v15 = *(_QWORD *)(v9 + 48);
        v19.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)v21;
        v19.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_SHAREDPRIMARYSURFACE;
        v21[1] = *(_DWORD *)(v12 + v8 + 904);
        v21[0] = *(_DWORD *)(v12 + v8 + 900);
        v22 = *(_QWORD *)(v12 + v8 + 916);
        v21[2] = *(_DWORD *)(v12 + v8 + 908);
        v23 = v4;
        v19.pAllocationPrivateDriverData = *(void **)(v15 + 32);
        v16 = *(_DWORD *)(v15 + 40);
        v17 = a3[248];
        v19.AllocationPrivateDriverDataSize = v16;
        v19.pResourcePrivateDriverData = *(void **)(v10 + 104);
        v19.ResourcePrivateDriverDataSize = *(_DWORD *)(v10 + 112);
        if ( (int)ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v17, &v19, v18) >= 0 )
        {
          *(_DWORD *)(*((_QWORD *)this + 14) + v8 + 952) = v20.PrivateDriverFormatAttribute;
          return;
        }
      }
      v14 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v14 + 24) = v9;
      WdLogEvent5_WdError(v14);
LABEL_10:
      *(_DWORD *)(v10 + 12) |= 4u;
    }
  }
}
