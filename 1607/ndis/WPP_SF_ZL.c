/*
 * XREFs of WPP_SF_ZL @ 0x1C005AC94
 * Callers:
 *     ndisValidate60Protocol @ 0x1C00A1C9C (ndisValidate60Protocol.c)
 *     ndisValidateLegacyProtocols @ 0x1C00CF7A4 (ndisValidateLegacyProtocols.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_ZL(unsigned __int16 a1, __int64 a2, unsigned __int16 *a3, int a4)
{
  int v6; // edx
  const wchar_t *v7; // rcx
  const wchar_t *v8; // r8
  int v9; // [rsp+78h] [rbp+20h] BYREF

  v9 = a4;
  if ( a3 )
    v6 = *a3;
  else
    v6 = 8;
  if ( a3 )
    v7 = (const wchar_t *)*((_QWORD *)a3 + 1);
  else
    v7 = L"NULL";
  v8 = L"\b";
  if ( a3 )
    v8 = a3;
  ndisWppFastTraceMessage(&WPP_5a7dd1586dbc3ec36657a43c35bc8834_Traceguids, a1, v8, 2LL, v7, v6, &v9, 4LL, 0LL);
}
