/*
 * XREFs of ?NotifyTreeDirtyRegion@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x18004B000
 * Callers:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800404F0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 * Callees:
 *     ??ACPtrArrayBase@@IEAA_K_K@Z @ 0x18001B258 (--ACPtrArrayBase@@IEAA_K_K@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CHwndRenderTarget::NotifyTreeDirtyRegion(
        CHwndRenderTarget *this,
        const struct CVisualTree *a2,
        const struct CDirtyRegion *a3)
{
  __int64 v3; // r14
  unsigned __int64 v4; // rbp
  int v7; // eax
  _DWORD *v8; // rsi
  unsigned int v9; // eax
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // r9
  unsigned __int64 v13; // rbx

  v3 = *((_QWORD *)this + 8);
  v4 = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(_QWORD, const struct CVisualTree *))(*(_QWORD *)v3 + 8LL))(*((_QWORD *)this + 8), a2);
  *((_QWORD *)this + 8) = a3;
  if ( a3 )
    (**(void (__fastcall ***)(const struct CDirtyRegion *, const struct CVisualTree *))a3)(a3, a2);
  v7 = *((_DWORD *)this - 4);
  v8 = (_DWORD *)((char *)this - 48);
  v9 = v8[8] ^ (v8[8] ^ ((v7 & 0xFFFFFFFE) + 2)) & 6;
  v8[8] = v9;
  if ( (v9 & 6) == 2 && (*(unsigned int (__fastcall **)(_DWORD *, _QWORD, _QWORD))(*(_QWORD *)v8 + 88LL))(v8, 0LL, 0LL) )
  {
    v10 = *((_QWORD *)v8 + 3);
    if ( (v10 & 2) != 0 )
      v10 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v10) = v10 & 1;
    if ( (_DWORD)v10 )
    {
      v11 = (unsigned int)v10;
      do
      {
        v13 = CPtrArrayBase::operator[]((__int64 *)v8 + 3, v4);
        (*(void (__fastcall **)(_DWORD *, unsigned __int64, _QWORD, _QWORD))(v12 + 64))(v8, v13, 0LL, 0LL);
        ++v4;
        --v11;
      }
      while ( v11 );
    }
  }
  (*(void (__fastcall **)(_DWORD *, const struct CVisualTree *))(*(_QWORD *)v8 + 72LL))(v8, a2);
  v8[8] ^= (v8[8] ^ (2 * (v8[8] >> 1) - 2)) & 6;
}
