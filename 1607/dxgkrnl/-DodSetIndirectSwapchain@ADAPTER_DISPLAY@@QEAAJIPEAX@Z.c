/*
 * XREFs of ?DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z @ 0x1C01479BC
 * Callers:
 *     DxgkSetDodIndirectSwapchain @ 0x1C0150830 (DxgkSetDodIndirectSwapchain.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z @ 0x1C0028498 (-SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z.c)
 *     ?UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z @ 0x1C017E6EC (-UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z.c)
 *     ?SwapChainOpenInternal@@YAPEAUDXGSWAPCHAIN_CONTAINER@@PEAX@Z @ 0x1C018F33C (-SwapChainOpenInternal@@YAPEAUDXGSWAPCHAIN_CONTAINER@@PEAX@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DodSetIndirectSwapchain(ADAPTER_DISPLAY *this, __int64 a2, void *a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 v7; // rax
  struct DXGSWAPCHAIN_CONTAINER *v8; // rax
  __int64 v9; // rcx
  struct _LUID v10; // rbx
  OUTPUTDUPL_MGR_INDIRECT *v11; // rsi
  __int64 v12; // rcx
  int updated; // r15d
  __int64 v14; // rax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax

  v5 = (unsigned int)a2;
  if ( !*((_QWORD *)this + 32) )
    return 3221225485LL;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 20) )
  {
    v7 = WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = v5;
LABEL_4:
    WdLogEvent5_WdWarning(v7);
    return 3221225485LL;
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 300LL) & 0x100) == 0 )
  {
    v7 = WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = *((_QWORD *)this + 2);
    goto LABEL_4;
  }
  v8 = SwapChainOpenInternal(a3);
  if ( !v8 || !*(_QWORD *)v8 )
  {
    v22 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v22 + 24) = a3;
    WdLogEvent5_WdError(v22);
    return 3221225485LL;
  }
  v10 = *(struct _LUID *)(*(_QWORD *)v8 + 200LL);
  ObfDereferenceObject(v8);
  v11 = (OUTPUTDUPL_MGR_INDIRECT *)*((_QWORD *)this + 13);
  if ( v11 )
    v11 = (OUTPUTDUPL_MGR_INDIRECT *)((char *)v11 - 24);
  if ( v10 == *((_QWORD *)v11 + 14)
    || (updated = OUTPUTDUPL_MGR_INDIRECT::UpdateRenderAdapterLuid(v11, v10), updated >= 0) )
  {
    v16 = *((_QWORD *)this + 2);
    if ( *(_QWORD *)(v16 + 1392) )
    {
      v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void *, struct _LUID))(v16 + 1392))(
              *(_QWORD *)(v16 + 1368),
              (unsigned int)v5,
              a3,
              v10);
      v19 = v17;
      if ( v17 >= 0 )
      {
        return BLTQUEUE::SetIndirectSwapChainHandles(
                 (BLTQUEUE *)(*(_QWORD *)(*((_QWORD *)this + 32) + 8LL) + 2632 * v5),
                 a3);
      }
      else
      {
        v20 = WdLogNewEntry5_WdError(v18);
        *(_QWORD *)(v20 + 24) = v19;
        *(_QWORD *)(v20 + 32) = *((_QWORD *)this + 2);
        WdLogEvent5_WdError(v20);
        return (unsigned int)v19;
      }
    }
    else
    {
      v21 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v21 + 24) = *((_QWORD *)this + 2);
      WdLogEvent5_WdError(v21);
      return 3221225659LL;
    }
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v14 + 24) = v11;
    WdLogEvent5_WdError(v14);
    return (unsigned int)updated;
  }
}
