/*
 * XREFs of PopMarkHiberPhase @ 0x1403CAC58
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x1403CAFB4 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     MmSizeOfMdl @ 0x1400883D0 (MmSizeOfMdl.c)
 *     PoSetHiberRange @ 0x1401133D0 (PoSetHiberRange.c)
 */

void __fastcall PopMarkHiberPhase(unsigned int *Address)
{
  void *v2; // r8
  unsigned int *v3; // rbx
  ULONG_PTR v4; // rax
  _QWORD **v5; // rdi
  _QWORD *v6; // rbx
  void *v7; // r8

  PoSetHiberRange(0LL, 0x10000u, Address, 0x1D0uLL, 0);
  PoSetHiberRange(0LL, 0x10000u, qword_140303510, Length, 0);
  v2 = (void *)*((_QWORD *)Address + 37);
  if ( v2 )
    PoSetHiberRange(0LL, 0x10000u, v2, *((_QWORD *)Address + 38), 0);
  PoSetHiberRange(0LL, 0x10000u, *((PVOID *)Address + 18), (unsigned __int64)Address[38] << 12, 0);
  v3 = (unsigned int *)*((_QWORD *)Address + 15);
  v4 = MmSizeOfMdl(0LL, v3[10]);
  PoSetHiberRange(0LL, 0x10000u, v3, v4, 0);
  PoSetHiberRange(0LL, 0x10000u, *((PVOID *)Address + 31), (unsigned __int64)Address[64] << 12, 0);
  PoSetHiberRange(0LL, 0x10000u, qword_1403034D8, (unsigned int)dword_1403034E0, 0);
  v5 = (_QWORD **)(Address + 16);
  v6 = *v5;
  while ( v6 != v5 )
  {
    v7 = v6;
    v6 = (_QWORD *)*v6;
    PoSetHiberRange(0LL, 0x10000u, v7, 0x30uLL, 0);
  }
}
