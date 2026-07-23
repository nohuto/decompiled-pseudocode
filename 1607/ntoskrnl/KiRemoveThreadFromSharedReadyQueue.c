/*
 * XREFs of KiRemoveThreadFromSharedReadyQueue @ 0x1400CCEEC
 * Callers:
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1400A8EC8 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiSetThreadSchedulingGroup @ 0x1400C6A60 (KiSetThreadSchedulingGroup.c)
 *     KiFindReadyThread @ 0x1400CCDFC (KiFindReadyThread.c)
 *     KiQuantumEnd @ 0x1400CF620 (KiQuantumEnd.c)
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
