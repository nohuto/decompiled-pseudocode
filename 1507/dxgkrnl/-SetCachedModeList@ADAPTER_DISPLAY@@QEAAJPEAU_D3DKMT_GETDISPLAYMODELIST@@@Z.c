/*
 * XREFs of ?SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00CF384
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C00A7470 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetCachedModeList(PERESOURCE **this, struct _D3DKMT_GETDISPLAYMODELIST *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  struct _LUID Luid; // [rsp+30h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v12 + 24) = 22439LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !a2 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v13 + 24) = 22441LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( a2->VidPnSourceId >= *((_DWORD *)this + 20) )
  {
    v14 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v14 + 24) = a2->VidPnSourceId;
    *(_QWORD *)(v14 + 32) = *((unsigned int *)this + 20);
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
  else if ( *((_BYTE *)this + 132) )
  {
    v8 = ZwAllocateLocallyUniqueId(&Luid);
    v10 = v8;
    if ( v8 < 0 )
    {
      v15 = WdLogNewEntry5_WdLowResource(v9);
      *(_QWORD *)(v15 + 24) = v10;
      WdLogEvent5_WdLowResource(v15);
      BYTE4(this[14][126 * a2->VidPnSourceId + 122]) = 0;
    }
    else
    {
      operator delete(this[14][126 * a2->VidPnSourceId + 121]);
      this[14][126 * a2->VidPnSourceId + 121] = (PERESOURCE)a2->pModeList;
      LODWORD(this[14][126 * a2->VidPnSourceId + 122]) = a2->ModeCount;
      BYTE4(this[14][126 * a2->VidPnSourceId + 122]) = 1;
      this[14][126 * a2->VidPnSourceId + 123] = (PERESOURCE)Luid;
    }
    return (unsigned int)v10;
  }
  else
  {
    return 3221226021LL;
  }
}
