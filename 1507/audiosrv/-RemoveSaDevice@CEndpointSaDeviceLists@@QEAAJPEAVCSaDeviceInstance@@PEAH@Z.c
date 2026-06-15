/*
 * XREFs of ?RemoveSaDevice@CEndpointSaDeviceLists@@QEAAJPEAVCSaDeviceInstance@@PEAH@Z @ 0x18007568C
 * Callers:
 *     ?RemoveSaDevice@CSaProvider@@IEAAJPEAV?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@@2@@ATL@@PEAVCSaDeviceInstance@@@Z @ 0x180075720 (-RemoveSaDevice@CSaProvider@@IEAAJPEAV-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G.c)
 * Callees:
 *     ?RemoveAt@?$CAtlList@KV?$CElementTraits@K@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180072FF0 (-RemoveAt@-$CAtlList@KV-$CElementTraits@K@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z.c)
 */

__int64 __fastcall CEndpointSaDeviceLists::RemoveSaDevice(
        CEndpointSaDeviceLists *this,
        struct CSaDeviceInstance *a2,
        int *a3)
{
  unsigned int v4; // ebx
  __int64 ***v7; // rcx
  __int64 **i; // rdx
  bool v9; // zf

  v4 = 0;
  v7 = (__int64 ***)((char *)this + 48 * *((int *)a2 + 9));
  for ( i = *v7; i; i = (__int64 **)*i )
  {
    if ( i[2] == (__int64 *)a2 )
      goto LABEL_6;
  }
  i = 0LL;
LABEL_6:
  if ( i )
  {
    ATL::CAtlList<unsigned long,ATL::CElementTraits<unsigned long>>::RemoveAt(v7, i);
    if ( *((_DWORD *)a2 + 2) == 1 )
      --*((_DWORD *)this + 48);
    v9 = (*((_DWORD *)this + 49))-- == 1;
    *a3 = v9;
  }
  else
  {
    return (unsigned int)-2005139430;
  }
  return v4;
}
