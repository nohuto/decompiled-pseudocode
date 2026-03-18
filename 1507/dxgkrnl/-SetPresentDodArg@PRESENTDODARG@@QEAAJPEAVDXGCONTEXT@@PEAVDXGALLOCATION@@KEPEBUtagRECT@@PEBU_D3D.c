/*
 * XREFs of ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@PEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C015A904
 * Callers:
 *     ?SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C015AE68 (-SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_D.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002474 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?Get@?$CCachedData@UtagRECT@@$0BA@@@QEAAPEAUtagRECT@@K@Z @ 0x1C0017454 (-Get@-$CCachedData@UtagRECT@@$0BA@@@QEAAPEAUtagRECT@@K@Z.c)
 *     ?Get@?$CCachedData@U_D3DKMT_MOVE_RECT@@$03@@QEAAPEAU_D3DKMT_MOVE_RECT@@K@Z @ 0x1C00174D0 (-Get@-$CCachedData@U_D3DKMT_MOVE_RECT@@$03@@QEAAPEAU_D3DKMT_MOVE_RECT@@K@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C007A6B0 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C007AEE0 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00B87DC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 */

__int64 __fastcall PRESENTDODARG::SetPresentDodArg(
        PRESENTDODARG *this,
        struct DXGCONTEXT *a2,
        struct DXGALLOCATION *a3,
        int a4,
        char a5,
        const struct tagRECT *a6,
        const struct _D3DKMT_PRESENT *a7,
        const struct _DXGKARG_PRESENT *a8,
        struct COREDEVICEACCESS *a9)
{
  const struct _D3DKMT_PRESENT *v9; // r15
  D3DKMT_HANDLE hSource; // edi
  __int64 v15; // r9
  int v16; // edx
  PERESOURCE *v17; // r9
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rdi
  _QWORD *v22; // rax
  DXGDEVICE *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r8
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rdi
  _QWORD *v30; // rax
  D3DDDIFORMAT Format; // eax
  __int64 v32; // rcx
  const RECT *pDirtyRects; // r14
  UINT DirtyRectCount; // edx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // r8d
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rsi
  const struct _DXGKARG_PRESENT *v37; // r15
  int v38; // r8d
  const struct tagRECT *v39; // rdi
  int left; // r10d
  int right; // r9d
  int top; // r11d
  int bottom; // r12d
  int v44; // ecx
  void *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  unsigned int MoveRectCount; // edx
  void *v50; // rax
  void *v51; // rax
  struct _D3DKMT_UNLOCK v52; // [rsp+28h] [rbp-61h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v53; // [rsp+38h] [rbp-51h] BYREF
  struct _D3DKMT_LOCK v54; // [rsp+68h] [rbp-21h] BYREF

  v9 = a7;
  if ( (a7->Flags.Value & 4) != 0 )
    hSource = a7->hSource;
  else
    hSource = a7->hDestination;
  LODWORD(a7) = hSource;
  memset(&v54, 0, sizeof(v54));
  v15 = *((_QWORD *)a2 + 2);
  v54.Flags.Value |= 9u;
  v54.hAllocation = hSource;
  if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v15 + 16) + 16LL)) )
    v54.Flags.Value = v16 | 4;
  v18 = DXGDEVICE::Lock(v17, &v54, a9, (__int64)v17);
  v21 = v18;
  if ( v18 < 0 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v22[3] = v21;
    v22[4] = a2;
    v22[5] = *(_QWORD *)(*((_QWORD *)a2 + 2) + 40LL);
    v22[6] = v54.hAllocation;
    v22[7] = a3;
    WdLogEvent5_WdError(v22);
    return (unsigned int)v21;
  }
  *((_QWORD *)this + 1) = v54.pData;
  v24 = (DXGDEVICE *)*((_QWORD *)a2 + 2);
  v52.phAllocations = (const D3DKMT_HANDLE *)&a7;
  v52.hDevice = 0;
  v52.NumAllocations = 1;
  DXGDEVICE::Unlock(v24, &v52, 0LL, v20);
  memset(&v53, 0, sizeof(v53));
  v25 = *((_QWORD *)a2 + 2);
  v53.hAllocation = *(HANDLE *)(*((_QWORD *)a3 + 6) + 16LL);
  v27 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(v25 + 16), &v53, v26);
  v29 = v27;
  if ( v27 < 0 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdError(v28);
    v30[3] = v29;
    v30[4] = a2;
    v30[5] = *((unsigned int *)a3 + 4);
    v30[6] = a3;
    v30[7] = (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) >> 6) & 0xF;
LABEL_10:
    WdLogEvent5_WdError(v30);
    return 3221225485LL;
  }
  Format = v53.Format;
  v32 = (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) >> 6) & 0xF;
  *(_DWORD *)this = v32;
  if ( Format != D3DDDIFMT_R8G8B8 )
  {
    if ( Format > D3DDDIFMT_R8G8B8 )
    {
      if ( Format <= D3DDDIFMT_X8R8G8B8 )
      {
LABEL_24:
        *((_DWORD *)this + 4) = 4;
        goto LABEL_26;
      }
      if ( Format == D3DDDIFMT_R5G6B5 )
      {
        *((_DWORD *)this + 4) = 2;
        goto LABEL_26;
      }
      if ( Format > D3DDDIFMT_X4R4G4B4 )
      {
        if ( Format > D3DDDIFMT_X8B8G8R8 )
        {
          if ( Format == D3DDDIFMT_P8 )
          {
            *((_DWORD *)this + 4) = 1;
            goto LABEL_26;
          }
          if ( Format == D3DDDIFMT_A16B16G16R16F )
          {
            *((_DWORD *)this + 4) = 8;
            goto LABEL_26;
          }
          if ( Format != D3DDDIFMT_A2B10G10R10_XR_BIAS )
            goto LABEL_20;
        }
        goto LABEL_24;
      }
    }
LABEL_20:
    v30 = (_QWORD *)WdLogNewEntry5_WdError(v32);
    v30[3] = -1073741811LL;
    v30[4] = v53.Format;
    goto LABEL_10;
  }
  *((_DWORD *)this + 4) = 3;
