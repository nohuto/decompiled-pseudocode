/*
 * XREFs of WPP_SF_qS @ 0x1C0071540
 * Callers:
 *     NdisMTriggerPDDrainNotification @ 0x1C00713C0 (NdisMTriggerPDDrainNotification.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qS(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // rax
  __int64 v5; // rax
  const wchar_t *v6; // rcx
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF

  v7 = a3;
  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
    v5 = v4 + 1;
  }
  else
  {
    v5 = 5LL;
  }
  v6 = L"NULL";
  if ( a4 )
    v6 = a4;
  ndisWppFastTraceMessage(&WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, 0x20u, &v7, 8LL, v6, 2 * v5, 0LL);
}
