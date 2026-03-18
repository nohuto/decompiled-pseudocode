/*
 * XREFs of ?ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ @ 0x1C0048C0C
 * Callers:
 *     NtBindCompositionSurface @ 0x1C000FEB0 (NtBindCompositionSurface.c)
 *     ?Delete@CCompositionSurface@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z @ 0x1C0048DC0 (-Delete@CCompositionSurface@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z.c)
 *     ?Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@_N@Z @ 0x1C0049114 (-Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@_N@Z.c)
 *     ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x1C0049184 (-UnBind@CCompositionSurface@@QEAAJ_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurface::ReleaseAllBuffers(CCompositionSurface *this)
{
  char v1; // si
  __int64 **v3; // rbx
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  v1 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    v3 = (__int64 **)((char *)this + 64);
    v4 = (__int64 *)*((_QWORD *)this + 8);
    v5 = *v4;
    if ( (__int64 **)v4[1] != v3 || *(__int64 **)(v5 + 8) != v4 )
      __fastfail(3u);
    *v3 = (__int64 *)v5;
    *(_QWORD *)(v5 + 8) = v3;
    if ( v4 != (__int64 *)v3 )
    {
      v1 = 1;
      do
      {
        if ( v4 != (__int64 *)16 )
          (*(void (__fastcall **)(__int64 *, __int64))*(v4 - 2))(v4 - 2, 1LL);
        v4 = *v3;
        v6 = **v3;
        if ( (__int64 **)(*v3)[1] != v3 || *(__int64 **)(v6 + 8) != v4 )
          __fastfail(3u);
        *v3 = (__int64 *)v6;
        *(_QWORD *)(v6 + 8) = v3;
      }
      while ( v4 != (__int64 *)v3 );
    }
    *((_DWORD *)this + 20) = 0;
  }
  return v1;
}
