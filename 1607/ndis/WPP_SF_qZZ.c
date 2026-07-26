/*
 * XREFs of WPP_SF_qZZ @ 0x1C005AD18
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005B088 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisOpenAdapterEx @ 0x1C00E75A0 (NdisOpenAdapterEx.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qZZ(unsigned __int16 a1, __int64 a2, __int64 a3, unsigned __int16 *a4, unsigned __int16 *a5)
{
  int v6; // r11d
  const wchar_t *v7; // rdx
  const wchar_t *v8; // rbx
  const wchar_t *v9; // r10
  const wchar_t *v10; // r8
  int v11; // ecx
  __int64 v12; // [rsp+90h] [rbp+18h] BYREF

  v12 = a3;
  if ( a5 )
    v6 = *a5;
  else
    v6 = 8;
  v7 = L"NULL";
  if ( a5 )
    v8 = (const wchar_t *)*((_QWORD *)a5 + 1);
  else
    v8 = L"NULL";
  v9 = L"\b";
  v10 = L"\b";
  if ( a5 )
    v10 = a5;
  if ( a4 )
    v11 = *a4;
  else
    v11 = 8;
  if ( a4 )
  {
    v7 = (const wchar_t *)*((_QWORD *)a4 + 1);
    v9 = a4;
  }
  ndisWppFastTraceMessage(
    &WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids,
    a1,
    &v12,
    8LL,
    v9,
    2LL,
    v7,
    v11,
    v10,
    2LL,
    v8,
    v6,
    0LL);
}
