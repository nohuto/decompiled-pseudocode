/*
 * XREFs of ?UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z @ 0x1C00869DC
 * Callers:
 *     ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C008388C (-RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEA.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00D39F4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0093988 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C0093B78 (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 */

void __fastcall ADAPTER_DISPLAY::UpdateOneCddPrimaryPrivateDriverData(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        struct DXGADAPTER *a3)
{
  __int64 v5; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  UINT v15; // eax
  ADAPTER_RENDER *v16; // rcx
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v17; // [rsp+20h] [rbp-59h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v18; // [rsp+50h] [rbp-29h] BYREF
  _DWORD v19[3]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v20; // [rsp+8Ch] [rbp+13h]
  unsigned int v21; // [rsp+94h] [rbp+1Bh]

  v5 = *((_QWORD *)this + 14);
  v7 = 1016LL * a2;
  v8 = *(_QWORD *)(v5 + v7 + 88);
  if ( v8 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 40) + 56LL);
    if ( !*(_DWORD *)(v5 + v7 + 908) )
      goto LABEL_10;
    if ( !*((_QWORD *)a3 + 267) )
    {
      v12 = WdLogNewEntry5_WdAssertion(v5);
      *(_QWORD *)(v12 + 24) = 5895LL;
      WdLogEvent5_WdAssertion(v12);
    }
    if ( (*(_DWORD *)(v9 + 12) & 4) == 0 )
    {
      memset(&v18, 0, sizeof(v18));
      v18.hAllocation = *(HANDLE *)(*(_QWORD *)(v8 + 48) + 16LL);
      if ( (int)ADAPTER_RENDER::DdiDescribeAllocation(*((ADAPTER_RENDER **)a3 + 267), &v18) >= 0 )
      {
        v11 = *((_QWORD *)this + 14);
        if ( v18.PrivateDriverFormatAttribute == *(_DWORD *)(v11 + v7 + 960) )
          return;
        memset(&v17, 0, sizeof(v17));
        v14 = *(_QWORD *)(v8 + 48);
        v17.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)v19;
        v17.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_SHAREDPRIMARYSURFACE;
        v19[1] = *(_DWORD *)(v11 + v7 + 912);
        v19[0] = *(_DWORD *)(v11 + v7 + 908);
        v20 = *(_QWORD *)(v11 + v7 + 924);
        v19[2] = *(_DWORD *)(v11 + v7 + 916);
        v21 = a2;
        v17.pAllocationPrivateDriverData = *(void **)(v14 + 32);
        v15 = *(_DWORD *)(v14 + 40);
        v16 = (ADAPTER_RENDER *)*((_QWORD *)a3 + 267);
        v17.AllocationPrivateDriverDataSize = v15;
        v17.pResourcePrivateDriverData = *(void **)(v9 + 112);
        v17.ResourcePrivateDriverDataSize = *(_DWORD *)(v9 + 120);
        if ( (int)ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v16, &v17) >= 0 )
        {
          *(_DWORD *)(*((_QWORD *)this + 14) + v7 + 960) = v18.PrivateDriverFormatAttribute;
          return;
        }
      }
      v13 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v13 + 24) = v8;
      WdLogEvent5_WdError(v13);
LABEL_10:
      *(_DWORD *)(v9 + 12) |= 4u;
    }
  }
}
