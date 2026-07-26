/*
 * XREFs of WPP_SF_qdSS @ 0x1C006CA54
 * Callers:
 *     ?NdisPDPIAllocateCounter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_COUNTER_PARAMETERS@@PEAPEAUNDIS_PD_COUNTER_HANDLE__@@@Z @ 0x1C00D8CE0 (-NdisPDPIAllocateCounter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_COUNTER_PARAMETERS@@PEA.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049CC0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qdSS(__int64 a1, __int64 a2, __int64 a3, int a4, const wchar_t *a5, const wchar_t *a6)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  const wchar_t *v10; // rcx
  const wchar_t *v11; // r10
  __int64 v12; // [rsp+80h] [rbp+18h] BYREF
  int v13; // [rsp+88h] [rbp+20h] BYREF

  v13 = a4;
  v12 = a3;
  v6 = -1LL;
  v7 = 14LL;
  if ( a6 )
  {
    if ( *a6 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( a6[v9] );
      v8 = 2 * v9 + 2;
    }
    else
    {
      v8 = 14LL;
    }
  }
  else
  {
    v8 = 10LL;
  }
  v10 = L"<NULL>";
  if ( a6 )
  {
    v11 = L"<NULL>";
    if ( *a6 )
      v11 = a6;
  }
  else
  {
    v11 = L"NULL";
  }
  if ( a5 )
  {
    if ( *a5 )
    {
      do
        ++v6;
      while ( a5[v6] );
      v7 = 2 * v6 + 2;
    }
  }
  else
  {
    v7 = 10LL;
  }
  if ( a5 )
  {
    if ( *a5 )
      v10 = a5;
  }
  else
  {
    v10 = L"NULL";
  }
  ndisWppFastTraceMessage(
    &WPP_1c2478f64746bbfe15c5e36ca64a789d_Traceguids,
    0x2Au,
    &v12,
    8LL,
    &v13,
    4LL,
    v10,
    v7,
    v11,
    v8,
    0LL);
}
