/*
 * XREFs of NtGdiDdDDIEscape @ 0x1C000D1C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00B92E0 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 */

__int64 __fastcall NtGdiDdDDIEscape(_D3DKMT_ESCAPE *a1)
{
  _D3DKMT_ESCAPE v2; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 >= W32UserProbeAddress )
    a1 = (_D3DKMT_ESCAPE *)W32UserProbeAddress;
  v2 = *a1;
  if ( v2.Type >= D3DKMT_ESCAPE_WIN32K_START )
    return DrvProcessWin32kEscape(&v2);
  else
    return ((__int64 (__fastcall *)(_D3DKMT_ESCAPE *))qword_1C01011C8)(&v2);
}
