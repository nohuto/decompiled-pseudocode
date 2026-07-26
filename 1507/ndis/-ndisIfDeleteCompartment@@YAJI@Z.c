/*
 * XREFs of ?ndisIfDeleteCompartment@@YAJI@Z @ 0x1C003B450
 * Callers:
 *     ndisIfDereferenceCompartmentForUser @ 0x1C0021E20 (ndisIfDereferenceCompartmentForUser.c)
 *     ?ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C003CD80 (-ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     COMPARTMENTBLOCK_DECREMENT_REF @ 0x1C0012D04 (COMPARTMENTBLOCK_DECREMENT_REF.c)
 *     ndisIfFindCompartmentBlock @ 0x1C0012D18 (ndisIfFindCompartmentBlock.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_Ll @ 0x1C003DD24 (WPP_SF_Ll.c)
 *     WPP_SF_l @ 0x1C003E314 (WPP_SF_l.c)
 *     WPP_SF_dd @ 0x1C003F208 (WPP_SF_dd_ea_1C003F208.c)
 *     ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x1C009F178 (-ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@.c)
 *     NdisIfDeregisterInterface @ 0x1C00C63E0 (NdisIfDeregisterInterface.c)
 *     NdisIfFreeNetLuidIndex @ 0x1C00C63F0 (NdisIfFreeNetLuidIndex.c)
 */

__int64 __fastcall ndisIfDeleteCompartment(unsigned int a1, __int64 a2)
{
  int v2; // ebx
  char v4; // di
  KIRQL v5; // r15
  _LIST_ENTRY *CompartmentBlock; // rax
  _LIST_ENTRY *v7; // rsi
  int Blink; // eax
  __int64 Flink_low; // r9
  _LIST_ENTRY *v10; // rcx
  _LIST_ENTRY *v11; // r8
  _LIST_ENTRY *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  _LIST_ENTRY *v15; // rax
  NET_IFTYPE v16; // bx
  __int64 v17; // rdi
  KIRQL v18; // di
  _LIST_ENTRY *Flink; // r8
  void **p_Flink; // rdx
  _QWORD v22[10]; // [rsp+38h] [rbp-D0h] BYREF
  struct _KEVENT Event; // [rsp+88h] [rbp-80h] BYREF
  _DWORD v24[132]; // [rsp+A8h] [rbp-60h] BYREF

  v2 = 0;
  v4 = 0;
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_l(156LL, a2, a1);
  v5 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  CompartmentBlock = ndisIfFindCompartmentBlock(a1);
  v7 = CompartmentBlock;
  if ( !CompartmentBlock )
  {
    v2 = -1073741072;
    goto LABEL_20;
  }
  if ( LODWORD(CompartmentBlock[1].Flink) == 1 || (Blink = (int)CompartmentBlock[2].Blink, (Blink & 1) != 0) )
  {
LABEL_30:
    v2 = -1073741811;
    goto LABEL_20;
  }
  if ( (Blink & 2) == 0 )
  {
    v4 = 1;
    LODWORD(v7[2].Blink) = Blink | 2;
  }
  Flink_low = LODWORD(v7[3].Flink);
  if ( (int)Flink_low <= 0 )
  {
    v10 = v7[1].Blink;
    if ( v10 == (_LIST_ENTRY *)&v7[1].Blink )
    {
LABEL_16:
      v11 = v7[3].Blink;
      v12 = v11[3].Blink;
      if ( v12 == (_LIST_ENTRY *)&v11[3].Blink )
      {
LABEL_19:
        LODWORD(v7[2].Blink) |= 1u;
        LODWORD(v11[4].Blink) |= 2u;
        goto LABEL_20;
      }
      while ( &v12[-79] == v7[105].Blink )
      {
        v12 = v12->Flink;
        if ( v12 == (_LIST_ENTRY *)&v11[3].Blink )
          goto LABEL_19;
      }
    }
    else
    {
      while ( &v10[-1] == v7[3].Blink )
      {
        v10 = v10->Flink;
        if ( v10 == (_LIST_ENTRY *)&v7[1].Blink )
          goto LABEL_16;
      }
    }
    goto LABEL_30;
  }
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_dd(157LL, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, a1, Flink_low);
  v2 = -1073740024;
LABEL_20:
  KeReleaseSpinLock(&ndisIfListLock, v5);
  if ( v4 )
    ndisNsiNotifyClientCompartmentChange(v7, 2LL);
  if ( v2 >= 0 )
  {
    v15 = v7[105].Blink;
    v16 = WORD2(v15[32].Blink);
    v17 = ((unsigned __int64)v15[82].Flink >> 24) & 0xFFFFFF;
    NdisIfDeregisterInterface(HIDWORD(v15->Flink));
    NdisIfFreeNetLuidIndex(v16, v17);
    memset(v22, 0, 0x48uLL);
    v22[0] = 0LL;
    LODWORD(v22[1]) = 0;
    v22[2] = &NPI_MS_NDIS_MODULEID;
    LODWORD(v22[3]) = 6;
    v22[5] = v7 + 5;
    v22[4] = 0x300000002LL;
    LODWORD(v22[6]) = 16;
    memset(v24, 0, sizeof(v24));
    v24[0] = 34603436;
    v22[7] = v24;
    LODWORD(v22[8]) = 528;
    v2 = NsiSetAllParametersEx(v22);
    if ( v2 >= 0 )
    {
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v18 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      v7[106].Flink = (_LIST_ENTRY *)&Event;
      Flink = v7->Flink;
      p_Flink = (void **)&v7->Blink->Flink;
      if ( v7->Flink->Blink != v7 || *p_Flink != v7 )
        __fastfail(3u);
      *p_Flink = Flink;
      Flink->Blink = (_LIST_ENTRY *)p_Flink;
      _InterlockedDecrement((volatile signed __int32 *)&ndisIfCompartmentCount);
      COMPARTMENTBLOCK_DECREMENT_REF((__int64)v7);
      KeReleaseSpinLock(&ndisIfListLock, v18);
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v7[106].Flink = 0LL;
      ExFreePoolWithTag(v7, 0);
    }
  }
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_Ll(v14, v13, (unsigned int)v2, a1);
  return (unsigned int)v2;
}
