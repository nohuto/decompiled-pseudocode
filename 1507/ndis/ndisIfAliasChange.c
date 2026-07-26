/*
 * XREFs of ndisIfAliasChange @ 0x1C00207CC
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C0099308 (ndisHandleUModePnPOp.c)
 * Callees:
 *     ndisReferenceWithTag @ 0x1C00068E0 (ndisReferenceWithTag.c)
 *     IFBLOCK_DECREMENT_REF @ 0x1C001A110 (IFBLOCK_DECREMENT_REF.c)
 *     ndisIfFindInterfaceByInterfaceGuid @ 0x1C001D5A0 (ndisIfFindInterfaceByInterfaceGuid.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     memmove @ 0x1C0023700 (memmove.c)
 *     WPP_SF_d @ 0x1C003DCF4 (WPP_SF_d.c)
 *     WPP_SF_ZZ @ 0x1C003DF78 (WPP_SF_ZZ.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00A7548 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     ?ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z @ 0x1C00B2294 (-ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z.c)
 */

__int64 __fastcall ndisIfAliasChange(__int64 a1, __int64 a2)
{
  unsigned __int16 v4; // ax
  NTSTATUS v5; // edi
  KIRQL v6; // r15
  struct _LIST_ENTRY *InterfaceByInterfaceGuid; // rsi
  _WORD *v9; // rbx
  struct _NDIS_REFCOUNT_BLOCK *Flink; // rcx
  KIRQL v11; // bl
  UNICODE_STRING GuidString; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v13[3]; // [rsp+30h] [rbp-30h] BYREF
  GUID Guid; // [rsp+48h] [rbp-18h] BYREF

  *(_DWORD *)&GuidString.Length = 0;
  GuidString.Buffer = 0LL;
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_ZZ(a1, a2, a1, a2, *(_DWORD *)&GuidString.Length, GuidString.Buffer);
  v4 = *(_WORD *)a1 - ndisDeviceStr.Length;
  GuidString.Buffer = (wchar_t *)(*(_QWORD *)(a1 + 8) + 2 * ((unsigned __int64)ndisDeviceStr.Length >> 1));
  GuidString.Length = v4;
  GuidString.MaximumLength = v4 + 2;
  v5 = RtlGUIDFromString(&GuidString, &Guid);
  if ( v5 >= 0 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    InterfaceByInterfaceGuid = ndisIfFindInterfaceByInterfaceGuid((__int64)&Guid);
    if ( InterfaceByInterfaceGuid )
    {
      v9 = (_WORD *)&InterfaceByInterfaceGuid[37].Flink + 2;
      if ( *(_WORD *)a2 > 0x200u )
        *v9 = 512;
      else
        *v9 = *(_WORD *)a2;
      memmove((char *)&InterfaceByInterfaceGuid[37].Flink + 6, *(const void **)(a2 + 8), (unsigned __int16)*v9);
      Flink = (struct _NDIS_REFCOUNT_BLOCK *)InterfaceByInterfaceGuid[90].Flink;
      v13[0] = 0LL;
      v13[2] = 0x1400000204LL;
      v13[1] = (char *)InterfaceByInterfaceGuid + 596;
      ndisReferenceWithTag(Flink, 0xBu);
      ++LODWORD(InterfaceByInterfaceGuid[81].Blink);
      KeReleaseSpinLock(&ndisIfListLock, v6);
      ndisIfUpdatePersistedInterfaceInfo(
        (unsigned __int8 *)&InterfaceByInterfaceGuid[82],
        0x204u,
        4u,
        (unsigned __int8 *)&InterfaceByInterfaceGuid[37].Flink + 4);
      ndisNsiNotifyClientInterfaceChange(InterfaceByInterfaceGuid, 0LL, v13, 0LL, *(_QWORD *)&GuidString.Length);
      v11 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      IFBLOCK_DECREMENT_REF(InterfaceByInterfaceGuid, 0xBu);
      KeReleaseSpinLock(&ndisIfListLock, v11);
    }
    else
    {
      KeReleaseSpinLock(&ndisIfListLock, v6);
      v5 = -1073741772;
    }
  }
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_d(164LL, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, (unsigned int)v5);
  return (unsigned int)v5;
}
