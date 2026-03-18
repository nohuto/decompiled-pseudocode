/*
 * XREFs of ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x180022020
 * Callers:
 *     ??1CD2DContext@@UEAA@XZ @ 0x180021FD0 (--1CD2DContext@@UEAA@XZ.c)
 *     ?ProcessUnusable@CD3DDeviceLevel1@@QEAAX_N@Z @ 0x18002292C (-ProcessUnusable@CD3DDeviceLevel1@@QEAAX_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ReleaseEffectTable@CD2DContext@@AEAAXXZ @ 0x180020540 (-ReleaseEffectTable@CD2DContext@@AEAAXXZ.c)
 *     ??_GCD2DTarget@@QEAAPEAXI@Z @ 0x180024F84 (--_GCD2DTarget@@QEAAPEAXI@Z.c)
 *     ?MarkAllResourcesInvalid@CD2DResourceManager@@QEAAXXZ @ 0x1800278EC (-MarkAllResourcesInvalid@CD2DResourceManager@@QEAAXXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

__int64 __fastcall CD2DContext::DestroyDeviceResources(CD2DContext *this, unsigned int a2)
{
  CD2DTarget *v3; // rcx
  CD2DResourceManager *v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  CMILRefCountBase *v11; // rcx
  __int64 v12; // rdi
  unsigned int i; // edi
  unsigned int j; // ebx
  unsigned int k; // ebx
  __int64 result; // rax
  __int64 v17; // rcx
  __int64 v18; // r14
  __int64 v19; // rcx

  v3 = (CD2DTarget *)*((_QWORD *)this + 33);
  if ( v3 )
  {
    CD2DTarget::`scalar deleting destructor'(v3, a2);
    *((_QWORD *)this + 33) = 0LL;
  }
  v4 = (CD2DResourceManager *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    CD2DResourceManager::MarkAllResourcesInvalid(v4);
    if ( *((_QWORD *)this + 1) )
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *((_QWORD *)this + 1));
      *((_QWORD *)this + 1) = 0LL;
    }
  }
  CD2DContext::ReleaseEffectTable(this);
  v5 = *((_QWORD *)this + 19);
  if ( v5 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(*((_QWORD *)this + 19));
    *((_QWORD *)this + 19) = 0LL;
  }
  v6 = *((_QWORD *)this + 20);
  if ( v6 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 16LL))(*((_QWORD *)this + 20));
    *((_QWORD *)this + 20) = 0LL;
  }
  v7 = *((_QWORD *)this + 6);
  if ( v7 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 16LL))(*((_QWORD *)this + 6));
    *((_QWORD *)this + 6) = 0LL;
  }
  v8 = *((_QWORD *)this + 5);
  if ( v8 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 16LL))(*((_QWORD *)this + 5));
    *((_QWORD *)this + 5) = 0LL;
  }
  v9 = *((_QWORD *)this + 3);
  if ( v9 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 16LL))(*((_QWORD *)this + 3));
    *((_QWORD *)this + 3) = 0LL;
  }
  v10 = *((_QWORD *)this + 4);
  if ( v10 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 16LL))(*((_QWORD *)this + 4));
    *((_QWORD *)this + 4) = 0LL;
  }
  v11 = (CMILRefCountBase *)*((_QWORD *)this + 35);
  if ( v11 )
  {
    CMILRefCountBase::Release(v11);
    *((_QWORD *)this + 35) = 0LL;
  }
  v12 = *((_QWORD *)this + 34);
  if ( v12 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 8LL))(*((_QWORD *)this + 34));
    *((_QWORD *)this + 34) = 0LL;
  }
  for ( i = 0; i < *((_DWORD *)this + 36); ++i )
  {
    v18 = *(_QWORD *)(*((_QWORD *)this + 15) + 8LL * i);
    if ( v18 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      *(_QWORD *)(*((_QWORD *)this + 15) + 8LL * i) = 0LL;
    }
  }
  for ( j = 0; j < *((_DWORD *)this + 82); ++j )
  {
    v17 = *(_QWORD *)(*((_QWORD *)this + 38) + 8LL * j);
    if ( v17 )
    {
      CMILRefCountBase::Release((CMILRefCountBase *)(v17 + 8));
      *(_QWORD *)(*((_QWORD *)this + 38) + 8LL * j) = 0LL;
    }
  }
  *((_DWORD *)this + 82) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 304, 8LL);
  for ( k = 0; k < *((_DWORD *)this + 92); ++k )
  {
    v19 = *(_QWORD *)(*((_QWORD *)this + 43) + 8LL * k);
    if ( v19 )
    {
      CMILRefCountBase::Release((CMILRefCountBase *)(v19 + 8));
      *(_QWORD *)(*((_QWORD *)this + 43) + 8LL * k) = 0LL;
    }
  }
  *((_DWORD *)this + 92) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 344, 8LL);
  result = 0LL;
  *((_DWORD *)this + 36) = 0;
  return result;
}
