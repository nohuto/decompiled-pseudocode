/*
 * XREFs of ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x18007E1B8
 * Callers:
 *     ??1CD2DContext@@UEAA@XZ @ 0x18007E3D4 (--1CD2DContext@@UEAA@XZ.c)
 *     ?ProcessUnusable@CD3DDeviceLevel1@@QEAAXXZ @ 0x18010F230 (-ProcessUnusable@CD3DDeviceLevel1@@QEAAXXZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?ReleaseEffectTable@CD2DContext@@AEAAXXZ @ 0x18007C8B0 (-ReleaseEffectTable@CD2DContext@@AEAAXXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MarkAllResourcesInvalid@CD2DResourceManager@@QEAAXXZ @ 0x18009DBEC (-MarkAllResourcesInvalid@CD2DResourceManager@@QEAAXXZ.c)
 *     ??_GCD2DTarget@@QEAAPEAXI@Z @ 0x1800AD78C (--_GCD2DTarget@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::DestroyDeviceResources(CD2DContext *this, unsigned int a2)
{
  CD2DTarget *v3; // rcx
  CD2DResourceManager *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  CMILRefCountBase *v13; // rcx
  CMILRefCountBase *v14; // rcx
  unsigned int i; // edi
  unsigned int j; // edi
  unsigned int k; // edi
  __int64 result; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx

  v3 = (CD2DTarget *)*((_QWORD *)this + 36);
  if ( v3 )
  {
    CD2DTarget::`scalar deleting destructor'(v3, a2);
    *((_QWORD *)this + 36) = 0LL;
  }
  v4 = (CD2DResourceManager *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    CD2DResourceManager::MarkAllResourcesInvalid(v4);
    if ( *((_QWORD *)this + 1) )
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
      *((_QWORD *)this + 1) = 0LL;
    }
  }
  CD2DContext::ReleaseEffectTable(this);
  v5 = *((_QWORD *)this + 21);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    *((_QWORD *)this + 21) = 0LL;
  }
  v6 = *((_QWORD *)this + 22);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    *((_QWORD *)this + 22) = 0LL;
  }
  v7 = *((_QWORD *)this + 23);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    *((_QWORD *)this + 23) = 0LL;
  }
  v8 = *((_QWORD *)this + 7);
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    *((_QWORD *)this + 7) = 0LL;
  }
  v9 = *((_QWORD *)this + 6);
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    *((_QWORD *)this + 6) = 0LL;
  }
  v10 = *((_QWORD *)this + 5);
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    *((_QWORD *)this + 5) = 0LL;
  }
  v11 = *((_QWORD *)this + 3);
  if ( v11 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    *((_QWORD *)this + 3) = 0LL;
  }
  v12 = *((_QWORD *)this + 4);
  if ( v12 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    *((_QWORD *)this + 4) = 0LL;
  }
  v13 = (CMILRefCountBase *)*((_QWORD *)this + 38);
  if ( v13 )
  {
    CMILRefCountBase::Release(v13);
    *((_QWORD *)this + 38) = 0LL;
  }
  v14 = (CMILRefCountBase *)*((_QWORD *)this + 37);
  if ( v14 )
  {
    CMILRefCountBase::Release(v14);
    *((_QWORD *)this + 37) = 0LL;
  }
  for ( i = 0; i < *((_DWORD *)this + 40); ++i )
  {
    v20 = *(_QWORD *)(*((_QWORD *)this + 17) + 8LL * i);
    if ( v20 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      *(_QWORD *)(*((_QWORD *)this + 17) + 8LL * i) = 0LL;
    }
  }
  for ( j = 0; j < *((_DWORD *)this + 88); ++j )
  {
    v19 = *(_QWORD *)(*((_QWORD *)this + 41) + 8LL * j);
    if ( v19 )
    {
      CMILRefCountBase::Release((CMILRefCountBase *)(v19 + 8));
      *(_QWORD *)(*((_QWORD *)this + 41) + 8LL * j) = 0LL;
    }
  }
  *((_DWORD *)this + 88) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 328, 8LL);
  for ( k = 0; k < *((_DWORD *)this + 98); ++k )
  {
    v21 = *(_QWORD *)(*((_QWORD *)this + 46) + 8LL * k);
    if ( v21 )
    {
      CMILRefCountBase::Release((CMILRefCountBase *)(v21 + 8));
      *(_QWORD *)(*((_QWORD *)this + 46) + 8LL * k) = 0LL;
    }
  }
  *((_DWORD *)this + 98) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 368, 8LL);
  result = 0LL;
  *((_DWORD *)this + 40) = 0;
  return result;
}
