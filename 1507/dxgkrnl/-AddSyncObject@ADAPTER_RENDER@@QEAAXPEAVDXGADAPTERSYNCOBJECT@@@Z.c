/*
 * XREFs of ?AddSyncObject@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00C2234
 * Callers:
 *     ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@@Z @ 0x1C00DC4CC (-InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0004A54 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_RENDER::AddSyncObject(ADAPTER_RENDER *this, struct DXGADAPTERSYNCOBJECT *a2)
{
  struct _KTHREAD **v2; // rsi
  __int64 *v5; // rbx
  __int64 v6; // rax

  v2 = (struct _KTHREAD **)((char *)this + 136);
  DXGFASTMUTEX::Acquire((ADAPTER_RENDER *)((char *)this + 136));
  v5 = (__int64 *)((char *)this + 176);
  v6 = *v5;
  *(_QWORD *)a2 = *v5;
  *((_QWORD *)a2 + 1) = v5;
  if ( *(__int64 **)(v6 + 8) != v5 )
    __fastfail(3u);
  *(_QWORD *)(v6 + 8) = a2;
  *v5 = (__int64)a2;
  DXGFASTMUTEX::Release(v2);
}
