/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_ @ 0x1C0062DF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C000268C (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0007D5C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C00285FC (DxgkIsMSBDDFallbackEnabled.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C0063868 (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0096618 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_(
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
  struct VIDPN_MGR *v13; // rdi
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v15; // rcx
  __int64 v16; // r15
  unsigned int v17; // edi
  _QWORD *v18; // rsi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  _BYTE v26[64]; // [rsp+20h] [rbp-40h] BYREF
  struct DMMVIDPN *v27; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+48h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v26, this, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v26);
  v9 = 0;
  if ( v4 >= 0 )
  {
    if ( !*((_BYTE *)this + 1909) && (!DXGADAPTER::IsBddFallbackDriver(this) || DxgkIsMSBDDFallbackEnabled()) )
    {
      v12 = *((_QWORD *)this + 247);
      if ( v12 )
      {
        v13 = *(struct VIDPN_MGR **)(v12 + 88);
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v28, (__int64)v13);
        v27 = 0LL;
        ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v13);
        v16 = ClientVidPnFromLastClientCommitedVidPn;
        if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
        {
          v18 = (_QWORD *)WdLogNewEntry5_WdError(v15);
          v18[3] = v16;
          v18[4] = v13;
          v21 = *(_QWORD *)a2;
          v22 = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
          v18[5] = v22;
          if ( !*((_QWORD *)v13 + 1) )
          {
            v23 = WdLogNewEntry5_WdAssertion(v21, v22, v19, v20);
            WdLogEvent5_WdAssertion(v23);
          }
          v24 = *(_QWORD *)(*((_QWORD *)v13 + 1) + 16LL);
          v18[6] = (int)HIDWORD(*(_QWORD *)(v24 + 252));
          if ( !*((_QWORD *)v13 + 1) )
          {
            v25 = WdLogNewEntry5_WdAssertion(v24, v22, v19, v20);
            WdLogEvent5_WdAssertion(v25);
          }
          v18[7] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v13 + 1) + 16LL) + 252LL);
          WdLogEvent5_WdError(v18);
          auto_rc<DMMVIDPN>::reset((__int64 *)&v27, 0LL);
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v28 + 40));
          v9 = v16;
        }
        else
        {
          v17 = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(a2, v27, 1);
          auto_rc<DMMVIDPN>::reset((__int64 *)&v27, 0LL);
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v28 + 40));
          v9 = v17;
        }
      }
    }
  }
  else if ( v4 == -1073741130 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
    v10[3] = this;
    v10[4] = (int)HIDWORD(*(_QWORD *)((char *)this + 252));
    v10[5] = *((unsigned int *)this + 63);
    v10[6] = a2;
  }
  else
  {
    v9 = v4;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
  return v9;
}
