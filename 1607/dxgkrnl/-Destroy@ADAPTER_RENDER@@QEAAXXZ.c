/*
 * XREFs of ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0148C38
 * Callers:
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C00E7A7C (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C01451AC (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009830 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00098D0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z @ 0x1C000C2D4 (--_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000CC84 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000CCA8 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00A2E70 (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroyVirtualGpuState@ADAPTER_RENDER@@QEAAXXZ @ 0x1C015A57C (-DestroyVirtualGpuState@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1C0175F1C (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
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
  ADAPTER_RENDER::DestroyVirtualGpuState(this);
  v3 = (struct DXGSYNCOBJECT *)*((_QWORD *)this + 66);
  if ( v3 )
  {
    Global = DXGGLOBAL::GetGlobal(v2);
    DXGGLOBAL::DestroySyncObject(Global, v3, 0, 0);
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
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9, (struct _KTHREAD **)this + 74);
  DXGPUSHLOCK::AcquireExclusive(v10);
  v5 = 0LL;
  for ( i = 2; (unsigned int)v5 < *((_DWORD *)this + 154); v5 = (unsigned int)(v5 + 1) )
  {
    v6 = *(DXGPRESENTHISTORYTOKENQUEUE **)(*((_QWORD *)this + 78) + 8 * v5);
    if ( v6 )
      DXGPRESENTHISTORYTOKENQUEUE::`scalar deleting destructor'(v6);
  }
  operator delete(*((void **)this + 78));
  *((_DWORD *)this + 154) = 0;
  *((_QWORD *)this + 78) = 0LL;
  if ( *((_BYTE *)this + 633) )
  {
    v8 = DXGGLOBAL::GetGlobal(v7);
    DXGPROCESS::CloseAdapter(*((DXGPROCESS **)v8 + 97), this);
    *((_BYTE *)this + 633) = 0;
  }
  DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v12);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
  if ( v13 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v12);
}
