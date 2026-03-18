/*
 * XREFs of ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0123630
 * Callers:
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C00DB5E4 (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C0123780 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B60 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002E50 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000A330 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000A354 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ??_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z @ 0x1C000CAB8 (--_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00858C4 (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C008AE34 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 */

void __fastcall ADAPTER_RENDER::Destroy(ADAPTER_RENDER *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  struct DXGSYNCOBJECT *v6; // rdi
  PERESOURCE *Global; // rax
  __int64 v8; // r9
  __int64 v9; // rdi
  DXGPRESENTHISTORYTOKENQUEUE *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct DXGGLOBAL *v15; // rax
  _BYTE v16[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v17; // [rsp+28h] [rbp-20h]
  int i; // [rsp+30h] [rbp-18h]
  char v19; // [rsp+50h] [rbp+8h] BYREF
  char v20; // [rsp+51h] [rbp+9h]

  v20 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v19);
  v6 = (struct DXGSYNCOBJECT *)*((_QWORD *)this + 66);
  if ( v6 )
  {
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v3, v2, v4, v5);
    DXGGLOBAL::DestroySyncObject(Global, v6, 0LL, v8);
    *((_QWORD *)this + 66) = 0LL;
  }
  if ( *((_QWORD *)this + 51) )
  {
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)this + 50) + 8LL) + 32LL))();
    *((_QWORD *)this + 51) = 0LL;
  }
  if ( *((_QWORD *)this + 48) )
  {
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)this + 47) + 8LL) + 40LL))();
    *((_QWORD *)this + 48) = 0LL;
  }
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16, (struct _KTHREAD **)this + 74);
  DXGPUSHLOCK::AcquireExclusive(v17);
  v9 = 0LL;
  for ( i = 2; (unsigned int)v9 < *((_DWORD *)this + 154); v9 = (unsigned int)(v9 + 1) )
  {
    v10 = *(DXGPRESENTHISTORYTOKENQUEUE **)(*((_QWORD *)this + 78) + 8 * v9);
    if ( v10 )
      DXGPRESENTHISTORYTOKENQUEUE::`scalar deleting destructor'(v10);
  }
  operator delete(*((void **)this + 78));
  *((_DWORD *)this + 154) = 0;
  *((_QWORD *)this + 78) = 0LL;
  if ( *((_BYTE *)this + 633) )
  {
    v15 = DXGGLOBAL::GetGlobal(v12, v11, v13, v14);
    DXGPROCESS::CloseAdapter(*((DXGPROCESS **)v15 + 99), this);
    *((_BYTE *)this + 633) = 0;
  }
  DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v19);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
  if ( v20 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v19);
}
