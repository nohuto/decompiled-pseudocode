/*
 * XREFs of ndisIfSetIfDescr @ 0x1C0020978
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C00E5000 (ndisHandlePnPRequest.c)
 * Callees:
 *     ndisReferenceWithTag @ 0x1C00068E0 (ndisReferenceWithTag.c)
 *     IFBLOCK_DECREMENT_REF @ 0x1C001A110 (IFBLOCK_DECREMENT_REF.c)
 *     ndisIfFindInterfaceByNetLuid @ 0x1C001ACC0 (ndisIfFindInterfaceByNetLuid.c)
 *     memmove @ 0x1C0023700 (memmove.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00A7548 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     ?ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z @ 0x1C00B2294 (-ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z.c)
 */

__int64 __fastcall ndisIfSetIfDescr(__int64 a1)
{
  unsigned int updated; // r14d
  char v3; // r15
  _LIST_ENTRY *v4; // rbx
  KIRQL v5; // r12
  _LIST_ENTRY *InterfaceByNetLuid; // rax
  _LIST_ENTRY *v7; // rdi
  _WORD *p_Blink; // rbx
  __int16 v9; // ax
  KIRQL v10; // bl
  _UNICODE_STRING String2; // [rsp+20h] [rbp-40h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v14[4]; // [rsp+40h] [rbp-20h] BYREF

  updated = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  v3 = 0;
  DestinationString.Buffer = 0LL;
  *(_DWORD *)&String2.Length = 0;
  String2.Buffer = 0LL;
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_q(191LL, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, a1);
  if ( a1 )
  {
    v4 = (_LIST_ENTRY *)((*(_DWORD *)a1 & 0xFFFFFF | ((unsigned __int64)*(unsigned __int16 *)(a1 + 4) << 24)) << 24);
    v5 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid(v4);
    v7 = InterfaceByNetLuid;
    if ( InterfaceByNetLuid )
    {
      ndisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)InterfaceByNetLuid[90].Flink, 0xDu);
      ++LODWORD(v7[81].Blink);
      KeReleaseSpinLock(&ndisIfListLock, v5);
      p_Blink = &v7->Blink;
      if ( !LOWORD(v7->Blink)
        || (RtlInitUnicodeString(&DestinationString, (PCWSTR)&v7->Blink + 1),
            RtlInitUnicodeString(&String2, (PCWSTR)(a1 + 10)),
            RtlCompareUnicodeString(&DestinationString, &String2, 1u)) )
      {
        v3 = 1;
      }
      v5 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      if ( v3 )
      {
        memset(&v7->Blink, 0, 0x204uLL);
        v9 = *(_WORD *)(a1 + 8);
        *p_Blink = (unsigned __int16)v9 > 0x200u ? 512 : v9;
        if ( *(_WORD *)(a1 + 8) )
          memmove((char *)&v7->Blink + 2, (const void *)(a1 + 10), (unsigned __int16)*p_Blink);
      }
    }
    else
    {
      updated = -1073741772;
    }
    KeReleaseSpinLock(&ndisIfListLock, v5);
    if ( !updated && v3 )
    {
      if ( BYTE1(v7[87].Blink) )
        updated = ndisIfUpdatePersistedInterfaceInfo(
                    (unsigned __int8 *)&v7[82],
                    0x204u,
                    0x208u,
                    (unsigned __int8 *)&v7->Blink);
      v14[1] = &v7->Blink;
      v14[0] = 2LL;
      v14[2] = 0x400000204LL;
      ndisNsiNotifyClientInterfaceChange(v7, 0LL, v14, 1LL, *(_QWORD *)&String2.Length);
    }
    if ( v7 )
    {
      v10 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      IFBLOCK_DECREMENT_REF(v7, 0xDu);
      KeReleaseSpinLock(&ndisIfListLock, v10);
    }
  }
  else
  {
    updated = -1073741811;
  }
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_qD(192LL, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, a1, updated);
  return updated;
}
