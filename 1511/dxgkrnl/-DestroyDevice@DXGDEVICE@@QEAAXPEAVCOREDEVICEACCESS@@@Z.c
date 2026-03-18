/*
 * XREFs of ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C006D8D0
 * Callers:
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C006B970 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C013B664 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C00047F4 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000481C (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     Template_ppqptt @ 0x1C001D4FC (Template_ppqptt.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C006775C (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C0069208 (-DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@E@Z @ 0x1C006BC58 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0084B64 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C0089C50 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXXZ @ 0x1C008BB20 (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXXZ.c)
 *     ?IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z @ 0x1C00990F0 (-IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z.c)
 */

void __fastcall DXGDEVICE::DestroyDevice(ADAPTER_RENDER **this, PERESOURCE **a2)
{
  __int64 v4; // r8
  __int64 i; // rbx
  ADAPTER_RENDER *v6; // rcx
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
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 710); i = (unsigned int)(i + 1) )
  {
    v6 = this[i + 298];
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    this[i + 298] = 0LL;
    v7 = this[i + 330];
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    this[i + 330] = 0LL;
  }
  for ( j = this[40]; j != (DXGPAGINGQUEUE *)(this + 40) && j; j = *(DXGPAGINGQUEUE **)j )
    DXGPAGINGQUEUE::DestroyCoreState(j);
  for ( k = this[42]; k != (DXGDEVICESYNCOBJECT *)(this + 42) && k; k = *(DXGDEVICESYNCOBJECT **)k )
    DXGDEVICESYNCOBJECT::DestroyCoreState(k);
  for ( m = this[36]; m != (DXGCONTEXT *)(this + 36) && m; m = *(DXGCONTEXT **)m )
    DXGCONTEXT::DestroyContext(m, (struct COREDEVICEACCESS *)a2);
  v11 = this[45];
  if ( v11 )
  {
    ADAPTER_RENDER::DdiDestroyDevice(this[2], v11, v4);
    this[45] = 0LL;
  }
  v12 = this[67];
  if ( v12 )
  {
    v13 = *((_QWORD *)this[2] + 53);
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
    DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v16, Current);
    (*(void (__fastcall **)(ADAPTER_RENDER *))(*(_QWORD *)(v13 + 8) + 384LL))(v12);
    DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v16);
    this[67] = 0LL;
  }
  if ( this[68] )
  {
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)this[2] + 50) + 8LL) + 120LL))();
    this[68] = 0LL;
  }
  v15 = this[354];
  if ( v15 )
    ADAPTER_DISPLAY::IterateOutputDuplMgrsForRender(*((ADAPTER_DISPLAY **)v15 + 248), SwapChainObOpenProcedure, this);
  if ( *((_BYTE *)this + 2849) )
  {
    DXGPROCESS::CloseAdapter(this[5], this[2]);
    *((_BYTE *)this + 2849) = 0;
  }
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      Template_ppqptt(
        *((unsigned __int8 *)this + 2845),
        &EventDestroyDevice,
        v4,
        *((_QWORD *)this[5] + 8),
        *((_QWORD *)this[2] + 2),
        *((_DWORD *)this + 70),
        this,
        *((unsigned __int8 *)this + 2845),
        *((unsigned __int8 *)this + 2846));
  }
}
