/*
 * XREFs of RtlpHpLfhSubsegmentInitialize @ 0x180042144
 * Callers:
 *     RtlpHpLfhSubsegmentCreate @ 0x180041EFC (RtlpHpLfhSubsegmentCreate.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue32 @ 0x180042338 (RtlpHeapGenerateRandomValue32.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

unsigned __int64 __fastcall RtlpHpLfhSubsegmentInitialize(char *a1, unsigned int a2, unsigned int a3)
{
  __int16 v3; // r15
  unsigned int v5; // esi
  unsigned int v6; // ecx
  int v7; // edi
  unsigned int v8; // ebx
  __int64 v9; // rbp
  unsigned __int64 v10; // r8
  unsigned int v11; // eax
  __int64 v12; // rcx
  char *v13; // rcx
  char *v14; // rdx
  char *v15; // rcx
  unsigned __int64 v16; // rax
  unsigned int LowFragHeapDataSlot; // edi
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rcx
  unsigned __int64 result; // rax
  int v21; // [rsp+58h] [rbp+10h]

  v3 = a3;
  if ( (RtlpHpAppCompatFlags & 4) != 0 )
  {
    v5 = a2;
  }
  else
  {
    v5 = 2 * a3;
    if ( ((v5 - 1) & v5) != 0 )
    {
      _BitScanReverse(&v6, v5);
      v5 = 1 << (v6 + 1);
    }
    if ( v5 <= 0x1000 )
      v5 = 4096;
    if ( v5 >= a2 )
      v5 = a2;
  }
  v7 = a2 / v5;
  v8 = (a2
      - ((2 * (v7 + 4 * (unsigned int)(((unsigned __int64)(2 * ((8 * (a2 - 2 * v7) - 384) / (8 * a3 + 1))) + 63) >> 6))
        + 63) & 0xFFFFFFF0))
     / a3;
  memset(a1, 0, 0x30uLL);
  LOWORD(v21) = v3;
  v9 = 2 * v8;
  v10 = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  *((_WORD *)a1 + 16) = v8;
  *((_WORD *)a1 + 17) = v8;
  a1[38] = 2;
  a1[45] = v7;
  HIWORD(v21) = (2 * (v7 + 4 * ((unsigned __int64)(v9 + 63) >> 6)) + 63) & 0xFFF0;
  *((_DWORD *)a1 + 10) = v21 ^ RtlpLFHKey ^ ((unsigned int)a1 >> 12);
  _BitScanForward(&v11, v5);
  v12 = (unsigned __int16)(8 * (((unsigned __int64)(v9 + 63) >> 6) + 6));
  a1[44] = v11;
  *((_WORD *)a1 + 23) = v12;
  v13 = &a1[v12];
  *(_WORD *)v13 = 0;
  v14 = &v13[2 * (unsigned __int8)v7];
  v15 = v13 + 2;
  v16 = (unsigned __int64)(v14 - v15 + 1) >> 1;
  if ( v15 > v14 )
    v16 = 0LL;
  if ( v16 )
  {
    do
    {
      ++v10;
      *(_WORD *)v15 = -1;
      v15 += 2;
    }
    while ( v10 < v16 );
  }
  memset(a1 + 48, 0, (unsigned __int64)(v9 + 7) >> 3);
  if ( (v9 & 0x3F) != 0 )
    *(_QWORD *)&a1[8 * ((unsigned __int64)(2 * v8) >> 6) + 48] |= ~((1LL << ((2 * v8) & 0x3F)) - 1);
  LowFragHeapDataSlot = NtCurrentTeb()->LowFragHeapDataSlot;
  v18 = (unsigned __int64)(unsigned int)RtlpHeapGenerateRandomValue32() << 32;
  v19 = v18 | (unsigned int)RtlpHeapGenerateRandomValue32();
  result = (unsigned __int64)LowFragHeapDataSlot >> 3;
  *(_QWORD *)&RtlpLowFragHeapRandomData[8 * result] = v19 & 0x7F7F7F7F7F7F7F7FLL;
  return result;
}
