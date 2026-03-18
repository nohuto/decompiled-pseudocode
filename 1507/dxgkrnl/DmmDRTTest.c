/*
 * XREFs of DmmDRTTest @ 0x1C0175778
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0124C68 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetVidPnPathHwCapabilityInClientVidPn@VIDPN_MGR@@QEAAJIPEAU_D3DKMDT_VIDPN_HW_CAPABILITY@@@Z @ 0x1C0172FD8 (-GetVidPnPathHwCapabilityInClientVidPn@VIDPN_MGR@@QEAAJIPEAU_D3DKMDT_VIDPN_HW_CAPABILITY@@@Z.c)
 */

__int64 __fastcall DmmDRTTest(DXGADAPTER *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  VIDPN_MGR *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // r9
  int VidPnPathHwCapabilityInClientVidPn; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( !this || !a2 )
    return 3221225485LL;
  if ( *(_DWORD *)(a2 + 4) < 0x18u )
  {
    v10 = WdLogNewEntry5_WdWarning(v7, v6, v8, v9);
    *(_QWORD *)(v10 + 24) = a2;
    *(_QWORD *)(v10 + 32) = *(unsigned int *)(a2 + 4);
LABEL_5:
    WdLogEvent5_WdWarning(v10);
    return 3221225485LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    WdLogEvent5_WdAssertion(v16);
  }
  v17 = *((_QWORD *)this + 247);
  if ( v17 )
  {
    v19 = *(VIDPN_MGR **)(v17 + 88);
    if ( v19 )
    {
      if ( *(_DWORD *)(a2 + 12) )
      {
        v10 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
        *(_QWORD *)(v10 + 24) = *(int *)(a2 + 12);
        *(_QWORD *)(v10 + 32) = this;
        goto LABEL_5;
      }
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v31, *(_QWORD *)(v17 + 88));
      VidPnPathHwCapabilityInClientVidPn = VIDPN_MGR::GetVidPnPathHwCapabilityInClientVidPn(
                                             v19,
                                             *(unsigned int *)(a2 + 16),
                                             (struct _D3DKMDT_VIDPN_HW_CAPABILITY *)(a2 + 20),
                                             v21);
      v27 = VidPnPathHwCapabilityInClientVidPn;
      if ( VidPnPathHwCapabilityInClientVidPn == -1073741637 )
      {
        v28 = WdLogNewEntry5_WdDmmEvent(v24);
        *(_QWORD *)(v28 + 24) = this;
        WdLogEvent5_WdDmmEvent(v28);
      }
      else if ( VidPnPathHwCapabilityInClientVidPn == -1071774937 )
      {
        v29 = WdLogNewEntry5_WdWarning(v24, v23, v25, v26);
        *(_QWORD *)(v29 + 24) = *(unsigned int *)(a2 + 16);
        *(_QWORD *)(v29 + 32) = this;
        WdLogEvent5_WdWarning(v29);
      }
      else if ( VidPnPathHwCapabilityInClientVidPn < 0 )
      {
        v30 = WdLogNewEntry5_WdError(v24);
        *(_QWORD *)(v30 + 24) = this;
        *(_QWORD *)(v30 + 32) = v27;
        WdLogEvent5_WdError(v30);
      }
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v31 + 40));
      return (unsigned int)v27;
    }
    else
    {
      v20 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v20 + 24) = this;
      WdLogEvent5_WdError(v20);
      return 3223192373LL;
    }
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v18 + 24) = this;
    WdLogEvent5_WdError(v18);
    return 3223191554LL;
  }
}
