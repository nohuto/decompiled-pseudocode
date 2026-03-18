/*
 * XREFs of ?Unlock@CBitmapLock@@IEAAXXZ @ 0x18009E610
 * Callers:
 *     ??1CBitmapLock@@UEAA@XZ @ 0x18009E914 (--1CBitmapLock@@UEAA@XZ.c)
 * Callees:
 *     ?Release@CDxHandleYUVBitmapRealization@@UEAAKXZ @ 0x18002F680 (-Release@CDxHandleYUVBitmapRealization@@UEAAKXZ.c)
 *     ?UnlockState@CBitmap@@UEAAJW4WICBitmapLockFlags@@@Z @ 0x180084E10 (-UnlockState@CBitmap@@UEAAJW4WICBitmapLockFlags@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBitmapLock::Unlock(CBitmapLock *this)
{
  CBitmap *v2; // rcx
  __int64 v3; // rdx
  __int64 (__fastcall *v4)(CBitmap *, enum WICBitmapLockFlags); // rax
  __int64 v5; // rcx
  CMILCOMBase *v6; // rcx
  void (*v7)(void); // rax

  v2 = (CBitmap *)*((_QWORD *)this + 21);
  if ( v2 )
  {
    v3 = *((unsigned int *)this + 40);
    v4 = *(__int64 (__fastcall **)(CBitmap *, enum WICBitmapLockFlags))(*(_QWORD *)v2 + 24LL);
    if ( v4 == CBitmap::UnlockState )
      CBitmap::UnlockState(v2, (enum WICBitmapLockFlags)v3);
    else
      v4(v2, (enum WICBitmapLockFlags)v3);
    v5 = *((_QWORD *)this + 21);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      *((_QWORD *)this + 21) = 0LL;
    }
    v6 = (CMILCOMBase *)*((_QWORD *)this + 12);
    if ( v6 )
    {
      v7 = *(void (**)(void))(*(_QWORD *)v6 + 16LL);
      if ( (char *)v7 == (char *)CDxHandleYUVBitmapRealization::Release )
        CDxHandleYUVBitmapRealization::Release(v6);
      else
        v7();
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
