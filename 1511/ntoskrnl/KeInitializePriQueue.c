/*
 * XREFs of KeInitializePriQueue @ 0x14013F23C
 * Callers:
 *     ExAllocatePrivateWorkerPool @ 0x14054E918 (ExAllocatePrivateWorkerPool.c)
 *     ExpAllocatePoolForNode @ 0x14067323C (ExpAllocatePoolForNode.c)
 *     ExpWorkerInitialization @ 0x14076B754 (ExpWorkerInitialization.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x14009DBD0 (KeQueryActiveProcessorCountEx.c)
 */

int __fastcall KeInitializePriQueue(__int64 a1, int a2)
{
  __int64 v3; // r8
  _DWORD *v4; // rcx
  _QWORD *v5; // rax

  *(_WORD *)a1 = 21;
  *(_BYTE *)(a1 + 2) = -84;
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  *(_QWORD *)(a1 + 680) = a1 + 672;
  v3 = 32LL;
  *(_QWORD *)(a1 + 672) = a1 + 672;
  v4 = (_DWORD *)(a1 + 536);
  v5 = (_QWORD *)(a1 + 24);
  do
  {
    v5[1] = v5;
    *v5 = v5;
    v5 += 2;
    *v4++ = 0;
    --v3;
  }
  while ( v3 );
  if ( a2 )
  {
    *(_DWORD *)(a1 + 664) = a2;
  }
  else
  {
    LODWORD(v5) = KeQueryActiveProcessorCountEx(0xFFFFu);
    *(_DWORD *)(a1 + 664) = (_DWORD)v5;
  }
  return (int)v5;
}
