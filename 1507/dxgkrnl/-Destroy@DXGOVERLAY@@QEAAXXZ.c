/*
 * XREFs of ?Destroy@DXGOVERLAY@@QEAAXXZ @ 0x1C01423A0
 * Callers:
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00800E0 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C00B8950 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C0136F50 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 *     ??1DXGOVERLAY@@QEAA@XZ @ 0x1C014236C (--1DXGOVERLAY@@QEAA@XZ.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000B05C (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?DdiDestroyOverlay@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C0120E60 (-DdiDestroyOverlay@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     ?ReleaseOverlayId@ADAPTER_RENDER@@QEAAXI@Z @ 0x1C0127D60 (-ReleaseOverlayId@ADAPTER_RENDER@@QEAAXI@Z.c)
 */

void __fastcall DXGOVERLAY::Destroy(DXGOVERLAY *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 (__fastcall **v8)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *, __int64); // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  void *v12; // rdx
  __int64 v13; // rdx

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v3, v2, v4, v5);
    *(_QWORD *)(v6 + 24) = 188LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL))
    || v8[69] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v8[77] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v8[76] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v8[75] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v11 + 24) = 189LL;
    WdLogEvent5_WdAssertion(v11);
  }
  *((_QWORD *)this + 6) = 0LL;
  v12 = (void *)*((_QWORD *)this + 5);
  if ( v12 )
  {
    ADAPTER_RENDER::DdiDestroyOverlay(
      *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 1984LL),
      v12,
      v9);
    *((_QWORD *)this + 5) = 0LL;
  }
  v13 = *((unsigned int *)this + 8);
  if ( (_DWORD)v13 != -1 )
  {
    ADAPTER_RENDER::ReleaseOverlayId(
      *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 1984LL),
      v13,
      v9,
      v10);
    *((_DWORD *)this + 8) = -1;
  }
}
