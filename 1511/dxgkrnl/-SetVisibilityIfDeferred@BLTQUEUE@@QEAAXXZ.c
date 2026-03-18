/*
 * XREFs of ?SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ @ 0x1C015F108
 * Callers:
 *     ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C015E7BC (-PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 * Callees:
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C000C810 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z @ 0x1C009B578 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIPEAVDXGDEVICE@@E@Z.c)
 */

void __fastcall BLTQUEUE::SetVisibilityIfDeferred(BLTQUEUE *this)
{
  struct DXGADAPTER *Adapter; // rax
  __int64 v3; // r8
  struct DXGADAPTER *v4; // rdi
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rsi
  _QWORD *v8; // rax

  if ( _InterlockedExchange((volatile __int32 *)this + 170, 0) )
  {
    Adapter = DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this);
    LOBYTE(v3) = 1;
    v4 = Adapter;
    v5 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(
           *((ADAPTER_DISPLAY **)Adapter + 248),
           *((_DWORD *)this + 12),
           v3,
           0x4000,
           0LL,
           1u);
    v7 = v5;
    if ( v5 < 0 )
    {
      v8 = (_QWORD *)WdLogNewEntry5_WdError(v6);
      v8[3] = *((unsigned int *)this + 12);
      v8[4] = v4;
      v8[5] = v7;
      WdLogEvent5_WdError(v8);
    }
  }
}
