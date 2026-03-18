/*
 * XREFs of UnlockDesktopMenu @ 0x1C0113BF8
 * Callers:
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00D1434 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C012420C (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UnlockDesktopMenu(__int64 a1)
{
  __int64 v1; // rax

  *(_DWORD *)(*(_QWORD *)a1 + 40LL) &= ~0x40u;
  v1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 16LL);
  *(_DWORD *)(v1 + 40) &= ~0x40u;
  return HMAssignmentUnlock(a1);
}
