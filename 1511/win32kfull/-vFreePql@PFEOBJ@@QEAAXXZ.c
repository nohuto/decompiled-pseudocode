/*
 * XREFs of ?vFreePql@PFEOBJ@@QEAAXXZ @ 0x1C001E424
 * Callers:
 *     bUnloadEudcFont @ 0x1C000E074 (bUnloadEudcFont.c)
 * Callees:
 *     <none>
 */

void __fastcall PFEOBJ::vFreePql(PFEOBJ *this)
{
  __int64 v2; // rcx

  *(_DWORD *)(*(_QWORD *)this + 12LL) &= ~0x200u;
  v2 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  if ( v2 )
  {
    Win32FreePool(v2);
    *(_QWORD *)(*(_QWORD *)this + 120LL) = 0LL;
  }
}
