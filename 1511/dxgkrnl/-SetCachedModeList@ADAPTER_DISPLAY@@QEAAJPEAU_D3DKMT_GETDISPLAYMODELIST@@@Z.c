/*
 * XREFs of ?SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C009A4C0
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C014034C (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetCachedModeList(PERESOURCE **this, struct _D3DKMT_GETDISPLAYMODELIST *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rsi
  __int64 v15; // rax
  _LUID Luid; // [rsp+30h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 22947LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v6 + 24) = 22949LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( a2->VidPnSourceId < *((_DWORD *)this + 26) )
  {
    if ( *((_BYTE *)this + 156) )
    {
      v9 = ZwAllocateLocallyUniqueId(&Luid);
      v14 = v9;
      if ( v9 < 0 )
      {
        v15 = WdLogNewEntry5_WdLowResource(v11, v10, v12, v13);
        *(_QWORD *)(v15 + 24) = v14;
        WdLogEvent5_WdLowResource(v15);
        BYTE4(this[17][127 * a2->VidPnSourceId + 122]) = 0;
      }
      else
      {
        operator delete(this[17][127 * a2->VidPnSourceId + 121]);
        this[17][127 * a2->VidPnSourceId + 121] = (PERESOURCE)a2->pModeList;
        LODWORD(this[17][127 * a2->VidPnSourceId + 122]) = a2->ModeCount;
        BYTE4(this[17][127 * a2->VidPnSourceId + 122]) = 1;
        this[17][127 * a2->VidPnSourceId + 123] = (PERESOURCE)Luid;
      }
      return (unsigned int)v14;
    }
    else
    {
      return 3221226021LL;
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v7 + 24) = a2->VidPnSourceId;
    *(_QWORD *)(v7 + 32) = *((unsigned int *)this + 26);
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
}
