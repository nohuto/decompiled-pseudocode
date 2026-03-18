/*
 * XREFs of ?IsAttachedToDesktop@DXGIOutputInfo@@QEBA_NXZ @ 0x180057668
 * Callers:
 *     ?EnumerateOutputs@CDisplaySet@@AEAAJXZ @ 0x180054F84 (-EnumerateOutputs@CDisplaySet@@AEAAJXZ.c)
 *     ?UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ @ 0x180056420 (-UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ.c)
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
