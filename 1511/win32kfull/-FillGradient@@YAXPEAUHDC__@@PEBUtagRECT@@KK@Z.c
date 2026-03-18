/*
 * XREFs of ?FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z @ 0x1C0236ADC
 * Callers:
 *     ?FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z @ 0x1C0236A84 (-FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z.c)
 * Callees:
 *     GreGradientFill @ 0x1C0019264 (GreGradientFill.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

void __fastcall FillGradient(HDC a1, const struct tagRECT *a2, int a3, int a4)
{
  LONG bottom; // eax
  _TRIVERTEX v5; // [rsp+30h] [rbp-58h] BYREF
  LONG right; // [rsp+40h] [rbp-48h]
  LONG v7; // [rsp+44h] [rbp-44h]
  __int16 v8; // [rsp+48h] [rbp-40h]
  __int16 v9; // [rsp+4Ah] [rbp-3Eh]
  __int16 v10; // [rsp+4Ch] [rbp-3Ch]

  v5.Red = (unsigned __int8)a3 << 8;
  v5.Green = a3 & 0xFF00;
  v5.Blue = BYTE2(a3) << 8;
  v8 = (unsigned __int8)a4 << 8;
  v10 = BYTE2(a4) << 8;
  v5.x = a2->left;
  v5.y = a2->top;
  right = a2->right;
  bottom = a2->bottom;
  v9 = a4 & 0xFF00;
  v7 = bottom;
  GreGradientFill(a1, &v5, 2u, (unsigned int *)&unk_1C03205E0, 1u, 0);
}
