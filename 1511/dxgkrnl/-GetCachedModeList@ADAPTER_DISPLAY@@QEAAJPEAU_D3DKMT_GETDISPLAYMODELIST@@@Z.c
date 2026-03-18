/*
 * XREFs of ?GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C009A63C
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C014034C (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetCachedModeList(DXGADAPTER **this, struct _D3DKMT_GETDISPLAYMODELIST *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 VidPnSourceId; // rax
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rax
  __int64 v14; // rdx

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v8 + 24) = 22900LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !a2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v9 + 24) = 22902LL;
    WdLogEvent5_WdAssertion(v9);
  }
  VidPnSourceId = a2->VidPnSourceId;
  if ( (unsigned int)VidPnSourceId < *((_DWORD *)this + 26) )
  {
    if ( *((_BYTE *)this + 156) && *((_BYTE *)this[17] + 1016 * VidPnSourceId + 980) )
    {
      v13 = WdLogNewEntry5_WdEvent(1016 * VidPnSourceId, v4, v6, v7);
      *(_QWORD *)(v13 + 24) = 22920LL;
      WdLogEvent5_WdEvent(v13);
      v14 = 1016LL * a2->VidPnSourceId;
      a2->pModeList = *(D3DKMT_DISPLAYMODE **)((char *)this[17] + v14 + 968);
      result = 0LL;
      a2->ModeCount = *(_DWORD *)((char *)this[17] + v14 + 976);
    }
    else
    {
      return 3221226021LL;
    }
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v11 + 24) = a2->VidPnSourceId;
    *(_QWORD *)(v11 + 32) = *((unsigned int *)this + 26);
    WdLogEvent5_WdError(v11);
    return 3221225485LL;
  }
  return result;
}