LABEL_26:
  pDirtyRects = 0LL;
  *((_DWORD *)this + 5) = a4;
  *((_DWORD *)this + 6) = a5 & 1;
  DirtyRectCount = 0;
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v9->Flags.Value;
  pPresentRegions = v9->pPresentRegions;
  v37 = a8;
  v38 = (*(unsigned int *)&Value >> 2) & 1;
  if ( v38 )
  {
    if ( !pPresentRegions )
    {
      v39 = 0LL;
      goto LABEL_32;
    }
    DirtyRectCount = pPresentRegions->DirtyRectCount;
    pDirtyRects = pPresentRegions->pDirtyRects;
  }
  else
  {
    DirtyRectCount = a8->SubRectCnt;
    pDirtyRects = a8->pDstSubRects;
  }
  v39 = a6;
LABEL_32:
  if ( !v39 )
    goto LABEL_50;
  left = v39->left;
  right = v39->right;
  if ( v39->left >= right
    || (top = v39->top, bottom = v39->bottom, top >= bottom)
    || right > (int)v53.Width
    || bottom > (int)v53.Height
    || left < 0
    || top < 0 )
  {
    v39 = 0LL;
LABEL_48:
    if ( v39 )
      ++DirtyRectCount;
    goto LABEL_50;
  }
  v44 = 0;
  if ( !DirtyRectCount )
    goto LABEL_48;
  while ( left < pDirtyRects[v44].left
       || right > pDirtyRects[v44].right
       || top < pDirtyRects[v44].top
       || bottom > pDirtyRects[v44].bottom )
  {
    if ( ++v44 >= DirtyRectCount )
      goto LABEL_48;
  }
  v39 = 0LL;
LABEL_50:
  if ( v38 )
  {
    if ( pPresentRegions && (DirtyRectCount || pPresentRegions->MoveRectCount) )
    {
      *((_DWORD *)this + 10) = DirtyRectCount;
      if ( DirtyRectCount )
      {
        v45 = CCachedData<tagRECT,16>::Get((__int64)this + 176, DirtyRectCount);
        *((_QWORD *)this + 6) = v45;
        if ( !v45 )
        {
LABEL_56:
          v47 = WdLogNewEntry5_WdError(v46);
          *(_QWORD *)(v47 + 24) = this;
          v48 = *((unsigned int *)this + 10);
LABEL_57:
          *(_QWORD *)(v47 + 32) = v48;
          WdLogEvent5_WdError(v47);
          return 3221225495LL;
        }
        if ( pPresentRegions->DirtyRectCount )
          memmove(v45, pDirtyRects, 16LL * pPresentRegions->DirtyRectCount);
        if ( v39 )
          *(struct tagRECT *)(*((_QWORD *)this + 6) + 16LL * pPresentRegions->DirtyRectCount) = *v39;
      }
      else
      {
        *((_QWORD *)this + 6) = 0LL;
      }
      MoveRectCount = pPresentRegions->MoveRectCount;
      *((_DWORD *)this + 7) = MoveRectCount;
      if ( MoveRectCount )
      {
        v50 = CCachedData<_D3DKMT_MOVE_RECT,4>::Get((__int64)this + 64, MoveRectCount);
        *((_QWORD *)this + 4) = v50;
        if ( !v50 )
        {
          v47 = WdLogNewEntry5_WdError(0LL);
          *(_QWORD *)(v47 + 24) = this;
          v48 = *((unsigned int *)this + 7);
          goto LABEL_57;
        }
        memmove(v50, pPresentRegions->pMoveRects, 24LL * *((unsigned int *)this + 7));
        return 0LL;
      }
    }
    else
    {
      *((_DWORD *)this + 10) = 1;
      *((_QWORD *)this + 6) = (char *)this + 176;
      *((_DWORD *)this + 44) = 0;
      *(_DWORD *)(*((_QWORD *)this + 6) + 4LL) = 0;
      *(_DWORD *)(*((_QWORD *)this + 6) + 8LL) = v53.Width;
      *(_DWORD *)(*((_QWORD *)this + 6) + 12LL) = v53.Height;
      *((_DWORD *)this + 7) = 0;
    }
    *((_QWORD *)this + 4) = 0LL;
    return 0LL;
  }
  *((_DWORD *)this + 7) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = DirtyRectCount;
  v51 = CCachedData<tagRECT,16>::Get((__int64)this + 176, DirtyRectCount);
  *((_QWORD *)this + 6) = v51;
  if ( !v51 )
    goto LABEL_56;
  memmove(v51, v37->pDstSubRects, 16LL * v37->SubRectCnt);
  if ( v39 )
    *(struct tagRECT *)(*((_QWORD *)this + 6) + 16LL * v37->SubRectCnt) = *v39;
  return 0LL;
}
