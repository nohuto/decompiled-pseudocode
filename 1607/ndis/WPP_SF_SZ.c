/*
 * XREFs of WPP_SF_SZ @ 0x1C0042AC0
 * Callers:
 *     Ndis::BindRegistry::LoadNetworkInterfaceString @ 0x1C00AF6C4 (Ndis--BindRegistry--LoadNetworkInterfaceString.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_SZ(__int64 a1, __int64 a2, const wchar_t *a3, unsigned __int16 *a4)
{
  int v4; // eax
  const wchar_t *v5; // rcx
  const wchar_t *v6; // r10
  const wchar_t *v7; // rdx
  __int64 v8; // r9
  __int64 v9; // r9

  if ( a4 )
    v4 = *a4;
  else
    v4 = 8;
  v5 = L"NULL";
  if ( a4 )
    v6 = (const wchar_t *)*((_QWORD *)a4 + 1);
  else
    v6 = L"NULL";
  v7 = L"\b";
  if ( a4 )
    v7 = a4;
  if ( a3 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a3[v8] );
    v9 = v8 + 1;
  }
  else
  {
    v9 = 5LL;
  }
  if ( a3 )
    v5 = a3;
  ndisWppFastTraceMessage(&WPP_ae77cdcf3d7d3f019c4f0d9a724dcfbd_Traceguids, 0x16u, v5, 2 * v9, v7, 2LL, v6, v4, 0LL);
}
