/*
 * XREFs of ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18002A150
 * Callers:
 *     ?Release@CGdiSpriteBitmap@@W7EAAKXZ @ 0x1800C04E0 (-Release@CGdiSpriteBitmap@@W7EAAKXZ.c)
 *     ?Release@CGdiSpriteBitmap@@WBA@EAAKXZ @ 0x1800C04F0 (-Release@CGdiSpriteBitmap@@WBA@EAAKXZ.c)
 *     ?Release@CGdiSpriteBitmap@@WJA@EAAKXZ @ 0x1800C0500 (-Release@CGdiSpriteBitmap@@WJA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGdiSpriteBitmap::Release(CGdiSpriteBitmap *this)
{
  volatile signed __int32 *v1; // rcx
  unsigned __int32 v2; // ebx

  v1 = (volatile signed __int32 *)((char *)this + 16);
  v2 = _InterlockedDecrement(v1 + 2);
  if ( !v2 )
  {
    --*((_DWORD *)v1 + 2);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
