/*
 * XREFs of NtGdiCreatePaletteInternal @ 0x140214E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiCreatePaletteInternal(const unsigned int *a1, unsigned int a2)
{
  __int64 v4; // rdi
  __int64 *v6; // [rsp+60h] [rbp-18h] BYREF
  int v7; // [rsp+68h] [rbp-10h]

  v4 = 1LL;
  if ( a2 > 0x10000 )
    return 0LL;
  GreProbeForReadFromUntrustedVa(a1, (int)(4 * a2 + 4), 1uLL);
  if ( *(_WORD *)a1 != 768 || !a2 )
    v4 = 0LL;
  if ( v4 )
  {
    v7 = 0;
    v6 = 0LL;
    if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v6, 1u, a2, a1 + 1, 0, 0, 0, 0x500u, 0) )
    {
      v7 = 1;
      v4 = *v6;
    }
    else
    {
      v4 = 0LL;
    }
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v6);
  }
  return v4;
}
