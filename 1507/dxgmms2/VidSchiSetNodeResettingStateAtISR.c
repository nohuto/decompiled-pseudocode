/*
 * XREFs of VidSchiSetNodeResettingStateAtISR @ 0x1C0008DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall VidSchiSetNodeResettingStateAtISR(__int64 *a1)
{
  char result; // al
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rdx

  result = 1;
  *(_BYTE *)(*a1 + 16) |= 1u;
  v2 = *a1;
  a1[1] = *(_QWORD *)(*a1 + 64);
  v3 = *(_QWORD *)(v2 + 120);
  v4 = *a1;
  a1[2] = v3;
  *((_DWORD *)a1 + 9) = *(_DWORD *)(v4 + 1328);
  *((_DWORD *)a1 + 8) = *(_DWORD *)(*a1 + 1332);
  return result;
}
