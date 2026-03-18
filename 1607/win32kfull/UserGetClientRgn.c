/*
 * XREFs of UserGetClientRgn @ 0x1C01DEC30
 * Callers:
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C011C228 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C0279A70 (-vForceClientRgnUpdate@@YAXXZ.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     CalcVisRgn @ 0x1C00D5A60 (CalcVisRgn.c)
 */

HRGN __fastcall UserGetClientRgn(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _OWORD *v4; // rbp
  unsigned int v5; // edi
  int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rbx
  HRGN v10; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0LL;
  v4 = (_OWORD *)a2;
  v5 = 1;
  v6 = a3;
  LOBYTE(a2) = 1;
  v7 = HMValidateHandleNoSecure(a1, a2, a3, a4);
  v8 = v7;
  if ( v7 )
  {
    if ( v6 )
    {
      if ( (*(_BYTE *)(v7 + 55) & 4) != 0 )
        v5 = 17;
    }
    else
    {
      v5 = 24;
    }
    CalcVisRgn(&v10, v7, (struct tagWND *)v7, v5);
    *v4 = *(_OWORD *)(v8 + 128);
  }
  return v10;
}
