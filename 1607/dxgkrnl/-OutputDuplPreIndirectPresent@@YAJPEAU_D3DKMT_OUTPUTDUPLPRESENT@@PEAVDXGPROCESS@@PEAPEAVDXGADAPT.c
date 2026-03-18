/*
 * XREFs of ?OutputDuplPreIndirectPresent@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C017D880
 * Callers:
 *     OutputDuplPresent @ 0x1C017F6DC (OutputDuplPresent.c)
 * Callees:
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0006B7C (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0009E68 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0009F4C (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 */

__int64 __fastcall OutputDuplPreIndirectPresent(
        struct _D3DKMT_OUTPUTDUPLPRESENT *a1,
        struct DXGPROCESS *a2,
        struct DXGADAPTER **a3,
        unsigned __int64 *a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGCONTEXT *v11; // rdi
  unsigned int v12; // edi
  _QWORD *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rbx
  int v17; // eax
  struct DXGDEVICE *VidPnSourceOwner; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  _BYTE v25[16]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v26[96]; // [rsp+40h] [rbp-78h] BYREF
  struct DXGCONTEXT *v27; // [rsp+C0h] [rbp+8h] BYREF

  *a3 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v25, a1->hIndirectContext, a2, &v27, 0);
  v11 = v27;
  if ( v27 )
  {
    v15 = *((_QWORD *)v27 + 2);
    v16 = *(_QWORD *)(v15 + 2856);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v26, v15, 2, v10, 0);
    v17 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v26);
    if ( v17 >= 0 )
    {
      VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(*(DXGADAPTER ***)(v16 + 2128), a1->VidPnSourceId);
      if ( VidPnSourceOwner )
      {
        v20 = *((_QWORD *)v11 + 2);
        v19 = *(_QWORD *)(v20 + 40);
        if ( *((_QWORD *)VidPnSourceOwner + 5) == v19 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v16 + 24));
          *a4 = -1LL;
          v12 = 0;
          *a3 = (struct DXGADAPTER *)v16;
LABEL_9:
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v26);
          goto LABEL_10;
        }
      }
      v23 = WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
      *(_QWORD *)(v23 + 24) = v11;
      *(_QWORD *)(v23 + 32) = a1->VidPnSourceId;
      WdLogEvent5_WdWarning(v23);
      v17 = -1071775744;
    }
    v12 = v17;
    goto LABEL_9;
  }
  v12 = -1073741811;
  v13 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
  v13[3] = -1073741811LL;
  v13[4] = PsGetCurrentProcess(v14);
  v13[5] = a1->hIndirectContext;
  WdLogEvent5_WdWarning(v13);
LABEL_10:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v25);
  return v12;
}
