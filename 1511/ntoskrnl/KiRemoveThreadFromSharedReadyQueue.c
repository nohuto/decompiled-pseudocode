/*
 * XREFs of KiRemoveThreadFromSharedReadyQueue @ 0x140096AF4
 * Callers:
 *     KiQuantumEnd @ 0x14007AAB0 (KiQuantumEnd.c)
 *     KiSetThreadSchedulingGroup @ 0x140094830 (KiSetThreadSchedulingGroup.c)
 *     KeUpdateProcessSharedReadyQueueAffinity @ 0x1400952DC (KeUpdateProcessSharedReadyQueueAffinity.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x14009698C (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiFindReadyThread @ 0x140096A08 (KiFindReadyThread.c)
 * Callees:
 *     <none>
 */

int __fastcall KiRemoveThreadFromSharedReadyQueue(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r9
  _QWORD *v4; // rdx
  _QWORD *v5; // rax

  v3 = a2 + 216;
  v4 = *(_QWORD **)(a2 + 216);
  v5 = *(_QWORD **)(v3 + 8);
  if ( v4[1] != v3 || *v5 != v3 )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = v5;
  if ( v5 == v4 )
  {
    LODWORD(v5) = *(_DWORD *)(a1 + 8) ^ (1 << a3);
    *(_DWORD *)(a1 + 8) = (_DWORD)v5;
  }
  return (int)v5;
}
