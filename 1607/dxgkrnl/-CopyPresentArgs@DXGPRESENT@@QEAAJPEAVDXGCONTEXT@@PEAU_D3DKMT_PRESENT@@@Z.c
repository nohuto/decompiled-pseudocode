/*
 * XREFs of ?CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z @ 0x1C00CA2E0
 * Callers:
 *     ?CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z @ 0x1C001C950 (-CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z.c)
 *     DxgkPresent @ 0x1C00C8CB0 (DxgkPresent.c)
 * Callees:
 *     memmove @ 0x1C0012480 (memmove.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z @ 0x1C0172D5C (-TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z.c)
 */

__int64 __fastcall DXGPRESENT::CopyPresentArgs(
        unsigned __int64 this,
        struct DXGCONTEXT *a2,
        struct _D3DKMT_PRESENT *a3,
        __int64 a4)
{
  struct DXGCONTEXT *v5; // r13
  unsigned __int64 v6; // r14
  unsigned __int64 SubRectCnt; // r12
  unsigned int v8; // esi
  RECT *v9; // r15
  const RECT *pSrcSubRects; // rdx
  ULONG64 v11; // rax
  D3DKMT_PRESENT_RGNS *v12; // r12
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r13
  unsigned int v15; // r15d
  struct _D3DKMT_MOVE_RECT *v16; // r11
  PVOID v17; // r13
  const void *v18; // rdx
  ULONG64 v19; // rax
  ULONG64 v20; // rcx
  ULONG64 v21; // rdx
  __int64 v22; // r11
  SIZE_T v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  SIZE_T v27; // rax
  SIZE_T v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  struct _D3DKMT_MOVE_RECT *v31; // [rsp+30h] [rbp-48h]
  UINT DirtyRectCount; // [rsp+98h] [rbp+20h]

  v5 = a2;
  v6 = this;
  if ( (a3->Flags.Value & 0x400000) != 0 )
  {
    this = (unsigned __int64)a3->pPresentRegions;
    a2 = (struct DXGCONTEXT *)MmUserProbeAddress;
    if ( this >= MmUserProbeAddress )
      this = MmUserProbeAddress;
    *(_OWORD *)(v6 + 440) = *(_OWORD *)this;
    *(_OWORD *)(v6 + 456) = *(_OWORD *)(this + 16);
  }
  if ( a3->pSrcSubRects )
  {
    SubRectCnt = a3->SubRectCnt;
    v8 = SubRectCnt;
    if ( 16 * SubRectCnt > 0xFFFFFFFF )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdError(this);
      v26[3] = -1073741675LL;
      v26[4] = v5;
      v26[5] = a3->SubRectCnt;
      v26[6] = 16LL;
      WdLogEvent5_WdError(v26);
      return 3221225621LL;
    }
    v9 = (RECT *)(v6 + 472);
    if ( (unsigned int)SubRectCnt > 0x10 )
    {
      if ( (unsigned int)SubRectCnt > *(_DWORD *)(v6 + 736) )
      {
        operator delete(*(void **)(v6 + 728));
        v24 = 16 * SubRectCnt;
        if ( !is_mul_ok(SubRectCnt, 0x10uLL) )
          v24 = -1LL;
        v9 = (RECT *)operator new(v24, 0x4B677844u, PagedPool);
        *(_QWORD *)(v6 + 728) = v9;
        this = 0LL;
        if ( v9 )
          this = (unsigned int)SubRectCnt;
        *(_DWORD *)(v6 + 736) = this;
      }
      else
      {
        v9 = *(RECT **)(v6 + 728);
      }
    }
    if ( !v9 )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdLowResource(this);
      v25[3] = -1073741801LL;
      v25[4] = v5;
      v25[5] = a3->SubRectCnt;
      WdLogEvent5_WdLowResource(v25);
      return 3221225495LL;
    }
    pSrcSubRects = a3->pSrcSubRects;
    v11 = (ULONG64)&pSrcSubRects[v8];
    if ( v11 < (unsigned __int64)pSrcSubRects || v11 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v9, pSrcSubRects, v8 * 16);
    a3->pSrcSubRects = v9;
  }
  if ( (a3->Flags.Value & 0x400000) == 0 )
  {
    a3->pPresentRegions = 0LL;
    return 0LL;
  }
  v12 = (D3DKMT_PRESENT_RGNS *)(v6 + 440);
  v13 = 16LL * *(unsigned int *)(v6 + 440);
  if ( v13 > 0xFFFFFFFF )
  {
    v30 = WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    *(_QWORD *)(v30 + 24) = 9083LL;
    goto LABEL_66;
  }
  v14 = *(unsigned int *)(v6 + 456);
  v15 = 24 * v14;
  if ( 24 * v14 > 0xFFFFFFFF )
  {
    v30 = WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    *(_QWORD *)(v30 + 24) = 9091LL;
    goto LABEL_66;
  }
  if ( v15 + (unsigned int)v13 < v15 )
  {
    v30 = WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    *(_QWORD *)(v30 + 24) = 9099LL;
LABEL_66:
    WdLogEvent5_WdWarning(v30);
    return 3221225621LL;
  }
  if ( !(v15 + (_DWORD)v13) )
  {
    *(_QWORD *)(v6 + 464) = 0LL;
    *(_QWORD *)(v6 + 448) = 0LL;
LABEL_35:
    a3->pPresentRegions = v12;
    return 0LL;
  }
  v16 = (struct _D3DKMT_MOVE_RECT *)(v6 + 744);
  v31 = (struct _D3DKMT_MOVE_RECT *)(v6 + 744);
  if ( (unsigned int)v14 > 4 )
  {
    if ( (unsigned int)v14 > *(_DWORD *)(v6 + 848) )
    {
      operator delete(*(void **)(v6 + 840));
      v27 = 24 * v14;
      if ( !is_mul_ok(v14, 0x18uLL) )
        v27 = -1LL;
      v16 = (struct _D3DKMT_MOVE_RECT *)operator new(v27, 0x4B677844u, PagedPool);
      v31 = v16;
      *(_QWORD *)(v6 + 840) = v16;
      this = 0LL;
      if ( v16 )
        this = (unsigned int)v14;
      *(_DWORD *)(v6 + 848) = this;
    }
    else
    {
      v16 = *(struct _D3DKMT_MOVE_RECT **)(v6 + 840);
      v31 = v16;
    }
  }
  DirtyRectCount = v12->DirtyRectCount;
  v17 = (PVOID)(v6 + 856);
  if ( v12->DirtyRectCount > 0x10 )
  {
    this = v6 + 1120;
    if ( v12->DirtyRectCount > *(_DWORD *)(v6 + 1120) )
    {
      operator delete(*(void **)(v6 + 1112));
      v28 = 16LL * DirtyRectCount;
      if ( !is_mul_ok(DirtyRectCount, 0x10uLL) )
        v28 = -1LL;
      v17 = operator new(v28, 0x4B677844u, PagedPool);
      *(_QWORD *)(v6 + 1112) = v17;
      this = 0LL;
      if ( v17 )
        this = DirtyRectCount;
      *(_DWORD *)(v6 + 1120) = this;
      v16 = v31;
    }
    else
    {
      v17 = *(PVOID *)(v6 + 1112);
    }
  }
  if ( v16 && v17 )
  {
    if ( v12->DirtyRectCount )
    {
      v18 = *(const void **)(v6 + 448);
      v19 = (ULONG64)v18 + (unsigned int)v13;
      if ( v19 < (unsigned __int64)v18 || v19 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v17, v18, (unsigned int)v13);
      *(_QWORD *)(v6 + 448) = v17;
      v16 = v31;
    }
    else
    {
      *(_QWORD *)(v6 + 448) = 0LL;
    }
    if ( *(_DWORD *)(v6 + 456) )
    {
      if ( v15 )
      {
        v20 = *(_QWORD *)(v6 + 464);
        v21 = v20 + v15;
        if ( v21 > MmUserProbeAddress || v21 < v20 )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      TranslateAndCopyDWMMoveRegionToDDAMoveRegions(
        *(_DWORD *)(v6 + 456),
        *(const struct _D3DKMT_MOVE_RECT **)(v6 + 464),
        v16);
      *(_QWORD *)(v6 + 464) = v22;
    }
    else
    {
      *(_QWORD *)(v6 + 464) = 0LL;
    }
    goto LABEL_35;
  }
  v29 = WdLogNewEntry5_WdLowResource(this);
  *(_QWORD *)(v29 + 24) = 9112LL;
  WdLogEvent5_WdLowResource(v29);
  return 3221225495LL;
}
