/*
 * XREFs of ?SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C0086FE4
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00D1678 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetCachedModeList(PERESOURCE **this, struct _D3DKMT_GETDISPLAYMODELIST *a2)
{
  __int64 v4; // rcx
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  _LUID Luid; // [rsp+30h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v9 + 24) = 4923LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !a2 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v10 + 24) = 4925LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( a2->VidPnSourceId >= *((_DWORD *)this + 20) )
  {
    v11 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v11 + 24) = a2->VidPnSourceId;
    *(_QWORD *)(v11 + 32) = *((unsigned int *)this + 20);
    WdLogEvent5_WdError(v11);
    return 3221225485LL;
  }
  else if ( *((_BYTE *)this + 132) )
  {
    v5 = ZwAllocateLocallyUniqueId(&Luid);
    v7 = v5;
    if ( v5 < 0 )
    {
      v12 = WdLogNewEntry5_WdLowResource(v6);
      *(_QWORD *)(v12 + 24) = v7;
      WdLogEvent5_WdLowResource(v12);
      BYTE4(this[14][127 * a2->VidPnSourceId + 123]) = 0;
    }
    else
    {
      operator delete(this[14][127 * a2->VidPnSourceId + 122]);
      this[14][127 * a2->VidPnSourceId + 122] = (PERESOURCE)a2->pModeList;
      LODWORD(this[14][127 * a2->VidPnSourceId + 123]) = a2->ModeCount;
      BYTE4(this[14][127 * a2->VidPnSourceId + 123]) = 1;
      this[14][127 * a2->VidPnSourceId + 124] = (PERESOURCE)Luid;
    }
    return (unsigned int)v7;
  }
  else
  {
    return 3221226021LL;
  }
}
