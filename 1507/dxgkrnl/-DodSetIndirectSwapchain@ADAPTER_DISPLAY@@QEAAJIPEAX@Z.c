/*
 * XREFs of ?DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z @ 0x1C0123F3C
 * Callers:
 *     DxgkSetDodIndirectSwapchain @ 0x1C012BE70 (DxgkSetDodIndirectSwapchain.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z @ 0x1C0021A88 (-SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DodSetIndirectSwapchain(ADAPTER_DISPLAY *this, __int64 a2, void *a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax

  v5 = (unsigned int)a2;
  if ( !*((_QWORD *)this + 31) )
    return 3221225485LL;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 20) )
  {
    v8 = WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = v5;
LABEL_5:
    WdLogEvent5_WdWarning(v8);
    return 3221225485LL;
  }
  v9 = *((_QWORD *)this + 2);
  if ( (*(_DWORD *)(v9 + 284) & 0x80u) == 0 )
  {
    v8 = WdLogNewEntry5_WdWarning(v9, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = *((_QWORD *)this + 2);
    goto LABEL_5;
  }
  if ( *(_QWORD *)(v9 + 1296) )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v9 + 1296))(*(_QWORD *)(v9 + 1272), (unsigned int)a2);
    v12 = v10;
    if ( v10 >= 0 )
    {
      return BLTQUEUE::SetIndirectSwapChainHandles(
               (BLTQUEUE *)(*(_QWORD *)(*((_QWORD *)this + 31) + 8LL) + 2384 * v5),
               a3);
    }
    else
    {
      v13 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v13 + 24) = v12;
      *(_QWORD *)(v13 + 32) = *((_QWORD *)this + 2);
      WdLogEvent5_WdError(v13);
      return (unsigned int)v12;
    }
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v14 + 24) = *((_QWORD *)this + 2);
    WdLogEvent5_WdError(v14);
    return 3221225659LL;
  }
}
