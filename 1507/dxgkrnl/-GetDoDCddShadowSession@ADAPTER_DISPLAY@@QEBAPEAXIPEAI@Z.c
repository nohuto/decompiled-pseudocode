/*
 * XREFs of ?GetDoDCddShadowSession@ADAPTER_DISPLAY@@QEBAPEAXIPEAI@Z @ 0x1C0126568
 * Callers:
 *     ?DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z @ 0x1C00B00C0 (-DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void *__fastcall ADAPTER_DISPLAY::GetDoDCddShadowSession(DXGADAPTER **this, __int64 a2, unsigned int *a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdi
  void *v15; // rcx
  DXGADAPTER *v16; // rcx

  v5 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 20) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 10676LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v12 + 24) = 10677LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( *((_QWORD *)this[2] + 248) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v13 + 24) = 10678LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = 1008 * v5;
  v15 = *(void **)((char *)this[14] + v14 + 616);
  if ( v15 )
    ObfReferenceObject(v15);
  v16 = this[14];
  *a3 = *(_DWORD *)((char *)v16 + v14 + 612);
  return *(void **)((char *)v16 + v14 + 616);
}
