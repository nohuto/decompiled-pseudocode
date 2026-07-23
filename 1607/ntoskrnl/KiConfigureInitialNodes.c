/*
 * XREFs of KiConfigureInitialNodes @ 0x140139898
 * Callers:
 *     KiInitializeKernel @ 0x1403D3DE0 (KiInitializeKernel.c)
 * Callees:
 *     KiAddProcessorToGroupDatabase @ 0x140139934 (KiAddProcessorToGroupDatabase.c)
 *     KiCommitNodeAssignment @ 0x140139BC0 (KiCommitNodeAssignment.c)
 */

_BYTE *__fastcall KiConfigureInitialNodes(__int64 a1)
{
  unsigned int v2; // edx
  _QWORD *v3; // r8
  _BYTE *v4; // rcx
  _BYTE *result; // rax

  byte_1403C01ED |= 2u;
  byte_1403C01EC = KiMaximumGroupSize;
  byte_1403C01D6 = 1;
  KeNodeBlock[0] = (__int64)&ExNode0;
  KiCommitNodeAssignment(&ExNode0);
  *(_QWORD *)(a1 + 1600) = &ExNode0;
  qword_1403C0190 |= 1uLL;
  *(_BYTE *)(a1 + 35) = 1;
  KiAddProcessorToGroupDatabase(a1, 0LL);
  v2 = 1;
  v3 = &unk_1403BE448;
  v4 = &unk_1407528D6;
  do
  {
    *((_WORD *)v4 - 2) = v2;
    result = v4 - 150;
    ++v2;
    *v3 = v4 - 150;
    *v4 = 1;
    v4 += 320;
    ++v3;
  }
  while ( v2 < 0x40 );
  return result;
}
