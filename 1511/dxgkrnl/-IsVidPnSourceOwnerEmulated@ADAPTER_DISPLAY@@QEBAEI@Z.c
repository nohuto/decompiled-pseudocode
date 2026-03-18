/*
 * XREFs of ?IsVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C001AD34
 * Callers:
 *     DxgkAdjustFullscreenGamma @ 0x1C0130060 (DxgkAdjustFullscreenGamma.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall ADAPTER_DISPLAY::IsVidPnSourceOwnerEmulated(DXGADAPTER **this, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  DXGADAPTER *v7; // rdx
  unsigned __int8 result; // al

  v3 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 4170LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( (unsigned int)v3 >= *((_DWORD *)this + 26) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v6 + 24) = 4171LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = this[17];
  result = 1;
  if ( *((_DWORD *)v7 + 254 * v3 + 170) != 1 || !*((_QWORD *)v7 + 127 * v3 + 86) )
    return 0;
  return result;
}
