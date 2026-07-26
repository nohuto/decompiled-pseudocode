/*
 * XREFs of WPP_SF_sL @ 0x1C0048C98
 * Callers:
 *     ndisOidPMRemove @ 0x1C00C8644 (ndisOidPMRemove.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_sL(__int64 a1, __int64 a2, const char *a3, int a4)
{
  __int64 v5; // r9
  __int64 v6; // r9
  const char *v7; // r8
  int v8; // [rsp+68h] [rbp+20h] BYREF

  v8 = a4;
  if ( a3 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a3[v5] );
    v6 = v5 + 1;
  }
  else
  {
    v6 = 5LL;
  }
  v7 = "NULL";
  if ( a3 )
    v7 = a3;
  ndisWppFastTraceMessage(&WPP_cb02054c676b38280cb5aae44c86a7fe_Traceguids, 0x4Cu, v7, v6, &v8, 4LL, 0LL);
}
