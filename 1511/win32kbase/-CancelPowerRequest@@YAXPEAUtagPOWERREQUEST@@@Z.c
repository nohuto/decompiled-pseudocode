/*
 * XREFs of ?CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1C00A9430
 * Callers:
 *     CleanupPowerRequestList @ 0x1C007EC10 (CleanupPowerRequestList.c)
 * Callees:
 *     <none>
 */

void __fastcall CancelPowerRequest(struct tagPOWERREQUEST *a1)
{
  bool v1; // zf

  v1 = *((_QWORD *)a1 + 8) == 0LL;
  *((_DWORD *)a1 + 14) = -1073741823;
  if ( v1 )
    KeSetEvent((PRKEVENT)((char *)a1 + 16), 1, 0);
  else
    Win32FreePool();
}
