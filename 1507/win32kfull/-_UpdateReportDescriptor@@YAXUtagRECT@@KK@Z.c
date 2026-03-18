/*
 * XREFs of ?_UpdateReportDescriptor@@YAXUtagRECT@@KK@Z @ 0x1C015D5FC
 * Callers:
 *     CreatePseudoDigitizerDevice @ 0x1C01DEB78 (CreatePseudoDigitizerDevice.c)
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

  byte_1C03203A2 = a3;
  v3 = a3 >> 8;
  byte_1C0320414 = a3;
  byte_1C0320486 = a3;
  byte_1C03204F8 = a3;
  v4 = (a1->right - a1->left) >> 8;
  v5 = LOBYTE(a1->right) - LOBYTE(a1->left);
  word_1C032039D = a2;
  word_1C032040F = a2;
  word_1C0320481 = a2;
  word_1C03204F3 = a2;
  v6 = LOBYTE(a1->bottom) - LOBYTE(a1->top);
  byte_1C03203A3 = v3;
  byte_1C0320415 = v3;
  byte_1C0320487 = v3;
  byte_1C03204F9 = v3;
  v7 = a1->bottom - a1->top;
  byte_1C0320390 = v5;
  byte_1C03203A6 = BYTE1(v7);
  byte_1C0320418 = BYTE1(v7);
  byte_1C032048A = BYTE1(v7);
  byte_1C03204FC = BYTE1(v7);
  byte_1C0320391 = v4;
  byte_1C03203A5 = v6;
  byte_1C0320402 = v5;
  byte_1C0320403 = v4;
  byte_1C0320417 = v6;
  byte_1C0320474 = v5;
  byte_1C0320475 = v4;
  byte_1C0320489 = v6;
  byte_1C03204E6 = v5;
  byte_1C03204E7 = v4;
  byte_1C03204FB = v6;
}
