/*
 * XREFs of ?FlipOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_FLIPOVERLAY@@@Z @ 0x1C0147EF8
 * Callers:
 *     DxgkFlipOverlay @ 0x1C01491D0 (DxgkFlipOverlay.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000244C (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0010D7C (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0076AB0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiFlipOverlay@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_FLIPOVERLAY@@@Z @ 0x1C0126FAC (-DdiFlipOverlay@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_FLIPOVERLAY@@@Z.c)
 */

__int64 __fastcall DXGOVERLAY::FlipOverlay(DXGOVERLAY *this, struct _D3DKMT_FLIPOVERLAY *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 (__fastcall **v6)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *, __int64); // rcx
  __int64 v7; // rax
  ULONG_PTR Count; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  UINT PrivateDriverDataSize; // eax
  __int64 v14; // rdx
  PVOID v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  __int64 hSource; // rcx
  __int64 v20; // rbx
  size_t v21; // r8
  void *pPrivateDriverData; // rdx
  ULONG64 v23; // r9
  int v24; // edi
  _DXGKARG_FLIPOVERLAY v25; // [rsp+30h] [rbp-38h] BYREF
  struct _EX_RUNDOWN_REF *v26; // [rsp+80h] [rbp+18h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 383LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( !DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL))
    || v6[69] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v6[77] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v6[76] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v6[75] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 384LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *((_DWORD *)this + 8) == -1 )
    return 0LL;
  memset(&v25, 0, sizeof(v25));
  DXGPROCESS::GetAllocationSafe(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL), (DXGALLOCATIONREFERENCE *)&v26, a2->hSource);
  if ( !v26 || (Count = v26[6].Count, v10 = *(unsigned int *)(Count + 4), (v10 & 8) == 0) || (v26[9].Count & 0x800) == 0 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, Count, v11, v12);
    v18[3] = *((_QWORD *)this + 2);
    v20 = -1073741811LL;
    hSource = a2->hSource;
    goto LABEL_27;
  }
  v25.hSource = *(HANDLE *)(Count + 16);
  _guard_dispatch_icall_fptr();
  PrivateDriverDataSize = a2->PrivateDriverDataSize;
  if ( PrivateDriverDataSize && a2->pPrivateDriverData )
  {
    v25.PrivateDriverDataSize = a2->PrivateDriverDataSize;
    v15 = operator new[](PrivateDriverDataSize, 0x4B677844u, PagedPool);
    v25.pPrivateDriverData = v15;
    if ( !v15 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v14, v16, v17);
      v18[3] = this;
      hSource = v25.PrivateDriverDataSize;
      v20 = -1073741801LL;
LABEL_27:
      v18[4] = hSource;
      v18[5] = v20;
      WdLogEvent5_WdWarning(v18);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v26);
      return (unsigned int)v20;
    }
    v21 = v25.PrivateDriverDataSize;
    pPrivateDriverData = a2->pPrivateDriverData;
    v23 = (ULONG64)pPrivateDriverData + v25.PrivateDriverDataSize;
    if ( v23 < (unsigned __int64)pPrivateDriverData || v23 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v15, pPrivateDriverData, v21);
  }
  else
  {
    a2->PrivateDriverDataSize = 0;
    a2->pPrivateDriverData = 0LL;
  }
  v24 = ADAPTER_RENDER::DdiFlipOverlay(
          *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 1992LL),
          *((void **)this + 5),
          &v25);
  if ( v24 >= 0 )
    *((_QWORD *)this + 6) = v26;
  operator delete(v25.pPrivateDriverData);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v26);
  return (unsigned int)v24;
}
