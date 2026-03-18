/*
 * XREFs of ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x18008B754
 * Callers:
 *     ?ProcessUnusable@CD3DDeviceLevel1@@QEAAX_N@Z @ 0x18008B548 (-ProcessUnusable@CD3DDeviceLevel1@@QEAAX_N@Z.c)
 *     ??1CD2DContext@@UEAA@XZ @ 0x18008B704 (--1CD2DContext@@UEAA@XZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??_GCD2DTarget@@QEAAPEAXI@Z @ 0x18005D96C (--_GCD2DTarget@@QEAAPEAXI@Z.c)
 *     ?ReleaseEffectTable@CD2DContext@@AEAAXXZ @ 0x18008B69C (-ReleaseEffectTable@CD2DContext@@AEAAXXZ.c)
 *     ?MarkAllResourcesInvalid@CD2DResourceManager@@QEAAXXZ @ 0x18008B9A0 (-MarkAllResourcesInvalid@CD2DResourceManager@@QEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD2DContext::DestroyDeviceResources(CD2DContext *this)
{
  CD2DTarget *v2; // rcx
  CD2DResourceManager *v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  CMILRefCountBase *v10; // rcx
  __int64 v11; // rdi
  unsigned int i; // edi
  unsigned int j; // ebx
  unsigned int k; // ebx
  __int64 result; // rax
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 v18; // rcx

  v2 = (CD2DTarget *)*((_QWORD *)this + 34);
  if ( v2 )
  {
    CD2DTarget::`scalar deleting destructor'(v2);
    *((_QWORD *)this + 34) = 0LL;
  }
  v3 = (CD2DResourceManager *)*((_QWORD *)this + 1);
  if ( v3 )
  {
    CD2DResourceManager::MarkAllResourcesInvalid(v3);
    if ( *((_QWORD *)this + 1) )
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *((_QWORD *)this + 1));
      *((_QWORD *)this + 1) = 0LL;
    }
  }
  CD2DContext::ReleaseEffectTable(this);
  v4 = *((_QWORD *)this + 19);
  if ( v4 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*((_QWORD *)this + 19));
    *((_QWORD *)this + 19) = 0LL;
  }
  v5 = *((_QWORD *)this + 20);
  if ( v5 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 16LL))(*((_QWORD *)this + 20));
    *((_QWORD *)this + 20) = 0LL;
  }
  v6 = *((_QWORD *)this + 6);
  if ( v6 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 16LL))(*((_QWORD *)this + 6));
    *((_QWORD *)this + 6) = 0LL;
  }
  v7 = *((_QWORD *)this + 5);
  if ( v7 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 16LL))(*((_QWORD *)this + 5));
    *((_QWORD *)this + 5) = 0LL;
  }
  v8 = *((_QWORD *)this + 3);
  if ( v8 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 16LL))(*((_QWORD *)this + 3));
    *((_QWORD *)this + 3) = 0LL;
  }
  v9 = *((_QWORD *)this + 4);
  if ( v9 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 16LL))(*((_QWORD *)this + 4));
    *((_QWORD *)this + 4) = 0LL;
  }
  v10 = (CMILRefCountBase *)*((_QWORD *)this + 36);
  if ( v10 )
  {
    CMILRefCountBase::Release(v10);
    *((_QWORD *)this + 36) = 0LL;
  }
  v11 = *((_QWORD *)this + 35);
  if ( v11 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 8LL))(*((_QWORD *)this + 35));
    *((_QWORD *)this + 35) = 0LL;
  }
  for ( i = 0; i < *((_DWORD *)this + 36); ++i )
  {
    v17 = *(_QWORD *)(*((_QWORD *)this + 15) + 8LL * i);
    if ( v17 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      *(_QWORD *)(*((_QWORD *)this + 15) + 8LL * i) = 0LL;
    }
  }
  for ( j = 0; j < *((_DWORD *)this + 86); ++j )
  {
    v16 = *(_QWORD *)(*((_QWORD *)this + 40) + 8LL * j);
    if ( v16 )
    {
      CMILRefCountBase::Release((CMILRefCountBase *)(v16 + 8));
      *(_QWORD *)(*((_QWORD *)this + 40) + 8LL * j) = 0LL;
    }
  }
  *((_DWORD *)this + 86) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 40, 8u);
  for ( k = 0; k < *((_DWORD *)this + 96); ++k )
  {
    v18 = *(_QWORD *)(*((_QWORD *)this + 45) + 8LL * k);
    if ( v18 )
    {
      CMILRefCountBase::Release((CMILRefCountBase *)(v18 + 8));
      *(_QWORD *)(*((_QWORD *)this + 45) + 8LL * k) = 0LL;
    }
  }
  *((_DWORD *)this + 96) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 45, 8u);
  result = 0LL;
  *((_DWORD *)this + 36) = 0;
  return result;
}
