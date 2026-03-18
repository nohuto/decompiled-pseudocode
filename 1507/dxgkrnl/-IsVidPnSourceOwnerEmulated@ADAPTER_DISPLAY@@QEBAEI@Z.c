/*
 * XREFs of ?IsVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0019550
 * Callers:
 *     DxgkAdjustFullscreenGamma @ 0x1C01299D0 (DxgkAdjustFullscreenGamma.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall ADAPTER_DISPLAY::IsVidPnSourceOwnerEmulated(DXGADAPTER **this, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rax
  DXGADAPTER *v6; // rdx
  unsigned __int8 result; // al

  v3 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v4 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v4 + 24) = 4031LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( (unsigned int)v3 >= *((_DWORD *)this + 20) )
  {
    v5 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v5 + 24) = 4032LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = this[14];
  result = 1;
  if ( *((_DWORD *)v6 + 252 * v3 + 170) != 1 || !*((_QWORD *)v6 + 126 * v3 + 86) )
    return 0;
  return result;
}
