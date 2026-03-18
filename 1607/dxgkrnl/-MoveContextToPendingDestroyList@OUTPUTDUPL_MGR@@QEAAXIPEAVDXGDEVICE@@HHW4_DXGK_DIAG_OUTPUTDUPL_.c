/*
 * XREFs of ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C0077F6C
 * Callers:
 *     ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C0078090 (-ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0078248 (-ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?ProcessDesktopSwitch@OUTPUTDUPL_MGR@@QEAAXI@Z @ 0x1C00782D0 (-ProcessDesktopSwitch@OUTPUTDUPL_MGR@@QEAAXI@Z.c)
 *     ?ProcessReleaseVidPnOwnership@OUTPUTDUPL_MGR@@QEAAXI@Z @ 0x1C007839C (-ProcessReleaseVidPnOwnership@OUTPUTDUPL_MGR@@QEAAXI@Z.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C0087D48 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C0088568 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00D39F4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00DE3E0 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PE.c)
 *     _lambda_090d52b4b377212e5b096f8abab319d1_::_lambda_invoker_cdecl_ @ 0x1C017AED0 (_lambda_090d52b4b377212e5b096f8abab319d1_--_lambda_invoker_cdecl_.c)
 *     ?ProcessAdapterReset@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C017DBCC (-ProcessAdapterReset@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?ProcessLockScreenActive@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C017DC40 (-ProcessLockScreenActive@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C017DCAC (-ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009830 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00098D0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C00781E8 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C017CC68 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ @ 0x1C0181404 (-GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ.c)
 *     ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1C018184C (-MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ.c)
 */

void __fastcall OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(
        OUTPUTDUPL_CONTEXT **a1,
        unsigned int a2,
        struct DXGDEVICE *a3,
        int a4,
        int a5,
        int a6)
{
  __int64 v7; // r14
  OUTPUTDUPL_CONTEXT *v8; // rcx
  __int64 v11; // rcx
  OUTPUTDUPL_CONTEXT *v12; // rbx
  __int64 v13; // rdi
  OUTPUTDUPL_MGR *v14; // rcx
  __int64 v15; // rcx
  unsigned int v16; // r14d
  OUTPUTDUPL_CONTEXT **i; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  OUTPUTDUPL_CONTEXT *v21; // rcx
  OUTPUTDUPL_CONTEXT **v22; // rax
  OUTPUTDUPL_CONTEXT *v23; // rdx
  _BYTE v24[16]; // [rsp+20h] [rbp-59h] BYREF
  _BYTE v25[8]; // [rsp+30h] [rbp-49h] BYREF
  DXGPUSHLOCK *v26; // [rsp+38h] [rbp-41h]
  int v27; // [rsp+40h] [rbp-39h]
  _DWORD v28[16]; // [rsp+50h] [rbp-29h] BYREF

  v7 = a2;
  v8 = *a1;
  if ( v8 && !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)v8 + 2)) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v18 + 24) = 2231LL;
    WdLogEvent5_WdAssertion(v18);
  }
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25, (struct _KTHREAD **)a1[3]);
  DXGPUSHLOCK::AcquireExclusive(v26);
  v12 = a1[2];
  v13 = 3 * v7;
  v27 = 2;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, *((struct DXGFASTMUTEX *const *)v12 + 3 * v7));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
  memset(v28, 0, sizeof(v28));
  OUTPUTDUPL_MGR::InitializePacketHeader(v14, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v28);
  v28[13] = v7;
  v16 = 0;
  v28[1] = 64;
  v28[12] = 1;
  v28[15] = a6;
  for ( i = (OUTPUTDUPL_CONTEXT **)*((_QWORD *)v12 + v13 + 1); v16 < *((_DWORD *)a1 + 2); ++i )
  {
    if ( *i )
    {
      if ( *((_DWORD *)*i + 72) )
      {
        v19 = WdLogNewEntry5_WdAssertion(v15);
        *(_QWORD *)(v19 + 24) = 2260LL;
        WdLogEvent5_WdAssertion(v19);
      }
      if ( !a3 || OUTPUTDUPL_CONTEXT::GetProducerDevice(*i) == a3 )
      {
        if ( !a4 || (v20 = *((_QWORD *)*i + 3), PsGetCurrentProcess() == v20) )
        {
          if ( !a5 || !*((_DWORD *)*i + 82) )
          {
            OUTPUTDUPL_CONTEXT::MarkForPendingDestroy(*i);
            v21 = *i;
            v22 = a1 + 4;
            v23 = a1[4];
            if ( *((OUTPUTDUPL_CONTEXT ***)v23 + 1) != a1 + 4 )
              __fastfail(3u);
            *(_QWORD *)v21 = v23;
            *((_QWORD *)v21 + 1) = v22;
            *((_QWORD *)v23 + 1) = v21;
            *v22 = v21;
            *i = 0LL;
            v28[14] = v16;
            OUTPUTDUPL_MGR::LogEtwAndDiagnostics((OUTPUTDUPL_MGR *)a1, 1, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v28, 1);
          }
        }
      }
    }
    ++v16;
  }
  if ( v24[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
}
