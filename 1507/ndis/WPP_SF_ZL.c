/*
 * XREFs of WPP_SF_ZL @ 0x1C0056600
 * Callers:
 *     ndisValidate60Protocol @ 0x1C00AE5F0 (ndisValidate60Protocol.c)
 *     ndisValidateLegacyProtocols @ 0x1C00D0974 (ndisValidateLegacyProtocols.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049420 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_ZL(unsigned __int16 a1, __int64 a2, __int64 *a3, int a4)
{
  __int64 v4; // rdx
  const wchar_t *v5; // rax
  int v6; // [rsp+78h] [rbp+20h] BYREF

  v6 = a4;
  if ( a3 && a3[1] )
    v4 = *(unsigned __int16 *)a3;
  else
    v4 = 10LL;
  if ( !a3 || (v5 = (const wchar_t *)a3[1]) == 0LL )
    v5 = L"NULL";
  if ( !a3 || !*(_WORD *)a3 )
    a3 = qword_1C00241B0;
  ndisWppFastTraceMessage(&WPP_0009299248ba37495192320194ebfcad_Traceguids, a1, a3, 2LL, v5, v4, &v6, 4LL, 0LL);
}
