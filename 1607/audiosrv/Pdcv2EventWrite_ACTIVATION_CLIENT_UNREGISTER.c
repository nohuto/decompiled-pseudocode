/*
 * XREFs of Pdcv2EventWrite_ACTIVATION_CLIENT_UNREGISTER @ 0x18008EB88
 * Callers:
 *     Pdcv2ActivationClientUnregister @ 0x18008E084 (Pdcv2ActivationClientUnregister.c)
 * Callees:
 *     Template_qqqqzr3 @ 0x18008EBE8 (Template_qqqqzr3.c)
 */

void __fastcall Pdcv2EventWrite_ACTIVATION_CLIENT_UNREGISTER(__int64 a1, int a2)
{
  int v2; // r10d
  const WCHAR *v3; // r8
  __int64 v4; // rax

  v2 = -1;
  v3 = &pwsz;
  if ( a1 )
  {
    v2 = *(_DWORD *)(a1 + 24);
    v3 = (const WCHAR *)(a1 + 92);
  }
  if ( (Microsoft_Windows_PDCEnableBits & 0x200000) != 0 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v3[v4] );
    Template_qqqqzr3(a1, (unsigned int)"r", v2, a2);
  }
}
