/*
 * XREFs of NtGdiCreatePaletteInternal @ 0x1C00FBB60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiCreatePaletteInternal(unsigned __int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // r8
  __int64 *v5; // [rsp+50h] [rbp-18h] BYREF
  int v6; // [rsp+58h] [rbp-10h]

  v2 = 1LL;
  if ( a2 > 0x10000 )
    return 0LL;
  if ( 4 * a2 != -4 )
  {
    v3 = a1 + (int)(4 * a2 + 4);
    if ( v3 > W32UserProbeAddress || v3 < a1 )
      *W32UserProbeAddress = 0;
  }
  if ( *(_WORD *)a1 != 768 || !a2 )
    v2 = 0LL;
  if ( v2 )
  {
    v6 = 0;
    v5 = 0LL;
    if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v5, 1u, a2, (unsigned int *)(a1 + 4), 0, 0, 0, 0x500u)
      && (unsigned int)GreSetPaletteOwner(*v5, 2147483650LL) )
    {
      v6 = 1;
      v2 = *v5;
    }
    else
    {
      v2 = 0LL;
    }
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v5);
  }
  return v2;
}
