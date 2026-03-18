/*
 * XREFs of UserGetClientRgn @ 0x1402A48E4
 * Callers:
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x140080C30 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x14031912C (-vForceClientRgnUpdate@@YAXXZ.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     CalcVisRgn @ 0x14004E180 (CalcVisRgn.c)
 */

HRGN __fastcall UserGetClientRgn(__int64 a1, _OWORD *a2, int a3)
{
  struct tagWND *v5; // rax
  struct tagWND *v6; // rbx
  int v7; // r9d
  HRGN v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  v5 = (struct tagWND *)HMValidateHandleNoSecure(a1, 1);
  v6 = v5;
  if ( v5 )
  {
    if ( a3 )
      v7 = (4 * (*(_BYTE *)(*((_QWORD *)v5 + 5) + 31LL) & 4)) | 1;
    else
      v7 = 24;
    CalcVisRgn(&v9, v5, v5, v7);
    *a2 = *(_OWORD *)(*((_QWORD *)v6 + 5) + 104LL);
  }
  return v9;
}
