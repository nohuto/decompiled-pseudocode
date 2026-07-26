/*
 * XREFs of NdisMMapIoSpace @ 0x1C00B0F60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     WPP_SF_qLLL @ 0x1C00590B8 (WPP_SF_qLLL.c)
 *     ndisTranslateResources @ 0x1C00B1008 (ndisTranslateResources.c)
 */

NDIS_STATUS __stdcall NdisMMapIoSpace(
        PVOID *VirtualAddress,
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_PHYSICAL_ADDRESS PhysicalAddress,
        UINT Length)
{
  __int64 v5; // rsi
  void *v7; // rax
  int v8; // ebx
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF
  NDIS_PHYSICAL_ADDRESS v12; // [rsp+60h] [rbp+18h]

  v12 = PhysicalAddress;
  v11 = 0LL;
  v5 = Length;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_qLLL(
      0x18u,
      &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids,
      (__int64)MiniportAdapterHandle,
      PhysicalAddress.HighPart,
      PhysicalAddress.LowPart,
      Length);
    PhysicalAddress.LowPart = v12.LowPart;
  }
  if ( (*((_DWORD *)MiniportAdapterHandle + 934) & 0x10) != 0 )
  {
    *VirtualAddress = 0LL;
    return -1073741670;
  }
  else
  {
    if ( (unsigned int)ndisTranslateResources(
                         (_DWORD)MiniportAdapterHandle,
                         3,
                         PhysicalAddress.LowPart,
                         (unsigned int)&v10,
                         (__int64)&v11) )
    {
      v8 = -1073741823;
    }
    else
    {
      v7 = (void *)MmMapIoSpaceEx(v10, v5, 516LL);
      *VirtualAddress = v7;
      v8 = v7 == 0LL ? 0xC000009A : 0;
    }
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_qD(0x19u, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64)MiniportAdapterHandle, v8);
    return v8;
  }
}
