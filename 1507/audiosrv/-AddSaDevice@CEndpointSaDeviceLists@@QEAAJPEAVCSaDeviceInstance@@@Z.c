/*
 * XREFs of ?AddSaDevice@CEndpointSaDeviceLists@@QEAAJPEAVCSaDeviceInstance@@@Z @ 0x180073C04
 * Callers:
 *     ?AddSaDevice@CSaProvider@@IEAAJPEAV?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@@2@@ATL@@PEAVCSaDeviceInstance@@@Z @ 0x180073CD0 (-AddSaDevice@CSaProvider@@IEAAJPEAV-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@AT.c)
 * Callees:
 *     ?NewNode@?$CAtlList@PEAVCSaDeviceInstance@@V?$CElementTraits@PEAVCSaDeviceInstance@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCSaDeviceInstance@@PEAV312@1@Z @ 0x180074F88 (-NewNode@-$CAtlList@PEAVCSaDeviceInstance@@V-$CElementTraits@PEAVCSaDeviceInstance@@@ATL@@@ATL@@.c)
 */

__int64 __fastcall CEndpointSaDeviceLists::AddSaDevice(
        CEndpointSaDeviceLists *this,
        struct CSaDeviceInstance *a2,
        __int64 a3)
{
  struct CSaDeviceInstance *v3; // rsi
  CEndpointSaDeviceLists *v4; // rbx
  unsigned int v5; // r14d
  __int64 *v6; // rdi
  __int64 v7; // rax
  ATL::CAtlException *v9; // rbx
  ATL::CAtlException *v10; // [rsp+28h] [rbp-20h] BYREF
  struct CSaDeviceInstance *v12; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v13; // [rsp+60h] [rbp+18h]

  v12 = a2;
  v3 = a2;
  v4 = this;
  v5 = 0;
  try
  {
    v6 = (__int64 *)((char *)this + 48 * *((int *)a2 + 9));
    v7 = ATL::CAtlList<CSaDeviceInstance *,ATL::CElementTraits<CSaDeviceInstance *>>::NewNode(v6, &v12, a3, *v6, -2LL);
    if ( *v6 )
      *(_QWORD *)(*v6 + 8) = v7;
    else
      v6[1] = v7;
    *v6 = v7;
  }
  catch ( ATL::CAtlException *v10 )
  {
    v9 = v10;
    if ( *(_DWORD *)v10 == -1073741571 )
      _resetstkoflw();
    v13 = *(_DWORD *)v9;
    v4 = this;
    v3 = v12;
    v5 = v13;
  }
  if ( *((_DWORD *)v3 + 2) == 1 )
    ++*((_DWORD *)v4 + 48);
  ++*((_DWORD *)v4 + 49);
  return v5;
}
