/*
 * XREFs of ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C009E5BC
 * Callers:
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C009B204 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C009B93C (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C009E6E0 (-ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C009EAC0 (-ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?ProcessDesktopSwitch@OUTPUTDUPL_MGR@@QEAAXI@Z @ 0x1C009EB40 (-ProcessDesktopSwitch@OUTPUTDUPL_MGR@@QEAAXI@Z.c)
 *     ?ProcessReleaseVidPnOwnership@OUTPUTDUPL_MGR@@QEAAXI@Z @ 0x1C009ECFC (-ProcessReleaseVidPnOwnership@OUTPUTDUPL_MGR@@QEAAXI@Z.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00BD4C4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     sub_1C0124B80 @ 0x1C0124B80 (sub_1C0124B80.c)
 *     sub_1C01563F0 @ 0x1C01563F0 (sub_1C01563F0.c)
 *     ?ProcessLockScreenActive@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C0158D00 (-ProcessLockScreenActive@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0158D5C (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PE.c)
 *     ?ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C0158F80 (-ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C009EA60 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C0157FD4 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ @ 0x1C015BADC (-GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ.c)
 *     ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1C015BF10 (-MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ.c)
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
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdi
  OUTPUTDUPL_MGR *v14; // rcx
  __int64 v15; // rcx
  unsigned int v16; // r14d
  OUTPUTDUPL_CONTEXT **i; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  OUTPUTDUPL_CONTEXT *v21; // rcx
  __int64 v22; // rdx
  _BYTE v23[16]; // [rsp+20h] [rbp-49h] BYREF
  _BYTE v24[16]; // [rsp+30h] [rbp-39h] BYREF
  _DWORD v25[16]; // [rsp+40h] [rbp-29h] BYREF

  v7 = a2;
  v8 = *(_QWORD *)a1;
  if ( v8 && !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v8 + 16)) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v18 + 24) = 2193LL;
    WdLogEvent5_WdAssertion(v18);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, *((struct DXGFASTMUTEX *const *)a1 + 3));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  v12 = *((_QWORD *)a1 + 2);
  v13 = 3 * v7;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, *(struct DXGFASTMUTEX *const *)(v12 + 24 * v7));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
  memset(v25, 0, sizeof(v25));
  OUTPUTDUPL_MGR::InitializePacketHeader(v14, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v25);
  v25[13] = v7;
  v16 = 0;
  v25[1] = 64;
  v25[12] = 1;
  v25[15] = a6;
  for ( i = *(OUTPUTDUPL_CONTEXT ***)(v12 + 8 * v13 + 8); v16 < *((_DWORD *)a1 + 2); ++i )
  {
    if ( *i )
    {
      if ( *((_DWORD *)*i + 72) )
      {
        v19 = WdLogNewEntry5_WdAssertion(v15);
        *(_QWORD *)(v19 + 24) = 2222LL;
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
            v22 = *((_QWORD *)a1 + 4);
            *(_QWORD *)v21 = v22;
            *((_QWORD *)v21 + 1) = (char *)a1 + 32;
            if ( *(OUTPUTDUPL_MGR **)(v22 + 8) != (OUTPUTDUPL_MGR *)((char *)a1 + 32) )
              __fastfail(3u);
            *(_QWORD *)(v22 + 8) = v21;
            *((_QWORD *)a1 + 4) = v21;
            *i = 0LL;
            v25[14] = v16;
            OUTPUTDUPL_MGR::LogEtwAndDiagnostics(a1, 1, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v25, 1);
          }
        }
      }
    }
    ++v16;
  }
  if ( v24[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
  if ( v23[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
}
