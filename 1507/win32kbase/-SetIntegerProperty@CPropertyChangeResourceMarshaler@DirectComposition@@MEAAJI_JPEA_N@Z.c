/*
 * XREFs of ?SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJI_JPEA_N@Z @ 0x1C00D9EDC
 * Callers:
 *     ?SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C0029510 (-SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(
        DirectComposition::CPropertyChangeResourceMarshaler *this,
        int a2,
        int a3,
        bool *a4)
{
  __int64 result; // rax

  result = 0LL;
  *a4 = 0;
  if ( a2 != 0xFFFF )
    return 3221225485LL;
  if ( *((_DWORD *)this + 12) != a3 )
  {
    *((_DWORD *)this + 4) |= 0x80u;
    *((_DWORD *)this + 12) = a3;
    *a4 = 1;
  }
  return result;
}
