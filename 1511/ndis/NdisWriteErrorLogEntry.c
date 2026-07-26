/*
 * XREFs of NdisWriteErrorLogEntry @ 0x1C0016460
 * Callers:
 *     ndisMIndicatePDConfigChange @ 0x1C006D1F0 (ndisMIndicatePDConfigChange.c)
 *     ndisMInitializeScatterGatherDma @ 0x1C00A9E6C (ndisMInitializeScatterGatherDma.c)
 *     ndisQueryPowerCapabilities @ 0x1C00AAE3C (ndisQueryPowerCapabilities.c)
 *     ndisMInitializeAdapter @ 0x1C00E405C (ndisMInitializeAdapter.c)
 *     NdisMAllocateMapRegisters @ 0x1C00ED960 (NdisMAllocateMapRegisters.c)
 * Callees:
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     Template_jqxzqqQR5 @ 0x1C00572BC (Template_jqxzqqQR5.c)
 */

void NdisWriteErrorLogEntry(NDIS_HANDLE NdisAdapterHandle, ULONG ErrorCode, ULONG NumberOfErrorValues, ...)
{
  __int64 v5; // rax
  size_t v6; // rbp
  const void *v7; // r15
  size_t v8; // r14
  __int64 v9; // rax
  char *ErrorLogEntry; // rax
  void *v11; // rbx
  ULONG v12; // edx
  ULONG *v13; // r8
  __int64 v14; // rcx
  ULONG v15; // [rsp+A0h] [rbp+18h] BYREF

  v15 = NumberOfErrorValues;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_qD(10LL, &WPP_16c28ebb9fa84dacc642b00af20fc2f4_Traceguids, NdisAdapterHandle, ErrorCode);
    NumberOfErrorValues = v15;
  }
  if ( NdisAdapterHandle )
  {
    v5 = *((_QWORD *)NdisAdapterHandle + 489);
    v6 = *(unsigned __int16 *)(v5 + 2);
    v7 = *(const void **)(v5 + 8);
    v8 = v6;
    v9 = v6 + 48 + 4LL * NumberOfErrorValues;
    if ( v9 <= 0xFFFFFFFFLL )
    {
      if ( (unsigned int)v9 <= 0xF0
        || (v6 = *((unsigned __int16 *)NdisAdapterHandle + 1933),
            v7 = (const void *)*((_QWORD *)NdisAdapterHandle + 484),
            v8 = v6,
            v9 = v6 + 48 + 4LL * NumberOfErrorValues,
            v9 <= 0xFFFFFFFFLL)
        && (unsigned int)v9 <= 0xF0 )
      {
        ErrorLogEntry = (char *)IoAllocateErrorLogEntry(*((PVOID *)NdisAdapterHandle + 485), v9);
        v11 = ErrorLogEntry;
        if ( ErrorLogEntry )
        {
          *((_DWORD *)ErrorLogEntry + 3) = ErrorCode;
          *(_WORD *)ErrorLogEntry = 0;
          v12 = 0;
          *((_QWORD *)ErrorLogEntry + 2) = 0LL;
          *((_QWORD *)ErrorLogEntry + 3) = 0LL;
          *((_WORD *)ErrorLogEntry + 1) = 4 * v15;
          if ( v15 )
          {
            v13 = &v15;
            do
            {
              v14 = v12;
              v13 += 2;
              ++v12;
              *(_DWORD *)&ErrorLogEntry[4 * v14 + 40] = *v13;
            }
            while ( v12 < v15 );
          }
          if ( (_DWORD)v6 )
          {
            *((_WORD *)ErrorLogEntry + 2) = 1;
            *((_WORD *)ErrorLogEntry + 3) = 4 * (v15 + 12);
            memmove(&ErrorLogEntry[4 * v15 + 48], v7, v8);
          }
          else
          {
            *((_WORD *)ErrorLogEntry + 2) = 0;
          }
          if ( (Microsoft_Windows_NDISEnableBits & 0x2000000000LL) != 0 )
            Template_jqxzqqQR5(
              *((_QWORD *)NdisAdapterHandle + 489),
              v12,
              (_DWORD)NdisAdapterHandle + 4064,
              (_DWORD)NdisAdapterHandle + 4064,
              *((_DWORD *)NdisAdapterHandle + 1028),
              *((_QWORD *)NdisAdapterHandle + 510),
              *(_QWORD *)(*((_QWORD *)NdisAdapterHandle + 489) + 8LL),
              ErrorCode,
              v15,
              (__int64)v11 + 40);
          IoWriteErrorLogEntry(v11);
        }
      }
    }
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(11LL, &WPP_16c28ebb9fa84dacc642b00af20fc2f4_Traceguids, NdisAdapterHandle, ErrorCode);
}
