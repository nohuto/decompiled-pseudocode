/*
 * XREFs of ?OnOrientationChange@DWMInputDisplay@@MEAAXW4DISPLAYCONFIG_ROTATION@@@Z @ 0x18001B7C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DWMInputDisplay::OnOrientationChange(DWMInputDisplay *this, unsigned int a2)
{
  __int64 v2; // r9
  int v3; // eax

  v2 = *((_QWORD *)this + 9);
  v3 = *((_DWORD *)this + 16);
  *((_DWORD *)this + 16) = a2;
  if ( v2 )
  {
    if ( v3 != a2 )
      (*(void (__fastcall **)(__int64, DWMInputDisplay *, _QWORD))(*(_QWORD *)v2 + 24LL))(v2, this, a2);
  }
}
