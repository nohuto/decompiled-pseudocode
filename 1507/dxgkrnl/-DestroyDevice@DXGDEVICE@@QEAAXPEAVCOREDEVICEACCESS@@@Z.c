/*
 * XREFs of ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C007A3A0
 * Callers:
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0082554 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C0136F50 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C0005358 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0005380 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     Template_ppqptt @ 0x1C001D4CC (Template_ppqptt.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C007305C (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@E@Z @ 0x1C0082850 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00858C4 (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C0092814 (-DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     ?IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z @ 0x1C0095350 (-IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C00A8AE0 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0144558 (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGDEVICE::DestroyDevice(ADAPTER_RENDER **this, struct COREDEVICEACCESS *a2)
{
  ADAPTER_RENDER *v4; // rcx
  __int64 v5; // r8
  __int64 i; // rbx
  ADAPTER_RENDER *v7; // rcx
  DXGPAGINGQUEUE *j; // rbx
  DXGDEVICESYNCOBJECT *k; // rbx
  DXGCONTEXT *m; // rbx
  ADAPTER_RENDER *v11; // rdx
  ADAPTER_RENDER *v12; // rsi
  __int64 v13; // rbx
  struct _KTHREAD **Current; // rax
  ADAPTER_RENDER *v15; // rcx
  char v16; // [rsp+60h] [rbp+8h] BYREF

  DXGDEVICE::FlushDeferredDestruction((DXGDEVICE *)this, a2, 0);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 4678); i = (unsigned int)(i + 1) )
  {
    v7 = this[i + 2282];
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    this[i + 2282] = 0LL;
    v4 = this[i + 2314];
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    this[i + 2314] = 0LL;
  }
  for ( j = this[40]; j != (DXGPAGINGQUEUE *)(this + 40) && j; j = *(DXGPAGINGQUEUE **)j )
    DXGPAGINGQUEUE::DestroyCoreState(j, a2);
  for ( k = this[42]; k != (DXGDEVICESYNCOBJECT *)(this + 42) && k; k = *(DXGDEVICESYNCOBJECT **)k )
    DXGDEVICESYNCOBJECT::DestroyCoreState(k);
  for ( m = this[36]; m != (DXGCONTEXT *)(this + 36) && m; m = *(DXGCONTEXT **)m )
    DXGCONTEXT::DestroyContext(m, (PERESOURCE **)a2);
  v11 = this[45];
  if ( v11 )
  {
    ADAPTER_RENDER::DdiDestroyDevice(this[2], v11);
    this[45] = 0LL;
  }
  v12 = this[67];
  if ( v12 )
  {
    v13 = *((_QWORD *)this[2] + 50);
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)v4);
    DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v16, Current);
    (*(void (__fastcall **)(ADAPTER_RENDER *))(*(_QWORD *)(v13 + 8) + 384LL))(v12);
    DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v16);
    this[67] = 0LL;
  }
  if ( this[68] )
  {
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)this[2] + 47) + 8LL) + 120LL))();
    this[68] = 0LL;
  }
  v15 = this[2338];
  if ( v15 )
    ADAPTER_DISPLAY::IterateOutputDuplMgrsForRender(*((ADAPTER_DISPLAY **)v15 + 247), SwapChainObOpenProcedure, this);
  if ( *((_BYTE *)this + 18721) )
  {
    DXGPROCESS::CloseAdapter(this[5], this[2]);
    *((_BYTE *)this + 18721) = 0;
  }
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      Template_ppqptt(
        *((unsigned __int8 *)this + 18717),
        &EventDestroyDevice,
        v5,
        *((_QWORD *)this[5] + 8),
        *((_QWORD *)this[2] + 2),
        *((_DWORD *)this + 70),
        this,
        *((unsigned __int8 *)this + 18717),
        *((unsigned __int8 *)this + 18718));
  }
}
