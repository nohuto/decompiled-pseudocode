/*
 * XREFs of sub_1C00BF1C0 @ 0x1C00BF1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C00031D4 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000C2B4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C00281BC (DxgkIsMSBDDFallbackEnabled.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008DC58 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C00A1DEC (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 */

__int64 __fastcall sub_1C00BF1C0(struct DXGADAPTER *a1, CCD_BTL_ACTIVE_PATHS_COLLECTOR *this)
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
  int v17; // edi
  _QWORD *v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  _BYTE v23[64]; // [rsp+20h] [rbp-40h] BYREF
  struct DMMVIDPN *v24; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+48h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v23, a1, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v23);
  v9 = 0;
  if ( v4 >= 0 )
  {
    if ( !*((_BYTE *)a1 + 1917) && (!DXGADAPTER::IsBddFallbackDriver(a1) || DxgkIsMSBDDFallbackEnabled()) )
    {
      v12 = *((_QWORD *)a1 + 248);
      if ( v12 )
      {
        v13 = *(struct VIDPN_MGR **)(v12 + 112);
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v25, (__int64)v13);
        v24 = 0LL;
        ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                                   v13,
                                                   (__int64 *)&v24);
        v16 = ClientVidPnFromLastClientCommitedVidPn;
        if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
        {
          v18 = (_QWORD *)WdLogNewEntry5_WdError(v15);
          v18[3] = v16;
          v18[4] = v13;
          v19 = *(_QWORD *)this;
          v18[5] = *(_QWORD *)(*(_QWORD *)this + 64LL);
          if ( !*((_QWORD *)v13 + 1) )
          {
            v20 = WdLogNewEntry5_WdAssertion(v19);
            WdLogEvent5_WdAssertion(v20);
          }
          v21 = *(_QWORD *)(*((_QWORD *)v13 + 1) + 16LL);
          v18[6] = (int)HIDWORD(*(_QWORD *)(v21 + 252));
          if ( !*((_QWORD *)v13 + 1) )
          {
            v22 = WdLogNewEntry5_WdAssertion(v21);
            WdLogEvent5_WdAssertion(v22);
          }
          v18[7] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v13 + 1) + 16LL) + 252LL);
          WdLogEvent5_WdError(v18);
          auto_rc<DMMVIDPN>::reset((__int64 *)&v24, 0LL);
          DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v25 + 40));
          v9 = v16;
        }
        else
        {
          v17 = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(this, v24, 1);
          auto_rc<DMMVIDPN>::reset((__int64 *)&v24, 0LL);
          DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v25 + 40));
          v9 = v17;
        }
      }
    }
  }
  else if ( v4 == -1073741130 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
    v10[3] = a1;
    v10[4] = (int)HIDWORD(*(_QWORD *)((char *)a1 + 252));
    v10[5] = *((unsigned int *)a1 + 63);
    v10[6] = this;
  }
  else
  {
    v9 = v4;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v23);
  return v9;
}
