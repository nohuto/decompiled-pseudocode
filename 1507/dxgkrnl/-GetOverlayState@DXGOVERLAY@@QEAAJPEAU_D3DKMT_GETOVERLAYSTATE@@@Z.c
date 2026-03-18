/*
 * XREFs of ?GetOverlayState@DXGOVERLAY@@QEAAJPEAU_D3DKMT_GETOVERLAYSTATE@@@Z @ 0x1C01427A0
 * Callers:
 *     DxgkGetOverlayState @ 0x1C0143B90 (DxgkGetOverlayState.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000B05C (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DXGOVERLAY::GetOverlayState(DXGOVERLAY *this, struct _D3DKMT_GETOVERLAYSTATE *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 (__fastcall **v10)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *, __int64); // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v8 + 24) = 522LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL))
    || v10[69] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v10[77] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v10[76] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v10[75] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v13 + 24) = 523LL;
    WdLogEvent5_WdAssertion(v13);
  }
  a2->OverlayEnabled = *((_DWORD *)this + 8) != -1;
  return 0LL;
}
