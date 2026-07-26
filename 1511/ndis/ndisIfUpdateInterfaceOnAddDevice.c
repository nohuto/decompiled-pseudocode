/*
 * XREFs of ndisIfUpdateInterfaceOnAddDevice @ 0x1C001F998
 * Callers:
 *     ndisCheckIfTypeMismatch @ 0x1C0058FF4 (ndisCheckIfTypeMismatch.c)
 *     ndisAddDevice @ 0x1C00E1708 (ndisAddDevice.c)
 * Callees:
 *     ndisReferenceWithTag @ 0x1C0007F00 (ndisReferenceWithTag.c)
 *     ndisFreeRefCount @ 0x1C0013468 (ndisFreeRefCount.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C009FF84 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     ndisAllocateRefCount @ 0x1C00A01D4 (ndisAllocateRefCount.c)
 *     ndisNsiSyncMiniportOperStatusNotification @ 0x1C00A930C (ndisNsiSyncMiniportOperStatusNotification.c)
 *     ?ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z @ 0x1C00BF074 (-ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z.c)
 */

__int64 __fastcall ndisIfUpdateInterfaceOnAddDevice(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v3; // r15d
  char v4; // r14
  __int64 v5; // rbx
  _WORD *v6; // rsi
  struct _NDIS_REFCOUNT_BLOCK *RefCount; // r12
  KIRQL v8; // r13
  struct _NDIS_REFCOUNT_BLOCK *v9; // rcx
  _BYTE *v11; // rcx
  __int16 v12; // cx
  __int64 v13; // [rsp+20h] [rbp-40h]
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-30h] BYREF
  __int64 v15; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+48h] [rbp-18h]
  __int64 v17; // [rsp+50h] [rbp-10h]

  v2 = a2;
  v3 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  v4 = 0;
  DestinationString.Buffer = 0LL;
  v5 = a1;
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_qq(178LL, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, a1, a2);
  v6 = (_WORD *)(v5 + 8);
  if ( !*(_WORD *)(v5 + 8)
    || (RtlInitUnicodeString(&DestinationString, (PCWSTR)(v5 + 10)),
        RtlCompareUnicodeString(&DestinationString, *(PCUNICODE_STRING *)(v2 + 3912), 1u)) )
  {
    v4 = 1;
  }
  LOBYTE(a2) = 2;
  LOBYTE(a1) = 21;
  RefCount = (struct _NDIS_REFCOUNT_BLOCK *)ndisAllocateRefCount(a1, a2);
  v8 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  if ( *(_BYTE *)(v5 + 1403) )
  {
    v3 = -1073741823;
    KeReleaseSpinLock(&ndisIfListLock, v8);
    v11 = *(_BYTE **)(v5 + 1448);
    if ( v11 )
      *v11 &= ~2u;
    ndisFreeRefCount(RefCount);
  }
  else
  {
    if ( v4 )
    {
      memset((void *)(v5 + 8), 0, 0x204uLL);
      v12 = **(_WORD **)(v2 + 3912);
      *v6 = (unsigned __int16)v12 <= 0x200u ? v12 : 512;
      if ( *v6 )
        memmove((void *)(v5 + 10), *(const void **)(*(_QWORD *)(v2 + 3912) + 8LL), (unsigned __int16)*v6);
    }
    v9 = *(struct _NDIS_REFCOUNT_BLOCK **)(v5 + 1440);
    *(_DWORD *)(v5 + 1192) = *(_DWORD *)(v2 + 4116);
    *(_QWORD *)(v5 + 1112) = 2LL;
    ndisReferenceWithTag(v9, 0xCu);
    ++*(_DWORD *)(v5 + 1304);
    *(_WORD *)(v5 + 1460) = 0;
    KeAcquireSpinLockAtDpcLevel(&ndisIfBlockMiniportLinkLock);
    *(_BYTE *)(v5 + 1403) = 1;
    *(_DWORD *)(v5 + 1404) = 1;
    *(_QWORD *)(v5 + 1416) = v2;
    *(_QWORD *)(v5 + 1448) = RefCount;
    *(_QWORD *)(v2 + 4096) = v5;
    *(_BYTE *)(v2 + 4088) = 1;
    KeReleaseSpinLockFromDpcLevel(&ndisIfBlockMiniportLinkLock);
    *(_DWORD *)(v2 + 4112) = *(_DWORD *)(v5 + 4);
    *(_QWORD *)(v2 + 4080) = *(_QWORD *)(v5 + 1312);
    *(_DWORD *)(v2 + 4120) = *(_DWORD *)(v5 + 1112);
    *(_DWORD *)(v2 + 4124) = 0;
    KeReleaseSpinLock(&ndisIfListLock, v8);
    if ( v4 )
    {
      ndisIfUpdatePersistedInterfaceInfo((unsigned __int8 *)(v5 + 1312), 0x204u, 0x208u, (unsigned __int8 *)(v5 + 8));
      v16 = v5 + 8;
      v15 = 2LL;
      v17 = 0x400000204LL;
      ndisNsiNotifyClientInterfaceChange(v5, 0LL, &v15, 1LL, v13);
    }
    v15 = 0LL;
    v16 = v5 + 1192;
    v17 = 0x1000000004LL;
    ndisNsiNotifyClientInterfaceChange(v5, 0LL, &v15, 0LL, v13);
    ndisNsiSyncMiniportOperStatusNotification(v2);
  }
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_qqd(179LL, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, v5, v2, v3);
  return v3;
}
