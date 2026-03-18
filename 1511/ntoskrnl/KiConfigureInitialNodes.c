/*
 * XREFs of KiConfigureInitialNodes @ 0x140136838
 * Callers:
 *     KiInitializeKernel @ 0x1403A9234 (KiInitializeKernel.c)
 * Callees:
 *     KiAddProcessorToGroupDatabase @ 0x1401368D4 (KiAddProcessorToGroupDatabase.c)
 *     KiCommitNodeAssignment @ 0x140136A8C (KiCommitNodeAssignment.c)
 */

_BYTE *__fastcall KiConfigureInitialNodes(__int64 a1)
{
  unsigned int v2; // edx
  _QWORD *v3; // r8
  _BYTE *v4; // rcx
  _BYTE *result; // rax

  byte_1403962AD |= 2u;
  byte_1403962AC = KiMaximumGroupSize;
  byte_140396296 = 1;
  KeNodeBlock[0] = (__int64)&ExNode0;
  KiCommitNodeAssignment(&ExNode0);
  *(_QWORD *)(a1 + 1600) = &ExNode0;
  qword_140396250 |= 1uLL;
  *(_BYTE *)(a1 + 35) = 1;
  KiAddProcessorToGroupDatabase(a1, 0LL);
  v2 = 1;
  v3 = &unk_140395448;
  v4 = &unk_1406FD496;
  do
  {
    *((_WORD *)v4 - 2) = v2;
    result = v4 - 150;
    ++v2;
    *v3 = v4 - 150;
    *v4 = 1;
    v4 += 256;
    ++v3;
  }
  while ( v2 < 0x40 );
  return result;
}
