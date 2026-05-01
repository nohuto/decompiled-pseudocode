/*
 * XREFs of ?SetAppWindow@CImmersiveWindowFactoryBase@@UEAAJJ@Z @ 0x18002B9E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveWindowFactoryBase::SetAppWindow(CImmersiveWindowFactoryBase *this, int a2)
{
  bool v3; // zf

  v3 = *((_DWORD *)this + 5) == 0;
  *((_QWORD *)this + 1) = a2;
  if ( !v3 )
    SetPropW((HWND)a2, L"Microsoft.Windows.WindowFactory.ExtraData", (HANDLE)*((unsigned int *)this + 5));
  if ( *((_DWORD *)this + 6) )
    SetPropW(*((HWND *)this + 1), L"Microsoft.Windows.WindowFactory.ViewId", (HANDLE)*((unsigned int *)this + 6));
  (*(void (__fastcall **)(char *))(*((_QWORD *)this - 7) + 88LL))((char *)this - 56);
  return 0LL;
}
