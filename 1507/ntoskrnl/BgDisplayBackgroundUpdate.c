/*
 * XREFs of BgDisplayBackgroundUpdate @ 0x14075FAAC
 * Callers:
 *     BgkDestroy @ 0x14075F69C (BgkDestroy.c)
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140150250 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140150298 (BgpFwAcquireLock.c)
 *     AnFwDisplayBackgroundUpdate @ 0x14075FAE0 (AnFwDisplayBackgroundUpdate.c)
 */

__int64 __fastcall BgDisplayBackgroundUpdate(char a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx

  BgpFwAcquireLock();
  if ( (dword_140323CF0 & 1) != 0 )
  {
    LOBYTE(v2) = a1;
    v3 = AnFwDisplayBackgroundUpdate(v2);
  }
  else
  {
    v3 = -1073741823;
  }
  BgpFwReleaseLock();
  return v3;
}
