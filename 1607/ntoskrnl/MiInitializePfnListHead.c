/*
 * XREFs of MiInitializePfnListHead @ 0x14013B7C4
 * Callers:
 *     MiInitializePartition @ 0x14054F230 (MiInitializePartition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializePfnListHead(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  result = 0xFFFFFFFFFLL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 16) = 0xFFFFFFFFFLL;
  *(_QWORD *)(a1 + 24) = 0xFFFFFFFFFLL;
  *(_DWORD *)(a1 + 8) = a2;
  return result;
}
