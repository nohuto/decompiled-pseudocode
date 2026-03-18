/*
 * XREFs of ?NotifyTreeDirtyRegion@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x180073980
 * Callers:
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180075FA0 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800A258C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwndRenderTarget::NotifyTreeDirtyRegion(
        CHwndRenderTarget *this,
        const struct CVisualTree *a2,
        const struct CDirtyRegion *a3)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  _DWORD *v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // r9

  v4 = 0LL;
  v5 = *((_QWORD *)this + 8);
  if ( v5 )
    (*(void (__fastcall **)(__int64, const struct CVisualTree *))(*(_QWORD *)v5 + 8LL))(v5, a2);
  *((_QWORD *)this + 8) = a3;
  if ( a3 )
    (**(void (__fastcall ***)(const struct CDirtyRegion *, const struct CVisualTree *))a3)(a3, a2);
  v7 = (_DWORD *)((char *)this - 120);
  v8 = *((_DWORD *)this - 22) ^ (*((_DWORD *)this - 22) ^ ((*((_DWORD *)this - 22) & 0xFFFFFFFE) + 2)) & 6;
  *((_DWORD *)this - 22) = v8;
  if ( (v8 & 6) == 2
    && (*(unsigned int (__fastcall **)(char *, _QWORD, _QWORD))(*(_QWORD *)v7 + 104LL))((char *)this - 120, 0LL, 0LL) )
  {
    v9 = *((_QWORD *)v7 + 3);
    if ( (v9 & 2) != 0 )
      v9 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v9) = v9 & 1;
    if ( (_DWORD)v9 )
    {
      v10 = (unsigned int)v9;
      do
      {
        v11 = CPtrArrayBase::operator[](v7 + 6, v4);
        (*(void (__fastcall **)(char *, __int64, _QWORD, _QWORD))(v12 + 64))((char *)this - 120, v11, 0LL, 0LL);
        ++v4;
        --v10;
      }
      while ( v10 );
    }
  }
  (*(void (__fastcall **)(char *, const struct CVisualTree *))(*(_QWORD *)v7 + 72LL))((char *)this - 120, a2);
  v7[8] ^= (v7[8] ^ (2 * (v7[8] >> 1) - 2)) & 6;
}
