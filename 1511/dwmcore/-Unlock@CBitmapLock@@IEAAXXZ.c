/*
 * XREFs of ?Unlock@CBitmapLock@@IEAAXXZ @ 0x1800A1EB0
 * Callers:
 *     ??1CBitmapLock@@UEAA@XZ @ 0x1800A22A4 (--1CBitmapLock@@UEAA@XZ.c)
 * Callees:
 *     ?Release@CDxHandleYUVBitmapRealization@@UEAAKXZ @ 0x180004140 (-Release@CDxHandleYUVBitmapRealization@@UEAAKXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?UnlockState@CBitmap@@UEAAJW4WICBitmapLockFlags@@@Z @ 0x180088B50 (-UnlockState@CBitmap@@UEAAJW4WICBitmapLockFlags@@@Z.c)
 */

void __fastcall CBitmapLock::Unlock(CBitmapLock *this)
{
  __int64 v1; // rbx
  enum WICBitmapLockFlags v3; // ebp
  __int64 (__fastcall *v4)(CBitmap *, enum WICBitmapLockFlags); // rdi
  __int64 v5; // rdi
  __int64 v6; // rbx
  unsigned int (__fastcall *v7)(CDxHandleYUVBitmapRealization *); // rdi

  v1 = *((_QWORD *)this + 21);
  if ( v1 )
  {
    v3 = *((_DWORD *)this + 40);
    v4 = *(__int64 (__fastcall **)(CBitmap *, enum WICBitmapLockFlags))(*(_QWORD *)v1 + 24LL);
    if ( v4 == CBitmap::UnlockState )
      CBitmap::UnlockState(*((CBitmap **)this + 21), v3);
    else
      v4(*((CBitmap **)this + 21), v3);
    v5 = *((_QWORD *)this + 21);
    if ( v5 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 16LL))(*((_QWORD *)this + 21));
      *((_QWORD *)this + 21) = 0LL;
    }
    v6 = *((_QWORD *)this + 12);
    if ( v6 )
    {
      v7 = *(unsigned int (__fastcall **)(CDxHandleYUVBitmapRealization *))(*(_QWORD *)v6 + 16LL);
      if ( v7 == CDxHandleYUVBitmapRealization::Release )
        CDxHandleYUVBitmapRealization::Release(*((CDxHandleYUVBitmapRealization **)this + 12));
      else
        v7(*((CDxHandleYUVBitmapRealization **)this + 12));
      *((_QWORD *)this + 12) = 0LL;
    }
    if ( *((_BYTE *)this + 89) )
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *((_QWORD *)this + 18));
      *((_QWORD *)this + 18) = 0LL;
      *((_DWORD *)this + 38) = 0;
    }
  }
  *((_BYTE *)this + 88) = 0;
}
