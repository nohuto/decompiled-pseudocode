/*
 * XREFs of PopMarkHiberPhase @ 0x1403F1E98
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x1403F1A14 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     MmSizeOfMdl @ 0x1400628C0 (MmSizeOfMdl.c)
 *     PoSetHiberRange @ 0x14014D3AC (PoSetHiberRange.c)
 */

void __fastcall PopMarkHiberPhase(char *Address)
{
  void *v2; // r8
  unsigned int *v3; // rbx
  SIZE_T v4; // rax
  _QWORD **v5; // rdi
  _QWORD *v6; // rbx
  void *v7; // r8

  PoSetHiberRange(0LL, 0x10000u, Address, 0x1D0uLL, 0);
  PoSetHiberRange(0LL, 0x10000u, qword_14032E8F0, Length, 0);
  v2 = (void *)*((_QWORD *)Address + 37);
  if ( v2 )
    PoSetHiberRange(0LL, 0x10000u, v2, *((_QWORD *)Address + 38), 0);
  PoSetHiberRange(0LL, 0x10000u, *((PVOID *)Address + 18), (unsigned int)(*((_DWORD *)Address + 38) << 12), 0);
  v3 = (unsigned int *)*((_QWORD *)Address + 15);
  v4 = MmSizeOfMdl(0LL, v3[10]);
  PoSetHiberRange(0LL, 0x10000u, v3, v4, 0);
  PoSetHiberRange(0LL, 0x10000u, *((PVOID *)Address + 31), (unsigned int)(*((_DWORD *)Address + 64) << 12), 0);
  PoSetHiberRange(0LL, 0x10000u, qword_14032E8B8, (unsigned int)dword_14032E8C0, 0);
  v5 = (_QWORD **)(Address + 64);
  v6 = *v5;
  while ( v6 != v5 )
  {
    v7 = v6;
    v6 = (_QWORD *)*v6;
    PoSetHiberRange(0LL, 0x10000u, v7, 0x30uLL, 0);
  }
}
