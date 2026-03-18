/*
 * XREFs of ?MarkAllResourcesInvalid@CD2DResourceManager@@QEAAXXZ @ 0x18009DBEC
 * Callers:
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x18007E1B8 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DResourceManager::MarkAllResourcesInvalid(CD2DResourceManager *this)
{
  __int64 v1; // rbx
  _QWORD *v3; // rax
  bool v4; // zf
  int i; // esi
  void (__fastcall ***v6)(_QWORD, __int64); // rcx
  _QWORD *v7; // rax

  v1 = *((_QWORD *)this + 1);
  v3 = *(_QWORD **)(v1 + 8);
  if ( *(CD2DResourceManager **)v1 != this || *v3 != v1 )
    __fastfail(3u);
  *((_QWORD *)this + 1) = v3;
  for ( *v3 = this; (CD2DResourceManager *)v1 != this; *v7 = this )
  {
    v4 = *(_BYTE *)(v1 - 7) == 0;
    *(_BYTE *)(v1 - 8) = 0;
    if ( !v4 )
      --*((_DWORD *)this + 4);
    for ( i = *(_DWORD *)(v1 + 40); i > 0; --i )
    {
      v6 = *(void (__fastcall ****)(_QWORD, __int64))(*(_QWORD *)(v1 + 16) + 8LL * (unsigned int)(i - 1));
      (**v6)(v6, v1 - 24);
    }
    v1 = *((_QWORD *)this + 1);
    v7 = *(_QWORD **)(v1 + 8);
    if ( *(CD2DResourceManager **)v1 != this || *v7 != v1 )
      __fastfail(3u);
    *((_QWORD *)this + 1) = v7;
  }
}
