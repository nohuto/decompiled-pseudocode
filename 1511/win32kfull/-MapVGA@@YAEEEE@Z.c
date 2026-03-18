/*
 * XREFs of ?MapVGA@@YAEEEE@Z @ 0x1C028E2D0
 * Callers:
 *     ?MakeITableVGA@@YAHPEAE@Z @ 0x1C028E268 (-MakeITableVGA@@YAHPEAE@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall MapVGA(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int v3; // esi
  int v4; // edi
  int v5; // ebx
  int v6; // edx
  char v7; // r8
  int v8; // r10d
  __int64 v9; // rax
  int v10; // r9d
  int v11; // ecx
  int v12; // r9d

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = (unsigned __int16)word_1C02ED220[(2 * (a1 & 0x18)) | (unsigned __int64)((a2 & 0x18 | (a3 >> 2) & 6u) >> 1)];
  if ( (v6 & 0xFFF0) == 0 )
    return v6 & 0xF;
  v7 = 0;
  v8 = 0x7FFFFFFF;
  while ( v6 )
  {
    v9 = v6 & 0xF;
    v10 = (unsigned __int8)byte_1C0320C71[4 * v9];
    v11 = (unsigned __int8)byte_1C0320C70[4 * v9] - v3;
    LODWORD(v9) = (unsigned __int8)byte_1C0320C72[4 * v9] - v5;
    v12 = v9 * v9 + v11 * v11 + (v10 - v4) * (v10 - v4);
    if ( v12 < v8 )
    {
      v7 = v6 & 0xF;
      v8 = v12;
    }
    v6 >>= 4;
  }
  return v7;
}
