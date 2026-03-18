/*
 * XREFs of KiRemoveThreadFromReadyQueue @ 0x1400969D0
 * Callers:
 *     KiQuantumEnd @ 0x14007AAB0 (KiQuantumEnd.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x14009698C (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiFindReadyThread @ 0x140096A08 (KiFindReadyThread.c)
 * Callees:
 *     <none>
 */

int __fastcall KiRemoveThreadFromReadyQueue(__int64 a1, _QWORD *a2, char a3)
{
  _QWORD *v3; // r9
  _QWORD *v4; // rax

  v3 = (_QWORD *)*a2;
  v4 = (_QWORD *)a2[1];
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v4 != a2 )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = v4;
  if ( v4 == v3 )
  {
    LODWORD(v4) = *(_DWORD *)(a1 + 22680) ^ (1 << a3);
    *(_DWORD *)(a1 + 22680) = (_DWORD)v4;
  }
  return (int)v4;
}
