/*
 * XREFs of DxgkIsVidPnSourceOwnerExclusive @ 0x1C00C65C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0007AD8 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 */

char __fastcall DxgkIsVidPnSourceOwnerExclusive(DXGADAPTER ***a1, unsigned int a2, _BYTE *a3)
{
  __int64 v6; // rcx
  int VidPnSourceOwnerType; // eax
  char v8; // bl
  __int64 v10; // rax
  __int64 v11; // rax
  _BYTE v12[72]; // [rsp+20h] [rbp-48h] BYREF

  if ( !a1 )
  {
    v11 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v11 + 24) = 25903LL;
    WdLogEvent5_WdAssertion(v11);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v12, (struct DXGADAPTER *const)a1, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v12) < 0 )
  {
LABEL_8:
    v8 = 0;
    goto LABEL_9;
  }
  if ( !a1[248] )
  {
    v10 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v10 + 24) = 25913LL;
    WdLogEvent5_WdAssertion(v10);
  }
  *a3 = 0;
  VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(a1[248], a2);
  v8 = 1;
  if ( VidPnSourceOwnerType != 2 )
  {
    if ( VidPnSourceOwnerType == 3 )
    {
      *a3 = 1;
      goto LABEL_9;
    }
    goto LABEL_8;
  }
LABEL_9:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v12);
  return v8;
}
