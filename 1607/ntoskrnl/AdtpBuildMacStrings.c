/*
 * XREFs of AdtpBuildMacStrings @ 0x1406D086C
 * Callers:
 *     AdtpBuildSockAddrString @ 0x1406D12C8 (AdtpBuildSockAddrString.c)
 * Callees:
 *     RtlEthernetAddressToStringW @ 0x140214170 (RtlEthernetAddressToStringW.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AdtpBuildMacStrings(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int v6; // edi
  PVOID PoolWithTag; // rax

  if ( *(_WORD *)a1 == 33 )
  {
    if ( a2 && a3 )
    {
      *(_WORD *)(a2 + 2) = 36;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x24uLL, 0x6B416553u);
      *(_QWORD *)(a2 + 8) = PoolWithTag;
      if ( !PoolWithTag )
      {
        v6 = -1073741801;
        goto LABEL_7;
      }
      *a3 = 1;
      *(_WORD *)a2 = 2
                   * ((__int64)((unsigned int)RtlEthernetAddressToStringW(
                                                (const DL_EUI48 *)(a1 + 2),
                                                *(PWSTR *)(a2 + 8))
                              - *(_DWORD *)(a2 + 8)) >> 1);
    }
    return 0;
  }
  v6 = -1073741503;
LABEL_7:
  if ( a3 && *a3 )
  {
    *a3 = 0;
    ExFreePoolWithTag(*(PVOID *)(a2 + 8), 0);
  }
  return v6;
}
