/*
 * XREFs of ?Destroy@DXGOVERLAY@@QEAAXXZ @ 0x1C0147E00
 * Callers:
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C006A6A8 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00742C4 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C013B664 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 *     ??1DXGOVERLAY@@QEAA@XZ @ 0x1C0147DCC (--1DXGOVERLAY@@QEAA@XZ.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000244C (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DdiDestroyOverlay@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C0126DB8 (-DdiDestroyOverlay@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     ?ReleaseOverlayId@ADAPTER_RENDER@@QEAAXI@Z @ 0x1C012DF2C (-ReleaseOverlayId@ADAPTER_RENDER@@QEAAXI@Z.c)
 */

void __fastcall DXGOVERLAY::Destroy(DXGOVERLAY *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 (__fastcall **v4)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *, __int64); // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  void *v7; // rdx
  unsigned int v8; // edx

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v3 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v3 + 24) = 179LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( !DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL))
    || v4[69] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v4[77] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v4[76] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v4[75] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    v6 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v6 + 24) = 180LL;
    WdLogEvent5_WdAssertion(v6);
  }
  *((_QWORD *)this + 6) = 0LL;
  v7 = (void *)*((_QWORD *)this + 5);
  if ( v7 )
  {
    ADAPTER_RENDER::DdiDestroyOverlay(
      *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 1992LL),
      v7,
      v5);
    *((_QWORD *)this + 5) = 0LL;
  }
  v8 = *((_DWORD *)this + 8);
  if ( v8 != -1 )
  {
    ADAPTER_RENDER::ReleaseOverlayId(
      *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 1992LL),
      v8);
    *((_DWORD *)this + 8) = -1;
  }
}
