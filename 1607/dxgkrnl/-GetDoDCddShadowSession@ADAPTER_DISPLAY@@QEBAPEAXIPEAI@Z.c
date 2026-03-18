/*
 * XREFs of ?GetDoDCddShadowSession@ADAPTER_DISPLAY@@QEBAPEAXIPEAI@Z @ 0x1C0147D50
 * Callers:
 *     ?DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z @ 0x1C00D9440 (-DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void *__fastcall ADAPTER_DISPLAY::GetDoDCddShadowSession(DXGADAPTER **this, unsigned int a2, unsigned int *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  void *v11; // rcx
  DXGADAPTER *v12; // rcx

  v4 = a2;
  if ( a2 >= *((_DWORD *)this + 20) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 780LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v8 + 24) = 781LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( *((_QWORD *)this[2] + 267) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v9 + 24) = 782LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = 1016 * v4;
  v11 = *(void **)((char *)this[14] + v10 + 616);
  if ( v11 )
    ObfReferenceObject(v11);
  v12 = this[14];
  *a3 = *(_DWORD *)((char *)v12 + v10 + 612);
  return *(void **)((char *)v12 + v10 + 616);
}
