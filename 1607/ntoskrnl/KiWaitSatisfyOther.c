/*
 * XREFs of KiWaitSatisfyOther @ 0x140098114
 * Callers:
 *     MiWaitForInPageComplete @ 0x1400251B0 (MiWaitForInPageComplete.c)
 *     KeWaitForMultipleObjects @ 0x14005A2E0 (KeWaitForMultipleObjects.c)
 *     KiWaitForAllObjects @ 0x140097D9C (KiWaitForAllObjects.c)
 *     KeRegisterObjectNotification @ 0x1400EDDA0 (KeRegisterObjectNotification.c)
 * Callees:
 *     <none>
 */

char __fastcall KiWaitSatisfyOther(__int64 a1)
{
  char v1; // r8

  v1 = 1;
  if ( (*(_BYTE *)a1 & 7) == 1 )
  {
    *(_DWORD *)(a1 + 4) = 0;
  }
  else if ( (*(_BYTE *)a1 & 0x7F) == 5 )
  {
    --*(_DWORD *)(a1 + 4);
  }
  else
  {
    return 0;
  }
  return v1;
}
