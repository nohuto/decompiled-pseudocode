/*
 * XREFs of ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0095E84
 * Callers:
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C009D260 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C015EEB0 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C0007554 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000757C (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     Template_ppqpttq @ 0x1C00224CC (Template_ppqpttq.c)
 *     ?IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z @ 0x1C00867B8 (-IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C008FCC4 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C0091C10 (-DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1C009D5E0 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00A2E70 (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00A5490 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00B0184 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C016E9B0 (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGDEVICE::DestroyDevice(ADAPTER_RENDER **this, struct COREDEVICEACCESS *a2)
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

  DXGDEVICE::FlushDeferredDestruction((DXGDEVICE *)this, a2, 0, 0);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 716); i = (unsigned int)(i + 1) )
  {
    v6 = this[i + 301];
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    this[i + 301] = 0LL;
    v7 = this[i + 333];
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    this[i + 333] = 0LL;
  }
  for ( j = this[43]; j != (DXGPAGINGQUEUE *)(this + 43) && j; j = *(DXGPAGINGQUEUE **)j )
    DXGPAGINGQUEUE::DestroyCoreState(j, a2);
  for ( k = this[45]; k != (DXGDEVICESYNCOBJECT *)(this + 45) && k; k = *(DXGDEVICESYNCOBJECT **)k )
    DXGDEVICESYNCOBJECT::DestroyCoreState(k);
  for ( m = this[39]; m != (DXGCONTEXT *)(this + 39) && m; m = *(DXGCONTEXT **)m )
    DXGCONTEXT::DestroyContext(m, a2);
  v11 = this[48];
  if ( v11 )
  {
    ADAPTER_RENDER::DdiDestroyDevice(this[2], v11, v4);
    this[48] = 0LL;
  }
  v12 = this[70];
  if ( v12 )
  {
    v13 = *((_QWORD *)this[2] + 50);
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
    DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v16, Current);
    (*(void (__fastcall **)(ADAPTER_RENDER *))(*(_QWORD *)(v13 + 8) + 400LL))(v12);
    DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v16);
    this[70] = 0LL;
  }
  if ( this[71] )
  {
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)this[2] + 47) + 8LL) + 120LL))();
    this[71] = 0LL;
  }
  v15 = this[357];
  if ( v15 )
    ADAPTER_DISPLAY::IterateOutputDuplMgrsForRender(
      *((ADAPTER_DISPLAY **)v15 + 266),
      (__int64 (__fastcall *)(__int64, void *))&SwapChainObOpenProcedure,
      this);
  if ( *((_BYTE *)this + 2873) )
  {
    DXGPROCESS::CloseAdapter(this[5], this[2]);
    *((_BYTE *)this + 2873) = 0;
  }
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      Template_ppqpttq(
        *((unsigned __int8 *)this + 2870),
        &EventDestroyDevice,
        (__int64)this[2],
        *((_QWORD *)this[5] + 7),
        *((_QWORD *)this[2] + 2),
        *((_DWORD *)this + 76),
        this,
        *((unsigned __int8 *)this + 2869),
        *((unsigned __int8 *)this + 2870),
        *((_DWORD *)this + 77));
  }
}
