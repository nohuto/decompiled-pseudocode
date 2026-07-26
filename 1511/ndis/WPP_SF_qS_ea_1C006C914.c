/*
 * XREFs of WPP_SF_qS @ 0x1C006C914
 * Callers:
 *     NdisMTriggerPDDrainNotification @ 0x1C006C770 (NdisMTriggerPDDrainNotification.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049CC0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qS(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  const wchar_t *v6; // rax
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF

  v7 = a3;
  if ( a4 )
  {
    if ( *a4 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( a4[v5] );
      v4 = 2 * v5 + 2;
    }
    else
    {
      v4 = 14LL;
    }
  }
  else
  {
    v4 = 10LL;
  }
  if ( a4 )
  {
    v6 = L"<NULL>";
    if ( *a4 )
      v6 = a4;
  }
  else
  {
    v6 = L"NULL";
  }
  ndisWppFastTraceMessage(&WPP_1c2478f64746bbfe15c5e36ca64a789d_Traceguids, 0x20u, &v7, 8LL, v6, v4, 0LL);
}
