/*
 * XREFs of NdisGetProcessorInformationEx @ 0x1C0022DF0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0026C00 (memmove.c)
 */

NDIS_STATUS __stdcall NdisGetProcessorInformationEx(
        NDIS_HANDLE NdisHandle,
        PNDIS_SYSTEM_PROCESSOR_INFO_EX SystemProcessorInfo,
        PSIZE_T Size)
{
  NDIS_STATUS v3; // ebx
  _QWORD *v7; // rdi
  size_t v8; // rbp
  char v9; // cl
  ULONG v10; // r8d
  _WORD *v11; // rdx
  __int64 v12; // rcx
  NDIS_STATUS result; // eax

  v3 = 0;
  v7 = 0LL;
  v8 = 20 * (ndisMaxNumberOfProcessors + 2LL);
  if ( *Size < v8 )
  {
    v3 = -1073676266;
    goto LABEL_11;
  }
  if ( NdisHandle )
  {
    v9 = *(_BYTE *)NdisHandle;
    if ( v9 == 17 )
    {
      v7 = NdisHandle;
      goto LABEL_5;
    }
    if ( (unsigned __int8)(v9 - 2) <= 3u )
    {
      if ( v9 != 18 )
        goto LABEL_5;
    }
    else if ( v9 != 18 )
    {
      v3 = -1073741811;
      goto LABEL_11;
    }
    v7 = (_QWORD *)*((_QWORD *)NdisHandle + 2);
  }
LABEL_5:
  memmove(SystemProcessorInfo, (const void *)WPP_MAIN_CB.Dpc.ProcessorHistory, v8);
  v10 = 0;
  if ( SystemProcessorInfo->NumberOfProcessors )
  {
    v11 = (_WORD *)&SystemProcessorInfo[1].NumCores + 1;
    do
    {
      if ( v7 && (v12 = v7[558]) != 0 )
        *v11 = *(_WORD *)(v12 + 2LL * v10);
      else
        *v11 = -1;
      ++v10;
      v11 += 10;
    }
    while ( v10 < SystemProcessorInfo->NumberOfProcessors );
  }
LABEL_11:
  result = v3;
  *Size = v8;
  return result;
}
