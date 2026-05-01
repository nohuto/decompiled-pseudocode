/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$InterfaceList@VCImmersiveWindowFactoryBase@@U?$InterfaceList@UIWeakReferenceSource@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$0A@$00@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18002C510
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCImmersiveWindowFactoryBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002C340 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VCImmersiveWindowFactoryBase@@VNil@Details@WRL@M.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<CImmersiveWindowFactoryBase,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::Nil>>,0,1>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rcx

  if ( *a2 == -852941984
    && a2[1] == *(_DWORD *)&GUID_cd292360_2763_4085_8a9f_74b224a29175.Data2
    && a2[2] == *(_DWORD *)GUID_cd292360_2763_4085_8a9f_74b224a29175.Data4
    && a2[3] == *(_DWORD *)&GUID_cd292360_2763_4085_8a9f_74b224a29175.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  v4 = a1 + 8;
  if ( *a2 == 3
    && a2[1] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = v4;
    result = 0LL;
  }
  else
  {
    if ( *a2 == 24
      && a2[1] == *(_DWORD *)&GUID_00000018_0000_0000_c000_000000000046.Data2
      && a2[2] == *(_DWORD *)GUID_00000018_0000_0000_c000_000000000046.Data4
      && a2[3] == *(_DWORD *)&GUID_00000018_0000_0000_c000_000000000046.Data4[4] )
    {
      v6 = v4 + 32;
LABEL_16:
      *a3 = v6;
LABEL_24:
      result = 0LL;
      goto LABEL_31;
    }
    result = 2147500034LL;
  }
  if ( (int)result >= 0 )
    return result;
  v7 = v4 + 40;
  if ( *a2 == 1612534243
    && a2[1] == *(_DWORD *)&GUID_601d51e3_801e_49c9_bbfa_fe29a662aead.Data2
    && a2[2] == *(_DWORD *)GUID_601d51e3_801e_49c9_bbfa_fe29a662aead.Data4
    && a2[3] == *(_DWORD *)&GUID_601d51e3_801e_49c9_bbfa_fe29a662aead.Data4[4] )
  {
    *a3 = v7;
    goto LABEL_24;
  }
  if ( *a2 == 142386596
    && a2[1] == *(_DWORD *)&GUID_087ca5a4_8cfc_4264_b39d_da2bb2583a11.Data2
    && a2[2] == *(_DWORD *)GUID_087ca5a4_8cfc_4264_b39d_da2bb2583a11.Data4
    && a2[3] == *(_DWORD *)&GUID_087ca5a4_8cfc_4264_b39d_da2bb2583a11.Data4[4] )
  {
    v6 = v7 + 8;
    goto LABEL_16;
  }
  result = 2147500034LL;
LABEL_31:
  if ( (int)result >= 0 )
    return result;
  if ( *a2 == 56
    && a2[1] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1 + 136;
    return 0LL;
  }
  return 2147500034LL;
}
