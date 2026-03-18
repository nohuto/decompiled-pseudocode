/*
 * XREFs of NtGdiMakeObjectUnXferable @ 0x1C0290EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiMakeObjectUnXferable(__int64 a1, __int64 a2)
{
  char v4; // bl
  __int64 v5; // rdx
  unsigned int v6; // ebx

  if ( (a1 & 0x800000) != 0 )
    return 1LL;
  v4 = BYTE2(a1) & 0x1F;
  GreAcquireHmgrSemaphore(a1, a2);
  if ( v4 == 1 )
  {
    LOBYTE(v5) = 1;
    v6 = HmgMarkUnXferable(a1, v5);
  }
  else
  {
    v6 = 0;
  }
  GreReleaseHmgrSemaphore();
  return v6;
}
