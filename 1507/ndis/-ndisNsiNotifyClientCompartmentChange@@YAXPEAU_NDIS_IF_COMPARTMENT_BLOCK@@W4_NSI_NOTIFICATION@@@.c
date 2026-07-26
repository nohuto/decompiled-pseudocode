/*
 * XREFs of ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x1C009F178
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C00120CC (-ndisInitializeNsiHelper@@YAJXZ.c)
 *     ?ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C003B130 (-ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLO.c)
 *     ?ndisIfDeleteCompartment@@YAJI@Z @ 0x1C003B450 (-ndisIfDeleteCompartment@@YAJI@Z.c)
 * Callees:
 *     ?ndisIsCompartmentEnumerable@@YAEPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C001A144 (-ndisIsCompartmentEnumerable@@YAEPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 */

void __fastcall ndisNsiNotifyClientCompartmentChange(struct _NDIS_IF_COMPARTMENT_BLOCK *a1, int a2)
{
  int v4; // edx
  _QWORD v5[8]; // [rsp+20h] [rbp-40h] BYREF

  if ( ndisIsCompartmentEnumerable(a1) )
  {
    if ( (unsigned __int8)byte_1C008531D >= 4u )
      WPP_SF_qD(0x94u, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, (__int64)a1, v4);
    memset(v5, 0, 0x38uLL);
    v5[0] = ndisNsiSavedClientNpi;
    LOWORD(v5[1]) = 7;
    v5[2] = &a1->CompartmentId;
    HIDWORD(v5[1]) = a2;
    LODWORD(v5[3]) = 4;
    if ( (unsigned int)(a2 - 1) > 1 )
    {
      v5[5] = 0LL;
    }
    else
    {
      LODWORD(v5[4]) = 0;
      v5[5] = &a1->LoopbackInfo.CompartmentGuid;
      v5[6] = 0x43800000010LL;
    }
    (*(void (__fastcall **)(_QWORD *))(qword_1C00850B8 + 8))(v5);
    if ( (unsigned __int8)byte_1C008531D >= 4u )
      WPP_SF_qD(0x95u, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, (__int64)a1, a2);
  }
}
