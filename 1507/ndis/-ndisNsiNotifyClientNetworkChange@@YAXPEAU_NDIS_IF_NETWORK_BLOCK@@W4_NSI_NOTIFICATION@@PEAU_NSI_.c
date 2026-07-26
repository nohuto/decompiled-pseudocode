/*
 * XREFs of ?ndisNsiNotifyClientNetworkChange@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@@Z @ 0x1C00C6234
 * Callers:
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C003CE40 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C003D240 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 * Callees:
 *     ?ndisIsCompartmentEnumerable@@YAEPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C001A144 (-ndisIsCompartmentEnumerable@@YAEPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 */

void __fastcall ndisNsiNotifyClientNetworkChange(__int64 a1, int a2, __int64 a3)
{
  int v6; // edx
  __int64 v7; // xmm1_8
  _OWORD v8[4]; // [rsp+20h] [rbp-48h] BYREF

  if ( ndisIsCompartmentEnumerable(*(struct _NDIS_IF_COMPARTMENT_BLOCK **)(a1 + 48)) )
  {
    if ( (unsigned __int8)byte_1C008531D >= 4u )
      WPP_SF_qD(0x92u, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, a1, v6);
    memset(v8, 0, 0x38uLL);
    *(_QWORD *)&v8[0] = ndisNsiSavedClientNpi;
    WORD4(v8[0]) = 6;
    *(_QWORD *)&v8[1] = a1 + 32;
    HIDWORD(v8[0]) = a2;
    DWORD2(v8[1]) = 16;
    if ( a2 )
    {
      *((_QWORD *)&v8[2] + 1) = 0LL;
    }
    else
    {
      v7 = *(_QWORD *)(a3 + 16);
      v8[2] = *(_OWORD *)a3;
      *(_QWORD *)&v8[3] = v7;
    }
    (*(void (__fastcall **)(_OWORD *))(qword_1C00850B8 + 8))(v8);
    if ( (unsigned __int8)byte_1C008531D >= 4u )
      WPP_SF_qD(0x93u, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, a1, a2);
  }
}
