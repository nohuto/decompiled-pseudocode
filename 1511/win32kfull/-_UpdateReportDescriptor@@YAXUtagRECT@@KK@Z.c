/*
 * XREFs of ?_UpdateReportDescriptor@@YAXUtagRECT@@KK@Z @ 0x1C0152DFC
 * Callers:
 *     CreatePseudoDigitizerDevice @ 0x1C01DF17C (CreatePseudoDigitizerDevice.c)
 * Callees:
 *     <none>
 */

void __fastcall _UpdateReportDescriptor(struct tagRECT *a1, __int16 a2, unsigned int a3)
{
  unsigned int v3; // eax
  int v4; // r8d
  char v5; // r9
  char v6; // dl
  int v7; // ecx

  byte_1C0320352 = a3;
  v3 = a3 >> 8;
  byte_1C03203C4 = a3;
  byte_1C0320436 = a3;
  byte_1C03204A8 = a3;
  v4 = (a1->right - a1->left) >> 8;
  v5 = LOBYTE(a1->right) - LOBYTE(a1->left);
  word_1C032034D = a2;
  word_1C03203BF = a2;
  word_1C0320431 = a2;
  word_1C03204A3 = a2;
  v6 = LOBYTE(a1->bottom) - LOBYTE(a1->top);
  byte_1C0320353 = v3;
  byte_1C03203C5 = v3;
  byte_1C0320437 = v3;
  byte_1C03204A9 = v3;
  v7 = a1->bottom - a1->top;
  byte_1C0320340 = v5;
  byte_1C0320356 = BYTE1(v7);
  byte_1C03203C8 = BYTE1(v7);
  byte_1C032043A = BYTE1(v7);
  byte_1C03204AC = BYTE1(v7);
  byte_1C0320341 = v4;
  byte_1C0320355 = v6;
  byte_1C03203B2 = v5;
  byte_1C03203B3 = v4;
  byte_1C03203C7 = v6;
  byte_1C0320424 = v5;
  byte_1C0320425 = v4;
  byte_1C0320439 = v6;
  byte_1C0320496 = v5;
  byte_1C0320497 = v4;
  byte_1C03204AB = v6;
}
