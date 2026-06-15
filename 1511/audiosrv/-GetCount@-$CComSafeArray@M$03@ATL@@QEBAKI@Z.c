/*
 * XREFs of ?GetCount@?$CComSafeArray@M$03@ATL@@QEBAKI@Z @ 0x1800737CC
 * Callers:
 *     ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180035388 (-LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CComSafeArray<float,4>::GetCount(SAFEARRAY **a1, LONG a2)
{
  HRESULT LBound; // eax
  HRESULT UBound; // eax
  LONG plLbound; // [rsp+30h] [rbp+8h] BYREF
  LONG plUbound; // [rsp+38h] [rbp+10h] BYREF

  plUbound = a2;
  LBound = SafeArrayGetLBound(*a1, 1u, &plLbound);
  if ( LBound < 0 )
    ATL::AtlThrowImpl(LBound);
  UBound = SafeArrayGetUBound(*a1, 1u, &plUbound);
  if ( UBound < 0 )
    ATL::AtlThrowImpl(UBound);
  return (unsigned int)(plUbound - plLbound + 1);
}
