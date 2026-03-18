/*
 * XREFs of ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01292F4
 * Callers:
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C00DAA98 (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C0129444 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BC8 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00035C0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z @ 0x1C0006A88 (--_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000C598 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000C5BC (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C006775C (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00969B4 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 */

void __fastcall ADAPTER_RENDER::Destroy(ADAPTER_RENDER *this)
{
  __int64 v2; // rcx
  struct DXGSYNCOBJECT *v3; // rdi
  DXGGLOBAL *Global; // rax
  __int64 v5; // rdi
  DXGPRESENTHISTORYTOKENQUEUE *v6; // rcx
  __int64 v7; // rcx
  struct DXGGLOBAL *v8; // rax
  _BYTE v9[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v10; // [rsp+28h] [rbp-20h]
  int i; // [rsp+30h] [rbp-18h]
  char v12; // [rsp+50h] [rbp+8h] BYREF
  char v13; // [rsp+51h] [rbp+9h]

  v13 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v12);
  v3 = (struct DXGSYNCOBJECT *)*((_QWORD *)this + 75);
  if ( v3 )
  {
    Global = DXGGLOBAL::GetGlobal(v2);
    DXGGLOBAL::DestroySyncObject(Global, v3, 0);
    *((_QWORD *)this + 75) = 0LL;
  }
  if ( *((_QWORD *)this + 54) )
  {
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)this + 53) + 8LL) + 32LL))();
    *((_QWORD *)this + 54) = 0LL;
  }
  if ( *((_QWORD *)this + 51) )
  {
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)this + 50) + 8LL) + 40LL))();
    *((_QWORD *)this + 51) = 0LL;
  }
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9, (struct _KTHREAD **)this + 83);
  DXGPUSHLOCK::AcquireExclusive(v10);
  v5 = 0LL;
  for ( i = 2; (unsigned int)v5 < *((_DWORD *)this + 172); v5 = (unsigned int)(v5 + 1) )
  {
    v6 = *(DXGPRESENTHISTORYTOKENQUEUE **)(*((_QWORD *)this + 87) + 8 * v5);
    if ( v6 )
      DXGPRESENTHISTORYTOKENQUEUE::`scalar deleting destructor'(v6);
  }
  operator delete(*((void **)this + 87));
  *((_DWORD *)this + 172) = 0;
  *((_QWORD *)this + 87) = 0LL;
  if ( *((_BYTE *)this + 705) )
  {
    v8 = DXGGLOBAL::GetGlobal(v7);
    DXGPROCESS::CloseAdapter(*((DXGPROCESS **)v8 + 117), this);
    *((_BYTE *)this + 705) = 0;
  }
  DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v12);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
  if ( v13 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v12);
}
