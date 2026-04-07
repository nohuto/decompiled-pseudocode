/*
 * XREFs of ?GetColorSpace@CBitmap@@UEAA?AW4ColorSpace@@XZ @ 0x18003C5E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::GetColorSpace(__int64 a1)
{
  __int64 v2; // rbx
  unsigned int v3; // edi

  if ( a1 == 16 )
    v2 = 0LL;
  else
    v2 = a1 + 96;
  if ( *(_BYTE *)(v2 + 48) )
    EnterCriticalSection((LPCRITICAL_SECTION)(v2 + 8));
  v3 = *(_DWORD *)(a1 + 192);
  if ( *(_BYTE *)(v2 + 48) )
    LeaveCriticalSection((LPCRITICAL_SECTION)(v2 + 8));
  return v3;
}
