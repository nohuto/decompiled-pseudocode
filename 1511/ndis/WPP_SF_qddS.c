/*
 * XREFs of WPP_SF_qddS @ 0x1C006CBA8
 * Callers:
 *     ?NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@PEAKPEAU_NDIS_PD_QUEUE_PARAMETERS@@33@Z @ 0x1C00D8850 (-NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PAR.c)
 *     ?NdisPDPIAllocateQueue@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@@Z @ 0x1C00D8EF0 (-NdisPDPIAllocateQueue@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAPEAU.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049CC0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qddS(unsigned __int16 a1, __int64 a2, __int64 a3, int a4, char a5, const wchar_t *a6)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  const wchar_t *v9; // rcx
  __int64 v10; // [rsp+80h] [rbp+18h] BYREF
  int v11; // [rsp+88h] [rbp+20h] BYREF

  v11 = a4;
  v10 = a3;
  if ( a6 )
  {
    if ( *a6 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( a6[v8] );
      v7 = 2 * v8 + 2;
    }
    else
    {
      v7 = 14LL;
    }
  }
  else
  {
    v7 = 10LL;
  }
  if ( a6 )
  {
    v9 = L"<NULL>";
    if ( *a6 )
      v9 = a6;
  }
  else
  {
    v9 = L"NULL";
  }
  ndisWppFastTraceMessage(
    &WPP_1c2478f64746bbfe15c5e36ca64a789d_Traceguids,
    a1,
    &v10,
    8LL,
    &v11,
    4LL,
    &a5,
    4LL,
    v9,
    v7,
    0LL);
}
