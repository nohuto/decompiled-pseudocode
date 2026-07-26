/*
 * XREFs of WPP_SF_SZ @ 0x1C003DDBC
 * Callers:
 *     Ndis::BindRegistry::LoadNetworkInterfaceString @ 0x1C009D5C8 (Ndis--BindRegistry--LoadNetworkInterfaceString.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049420 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_SZ(__int64 a1, __int64 a2, const wchar_t *a3, __int64 *a4)
{
  __int64 v4; // rax
  __int64 v5; // r10
  const wchar_t *v6; // rcx
  const wchar_t *v7; // rdx
  __int64 v8; // rax

  v4 = 10LL;
  if ( a4 && a4[1] )
    v5 = *(unsigned __int16 *)a4;
  else
    v5 = 10LL;
  v6 = L"NULL";
  if ( !a4 || (v7 = (const wchar_t *)a4[1]) == 0LL )
    v7 = L"NULL";
  if ( !a4 || !*(_WORD *)a4 )
    a4 = qword_1C00241B0;
  if ( a3 )
  {
    if ( *a3 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( a3[v8] );
      v4 = 2 * v8 + 2;
    }
    else
    {
      v4 = 14LL;
    }
    v6 = L"<NULL>";
    if ( *a3 )
      v6 = a3;
  }
  ndisWppFastTraceMessage(&WPP_cd76ffd012ea25d52ded3a3c48a898ed_Traceguids, 0x16u, v6, v4, a4, 2LL, v7, v5, 0LL);
}
