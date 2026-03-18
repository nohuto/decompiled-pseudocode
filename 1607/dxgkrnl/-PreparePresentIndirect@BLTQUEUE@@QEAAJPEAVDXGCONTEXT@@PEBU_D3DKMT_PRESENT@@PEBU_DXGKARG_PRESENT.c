/*
 * XREFs of ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x1C0183978
 * Callers:
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0183B4C (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x1C0183278 (-CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z.c)
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1C018F220 (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 */

__int64 __fastcall BLTQUEUE::PreparePresentIndirect(
        BLTQUEUE *this,
        struct DXGCONTEXT *a2,
        const struct _D3DKMT_PRESENT *a3,
        const struct _DXGKARG_PRESENT *a4,
        struct COREDEVICEACCESS *a5,
        struct BLTENTRY *a6)
{
  struct DXGSWAPCHAIN **v6; // r15
  UINT DirtyRectCount; // r14d
  UINT MoveRectCount; // esi
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rax
  struct DXGSWAPCHAIN *v12; // rcx
  int SetMetaDataInternal; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r15
  __int64 v19; // rax
  D3DKMT_PRESENT_RGNS *v20; // rax
  UINT v21; // ecx
  RECT *pDirtyRects; // rax
  struct DXGSWAPCHAIN **v23; // rcx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r15
  __int64 v30; // rax
  UINT PresentCount; // eax
  struct DXGSWAPCHAIN **v32; // rcx
  struct DXGSWAPCHAIN *v33; // rcx
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rax
  struct _D3DKMT_GETSETSWAPCHAINMETADATA v43; // [rsp+20h] [rbp-50h] BYREF
  _DWORD v44[3]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v45; // [rsp+5Ch] [rbp-14h]

  v6 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 320);
  if ( v6 )
  {
    memset(&v43, 0, sizeof(v43));
    v43.bGlobalMetaData = 0;
    DirtyRectCount = 0;
    v43.bProducer = 1;
    MoveRectCount = 0;
    v43.bSetMetaData = 1;
    if ( (a3->Flags.Value & 0x400000) != 0 )
    {
      pPresentRegions = a3->pPresentRegions;
      if ( pPresentRegions )
      {
        MoveRectCount = pPresentRegions->MoveRectCount;
        DirtyRectCount = pPresentRegions->DirtyRectCount;
        if ( MoveRectCount )
        {
          v12 = *v6;
          v43.pBuffer = (PVOID)pPresentRegions->pMoveRects;
          v43.BufferSize = 24 * MoveRectCount;
          SetMetaDataInternal = SwapChainGetSetMetaDataInternal(v12, &v43, 16 * DirtyRectCount + 28, 0);
          v18 = SetMetaDataInternal;
          if ( SetMetaDataInternal < 0 )
          {
            v19 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
            *(_QWORD *)(v19 + 24) = v18;
            WdLogEvent5_WdWarning(v19);
          }
        }
        v20 = a3->pPresentRegions;
        v21 = v20->DirtyRectCount;
        if ( v20->DirtyRectCount )
        {
          pDirtyRects = (RECT *)v20->pDirtyRects;
          v43.BufferSize = 16 * v21;
          v23 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 320);
          v43.pBuffer = pDirtyRects;
          v24 = SwapChainGetSetMetaDataInternal(*v23, &v43, 0x1Cu, 0);
          v29 = v24;
          if ( v24 < 0 )
          {
            v30 = WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
            *(_QWORD *)(v30 + 24) = v29;
            WdLogEvent5_WdWarning(v30);
          }
        }
      }
    }
    PresentCount = a3->PresentCount;
    v32 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 320);
    v45 = 0LL;
    v44[0] = PresentCount;
    v44[1] = DirtyRectCount;
    v44[2] = MoveRectCount;
    v33 = *v32;
    v43.pBuffer = v44;
    v43.BufferSize = 20;
    v34 = SwapChainGetSetMetaDataInternal(v33, &v43, 8u, 0);
    v39 = v34;
    if ( v34 < 0 )
    {
      v40 = WdLogNewEntry5_WdWarning(v36, v35, v37, v38);
      *(_QWORD *)(v40 + 24) = v39;
      WdLogEvent5_WdWarning(v40);
      LODWORD(v39) = 0;
    }
    if ( *((_DWORD *)this + 656) )
      LODWORD(v39) = BLTQUEUE::CompletePresentIndirectInternal(this, a6, 0LL);
  }
  else
  {
    v41 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v41 + 24) = 1138LL;
    WdLogEvent5_WdError(v41);
    LODWORD(v39) = -1073741823;
  }
  return (unsigned int)v39;
}
