/*
 * XREFs of ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C008DD08
 * Callers:
 *     ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C008DE2C (-ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C008E1D4 (-ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00A9BAC (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@@Z @ 0x1C00B3C78 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@@Z.c)
 *     ?ProcessReleaseVidPnOwnership@OUTPUTDUPL_MGR@@QEAAXI@Z @ 0x1C00B4678 (-ProcessReleaseVidPnOwnership@OUTPUTDUPL_MGR@@QEAAXI@Z.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00B644C (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C00B6C38 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?ProcessDesktopSwitch@OUTPUTDUPL_MGR@@QEAAXI@Z @ 0x1C00D1CE0 (-ProcessDesktopSwitch@OUTPUTDUPL_MGR@@QEAAXI@Z.c)
 *     _lambda_e1b948e1d41ccab4a78cb003c390c9f7_::_helper_func_cdecl_ @ 0x1C011F090 (_lambda_e1b948e1d41ccab4a78cb003c390c9f7_--_helper_func_cdecl_.c)
 *     _lambda_78f17609e85a038b4e728ba8797581f2_::_helper_func_cdecl_ @ 0x1C0152180 (_lambda_78f17609e85a038b4e728ba8797581f2_--_helper_func_cdecl_.c)
 *     ?ProcessLockScreenActive@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C0154C40 (-ProcessLockScreenActive@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C0154C9C (-ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C008E174 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C0153D68 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ @ 0x1C01577C4 (-GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ.c)
 *     ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1C0157BF8 (-MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ.c)
 */

void __fastcall OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(
        OUTPUTDUPL_MGR *a1,
        unsigned int a2,
        struct DXGDEVICE *a3,
        int a4,
        int a5,
        int a6)
{
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rdi
  OUTPUTDUPL_MGR *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // r14d
  OUTPUTDUPL_CONTEXT **i; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbx
  OUTPUTDUPL_CONTEXT *v27; // rcx
  __int64 v28; // rdx
  _BYTE v29[16]; // [rsp+20h] [rbp-49h] BYREF
  _BYTE v30[16]; // [rsp+30h] [rbp-39h] BYREF
  _DWORD v31[16]; // [rsp+40h] [rbp-29h] BYREF

  v7 = a2;
  v8 = *(_QWORD *)a1;
  if ( v8 && !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v8 + 16)) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    *(_QWORD *)(v24 + 24) = 2193LL;
    WdLogEvent5_WdAssertion(v24);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v29, *((struct DXGFASTMUTEX *const *)a1 + 3));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
  v15 = *((_QWORD *)a1 + 2);
  v16 = 3 * v7;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v30, *(struct DXGFASTMUTEX *const *)(v15 + 24 * v7));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
  memset(v31, 0, sizeof(v31));
  OUTPUTDUPL_MGR::InitializePacketHeader(v17, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v31);
  v31[13] = v7;
  v22 = 0;
  v31[1] = 64;
  v31[12] = 1;
  v31[15] = a6;
  for ( i = *(OUTPUTDUPL_CONTEXT ***)(v15 + 8 * v16 + 8); v22 < *((_DWORD *)a1 + 2); ++i )
  {
    if ( *i )
    {
      if ( *((_DWORD *)*i + 72) )
      {
        v25 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
        *(_QWORD *)(v25 + 24) = 2222LL;
        WdLogEvent5_WdAssertion(v25);
      }
      if ( !a3 || OUTPUTDUPL_CONTEXT::GetProducerDevice(*i) == a3 )
      {
        if ( !a4 || (v26 = *((_QWORD *)*i + 3), PsGetCurrentProcess(v19) == v26) )
        {
          if ( !a5 || !*((_DWORD *)*i + 82) )
          {
            OUTPUTDUPL_CONTEXT::MarkForPendingDestroy(*i);
            v27 = *i;
            v28 = *((_QWORD *)a1 + 4);
            *(_QWORD *)v27 = v28;
            *((_QWORD *)v27 + 1) = (char *)a1 + 32;
            if ( *(OUTPUTDUPL_MGR **)(v28 + 8) != (OUTPUTDUPL_MGR *)((char *)a1 + 32) )
              __fastfail(3u);
            *(_QWORD *)(v28 + 8) = v27;
            *((_QWORD *)a1 + 4) = v27;
            *i = 0LL;
            v31[14] = v22;
            OUTPUTDUPL_MGR::LogEtwAndDiagnostics(a1, 1, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v31, 1);
          }
        }
      }
    }
    ++v22;
  }
  if ( v30[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30);
  if ( v29[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29);
}
