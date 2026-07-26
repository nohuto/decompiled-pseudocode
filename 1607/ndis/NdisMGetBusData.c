/*
 * XREFs of NdisMGetBusData @ 0x1C0021A70
 * Callers:
 *     ndisMReadPciPropertiesFromConfigSpace @ 0x1C00B0A44 (ndisMReadPciPropertiesFromConfigSpace.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

ULONG __stdcall NdisMGetBusData(
        NDIS_HANDLE NdisMiniportHandle,
        ULONG WhichSpace,
        ULONG Offset,
        PVOID Buffer,
        ULONG Length)
{
  ULONG v9; // ebx
  __int64 (__fastcall *v10)(__int64, _QWORD, PVOID, _QWORD, ULONG); // r10
  __int64 v11; // rcx

  v9 = 0;
  if ( (unsigned __int8)byte_1C00895CE >= 4u )
    WPP_SF_q(32LL, &WPP_8cdf937d6f313bc131af68fc7a29b768_Traceguids, NdisMiniportHandle);
  if ( (*((_DWORD *)NdisMiniportHandle + 934) & 0x40) != 0 )
    return 0;
  v10 = (__int64 (__fastcall *)(__int64, _QWORD, PVOID, _QWORD, ULONG))*((_QWORD *)NdisMiniportHandle + 469);
  if ( v10 )
  {
    v11 = *((_QWORD *)NdisMiniportHandle + 470);
    if ( v11 )
      v9 = v10(v11, WhichSpace, Buffer, Offset, Length);
  }
  if ( (unsigned __int8)byte_1C00895CE >= 4u )
    WPP_SF_qD(33LL, &WPP_8cdf937d6f313bc131af68fc7a29b768_Traceguids, NdisMiniportHandle, v9);
  return v9;
}
