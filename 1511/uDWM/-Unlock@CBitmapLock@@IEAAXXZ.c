/*
 * XREFs of ?Unlock@CBitmapLock@@IEAAXXZ @ 0x18004174C
 * Callers:
 *     ??1CBitmapLock@@UEAA@XZ @ 0x180041998 (--1CBitmapLock@@UEAA@XZ.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CBitmapLock::Unlock(CBitmapLock *this)
{
  __int64 v1; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi

  v1 = *((_QWORD *)this + 21);
  if ( v1 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v1 + 24LL))(
      *((_QWORD *)this + 21),
      *((unsigned int *)this + 40));
    v3 = *((_QWORD *)this + 21);
    if ( v3 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 21));
      *((_QWORD *)this + 21) = 0LL;
    }
    v4 = *((_QWORD *)this + 12);
    if ( v4 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 12));
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
