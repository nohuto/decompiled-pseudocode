/*
 * XREFs of DxgkIsVidPnSourceOwnerExclusive @ 0x1C00DD300
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000AC0C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 */

char __fastcall DxgkIsVidPnSourceOwnerExclusive(DXGADAPTER ***a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  unsigned int v5; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int VidPnSourceOwnerType; // eax
  char v12; // bl
  __int64 v14; // rax
  __int64 v15; // rax
  _BYTE v16[72]; // [rsp+20h] [rbp-48h] BYREF

  v5 = a2;
  if ( !a1 )
  {
    v15 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v15 + 24) = 25277LL;
    WdLogEvent5_WdAssertion(v15);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v16, (struct DXGADAPTER *const)a1, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v16) < 0 )
  {
LABEL_8:
    v12 = 0;
    goto LABEL_9;
  }
  if ( !a1[247] )
  {
    v14 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v14 + 24) = 25287LL;
    WdLogEvent5_WdAssertion(v14);
  }
  *a3 = 0;
  VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(a1[247], v5);
  v12 = 1;
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
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v16);
  return v12;
}
