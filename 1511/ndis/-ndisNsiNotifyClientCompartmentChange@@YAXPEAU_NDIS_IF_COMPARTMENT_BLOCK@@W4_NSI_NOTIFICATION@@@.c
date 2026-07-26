/*
 * XREFs of ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x1C00A98A4
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C0020060 (-ndisInitializeNsiHelper@@YAJXZ.c)
 *     ?ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C003BE70 (-ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLO.c)
 *     ?ndisIfDeleteCompartment@@YAJI@Z @ 0x1C003C190 (-ndisIfDeleteCompartment@@YAJI@Z.c)
 * Callees:
 *     ?ndisIsCompartmentEnumerable@@YAEPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C001B2E4 (-ndisIsCompartmentEnumerable@@YAEPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 */

void __fastcall ndisNsiNotifyClientCompartmentChange(struct _NDIS_IF_COMPARTMENT_BLOCK *a1, int a2)
{
  int v4; // edx
  _QWORD v5[8]; // [rsp+20h] [rbp-40h] BYREF

  if ( ndisIsCompartmentEnumerable(a1) )
  {
    if ( (unsigned __int8)byte_1C008371D >= 4u )
      WPP_SF_qD(0x94u, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, (__int64)a1, v4);
    memset(v5, 0, sizeof(v5));
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
    (*(void (__fastcall **)(_QWORD *))(qword_1C0083058 + 8))(v5);
    if ( (unsigned __int8)byte_1C008371D >= 4u )
      WPP_SF_qD(0x95u, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, (__int64)a1, a2);
  }
}
