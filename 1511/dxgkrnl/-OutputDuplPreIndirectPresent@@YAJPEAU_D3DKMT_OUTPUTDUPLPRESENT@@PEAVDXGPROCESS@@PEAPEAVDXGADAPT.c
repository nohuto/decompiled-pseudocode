/*
 * XREFs of ?OutputDuplPreIndirectPresent@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C01589B8
 * Callers:
 *     OutputDuplPresent @ 0x1C015A6B4 (OutputDuplPresent.c)
 * Callees:
 *     ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C0002428 (-AcquireReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000388C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0007E78 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C000C6F0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C000C7D0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 */

__int64 __fastcall OutputDuplPreIndirectPresent(
        struct _D3DKMT_OUTPUTDUPLPRESENT *a1,
        struct DXGPROCESS *a2,
        DXGADAPTER ****a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGCONTEXT *v9; // rbx
  unsigned int v10; // edi
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  DXGADAPTER ***v13; // rdi
  int v14; // eax
  struct DXGDEVICE *VidPnSourceOwner; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  _BYTE v22[16]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v23[80]; // [rsp+40h] [rbp-58h] BYREF
  struct DXGCONTEXT *v24; // [rsp+A0h] [rbp+8h] BYREF

  *a3 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v22, a1->hIndirectContext, a2, &v24, 0);
  v9 = v24;
  if ( v24 )
  {
    v13 = *(DXGADAPTER ****)(*((_QWORD *)v24 + 2) + 2832LL);
    a1->VidPnSourceId = 0;
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v23, *((_QWORD *)v9 + 2), 2, v8, 0);
    v14 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v23);
    if ( v14 >= 0 )
    {
      VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(v13[248], a1->VidPnSourceId);
      if ( VidPnSourceOwner )
      {
        v17 = *((_QWORD *)v9 + 2);
        v16 = *(_QWORD *)(v17 + 40);
        if ( *((_QWORD *)VidPnSourceOwner + 5) == v16 )
        {
          DXGADAPTER::AcquireReference((DXGADAPTER *)v13);
          *a3 = v13;
          v10 = 0;
LABEL_9:
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v23);
          goto LABEL_10;
        }
      }
      v20 = WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
      *(_QWORD *)(v20 + 24) = v9;
      *(_QWORD *)(v20 + 32) = a1->VidPnSourceId;
      WdLogEvent5_WdWarning(v20);
      v14 = -1071775744;
    }
    v10 = v14;
    goto LABEL_9;
  }
  v10 = -1073741811;
  v11 = (_QWORD *)WdLogNewEntry5_WdWarning(v6, v5, v7, v8);
  v11[3] = -1073741811LL;
  v11[4] = PsGetCurrentProcess(v12);
  v11[5] = a1->hIndirectContext;
  WdLogEvent5_WdWarning(v11);
LABEL_10:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v22);
  return v10;
}
