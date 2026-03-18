/*
 * XREFs of _BtlPreAcquireSharedAccess_&BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback_1_ @ 0x1C00B6E40
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0008768 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C002AC0C (DxgkIsMSBDDFallbackEnabled.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00B6EE4 (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback_1_(
        DXGADAPTER *this,
        void *a2)
{
  int AnchorAdaptersCallback; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  _QWORD *v10; // rax
  struct DXGADAPTER *v12; // rcx
  _BYTE v13[80]; // [rsp+20h] [rbp-58h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v13, this, 0LL);
  AnchorAdaptersCallback = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v13);
  v9 = 0;
  if ( AnchorAdaptersCallback < 0 )
  {
    if ( AnchorAdaptersCallback == -1073741130 )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
      v10[3] = this;
      v10[4] = *((int *)this + 68);
      v10[5] = *((unsigned int *)this + 67);
      v10[6] = a2;
      goto LABEL_4;
    }
LABEL_8:
    v9 = AnchorAdaptersCallback;
    goto LABEL_4;
  }
  if ( !*((_BYTE *)this + 2053) && (!DXGADAPTER::IsBddFallbackDriver(this) || DxgkIsMSBDDFallbackEnabled()) )
  {
    AnchorAdaptersCallback = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback(v12, a2);
    goto LABEL_8;
  }
LABEL_4:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v13);
  return v9;
}
