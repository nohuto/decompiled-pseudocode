/*
 * XREFs of ?GetFxClsid@@YAJPEAUIMMDevice@@U_tagpropertykey@@PEAU_GUID@@@Z @ 0x18002EBB8
 * Callers:
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJXZ @ 0x18002E3CC (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?IsAPOClsidRegistered@@YAHU_GUID@@@Z @ 0x18002EDEC (-IsAPOClsidRegistered@@YAHU_GUID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF__guid_d @ 0x18005FCC8 (WPP_SF__guid_d.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GetFxClsid(struct IMMDevice *a1, struct _tagpropertykey *a2, struct _GUID *a3)
{
  __int64 v6; // rcx
  HRESULT v7; // ebx
  __int64 v9; // [rsp+30h] [rbp-40h] BYREF
  __int64 v10; // [rsp+38h] [rbp-38h] BYREF
  PROPVARIANT pvar; // [rsp+40h] [rbp-30h] BYREF
  LPCOLESTR lpsz; // [rsp+48h] [rbp-28h]
  __int64 v13; // [rsp+50h] [rbp-20h]
  __int64 v14; // [rsp+58h] [rbp-18h]
  struct _GUID v15; // [rsp+60h] [rbp-10h] BYREF

  v14 = -2LL;
  v6 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  pvar = 0LL;
  lpsz = 0LL;
  v13 = 0LL;
  if ( a1 )
  {
    v9 = 0LL;
    ((void (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
      a1,
      &GUID_eecca8a7_a629_4dba_9f23_20f6db42d990,
      &v9);
    v6 = v9;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v6 + 40LL))(v6, 0LL, &v10);
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v10 + 40LL))(
           v10,
           a2,
           &pvar);
    if ( v7 >= 0 )
    {
      v7 = (_WORD)pvar == 31 ? CLSIDFromString(lpsz, a3) : -2147467259;
      if ( v7 >= 0 )
      {
        v15 = *a3;
        if ( (unsigned int)IsAPOClsidRegistered(&v15) )
        {
          v7 = 0;
        }
        else
        {
          v7 = -2005139398;
          if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF__guid_d(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              10LL,
              &WPP_94670bdcb35a3f5dca51f96e2122b87b_Traceguids,
              a3,
              -2005139398);
          }
          *a3 = GUID_00000000_0000_0000_0000_000000000000;
        }
      }
    }
  }
  PropVariantClear(&pvar);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return (unsigned int)v7;
}
