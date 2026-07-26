/*
 * XREFs of NdisMConfigMSIXTableEntry @ 0x1C0025200
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qLLL @ 0x1C005D260 (WPP_SF_qLLL.c)
 *     WPP_SF_qLLLL @ 0x1C005FD14 (WPP_SF_qLLLL.c)
 */

NDIS_STATUS __stdcall NdisMConfigMSIXTableEntry(
        NDIS_HANDLE NdisMiniportHandle,
        PNDIS_MSIX_CONFIG_PARAMETERS MSIXConfigParameters)
{
  _QWORD *v3; // rsi
  NDIS_STATUS v4; // edi
  __int64 (__fastcall *v5)(_QWORD, _QWORD, _QWORD); // rax
  NDIS_STATUS v6; // eax
  __int64 (__fastcall *v8)(_QWORD, _QWORD); // rax

  v3 = NdisMiniportHandle;
  v4 = -1073741637;
  if ( (unsigned __int8)byte_1C00895CE >= 4u )
    WPP_SF_qLLL(39LL, &WPP_8cdf937d6f313bc131af68fc7a29b768_Traceguids, NdisMiniportHandle);
  if ( !MSIXConfigParameters->Header.Revision || MSIXConfigParameters->Header.Size < 0x10u )
    goto LABEL_12;
  NdisMiniportHandle = (NDIS_HANDLE)(unsigned int)MSIXConfigParameters->ConfigOperation;
  if ( !(_DWORD)NdisMiniportHandle )
  {
    v5 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v3[543];
    if ( !v5 )
      goto LABEL_9;
    v6 = v5(v3[542], MSIXConfigParameters->TableEntry, MSIXConfigParameters->MessageNumber);
    goto LABEL_8;
  }
  NdisMiniportHandle = (NDIS_HANDLE)(unsigned int)((_DWORD)NdisMiniportHandle - 1);
  if ( (_DWORD)NdisMiniportHandle )
  {
    if ( (_DWORD)NdisMiniportHandle == 1 )
    {
      v8 = (__int64 (__fastcall *)(_QWORD, _QWORD))v3[545];
      goto LABEL_17;
    }
LABEL_12:
    v4 = -1073741811;
    goto LABEL_9;
  }
  v8 = (__int64 (__fastcall *)(_QWORD, _QWORD))v3[544];
LABEL_17:
  if ( v8 )
  {
    v6 = v8(v3[542], MSIXConfigParameters->TableEntry);
LABEL_8:
    v4 = v6;
  }
LABEL_9:
  if ( (unsigned __int8)byte_1C00895CE >= 4u )
    WPP_SF_qLLLL(
      NdisMiniportHandle,
      MSIXConfigParameters,
      v3,
      (unsigned int)MSIXConfigParameters->ConfigOperation,
      MSIXConfigParameters->TableEntry,
      MSIXConfigParameters->MessageNumber,
      v4);
  return v4;
}
