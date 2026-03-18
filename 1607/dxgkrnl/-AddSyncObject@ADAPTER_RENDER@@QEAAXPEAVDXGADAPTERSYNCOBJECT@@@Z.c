/*
 * XREFs of ?AddSyncObject@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C009329C
 * Callers:
 *     ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@@Z @ 0x1C007F578 (-InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_RENDER::AddSyncObject(ADAPTER_RENDER *this, struct DXGADAPTERSYNCOBJECT *a2)
{
  struct _KTHREAD **v2; // rsi
  char *v5; // rbx
  __int64 v6; // rax

  v2 = (struct _KTHREAD **)((char *)this + 136);
  DXGFASTMUTEX::Acquire((ADAPTER_RENDER *)((char *)this + 136));
  v5 = (char *)this + 176;
  v6 = *(_QWORD *)v5;
  if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 )
    __fastfail(3u);
  *(_QWORD *)a2 = v6;
  *((_QWORD *)a2 + 1) = v5;
  *(_QWORD *)(v6 + 8) = a2;
  *(_QWORD *)v5 = a2;
  DXGFASTMUTEX::Release(v2);
}
