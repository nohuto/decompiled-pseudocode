/*
 * XREFs of sub_1C00A64F0 @ 0x1C00A64F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C00031D4 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C00281BC (DxgkIsMSBDDFallbackEnabled.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00A5D3C (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 */

__int64 __fastcall sub_1C00A64F0(struct DXGADAPTER *a1, _BYTE *a2)
{
  int AnchorAdaptersCallback; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  _QWORD *v10; // rax
  struct DXGADAPTER *v12; // rcx
  _BYTE v13[72]; // [rsp+20h] [rbp-48h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v13, a1, 0LL);
  AnchorAdaptersCallback = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v13);
  v9 = 0;
  if ( AnchorAdaptersCallback < 0 )
  {
    if ( AnchorAdaptersCallback == -1073741130 )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
      v10[3] = a1;
      v10[4] = (int)HIDWORD(*(_QWORD *)((char *)a1 + 252));
      v10[5] = *((unsigned int *)a1 + 63);
      v10[6] = a2;
      goto LABEL_4;
    }
LABEL_8:
    v9 = AnchorAdaptersCallback;
    goto LABEL_4;
  }
  if ( !*((_BYTE *)a1 + 1917) && (!DXGADAPTER::IsBddFallbackDriver(a1) || DxgkIsMSBDDFallbackEnabled()) )
  {
    AnchorAdaptersCallback = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback(v12, a2);
    goto LABEL_8;
  }
LABEL_4:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v13);
  return v9;
}
