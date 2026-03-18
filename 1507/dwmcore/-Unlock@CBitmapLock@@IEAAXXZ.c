/*
 * XREFs of ?Unlock@CBitmapLock@@IEAAXXZ @ 0x1800520A0
 * Callers:
 *     ??1CBitmapLock@@UEAA@XZ @ 0x180052464 (--1CBitmapLock@@UEAA@XZ.c)
 * Callees:
 *     ?UnlockState@CBitmap@@UEAAJW4WICBitmapLockFlags@@@Z @ 0x180080920 (-UnlockState@CBitmap@@UEAAJW4WICBitmapLockFlags@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CBitmapLock::Unlock(CBitmapLock *this)
{
  __int64 v1; // rbx
  enum WICBitmapLockFlags v3; // ebp
  __int64 (__fastcall *v4)(CBitmap *__hidden, enum WICBitmapLockFlags); // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi

  v1 = *((_QWORD *)this + 21);
  if ( v1 )
  {
    v3 = *((_DWORD *)this + 40);
    v4 = *(__int64 (__fastcall **)(CBitmap *__hidden, enum WICBitmapLockFlags))(*(_QWORD *)v1 + 24LL);
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
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 16LL))(*((_QWORD *)this + 12));
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
