/*
 * XREFs of UnlockDesktopMenu @ 0x1C0134ED4
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C009190C (xxxUpdatePerUserSystemParameters.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C012BF54 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UnlockDesktopMenu(__int64 a1)
{
  __int64 v1; // rdx

  *(_DWORD *)(*(_QWORD *)a1 + 40LL) &= ~0x40u;
  if ( *(_DWORD *)(*(_QWORD *)a1 + 52LL) )
  {
    v1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 16LL);
    if ( v1 )
      *(_DWORD *)(v1 + 40) &= ~0x40u;
  }
  return HMAssignmentUnlock(a1);
}
