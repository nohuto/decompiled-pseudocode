/*
 * XREFs of ?ndisIfDeleteCompartment@@YAJI@Z @ 0x1C0040174
 * Callers:
 *     ?ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C0041A30 (-ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ndisIfDereferenceCompartmentForUser @ 0x1C0043878 (ndisIfDereferenceCompartmentForUser.c)
 * Callees:
 *     COMPARTMENTBLOCK_DECREMENT_REF @ 0x1C000D73C (COMPARTMENTBLOCK_DECREMENT_REF.c)
 *     ndisIfFindCompartmentBlock @ 0x1C000D750 (ndisIfFindCompartmentBlock.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_Ll @ 0x1C0042A28 (WPP_SF_Ll.c)
 *     WPP_SF_dd @ 0x1C0042EFC (WPP_SF_dd_ea_1C0042EFC.c)
 *     WPP_SF_l @ 0x1C0043094 (WPP_SF_l.c)
 *     NdisIfFreeNetLuidIndex @ 0x1C009CBB0 (NdisIfFreeNetLuidIndex.c)
 *     NdisIfDeregisterInterface @ 0x1C009CC90 (NdisIfDeregisterInterface.c)
 *     ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x1C00AE2F8 (-ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@.c)
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
  _LIST_ENTRY *v21; // rcx
  _QWORD v23[10]; // [rsp+38h] [rbp-D0h] BYREF
  struct _KEVENT Event; // [rsp+88h] [rbp-80h] BYREF
  _DWORD v25[132]; // [rsp+A8h] [rbp-60h] BYREF

  v2 = 0;
  v4 = 0;
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
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
LABEL_32:
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
      while ( &v12[-79] == v7[106].Blink )
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
    goto LABEL_32;
  }
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_dd(157LL, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, a1, Flink_low);
  v2 = -1073740024;
LABEL_20:
  KeReleaseSpinLock(&ndisIfListLock, v5);
  if ( v4 )
    ndisNsiNotifyClientCompartmentChange(v7, 2LL);
  if ( v2 >= 0 )
  {
    v15 = v7[106].Blink;
    v16 = WORD2(v15[32].Blink);
    v17 = ((unsigned __int64)v15[82].Flink >> 24) & 0xFFFFFF;
    NdisIfDeregisterInterface(HIDWORD(v15->Flink));
    NdisIfFreeNetLuidIndex(v16, v17);
    memset(v23, 0, 0x48uLL);
    v23[0] = 0LL;
    LODWORD(v23[1]) = 0;
    v23[2] = &NPI_MS_NDIS_MODULEID;
    LODWORD(v23[3]) = 6;
    v23[5] = v7 + 5;
    v23[4] = 0x300000002LL;
    LODWORD(v23[6]) = 16;
    memset(v25, 0, sizeof(v25));
    v25[0] = 34603436;
    v23[7] = v25;
    LODWORD(v23[8]) = 528;
    v2 = NsiSetAllParametersEx(v23);
    if ( v2 >= 0 )
    {
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v18 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      v7[107].Flink = (_LIST_ENTRY *)&Event;
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
      v21 = v7[107].Blink;
      v7[107].Flink = 0LL;
      if ( v21 )
      {
        ObfDereferenceObject(v21);
        v7[107].Blink = 0LL;
      }
      ExFreePoolWithTag(v7, 0);
    }
  }
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_Ll(v14, v13, (unsigned int)v2, a1);
  return (unsigned int)v2;
}
