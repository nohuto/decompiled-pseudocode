/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_0_ @ 0x1C00D92C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0008768 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000CA40 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C002AC0C (DxgkIsMSBDDFallbackEnabled.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0085190 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C008D61C (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_0_(
        DXGADAPTER *this,
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  _QWORD *v10; // rax
  __int64 v12; // rdi
  __int64 v13; // rdi
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v15; // rcx
  __int64 v16; // r15
  int v17; // edi
  _QWORD *v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  _BYTE v23[80]; // [rsp+20h] [rbp-50h] BYREF
  struct DMMVIDPN *v24; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v25; // [rsp+B8h] [rbp+48h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v23, this, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v23);
  v9 = 0;
  if ( v4 >= 0 )
  {
    if ( !DXGADAPTER::IsBddFallbackDriver(this) || DxgkIsMSBDDFallbackEnabled() )
    {
      v12 = *((_QWORD *)this + 266);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 88);
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v25, v13);
        v24 = 0LL;
        ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                                   (const struct DMMVIDPN **)v13,
                                                   (__int64 *)&v24);
        v16 = ClientVidPnFromLastClientCommitedVidPn;
        if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
        {
          v18 = (_QWORD *)WdLogNewEntry5_WdError(v15);
          v18[3] = v16;
          v18[4] = v13;
          v19 = *(_QWORD *)a2;
          v18[5] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
          if ( !*(_QWORD *)(v13 + 8) )
          {
            v20 = WdLogNewEntry5_WdAssertion(v19);
            WdLogEvent5_WdAssertion(v20);
          }
          v21 = *(_QWORD *)(*(_QWORD *)(v13 + 8) + 16LL);
          v18[6] = *(int *)(v21 + 272);
          if ( !*(_QWORD *)(v13 + 8) )
          {
            v22 = WdLogNewEntry5_WdAssertion(v21);
            WdLogEvent5_WdAssertion(v22);
          }
          v18[7] = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) + 16LL) + 268LL);
          WdLogEvent5_WdError(v18);
          auto_rc<DMMVIDPN>::reset((__int64 *)&v24, 0LL);
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v25 + 40));
          v9 = v16;
        }
        else
        {
          v17 = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(a2, v24, 1);
          auto_rc<DMMVIDPN>::reset((__int64 *)&v24, 0LL);
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v25 + 40));
          v9 = v17;
        }
      }
    }
  }
  else if ( v4 == -1073741130 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
    v10[3] = this;
    v10[4] = *((int *)this + 68);
    v10[5] = *((unsigned int *)this + 67);
    v10[6] = a2;
  }
  else
  {
    v9 = v4;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v23);
  return v9;
}
