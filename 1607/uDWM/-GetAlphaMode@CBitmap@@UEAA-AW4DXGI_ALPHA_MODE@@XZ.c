/*
 * XREFs of ?GetAlphaMode@CBitmap@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x18003C6C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::GetAlphaMode(CBitmap *this)
{
  char *v2; // rbx
  unsigned int v3; // edi

  if ( this == (CBitmap *)16 )
    v2 = 0LL;
  else
    v2 = (char *)this + 96;
  if ( v2[48] )
    EnterCriticalSection((LPCRITICAL_SECTION)(v2 + 8));
  v3 = *((_DWORD *)this + 47);
  if ( v2[48] )
    LeaveCriticalSection((LPCRITICAL_SECTION)(v2 + 8));
  return v3;
}
