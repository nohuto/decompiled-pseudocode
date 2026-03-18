/*
 * XREFs of ?IsAttachedToDesktop@DXGIOutputInfo@@QEBA_NXZ @ 0x18006C0F0
 * Callers:
 *     ?UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ @ 0x18006BFB4 (-UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ.c)
 *     ?EnumerateOutputs@CDisplaySet@@AEAAJXZ @ 0x18006FBEC (-EnumerateOutputs@CDisplaySet@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall DXGIOutputInfo::IsAttachedToDesktop(DXGIOutputInfo *this)
{
  char v1; // dl

  v1 = 1;
  if ( !*((_DWORD *)this + 44) && !*((_DWORD *)this + 45) && !*((_DWORD *)this + 46) )
    return *((_DWORD *)this + 47) != 0;
  return v1;
}
