/*
 * XREFs of UserGetClientRgn @ 0x1C01E83B8
 * Callers:
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00FA7B8 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C027B8A4 (-vForceClientRgnUpdate@@YAXXZ.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     CalcVisRgn @ 0x1C006AE10 (CalcVisRgn.c)
 */

HRGN __fastcall UserGetClientRgn(unsigned __int64 a1, _OWORD *a2, int a3)
{
  unsigned int v4; // edi
  __int64 v6; // rax
  __int64 v7; // rbx
  HRGN v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  v4 = 1;
  v6 = HMValidateHandleNoSecure(a1, 1);
  v7 = v6;
  if ( v6 )
  {
    if ( a3 )
    {
      if ( (*(_BYTE *)(v6 + 55) & 4) != 0 )
        v4 = 17;
    }
    else
    {
      v4 = 24;
    }
    CalcVisRgn(&v9, v6, (struct tagWND *)v6, v4);
    *a2 = *(_OWORD *)(v7 + 128);
  }
  return v9;
}
