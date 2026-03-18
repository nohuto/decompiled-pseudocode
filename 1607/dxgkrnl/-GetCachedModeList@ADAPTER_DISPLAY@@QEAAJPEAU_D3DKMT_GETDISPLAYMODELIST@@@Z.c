/*
 * XREFs of ?GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00870D4
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00D1678 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetCachedModeList(DXGADAPTER **this, struct _D3DKMT_GETDISPLAYMODELIST *a2)
{
  __int64 v4; // rcx
  __int64 VidPnSourceId; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v9 + 24) = 4878LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !a2 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v10 + 24) = 4880LL;
    WdLogEvent5_WdAssertion(v10);
  }
  VidPnSourceId = a2->VidPnSourceId;
  if ( (unsigned int)VidPnSourceId >= *((_DWORD *)this + 20) )
  {
    v11 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v11 + 24) = a2->VidPnSourceId;
    *(_QWORD *)(v11 + 32) = *((unsigned int *)this + 20);
    WdLogEvent5_WdError(v11);
    return 3221225485LL;
  }
  else if ( *((_BYTE *)this + 132) && *((_BYTE *)this[14] + 1016 * VidPnSourceId + 988) )
  {
    v6 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v6 + 24) = 4896LL;
    WdLogEvent5_WdEvent(v6);
    v7 = 1016LL * a2->VidPnSourceId;
    a2->pModeList = *(D3DKMT_DISPLAYMODE **)((char *)this[14] + v7 + 976);
    result = 0LL;
    a2->ModeCount = *(_DWORD *)((char *)this[14] + v7 + 984);
  }
  else
  {
    return 3221226021LL;
  }
  return result;
}
