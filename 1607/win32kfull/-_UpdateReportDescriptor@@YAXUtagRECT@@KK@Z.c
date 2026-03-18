/*
 * XREFs of ?_UpdateReportDescriptor@@YAXUtagRECT@@KK@Z @ 0x1C015A4C0
 * Callers:
 *     CreatePseudoDigitizerDevice @ 0x1C01D631C (CreatePseudoDigitizerDevice.c)
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

  byte_1C03254B2 = a3;
  v3 = a3 >> 8;
  byte_1C0325524 = a3;
  byte_1C0325596 = a3;
  byte_1C0325608 = a3;
  v4 = (a1->right - a1->left) >> 8;
  v5 = LOBYTE(a1->right) - LOBYTE(a1->left);
  word_1C03254AD = a2;
  word_1C032551F = a2;
  word_1C0325591 = a2;
  word_1C0325603 = a2;
  v6 = LOBYTE(a1->bottom) - LOBYTE(a1->top);
  byte_1C03254B3 = v3;
  byte_1C0325525 = v3;
  byte_1C0325597 = v3;
  byte_1C0325609 = v3;
  v7 = a1->bottom - a1->top;
  byte_1C03254A0 = v5;
  byte_1C03254B6 = BYTE1(v7);
  byte_1C0325528 = BYTE1(v7);
  byte_1C032559A = BYTE1(v7);
  byte_1C032560C = BYTE1(v7);
  byte_1C03254A1 = v4;
  byte_1C03254B5 = v6;
  byte_1C0325512 = v5;
  byte_1C0325513 = v4;
  byte_1C0325527 = v6;
  byte_1C0325584 = v5;
  byte_1C0325585 = v4;
  byte_1C0325599 = v6;
  byte_1C03255F6 = v5;
  byte_1C03255F7 = v4;
  byte_1C032560B = v6;
}
