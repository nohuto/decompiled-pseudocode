/*
 * XREFs of KiWaitSatisfyOther @ 0x140097914
 * Callers:
 *     MiWaitForInPageComplete @ 0x140024D30 (MiWaitForInPageComplete.c)
 *     KeWaitForMultipleObjects @ 0x140059E60 (KeWaitForMultipleObjects.c)
 *     KiWaitForAllObjects @ 0x14009759C (KiWaitForAllObjects.c)
 *     KeRegisterObjectNotification @ 0x1400EBC20 (KeRegisterObjectNotification.c)
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
